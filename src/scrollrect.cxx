//
// "$Id$"
//
// Scrolling routines for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-2003 by Bill Spitzak and others.
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

// Drawing function to move the contents of a rectangle.  This is passed
// a "callback" which is called to draw rectangular areas that are moved
// into the drawing area.

#include <config.h>
#include <fltk/Window.h>
#include <fltk/x.h>
#include <fltk/draw.h>


#ifdef _WIN32

#ifndef SYSRGN
// Missing declaration in old WIN32 API headers.
// However, GDI32.dll exports this function since Windows 95
extern "C" {
  WINGDIAPI int WINAPI GetRandomRgn(HDC  hdc,    // handle to DC
				    HRGN hrgn,   // handle to region
				    INT  iNum    // must be SYSRGN
				    );
}
#define SYSRGN 4

#endif /* SYSRGN */

extern int has_unicode();

// Return true if rect is completely visible on screen.
// If other window is overlapping rect, return false.
static bool is_visible(int x, int y, int w, int h) 
{
  // Get visible region of window
  HRGN rgn0 = CreateRectRgn (0, 0, 0, 0);

  // Copy system clipping region from fltk::dc
  GetRandomRgn (fltk::dc, rgn0, SYSRGN);

  if (has_unicode()) {
    // Windows 9x operating systems the region is returned in window coordinates, 
    // and on Windows XP/2k machines the region is in screen coordinates.. SIGH!
    POINT pt = { 0, 0 };
    ClientToScreen(fltk::xid(fltk::Window::current()), &pt);
    OffsetRgn(rgn0, -pt.x, -pt.y);
  }

  HRGN rect = CreateRectRgn(x,y,x+w,y+h);
  HRGN temp = CreateRectRgn(0,0,0,0);

  bool ret;
  if(CombineRgn(temp, rect, rgn0, RGN_AND) == NULLREGION) {
    ret = false;
  } else if (EqualRgn(temp, rect)) {
    ret = true;
  } else {
    ret = false;
  }

  // Free resources
  DeleteObject(rect);
  DeleteObject(temp);
  DeleteObject(rgn0);

  return ret;
}

#endif /* _WIN32 */


// scroll a rectangle and redraw the newly exposed portions:
void fltk::scrollrect(const Rectangle& r, int dx, int dy,
		       void (*draw_area)(void*, const Rectangle&), void* data)
{
  if (!dx && !dy) return;
  if (dx <= -r.w() || dx >= r.w() || dy <= -r.h() || dy >= r.h()) {
    // no intersection of old an new scroll
    draw_area(data, r);
    return;
  }
  int src_x, src_w, dest_x, clip_x, clip_w;
  if (dx > 0) {
    src_x = r.x();
    dest_x = r.x()+dx;
    src_w = r.w()-dx;
    clip_x = r.x();
    clip_w = dx;
  } else {
    src_x = r.x()-dx;
    dest_x = r.x();
    src_w = r.w()+dx;
    clip_x = r.x()+src_w;
    clip_w = r.w()-src_w;
  }
  int src_y, src_h, dest_y, clip_y, clip_h;
  if (dy > 0) {
    src_y = r.y();
    dest_y = r.y()+dy;
    src_h = r.h()-dy;
    clip_y = r.y();
    clip_h = dy;
  } else {
    src_y = r.y()-dy;
    dest_y = r.y();
    src_h = r.h()+dy;
    clip_y = r.y()+src_h;
    clip_h = r.h()-src_h;
  }
  int ox = 0; int oy = 0; transform(ox, oy);
#if USE_X11
  XCopyArea(xdisplay, xwindow, xwindow, gc,
	    src_x+ox, src_y+oy, src_w, src_h,
	    dest_x+ox, dest_y+oy);
// Synchronous update by waiting for graphics expose events:
  for (;;) {
    XEvent e; XWindowEvent(xdisplay, xwindow, ExposureMask, &e);
    if (e.type == NoExpose) break;
    // otherwise assumme it is a GraphicsExpose event:
    draw_area(data,
	      Rectangle(e.xexpose.x-ox, e.xexpose.y-oy,
			e.xexpose.width, e.xexpose.height));
    if (!e.xgraphicsexpose.count) break;
  }
#elif defined(_WIN32)
  if (is_visible(src_x+ox, src_y+oy, src_w, src_h)) {
    BitBlt(dc, dest_x+ox, dest_y+oy, src_w, src_h,
	   dc, src_x+ox, src_y+oy, SRCCOPY);
  } else {
    // Window overlapping scroll area.
    // Best we can do right now, is just redraw whole scroll area.
    draw_area(data, r);
    return;
  }
#elif USE_QUARTZ
  //+++ Quartz can not scroll an area! You must redraw from scratch or 
  //+++ store the content inside an image!
  Rect src = { src_y, src_x, src_y+src_h, src_x+src_w };
  Rect dst = { dest_y, dest_x, dest_y+src_h, dest_x+src_w };
  static RGBColor bg = { 0xffff, 0xffff, 0xffff }; RGBBackColor( &bg );
  static RGBColor fg = { 0x0000, 0x0000, 0x0000 }; RGBForeColor( &fg );
  GrafPtr port; GetPort( &port );
  CopyBits( GetPortBitMapForCopyBits(port),
	    GetPortBitMapForCopyBits(port),
	    &src, &dst, srcCopy, 0L);
  // NYI: need to redraw areas that the source of BitBlt was bad due to
  // overlapped windows, somehow similar to what X does.
#else
#endif
  if (dx) draw_area(data, Rectangle(clip_x, dest_y, clip_w, src_h));
  if (dy) draw_area(data, Rectangle(r.x(), clip_y, r.w(), clip_h));
}

//
// End of "$Id$".
//