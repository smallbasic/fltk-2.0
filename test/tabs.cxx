// generated by Fast Light User Interface Designer (fluid) version 2.0002

#include "tabs.h"

fltk::Window* foo_window;

static void cb_cancel(fltk::Button*, void*) {
  exit(1);
}

static void cb_OK(fltk::ReturnButton*, void*) {
  exit(0);
}

#include <fltk/run.h>

int main (int argc, char **argv) {

  fltk::Window* w;
   {fltk::Window* o = foo_window = new fltk::Window(320, 305);
    w = o;
    o->begin();
     {fltk::TabGroup* o = new fltk::TabGroup(10, 10, 300, 200);
      o->begin();
       {fltk::Group* o = new fltk::Group(0, 20, 300, 180, "Label1");
        o->begin();
        new fltk::Input(50, 14, 240, 22, "input:");
        new fltk::Input(50, 36, 240, 22, "input2:");
         {fltk::WordwrapInput* o = new fltk::WordwrapInput(50, 58, 240, 99, "input3:");
          o->type(5);
        }
        o->end();
        fltk::Group::current()->resizable(o);
      }
       {fltk::Group* o = new fltk::Group(0, 20, 300, 180, "tab2");
        o->hide();
        o->begin();
        new fltk::Button(10, 25, 100, 22, "button1");
        new fltk::Input(130, 58, 100, 22, "input in box2");
        new fltk::Button(20, 113, 260, 22, "This is stuff inside the Fl_Group \"tab2\"");
        o->end();
      }
       {fltk::Group* o = new fltk::Group(0, 20, 300, 180, "tab3");
        o->hide();
        o->begin();
        new fltk::Button(10, 30, 60, 80, "button2");
        new fltk::Button(70, 30, 60, 80, "button");
        new fltk::Button(130, 30, 60, 80, "button");
        o->end();
      }
       {fltk::Group* o = new fltk::Group(0, 20, 300, 180, "tab4");
        o->labelfont(fltk::HELVETICA_ITALIC);
        o->hide();
        o->begin();
        new fltk::Button(10, 20, 60, 110, "button2");
        new fltk::Button(70, 20, 60, 110, "button");
        new fltk::Button(130, 20, 60, 110, "button");
        o->end();
      }
       {fltk::Group* o = new fltk::Group(0, 20, 300, 180, "     tab5      ");
        o->labeltype(fltk::ENGRAVED_LABEL);
        o->hide();
        o->begin();
        new fltk::Button(10, 50, 60, 80, "button2");
        new fltk::Button(80, 60, 60, 80, "button");
         {fltk::Clock* o = new fltk::Clock(155, 13, 100, 100, "Make sure this clock does not use processor time when this tab is hidden or w\
indow is iconized");
          o->box(fltk::OSHADOW_BOX);
          o->labelfont(fltk::TIMES);
          o->color((fltk::Color)238);
          o->labelsize(10);
          o->align(fltk::ALIGN_BOTTOM|fltk::ALIGN_WRAP);
        }
        o->end();
      }
      o->end();
      fltk::Group::current()->resizable(o);
    }
    new fltk::Input(60, 220, 130, 22, "inputA:");
    new fltk::Input(60, 242, 250, 22, "inputB:");
     {fltk::Button* o = new fltk::Button(180, 275, 60, 22, "cancel");
      o->callback((fltk::Callback*)cb_cancel);
    }
     {fltk::ReturnButton* o = new fltk::ReturnButton(250, 275, 60, 22, "OK");
      o->shortcut(0xff0d);
      o->callback((fltk::Callback*)cb_OK);
    }
    o->end();
  }
  w->show(argc, argv);
  return  fltk::run();
}
