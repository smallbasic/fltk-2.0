// generated by Fast Light User Interface Designer (fluid) version 2.0000

#include <fltk/FileChooser.h>
#include <fltk/string.h>
#include <fltk/xbmImage.h>
using namespace fltk;

inline void FileChooser::cb_window_i(Window*, void*) {
  fileList->deselect();
  fileName->value("");
  window->hide();
}
void FileChooser::cb_window(Window* o, void* v) {
  ((FileChooser*)(o->user_data()))->cb_window_i(o,v);
}

inline void FileChooser::cb_dirMenu_i(Choice*, void*) {
  Widget* w = dirMenu->item();
  // dirMenu reserved zero for "My Computer"
  directory((dirMenu->value() > 0 && w) ? w->label() : "");
}
void FileChooser::cb_dirMenu(Choice* o, void* v) {
  ((FileChooser*)(o->parent()->user_data()))->cb_dirMenu_i(o,v);
}

inline void FileChooser::cb_upButton_i(Button*, void*) {
  up();
}
void FileChooser::cb_upButton(Button* o, void* v) {
  ((FileChooser*)(o->parent()->user_data()))->cb_upButton_i(o,v);
}

static unsigned char bits_up[] =
"\0\0x\0\204\0\2\1""1\376y\200\375\200""1\200""1\200""1\200""1\200""1\200\1\
\200\1\200\377\377\0\0";
static xbmImage bitmap_up(bits_up, 16, 16);

inline void FileChooser::cb_newButton_i(Button*, void*) {
  newdir();
}
void FileChooser::cb_newButton(Button* o, void* v) {
  ((FileChooser*)(o->parent()->user_data()))->cb_newButton_i(o,v);
}

static unsigned char bits_new[] =
"\0\0x\0\204\0\2\1\1\376\1\200""1\200""1\200\375\200\375\200""1\200""1\200\1\
\200\1\200\377\377\0\0";
static xbmImage bitmap_new(bits_new, 16, 16);

inline void FileChooser::cb__i(Button*, void*) {
  fileList->filter("*");;
  rescan();
}
void FileChooser::cb_(Button* o, void* v) {
  ((FileChooser*)(o->parent()->user_data()))->cb__i(o,v);
}

static unsigned char bits_allfiles[] =
"\374?\4 \4 \4 \204!\244%\304#\364/\364/\304#\244%\204!\4 \4 \4 \374?";
static xbmImage bitmap_allfiles(bits_allfiles, 16, 16);

inline void FileChooser::cb_fileList_i(FileBrowser*, void*) {
  fileListCB();
}
void FileChooser::cb_fileList(FileBrowser* o, void* v) {
  ((FileChooser*)(o->parent()->user_data()))->cb_fileList_i(o,v);
}

inline void FileChooser::cb_fileName_i(FileInput*, void*) {
  fileNameCB();
}
void FileChooser::cb_fileName(FileInput* o, void* v) {
  ((FileChooser*)(o->parent()->user_data()))->cb_fileName_i(o,v);
}

inline void FileChooser::cb_okButton_i(ReturnButton*, void*) {
  char pathname[1024];

  snprintf(pathname, sizeof(pathname), "%s/%s",
	   fileList->directory(), fileName->value());
  if (filename_isdir(pathname))
    directory(pathname);
  else
    window->hide();
}

void FileChooser::cb_okButton(ReturnButton* o, void* v) {
  ((FileChooser*)(o->parent()->user_data()))->cb_okButton_i(o,v);
}

inline void FileChooser::cb_Cancel_i(Button*, void*) {
  fileList->deselect();
  fileName->value("");
  window->hide();
}
void FileChooser::cb_Cancel(Button* o, void* v) {
  ((FileChooser*)(o->parent()->user_data()))->cb_Cancel_i(o,v);
}

