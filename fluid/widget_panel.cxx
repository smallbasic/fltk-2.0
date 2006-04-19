// generated by Fast Light User Interface Designer (fluid) version 2.0100

#include "widget_panel.h"
#include <fltk/xpmImage.h>
#include "FluidType.h"
#include "fluid_img.h"
#include "factory.h"
fltk::Window *widgetbin_panel=(fltk::Window *)0;

fltk::Window* make_widgetbin() {
  fltk::Window* w;
   {fltk::Window* o = widgetbin_panel = new fltk::Window(520, 85, "Widget Bin");
    w = o;
    o->begin();
     {fltk::Group* o = new fltk::Group(3, 3, 79, 79);
      o->box(fltk::THIN_DOWN_BOX);
      o->begin();
       {fltk::Button* o = new fltk::Button(2, 2, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("Function"));
        o->tooltip("Function");
        o->image(fltk::fluid_pixmap[7]);
      }
       {fltk::Button* o = new fltk::Button(27, 2, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("Class"));
        o->tooltip("Class");
        o->image(fltk::fluid_pixmap[12]);
      }
       {fltk::Button* o = new fltk::Button(52, 2, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("comment"));
        o->tooltip("Comment");
        o->image(fltk::fluid_pixmap[46]);
      }
       {fltk::Button* o = new fltk::Button(2, 27, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("Code"));
        o->tooltip("Code");
        o->image(fltk::fluid_pixmap[8]);
      }
       {fltk::Button* o = new fltk::Button(27, 27, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("CodeBlock"));
        o->tooltip("Code Block");
        o->image(fltk::fluid_pixmap[9]);
      }
       {fltk::Button* o = new fltk::Button(52, 27, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("Namespace"));
        o->tooltip("Namespace");
        o->image(fltk::fluid_pixmap[49]);
      }
       {fltk::Button* o = new fltk::Button(2, 52, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("decl"));
        o->tooltip("Declaration");
        o->image(fltk::fluid_pixmap[10]);
      }
       {fltk::Button* o = new fltk::Button(27, 52, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("declblock"));
        o->tooltip("Declaration Block");
        o->image(fltk::fluid_pixmap[11]);
      }
      o->end();
    }
     {fltk::Group* o = new fltk::Group(83, 3, 79, 79);
      o->box(fltk::THIN_DOWN_BOX);
      o->begin();
       {fltk::Button* o = new fltk::Button(2, 2, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::Window"));
        o->tooltip("Window");
        o->image(fltk::fluid_pixmap[1]);
      }
       {fltk::Button* o = new fltk::Button(27, 2, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::Group"));
        o->tooltip("Group");
        o->image(fltk::fluid_pixmap[6]);
      }
       {fltk::Button* o = new fltk::Button(52, 2, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::Pack"));
        o->tooltip("Pack");
        o->image(fltk::fluid_pixmap[22]);
      }
       {fltk::Button* o = new fltk::Button(2, 27, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::Tabs"));
        o->tooltip("Tabs");
        o->image(fltk::fluid_pixmap[13]);
      }
       {fltk::Button* o = new fltk::Button(27, 27, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::Scroll"));
        o->tooltip("Scroll");
        o->image(fltk::fluid_pixmap[19]);
      }
       {fltk::Button* o = new fltk::Button(2, 52, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::Tile"));
        o->tooltip("Tile");
        o->image(fltk::fluid_pixmap[20]);
      }
       {fltk::Button* o = new fltk::Button(27, 52, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::Wizard"));
        o->tooltip("Wizard");
        o->image(fltk::fluid_pixmap[21]);
      }
      o->end();
    }
     {fltk::Group* o = new fltk::Group(163, 3, 54, 79);
      o->set_vertical();
      o->box(fltk::THIN_DOWN_BOX);
      o->begin();
       {fltk::Button* o = new fltk::Button(2, 2, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::Button"));
        o->tooltip("Button");
        o->image(fltk::fluid_pixmap[2]);
      }
       {fltk::Button* o = new fltk::Button(27, 2, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::ReturnButton"));
        o->tooltip("Return Button");
        o->image(fltk::fluid_pixmap[23]);
      }
       {fltk::Button* o = new fltk::Button(2, 27, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::LightButton"));
        o->tooltip("Light Button");
        o->image(fltk::fluid_pixmap[24]);
      }
       {fltk::Button* o = new fltk::Button(27, 27, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::RepeatButton"));
        o->tooltip("Repeat Button");
        o->image(fltk::fluid_pixmap[25]);
      }
       {fltk::Button* o = new fltk::Button(2, 52, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::CheckButton"));
        o->tooltip("Check Button");
        o->image(fltk::fluid_pixmap[3]);
      }
       {fltk::Button* o = new fltk::Button(27, 52, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::RadioButton"));
        o->tooltip("Round Button");
        o->image(fltk::fluid_pixmap[4]);
      }
      o->end();
    }
     {fltk::Group* o = new fltk::Group(218, 3, 104, 79);
      o->box(fltk::THIN_DOWN_BOX);
      o->begin();
       {fltk::Button* o = new fltk::Button(2, 2, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::Slider"));
        o->tooltip("Slider");
        o->image(fltk::fluid_pixmap[37]);
      }
       {fltk::Button* o = new fltk::Button(27, 2, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::Scrollbar"));
        o->tooltip("Scroll Bar");
        o->image(fltk::fluid_pixmap[38]);
      }
       {fltk::Button* o = new fltk::Button(52, 2, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::ValueSlider"));
        o->tooltip("Value Slider");
        o->image(fltk::fluid_pixmap[39]);
      }
       {fltk::Button* o = new fltk::Button(77, 2, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::ValueOutput"));
        o->tooltip("Value Output");
        o->image(fltk::fluid_pixmap[45]);
      }
       {fltk::Button* o = new fltk::Button(2, 27, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::Adjuster"));
        o->tooltip("Adjuster");
        o->image(fltk::fluid_pixmap[40]);
      }
       {fltk::Button* o = new fltk::Button(27, 27, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::ValueInput"));
        o->tooltip("Counter");
        o->image(fltk::fluid_pixmap[41]);
      }
       {fltk::Button* o = new fltk::Button(52, 27, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::Dial"));
        o->tooltip("Dial");
        o->image(fltk::fluid_pixmap[42]);
      }
       {fltk::Button* o = new fltk::Button(2, 52, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::ThumbWheel"));
        o->tooltip("ThumbWheel");
        o->image(fltk::fluid_pixmap[43]);
      }
       {fltk::Button* o = new fltk::Button(27, 52, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::ValueInput"));
        o->tooltip("Spinner");
        o->image(fltk::fluid_pixmap[47]);
      }
       {fltk::Button* o = new fltk::Button(52, 52, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::ValueInput"));
        o->tooltip("Value Input");
        o->image(fltk::fluid_pixmap[44]);
      }
      o->end();
    }
     {fltk::Group* o = new fltk::Group(323, 3, 54, 79);
      o->set_vertical();
      o->box(fltk::THIN_DOWN_BOX);
      o->begin();
       {fltk::Button* o = new fltk::Button(2, 2, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::Input"));
        o->tooltip("Input");
        o->image(fltk::fluid_pixmap[14]);
      }
       {fltk::Button* o = new fltk::Button(27, 2, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::Output"));
        o->tooltip("Output");
        o->image(fltk::fluid_pixmap[27]);
      }
       {fltk::Button* o = new fltk::Button(2, 27, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::TextEditor"));
        o->tooltip("Text Edit");
        o->image(fltk::fluid_pixmap[29]);
      }
       {fltk::Button* o = new fltk::Button(27, 27, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::TextDisplay"));
        o->tooltip("Text Display");
        o->image(fltk::fluid_pixmap[28]);
      }
       {fltk::Button* o = new fltk::Button(2, 52, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::FileInput"));
        o->tooltip("File Input");
        o->image(fltk::fluid_pixmap[30]);
      }
      o->end();
    }
     {fltk::Group* o = new fltk::Group(378, 3, 54, 79);
      o->set_vertical();
      o->box(fltk::THIN_DOWN_BOX);
      o->begin();
       {fltk::Button* o = new fltk::Button(2, 2, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::MenuBar"));
        o->tooltip("Menu Bar");
        o->image(fltk::fluid_pixmap[17]);
      }
       {fltk::Button* o = new fltk::Button(27, 2, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::Input_Choice"));
        o->tooltip("Input Choice");
        o->image(fltk::fluid_pixmap[15]);
      }
       {fltk::Button* o = new fltk::Button(2, 27, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::PopupMenu"));
        o->tooltip("Menu Button");
        o->image(fltk::fluid_pixmap[26]);
      }
       {fltk::Button* o = new fltk::Button(27, 27, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("menuitem"));
        o->tooltip("Menu Item");
        o->image(fltk::fluid_pixmap[16]);
      }
       {fltk::Button* o = new fltk::Button(2, 52, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::Choice"));
        o->tooltip("Choice");
        o->image(fltk::fluid_pixmap[15]);
      }
       {fltk::Button* o = new fltk::Button(27, 52, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("submenu"));
        o->tooltip("Sub Menu");
        o->image(fltk::fluid_pixmap[18]);
      }
      o->end();
    }
     {fltk::Group* o = new fltk::Group(433, 3, 29, 79);
      o->set_vertical();
      o->box(fltk::THIN_DOWN_BOX);
      o->begin();
       {fltk::Button* o = new fltk::Button(2, 2, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::Browser"));
        o->tooltip("Browser");
        o->image(fltk::fluid_pixmap[31]);
      }
       {fltk::Button* o = new fltk::Button(2, 27, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::CheckBrowser"));
        o->tooltip("Check Browser");
        o->image(fltk::fluid_pixmap[32]);
      }
       {fltk::Button* o = new fltk::Button(2, 52, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::FileBrowser"));
        o->tooltip("File Browser");
        o->image(fltk::fluid_pixmap[33]);
      }
      o->end();
    }
     {fltk::Group* o = new fltk::Group(463, 3, 54, 79);
      o->set_vertical();
      o->box(fltk::THIN_DOWN_BOX);
      o->begin();
       {fltk::Button* o = new fltk::Button(2, 2, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::InvisibleBox"));
        o->tooltip("Box");
        o->image(fltk::fluid_pixmap[5]);
      }
       {fltk::Button* o = new fltk::Button(27, 2, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::Clock"));
        o->tooltip("Clock");
        o->image(fltk::fluid_pixmap[34]);
      }
       {fltk::Button* o = new fltk::Button(2, 27, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::HelpView"));
        o->tooltip("Help Browser");
        o->image(fltk::fluid_pixmap[35]);
      }
       {fltk::Button* o = new fltk::Button(2, 52, 25, 25);
        o->box(fltk::THIN_UP_BOX);
        o->callback((fltk::Callback*)type_make_cb, (void*)("fltk::Progress"));
        o->tooltip("Progress");
        o->image(fltk::fluid_pixmap[36]);
      }
      o->end();
    }
    o->end();
    o->set_non_modal();
  }
  return  w;
}

void type_make_cb(fltk::Widget*w,void*d) {
  /*FIXME NO UNDO YET: undo_checkpoint();*/
    FluidType *t = fltk::FluidType_make((char*)d);
    if (t) {
      select_only(t);
      modflag = 1;
      t->open();
    } else {
      // FIXME UNDO : 
      // undo_current --;
      // undo_last --;
    }
}

fltk::TabGroup* panel_tabs;

fltk::Widget* image_label;

fltk::Widget* image_label2;

fltk::Widget* image_label3;

fltk::Widget* image_label4;

fltk::CheckButton* include_image_button;

fltk::ValueInput* widget_x;

fltk::ValueInput* widget_y;

fltk::ValueInput* widget_width;

fltk::ValueInput* widget_height;

fltk::CheckButton* set_xy;

fltk::MultiLineInput* extra_code_input;

fltk::CheckButton* overlaybutton;

fltk::Window* make_widget_panel() {
  fltk::Window* w;
   {fltk::Window* o = new fltk::Window(380, 373);
    w = o;
    ((fltk::Window*)(o))->hotspot(o);
    o->begin();
     {fltk::TabGroup* o = panel_tabs = new fltk::TabGroup(0, 10, 380, 331);
      o->callback((fltk::Callback*)propagate_tabs);
      o->begin();
       {fltk::Group* o = new fltk::Group(0, 23, 380, 297, "GUI");
        o->callback((fltk::Callback*)propagate_group);
        o->begin();
         {fltk::Input* o = new fltk::Input(80, 11, 170, 22, "Class");
          o->callback((fltk::Callback*)user_class_cb, (void*)(4));
          o->when(fltk::WHEN_CHANGED);
          o->tooltip("This allows you to name a user-defined class that this widget is an instance \
of, rather than an fltk built-in class. You will need to add a #include declar\
ation so that the definition of your class is included in the fluid output.");
        }
         {fltk::Choice* o = new fltk::Choice(250, 11, 120, 22);
          o->callback((fltk::Callback*)subtype_cb);
          o->tooltip("Selects a value for type() for this widget");
        }
         {fltk::Input* o = new fltk::Input(80, 33, 290, 22, "Label");
          o->callback((fltk::Callback*)label_cb);
          o->when(fltk::WHEN_CHANGED);
          o->tooltip("Text displayed on or next to the widget");
          o->take_focus();
        }
         {fltk::Widget* o = image_label = new fltk::Widget(10, 80, 73, 17, "Image default");
          o->box(fltk::NO_BOX);
          o->align(fltk::ALIGN_RIGHT|fltk::ALIGN_CENTER|fltk::ALIGN_INSIDE);
        }
         {fltk::Button* o = new fltk::Button(84, 80, 285, 16);
          o->color((fltk::Color)7);
          o->callback((fltk::Callback*)image_cb, (void*)(1));
          o->align(fltk::ALIGN_LEFT|fltk::ALIGN_CENTER|fltk::ALIGN_INSIDE);
          o->tooltip("Select an image to label the widget");
        }
         {fltk::Widget* o = image_label2 = new fltk::Widget(10, 95, 73, 17, "inactive");
          o->box(fltk::NO_BOX);
          o->align(fltk::ALIGN_RIGHT|fltk::ALIGN_CENTER|fltk::ALIGN_INSIDE);
        }
         {fltk::Button* o = new fltk::Button(84, 95, 285, 16);
          o->color((fltk::Color)7);
          o->callback((fltk::Callback*)image_cb, (void*)(2));
          o->align(fltk::ALIGN_LEFT|fltk::ALIGN_CENTER|fltk::ALIGN_INSIDE);
          ((fltk::Window*)(o->parent()->parent()->parent()))->hotspot(o);
          o->tooltip("Select an image to label the widget");
        }
         {fltk::Widget* o = image_label3 = new fltk::Widget(10, 110, 73, 17, "mouse on");
          o->box(fltk::NO_BOX);
          o->align(fltk::ALIGN_RIGHT|fltk::ALIGN_CENTER|fltk::ALIGN_INSIDE);
        }
         {fltk::Button* o = new fltk::Button(84, 110, 285, 16);
          o->color((fltk::Color)7);
          o->callback((fltk::Callback*)image_cb, (void*)(3));
          o->align(fltk::ALIGN_LEFT|fltk::ALIGN_CENTER|fltk::ALIGN_INSIDE);
          o->tooltip("Select an image to label the widget");
        }
         {fltk::Widget* o = image_label4 = new fltk::Widget(10, 125, 73, 17, "pushed");
          o->box(fltk::NO_BOX);
          o->align(fltk::ALIGN_RIGHT|fltk::ALIGN_CENTER|fltk::ALIGN_INSIDE);
        }
         {fltk::Button* o = new fltk::Button(84, 125, 285, 16);
          o->color((fltk::Color)7);
          o->callback((fltk::Callback*)image_cb, (void*)(4));
          o->align(fltk::ALIGN_LEFT|fltk::ALIGN_CENTER|fltk::ALIGN_INSIDE);
          o->tooltip("Select an image to label the widget");
        }
         {fltk::CheckButton* o = include_image_button = new fltk::CheckButton(350, 55, 20, 22, "inline");
          o->set_vertical();
          o->callback((fltk::Callback*)image_inlined_cb);
          o->align(fltk::ALIGN_LEFT|fltk::ALIGN_CENTER|fltk::ALIGN_WRAP);
          o->tooltip("The image data is inserted as inline data into the output C++ code, rather th\
an generating code to read the image file.");
        }
         {fltk::Widget* o = new fltk::Widget(10, 55, 70, 22, "Alignment");
          o->box(fltk::NO_BOX);
          o->align(fltk::ALIGN_RIGHT|fltk::ALIGN_CENTER|fltk::ALIGN_INSIDE);
        }
         {fltk::Button* o = new fltk::Button(80, 57, 20, 20, "@4->");
          o->type(fltk::Button::TOGGLE);
          o->labelsize(11);
          o->textsize(11);
          o->callback((fltk::Callback*)align_cb, (void*)(fltk::ALIGN_LEFT));
          o->tooltip("Places label on the left of the widget");
        }
         {fltk::Button* o = new fltk::Button(100, 57, 20, 20, "@6->");
          o->type(fltk::Button::TOGGLE);
          o->labelsize(11);
          o->textsize(11);
          o->callback((fltk::Callback*)align_cb, (void*)(fltk::ALIGN_RIGHT));
          o->tooltip("Places label on the right of the widget");
        }
         {fltk::Button* o = new fltk::Button(120, 57, 20, 20, "@8->");
          o->type(fltk::Button::TOGGLE);
          o->labelsize(11);
          o->textsize(11);
          o->callback((fltk::Callback*)align_cb, (void*)(fltk::ALIGN_TOP));
          o->tooltip("Places label on the top of the widget");
        }
         {fltk::Button* o = new fltk::Button(140, 57, 20, 20, "@2->");
          o->type(fltk::Button::TOGGLE);
          o->labelsize(11);
          o->textsize(11);
          o->callback((fltk::Callback*)align_cb, (void*)(fltk::ALIGN_BOTTOM));
          o->tooltip("Places label on the bottom of the widget");
        }
         {fltk::Button* o = new fltk::Button(165, 57, 40, 20, "inside");
          o->type(fltk::Button::TOGGLE);
          o->callback((fltk::Callback*)align_cb, (void*)(fltk::ALIGN_INSIDE));
          o->tooltip("Places label inside the widget");
        }
         {fltk::Button* o = new fltk::Button(205, 57, 40, 20, "clip");
          o->type(fltk::Button::TOGGLE);
          o->callback((fltk::Callback*)align_cb, (void*)(fltk::ALIGN_CLIP));
          o->tooltip("Turn on clipping to the widget's area when drawing label.  This is slower so \
it should be left off if label will fit");
        }
         {fltk::Button* o = new fltk::Button(245, 57, 40, 20, "wrap");
          o->type(fltk::Button::TOGGLE);
          o->callback((fltk::Callback*)align_cb, (void*)(fltk::ALIGN_WRAP));
          o->tooltip("Word-wrap the label");
        }
         {fltk::ValueInput* o = widget_x = new fltk::ValueInput(80, 155, 55, 22, "x");
          o->labelsize(11);
          o->maximum(2000);
          o->step(1);
          o->value(10);
          o->callback((fltk::Callback*)x_cb);
          o->align(fltk::ALIGN_LEFT|fltk::ALIGN_CENTER);
          o->when(fltk::WHEN_ENTER_KEY);
          o->tooltip("The x coordinate of the widget.");
        }
         {fltk::ValueInput* o = widget_y = new fltk::ValueInput(135, 155, 55, 22, "y");
          o->labelsize(11);
          o->maximum(2000);
          o->step(1);
          o->value(10);
          o->callback((fltk::Callback*)y_cb);
          o->align(fltk::ALIGN_LEFT|fltk::ALIGN_CENTER);
          o->when(fltk::WHEN_ENTER_KEY);
          o->tooltip("The y coordinate of the widget.");
        }
         {fltk::ValueInput* o = widget_width = new fltk::ValueInput(190, 155, 55, 22, "w");
          o->labelsize(11);
          o->maximum(2000);
          o->step(1);
          o->value(10);
          o->callback((fltk::Callback*)width_cb);
          o->align(fltk::ALIGN_LEFT|fltk::ALIGN_CENTER);
          o->when(fltk::WHEN_ENTER_KEY);
          o->tooltip("The width of the widget.");
        }
         {fltk::ValueInput* o = widget_height = new fltk::ValueInput(245, 155, 55, 22, "h");
          o->labelsize(11);
          o->maximum(2000);
          o->step(1);
          o->value(10);
          o->callback((fltk::Callback*)height_cb);
          o->align(fltk::ALIGN_LEFT|fltk::ALIGN_CENTER);
          o->when(fltk::WHEN_ENTER_KEY);
          o->tooltip("The height of the widget.");
        }
         {fltk::CheckButton* o = set_xy = new fltk::CheckButton(305, 155, 60, 22, "Set xy");
          o->callback((fltk::Callback*)set_xy_cb);
          o->tooltip("Window will use this x,y rather than being positioned by the operating system\
.");
        }
         {fltk::ValueInput* o = new fltk::ValueInput(315, 155, 55, 22, "size");
          o->labelsize(11);
          o->callback((fltk::Callback*)slider_size_cb);
          o->align(fltk::ALIGN_LEFT|fltk::ALIGN_CENTER);
          o->when(fltk::WHEN_ENTER_KEY);
          o->tooltip("The size of the scroller");
        }
         {fltk::CheckButton* o = new fltk::CheckButton(145, 182, 70, 22, "Border");
          o->callback((fltk::Callback*)border_cb);
          o->tooltip("Enable the window manager border");
        }
         {fltk::CheckButton* o = new fltk::CheckButton(210, 182, 70, 22, "Modal");
          o->callback((fltk::Callback*)modal_cb);
          o->tooltip("This window will stay on top of others in the application and will block even\
ts from going to other windows until it is hidden or closed.");
        }
         {fltk::CheckButton* o = new fltk::CheckButton(290, 182, 75, 22, "Child");
          o->callback((fltk::Callback*)non_modal_cb);
          o->tooltip("This window will stay on top of others in the application.");
        }
         {fltk::ValueInput* o = new fltk::ValueInput(80, 182, 55, 22, "Value");
          o->callback((fltk::Callback*)value_cb);
          o->when(fltk::WHEN_ENTER_KEY);
          o->tooltip("The initial value of this widget");
        }
         {fltk::ValueInput* o = new fltk::ValueInput(135, 182, 55, 22, "min");
          o->labelsize(11);
          o->callback((fltk::Callback*)min_cb);
          o->align(fltk::ALIGN_LEFT|fltk::ALIGN_CENTER);
          o->when(fltk::WHEN_ENTER_KEY);
          o->tooltip("The minimum value for this valuator");
        }
         {fltk::ValueInput* o = new fltk::ValueInput(190, 182, 55, 22, "max");
          o->labelsize(11);
          o->value(1);
          o->callback((fltk::Callback*)max_cb);
          o->align(fltk::ALIGN_LEFT|fltk::ALIGN_CENTER);
          o->when(fltk::WHEN_ENTER_KEY);
          o->tooltip("The maximum value for this valuator");
        }
         {fltk::ValueInput* o = new fltk::ValueInput(245, 182, 60, 22, "step");
          o->labelsize(11);
          o->callback((fltk::Callback*)step_cb);
          o->align(fltk::ALIGN_LEFT|fltk::ALIGN_CENTER);
          o->when(fltk::WHEN_ENTER_KEY);
          o->tooltip("step:\nRound all movements to multiples of this.\n");
        }
         {fltk::ValueInput* o = new fltk::ValueInput(305, 182, 65, 22, "line");
          o->labelsize(11);
          o->minimum(1);
          o->step(1);
          o->callback((fltk::Callback*)line_cb);
          o->align(fltk::ALIGN_LEFT|fltk::ALIGN_CENTER);
          o->when(fltk::WHEN_ENTER_KEY);
          o->tooltip("linesize:\nIncrement/decrement for arrow keys.");
        }
         {fltk::Group* o = new fltk::Group(80, 208, 280, 22, "Attributes");
          o->callback((fltk::Callback*)propagate_group);
          o->align(fltk::ALIGN_LEFT);
          o->begin();
           {fltk::CheckButton* o = new fltk::CheckButton(0, 0, 65, 22, "Visible");
            o->callback((fltk::Callback*)visible_cb);
            o->tooltip("If unchecked the widget is initially invisible.");
          }
           {fltk::CheckButton* o = new fltk::CheckButton(65, 0, 65, 22, "Active");
            o->callback((fltk::Callback*)active_cb);
            o->tooltip("If unchecked the widget is initially inactive (disabled, grayed out).");
          }
           {fltk::CheckButton* o = new fltk::CheckButton(130, 0, 80, 22, "Resizable");
            o->callback((fltk::Callback*)resizable_cb);
            o->tooltip("If on, this widget and all its parents are resizable.  When the parent resize\
s it moves/resizes all its children so that this widget's edges remain the sam\
e distance from all four sides of the parent.  If this is off this widget will\
 not resize, unless it overlaps a resizable sibling.");
          }
           {fltk::CheckButton* o = new fltk::CheckButton(210, 0, 70, 22, "Hotspot");
            o->callback((fltk::Callback*)hotspot_cb);
            o->tooltip("Positions the window so this widget is under the mouse.  This is done when sh\
ow() is called.");
          }
          o->end();
        }
         {Shortcut_Button* o = new Shortcut_Button(80, 231, 290, 22, "Shortcut");
          o->color((fltk::Color)7);
          o->callback((fltk::Callback*)shortcut_in_cb);
          o->align(fltk::ALIGN_LEFT);
          o->tooltip("To set a shortcut:\n   Click here, then type the key combination you want.\nT\
o delete the shortcut:\n   Click here, then type backspace.\nTo get out of sho\
rtcut-setting mode:\n   Click the mouse on this again, or on some other field.");
        }
         {fltk::WordwrapInput* o = new fltk::WordwrapInput(80, 258, 290, 34, "Tooltip");
          o->type(5);
          o->box(fltk::BORDER_BOX);
          o->color((fltk::Color)0xffffe100);
          o->callback((fltk::Callback*)tooltip_cb);
          o->tooltip("The pop up tooltip which should be used for the widget.");
        }
         {fltk::Widget* o = new fltk::Widget(80, 220, 275, 67, "resizable");
          o->hide();
          o->deactivate();
          fltk::Group::current()->resizable(o);
        }
         {fltk::Widget* o = new fltk::Widget(11, 154, 69, 22, "Dimensions");
          o->box(fltk::NO_BOX);
          o->align(fltk::ALIGN_LEFT|fltk::ALIGN_CENTER|fltk::ALIGN_INSIDE);
        }
        o->end();
      }
       {fltk::Group* o = new fltk::Group(0, 23, 380, 297, "Style");
        o->callback((fltk::Callback*)propagate_group);
        o->hide();
        o->begin();
         {fltk::Choice* o = new fltk::Choice(85, 9, 270, 22, "Box");
          o->callback((fltk::Callback*)box_cb);
          o->tooltip("Type of box to draw around the contents of the widget.");
        }
         {fltk::LightButton* o = new fltk::LightButton(85, 31, 135, 22, "Color");
          o->labelsize(11);
          o->textsize(11);
          o->callback((fltk::Callback*)color_cb);
          o->tooltip("Color of the contents area.");
          o->type(0);
        }
         {fltk::LightButton* o = new fltk::LightButton(220, 31, 135, 22, "Text Color");
          o->labelsize(11);
          o->textsize(11);
          o->callback((fltk::Callback*)text_color_cb);
          o->tooltip("Color of text drawn in the widget.");
          o->type(0);
        }
         {fltk::LightButton* o = new fltk::LightButton(85, 53, 135, 22, "Selection Color");
          o->labelsize(11);
          o->textsize(11);
          o->callback((fltk::Callback*)selection_color_cb);
          o->tooltip("Color to draw behind selected text");
          o->type(0);
        }
         {fltk::LightButton* o = new fltk::LightButton(220, 53, 135, 22, "Selected Text Color");
          o->labelsize(11);
          o->textsize(11);
          o->callback((fltk::Callback*)selected_text_color_cb);
          o->tooltip("Color to draw selected text");
          o->type(0);
        }
         {fltk::Choice* o = new fltk::Choice(85, 88, 270, 22, "Button box");
          o->callback((fltk::Callback*)button_box_cb);
          o->tooltip("Type of box to draw around buttons");
        }
         {fltk::LightButton* o = new fltk::LightButton(85, 110, 135, 22, "Button Color");
          o->labelsize(11);
          o->textsize(11);
          o->callback((fltk::Callback*)button_color_cb);
          o->tooltip("Color to draw buttons inside the widget.");
          o->type(0);
        }
         {fltk::LightButton* o = new fltk::LightButton(220, 110, 135, 22, "Label Color");
          o->labelsize(11);
          o->textsize(11);
          o->callback((fltk::Callback*)label_color_cb);
          o->tooltip("Color to draw the labels on buttons, and color to draw the label.");
          o->type(0);
        }
         {fltk::LightButton* o = new fltk::LightButton(85, 132, 135, 22, "Highlight Color");
          o->labelsize(11);
          o->textsize(11);
          o->callback((fltk::Callback*)highlight_color_cb);
          o->tooltip("Color to use to draw buttons when they are highlighted.  Use color zero (the \
black top-left chip in the color chooser) to disable highlighting.");
          o->type(0);
        }
         {fltk::LightButton* o = new fltk::LightButton(220, 132, 135, 22, "Highlight Label Color");
          o->labelsize(11);
          o->textsize(11);
          o->callback((fltk::Callback*)highlight_label_color_cb);
          o->tooltip("Color to draw the button labels when the buttons are highlighted.  Use color \
zero (the black top-left chip in the color chooser) to leave the label colors \
unchanged.");
          o->type(0);
        }
         {fltk::Choice* o = new fltk::Choice(85, 165, 270, 22, "Label Style");
          o->callback((fltk::Callback*)label_style_cb);
          o->tooltip("How to draw the label.");
        }
         {fltk::Choice* o = new fltk::Choice(85, 187, 215, 22, "Label Font");
          o->callback((fltk::Callback*)label_font_cb);
          o->tooltip("Font to use for the label");
        }
         {fltk::ValueInput* o = new fltk::ValueInput(300, 187, 55, 22);
          o->maximum(100);
          o->step(0.1);
          o->value(14);
          o->callback((fltk::Callback*)label_size_cb);
          o->when(fltk::WHEN_ENTER_KEY);
          o->tooltip("Size of the font to use for the label");
        }
         {fltk::Choice* o = new fltk::Choice(85, 220, 215, 22, "Text Font");
          o->callback((fltk::Callback*)text_font_cb);
          o->tooltip("Font to use for text displayed inside the widget");
        }
         {fltk::ValueInput* o = new fltk::ValueInput(300, 220, 55, 22);
          o->maximum(100);
          o->step(0.1);
          o->value(14);
          o->callback((fltk::Callback*)text_size_cb);
          o->when(fltk::WHEN_ENTER_KEY);
          o->tooltip("Size of the font to use for text displayed inside the widget");
        }
         {fltk::Widget* o = new fltk::Widget(85, 242, 270, 3, "resizable");
          o->hide();
          o->deactivate();
          fltk::Group::current()->resizable(o);
        }
         {fltk::Button* o = new fltk::Button(85, 253, 124, 22, "Reset to default");
          o->callback((fltk::Callback*)default_cb);
          o->tooltip("Reset all the above items to the default values for this widget class.");
        }
        o->end();
      }
       {fltk::Group* o = new fltk::Group(0, 23, 380, 302, "C++");
        o->callback((fltk::Callback*)propagate_group);
        o->hide();
        o->begin();
         {fltk::Input* o = new fltk::Input(80, 11, 230, 22, "Name");
          o->callback((fltk::Callback*)name_cb);
          o->when(fltk::WHEN_CHANGED);
          o->tooltip("The variable or member name in which to store a pointer to this widget.");
        }
         {fltk::CheckButton* o = new fltk::CheckButton(315, 11, 50, 22, "public");
          o->callback((fltk::Callback*)name_public_cb);
          o->tooltip("Make the variable public");
        }
         {fltk::MultiLineInput* o = extra_code_input = new fltk::MultiLineInput(80, 44, 285, 99, "Extra Code");
          o->type(4);
          o->callback((fltk::Callback*)extra_code_input_cb, (void*)(0));
          o->tooltip("Extra code to be exectuted after the widget is created. The variable \"o\" po\
ints at the widget.");
        }
         {fltk::MultiLineInput* o = new fltk::MultiLineInput(80, 154, 285, 99, "Callback");
          o->type(4);
          o->callback((fltk::Callback*)callback_cb);
          o->tooltip("The name of the callback function, or code body of the callback function");
        }
         {fltk::Widget* o = new fltk::Widget(80, 165, 165, 65, "resizable");
          o->hide();
          o->deactivate();
          fltk::Group::current()->resizable(o);
        }
         {fltk::Input* o = new fltk::Input(80, 253, 145, 22, "User Data");
          o->callback((fltk::Callback*)user_data_cb);
          o->tooltip("Value passed as the second argument to the callback.  This must be of the typ\
e given below.");
        }
         {fltk::Choice* o = new fltk::Choice(265, 253, 100, 22, "When");
          o->callback((fltk::Callback*)when_cb);
          o->when(fltk::WHEN_NEVER);
          o->tooltip("What actions cause the callback to be called.");
        }
         {fltk::Input* o = new fltk::Input(80, 275, 145, 22, "Type");
          o->callback((fltk::Callback*)user_data_type_cb);
          o->tooltip("Type of User Data. This must be \"long\" or a pointer.");
        }
        o->end();
        fltk::Group::current()->resizable(o);
      }
      o->end();
    }
     {fltk::Group* o = new fltk::Group(95, 340, 275, 28);
      o->begin();
       {fltk::CheckButton* o = overlaybutton = new fltk::CheckButton(0, 6, 120, 22, "&Overlays");
        o->callback((fltk::Callback*)overlay_cb);
        fltk::Group::current()->resizable(o);
        o->tooltip("Turns the overlays (red outlines) off so you can see the edges better.");
        o->value(!overlays_invisible);
      }
       {fltk::ReturnButton* o = new fltk::ReturnButton(130, 6, 65, 22, "OK");
        o->shortcut(0xff0d);
        o->callback((fltk::Callback*)ok_cb);
        o->tooltip("Closes this attribute window");
      }
       {fltk::Button* o = new fltk::Button(205, 6, 65, 22, "Cancel");
        o->callback((fltk::Callback*)cancel_cb);
        o->tooltip("Sorry, cancel does not really work yet.");
      }
      o->end();
      fltk::Group::current()->resizable(o);
    }
    o->end();
  }
  return  w;
}
