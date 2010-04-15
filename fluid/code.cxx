//
// "$Id$"
//
// Code output routines for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-2006 by Bill Spitzak and others.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA.
//
// Please report all bugs and problems to "fltk-bugs@fltk.org".
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

#include <fltk/run.h>
#include "FluidType.h"
#include "alignment_panel.h"
#include "coding_style.h"

static FILE *code_file;
static FILE *header_file;

using namespace fltk;

// return true if c can be in a C identifier.  I needed this so
// it is not messed up by locale settings:
int is_id(char c) {
  return (c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9') || c=='_';
}

////////////////////////////////////////////////////////////////
// Generate unique but human-readable identifiers:

struct id {
  char* text;
  void* object;
  id *left, *right;
  id (const char* t, void* o) : text(strdup(t)), object(o) {left = right = 0;}
  ~id();
};

id::~id() {
  delete left;
  free((void *)text);
  delete right;
}

static id* id_root;

const char* unique_id(void* o, const char* type, const char* name, const char* label) {
  char buffer[128];
  char* q = buffer;
  while (*type) *q++ = *type++;
  *q++ = '_';
  const char* n = name;
  if (!n || !*n) n = label;
  if (n && *n) {
    while (*n && !is_id(*n)) n++;
    while (is_id(*n)) *q++ = *n++;
  }
  *q = 0;
  // okay, search the tree and see if the name was already used:
  id** p = &id_root;
  int which = 0;
  while (*p) {
    int i = strcmp(buffer, (*p)->text);
    if (!i) {
      if ((*p)->object == o) return (*p)->text;
      // already used, we need to pick a new name:
      sprintf(q,"%x",++which);
      p = &id_root;
      continue;
    }
    else if (i < 0) p = &((*p)->left);
    else p  = &((*p)->right);
  }
  *p = new id(buffer, o);
  return (*p)->text;
}

////////////////////////////////////////////////////////////////
// return current indentation:

int indentation;
const char* indent() {
	return get_indent_string(indentation / 2);
}

////////////////////////////////////////////////////////////////
// declarations/include files:
// Each string generated by write_declare is written only once to
// the header file.  This is done by keeping a binary tree of all
// the calls so far and not printing it if it is in the tree.

struct included {
  char *text;
  included *left, *right;
  included(const char *t) {
    text = strdup(t);
    left = right = 0;
  }
  ~included();
};

included::~included() {
  delete left;
  free((void *)text);
  delete right;
}
static included *included_root;

int write_declare(const char *format, ...) {
  va_list args;
  char buf[1024];
  va_start(args, format);
  vsprintf(buf, format, args);
  va_end(args);
  included **p = &included_root;
  while (*p) {
    int i = strcmp(buf,(*p)->text);
    if (!i) return 0;
    else if (i < 0) p = &((*p)->left);
    else p  = &((*p)->right);
  }
  fprintf(header_file,"%s\n",buf);
  *p = new included(buf);
  return 1;
}

////////////////////////////////////////////////////////////////

// silly thing to prevent declaring unused variables:
// When this symbol is on, all attempts to write code don't write
// anything, but set a variable if it looks like the varaible "o" is used:
int varused_test;
int varused;

// write an array of C characters (adds a null):
void write_cstring(const char *w, int length) {
  if (varused_test) return;
  const char *e = w+length;
  int linelength = 1;
  putc('\"', code_file);
  for (; w < e;) {
    int c = *w++;
    switch (c) {
    case '\b': c = 'b'; goto QUOTED;
    case '\t': c = 't'; goto QUOTED;
    case '\n': c = 'n'; goto QUOTED;
    case '\f': c = 'f'; goto QUOTED;
    case '\r': c = 'r'; goto QUOTED;
    case '\"':
    //case '\'':
    case '\\':
    QUOTED:
      if (linelength >= 77) {fputs("\\\n",code_file); linelength = 0;}
      putc('\\', code_file);
      putc(c, code_file);
      linelength += 2;
      break;
    case '?': // prevent trigraphs by writing ?? as ?\?
      if (*(w-2) == '?') goto QUOTED;
      // else fall through:
    default:
      if (c >= ' ' && c < 127) {
	// a legal ASCII character
	if (linelength >= 78) {fputs("\\\n",code_file); linelength = 0;}
	putc(c, code_file);
	linelength++;
	break;
      }
      // otherwise we must print it as an octal constant:
      c &= 255;
      if (c < 8) {
	if (linelength >= 76) {fputs("\\\n",code_file); linelength = 0;}
	fprintf(code_file, "\\%o",c);
	linelength += 2;
      } else if (c < 64) {
	if (linelength >= 75) {fputs("\\\n",code_file); linelength = 0;}
	fprintf(code_file, "\\%o",c);
	linelength += 3;
      } else {
	if (linelength >= 74) {fputs("\\\n",code_file); linelength = 0;}
	fprintf(code_file, "\\%o",c);
	linelength += 4;
      }
      // We must not put more numbers after it, because some C compilers
      // consume them as part of the quoted sequence.  Use string constant
      // pasting to avoid this:
      c = *w;
      if (w < e && ((c>='0'&&c<='9') || (c>='a'&&c<='f') || (c>='A'&&c<='F'))) {
	putc('\"', code_file); linelength++;
	if (linelength >= 79) {fputs("\n",code_file); linelength = 0;}
	putc('\"', code_file); linelength++;
      }
      break;
    }
  }
  putc('\"', code_file);
}

// write an array of C characters in a decimal format
void write_carray(const char *w, int length) {
  if (varused_test) return;
#if 0
  write_cstring(w,length);
#else
  const char *e = w+length;
  int linelength = 1;
  for (; w < e;) {
    if (linelength >= 75) {fputs("\n",code_file); linelength = 0;}
    int c = (uchar)*w++;
    fprintf(code_file, "%d", c);
    if (w < e) fputc(',',code_file);
    linelength+=2;
    if(c>=10) linelength++;
    if(c>=100) linelength++;
  }
#endif
}

// write a C string, quoting characters if necessary:
void write_cstring(const char *w) {write_cstring(w,strlen(w));}
void write_carray(const char *w) {write_carray(w,strlen(w));}

// write some raw data in the code file (used to write inlined XPM)
void write_craw(const char* str) {
  fputs(str, code_file);
}

void write_c(const char* format,...) {
  if (varused_test) {varused = 1; return;}
  va_list args;
  va_start(args, format);
  vfprintf(code_file, format, args);
  va_end(args);
}

void write_h(const char* format,...) {
  if (varused_test) return;
  va_list args;
  va_start(args, format);
  vfprintf(header_file, format, args);
  va_end(args);
}

#include <fltk/filename.h>
#include <fltk/ask.h>
#include <fltk/FL_VERSION.h>

int write_number=0;
int write_sourceview=0;

/////////////////////////////////////////////////////////////////////
// recursively dump code, putting children between the two parts
// of the parent code:
/////////////////////////////////////////////////////////////////////
static FluidType* write_code(FluidType* p) {
  if (write_sourceview) {
    p->code_line = (int)ftell(code_file);
    if (p->header_line_end==-1)
      p->header_line = (int)ftell(header_file);
  }
  // write all code that come before the children code
  // (but don't write the last comment until the very end)
  if (!(p->next_brother==0 && p->is_comment()))
    p->write_code();
  // recursively write the code of all children
  FluidType* q;
  if (p->is_widget() && p->is_class()) {
    // Handle widget classes specially
    for (q = p->first_child; q; q = q->walk(p)) {
      if (strcmp(q->type_name(), "Function")) 
	  q = write_code(q);
    }
    // write all code that come after the children 
    p->write_code();

    for (q = p->first_child; q; q = q->walk(p)) {
      if (!strcmp(q->type_name(), "Function")) 
	  q = write_code(q);
    }

    write_h("};\n");
  } else {
    for (q = p->first_child; q; ) 
	q = write_code(q);
    // write all code that come after the children 
    p->write_code();
  }
  if (write_sourceview) {
    p->code_line_end = (int)ftell(code_file);
    if (p->header_line_end==-1)
      p->header_line_end = (int)ftell(header_file);
  }
  return q;
}
/////////////////////////////////////////////////////////////////////
int write_code(const char *s, const char *t) {
  const char *filemode = write_sourceview ? "wb" : "w";

  write_number++;
  delete id_root; id_root = 0;
  indentation = 0;

  if (!s) code_file = stdout;
  else {
    FILE *f = fopen(s,filemode);	
    if (!f) return 0;
    code_file = f;
  }
  if (!t) header_file = stdout;
  else {
    FILE *f = fopen(t,filemode);
    if (!f) {fclose(code_file); return 0;}
    header_file = f;
  }
  const char *hdr = "\
// generated by Fast Light User Interface Designer (fluid) version %.4f\n\n";
  fprintf(header_file, hdr, FL_VERSION);
  fprintf(code_file, hdr, FL_VERSION);

  {char define_name[102];
  const char* a = filename_name(t);
  char* b = define_name;
  if (!isalpha(*a)) {*b++ = '_';}
  while (*a) {*b++ = isalnum(*a) ? *a : '_'; a++;}
  *b = 0;
  fprintf(header_file, "#ifndef %s\n", define_name);
  fprintf(header_file, "#define %s\n", define_name);
  }  

  if (t) {
    // Ideally this should figure out the relative path between s and t:
    write_c("#include \"%s\"\n", filename_name(t));
  }

  for (FluidType* p = FluidType::first; p; p = p->next_brother) {
    // write all static data for this & all children first
    p->write_static();
    if (write_sourceview) {
      p->header_line_end = (int)ftell(header_file);
      if (p->header_line==p->header_line_end) p->header_line_end = -1;
    }
    for (FluidType* q = p->first_child; q; q = q->walk(p)) {
      if (write_sourceview) q->header_line = (int)ftell(header_file);
      q->write_static();
      if (write_sourceview) {
        q->header_line_end = (int)ftell(header_file);
        if (q->header_line==q->header_line_end) q->header_line_end = -1;
      }
    }
    // then write the nested code:
    p->write_code();
  }

  delete included_root; included_root = 0;

  if (!s) return 1;
  int x = fclose(code_file);
  code_file = 0;
  fprintf(header_file, "#endif\n");
  int y = fclose(header_file);
  header_file = 0;
  return x >= 0 && y >= 0;
}

////////////////////////////////////////////////////////////////

void FluidType::write_static() {}

void FluidType::write_code() {
  write_h("// Header for %s\n", title());
  write_c("// Code for %s\n", title());
}

//
// End of "$Id$".
//