FileChooser::FileChooser(const char *d, const char *p, int t, const char *title) {
  { Window* o = window = new Window(375, 315, "Pick a File");
  o->begin();
    o->callback((Callback*)cb_window, (void*)(this));
    ((Window*)(o))->hotspot(o);
    { Choice* o = dirMenu = new Choice(65, 10, 210, 25, "Directory:"); o->begin();
      o->callback((Callback*)cb_dirMenu);
      o->tooltip("Click to access directory tree.");
      o->set_flag(ALIGN_LEFT | ALIGN_RIGHT);
        o->align(ALIGN_LEFT | ALIGN_RIGHT);
      o->end();
    }
    { Button* o = upButton = new Button(280, 10, 25, 25);
      o->image(bitmap_up);
      o->labelsize(8);
      o->callback((Callback*)cb_upButton);
      o->tooltip("Click to display parent directory.");
    }
    { Button* o = newButton = new Button(310, 10, 25, 25);
      o->image(bitmap_new);
      o->labelsize(8);
      o->callback((Callback*)cb_newButton);
      o->tooltip("Click to create a new directory.");
    }
    { Button* o = new Button(340, 10, 25, 25);
      o->image(bitmap_allfiles);
      o->labelcolor((Color)4);
      o->labelsize(28);
      o->callback((Callback*)cb_);
      o->align(ALIGN_CENTER|ALIGN_INSIDE);
      o->tooltip("Click to show all files.");
    }
    { FileBrowser* o = fileList = new FileBrowser(10, 45, 355, 180);
      o->callback((Callback*)cb_fileList);
      o->when(o->when() | fltk::WHEN_ENTER_KEY);
      Group::current()->resizable(o);
      o->tooltip("Double-click to change directories.");
    }
    { FileInput* o = fileName = new FileInput(10, 245, 355, 25, "Filename:");
      o->callback((Callback*)cb_fileName);
      o->align(ALIGN_TOP | ALIGN_LEFT);
      o->when(WHEN_ENTER_KEY);
      o->tooltip("Type a filename or directory name here.");
      fileName->when(WHEN_CHANGED | WHEN_ENTER_KEY_ALWAYS);
    }
    { ReturnButton* o = okButton = new ReturnButton(240, 280, 55, 25, "OK");
      o->shortcut(0xff0d);
      o->callback((Callback*)cb_okButton);
    }
    { Button* o = new Button(300, 280, 65, 25, "Cancel");
      o->callback((Callback*)cb_Cancel);
    }
    if (title) window->label(title);
    o->end();
  }
  window->size_range(345, 270, 345);
  fileList->filter(p);
  type(t);
  value(d);
}

void FileChooser::color(Color c) {
  fileList->color(c);
}

Color FileChooser::color() {
  return (fileList->color());
}

char * FileChooser::directory() {
  return directory_;
}

void FileChooser::filter(const char *p) {
  fileList->filter(p);
  rescan();
}

const char * FileChooser::filter() {
  return (fileList->filter());
}

void FileChooser::hide() {
  window->hide();
}

void FileChooser::icon_size(uchar s) {
  fileList->icon_size(s);
}

uchar FileChooser::icon_size() {
  return (fileList->icon_size());
}

void FileChooser::label(const char *l) {
  window->label(l);
}

const char * FileChooser::label() {
  return (window->label());
}

void FileChooser::exec() {
  window->exec();
  fileList->deselect();
}

void FileChooser::textcolor(Color c) {
  fileList->textcolor(c);
}

Color FileChooser::textcolor() {
  return (fileList->textcolor());
}

void FileChooser::textfont(Font* f) {
  fileList->textfont(f);
}

Font* FileChooser::textfont() {
  return (fileList->textfont());
}

void FileChooser::textsize(uchar s) {
  fileList->textsize(s);
}

void FileChooser::type(int t) {
  type_ = t;
  if (t == MULTI)
    fileList->type(Browser::MULTI);
  else
    fileList->type(Browser::NORMAL);
  if (t != CREATE)
    newButton->deactivate();
  else
    newButton->activate();
}

int FileChooser::type() {
  return (type_);
}

int FileChooser::visible() {
  return window->visible();
}
