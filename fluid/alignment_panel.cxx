// generated by Fast Light User Interface Designer (fluid) version 2.0100

#include "alignment_panel.h"
#include "FluidType.h"
fltk::TextBuffer *shell_run_buffer;

fltk::Window *alignment_window=(fltk::Window *)0;

fltk::TabGroup *tabs=(fltk::TabGroup *)0;

fltk::CheckButton *openlast_button=(fltk::CheckButton *)0;

static void cb_openlast_button(fltk::CheckButton*, void*) {
  fluid_prefs.set("open_previous_file", openlast_button->value());
}

fltk::CheckButton *prevpos_button=(fltk::CheckButton *)0;

static void cb_prevpos_button(fltk::CheckButton*, void*) {
  fluid_prefs.set("prev_window_pos", prevpos_button->value());
}

fltk::CheckButton *completion_button=(fltk::CheckButton *)0;

static void cb_completion_button(fltk::CheckButton*, void*) {
  fluid_prefs.set("show_completion_dialogs", completion_button->value());
}

fltk::Input *horizontal_input=(fltk::Input *)0;

fltk::Input *vertical_input=(fltk::Input *)0;

fltk::Input *snap_input=(fltk::Input *)0;

fltk::Input *header_file_input=(fltk::Input *)0;

fltk::Input *code_file_input=(fltk::Input *)0;

fltk::CheckButton *include_H_from_C_button=(fltk::CheckButton *)0;

static void cb_Close(fltk::Button*, void*) {
  alignment_window->hide();
}

fltk::Window* make_alignment_window() {
  fltk::Window* w;
   {fltk::Window* o = alignment_window = new fltk::Window(374, 280, "fluid Preferences");
    w = o;
    o->begin();
     {fltk::TabGroup* o = tabs = new fltk::TabGroup(5, 4, 355, 230);
      o->begin();
       {fltk::Group* o = new fltk::Group(5, 26, 350, 200, "General");
        o->begin();
         {fltk::CheckButton* o = openlast_button = new fltk::CheckButton(10, 10, 193, 25, "Open Previous File on Startup");
          o->callback((fltk::Callback*)cb_openlast_button);
          int b;
          fluid_prefs.get("open_previous_file", b, 0);
          openlast_button->value(b);
        }
         {fltk::CheckButton* o = prevpos_button = new fltk::CheckButton(10, 35, 193, 25, "Remember Window Positions");
          o->callback((fltk::Callback*)cb_prevpos_button);
          int b;
          fluid_prefs.get("prev_window_pos", b, 1);
          prevpos_button->value(b);
        }
         {fltk::CheckButton* o = completion_button = new fltk::CheckButton(10, 60, 186, 25, "Show Completion Dialog Info");
          o->callback((fltk::Callback*)cb_completion_button);
          int b;
          fluid_prefs.get("show_completion_dialogs", b, 1);
          completion_button->value(b);
        }
        o->end();
      }
       {fltk::Group* o = new fltk::Group(4, 26, 351, 190, "Alignment");
        o->box(fltk::ENGRAVED_BOX);
        o->align(fltk::ALIGN_TOP|fltk::ALIGN_LEFT);
        o->hide();
        o->begin();
         {fltk::Input* o = horizontal_input = new fltk::Input(77, 20, 100, 22, "Horizontal:");
          o->callback((fltk::Callback*)alignment_cb, (void*)(1));
          o->when(fltk::WHEN_RELEASE|fltk::WHEN_ENTER_KEY);
        }
         {fltk::Input* o = vertical_input = new fltk::Input(240, 20, 100, 22, "Vertical:");
          o->callback((fltk::Callback*)alignment_cb, (void*)(2));
          o->when(fltk::WHEN_RELEASE|fltk::WHEN_ENTER_KEY);
        }
         {fltk::Input* o = snap_input = new fltk::Input(77, 56, 100, 22, "Snap:");
          o->callback((fltk::Callback*)alignment_cb, (void*)(3));
          o->when(fltk::WHEN_RELEASE|fltk::WHEN_ENTER_KEY);
        }
        o->end();
      }
       {fltk::Group* o = new fltk::Group(4, 26, 350, 192, "Code generation");
        o->box(fltk::ENGRAVED_BOX);
        o->align(fltk::ALIGN_TOP|fltk::ALIGN_LEFT);
        o->hide();
        o->begin();
         {fltk::Widget* o = new fltk::Widget(16, 17, 323, 25, "Use \"name.ext\" to set name or just \".ext\" to set only extension.");
          o->box(fltk::NO_BOX);
          o->labelsize(11);
          o->align(fltk::ALIGN_LEFT|fltk::ALIGN_CENTER|fltk::ALIGN_INSIDE|fltk::ALIGN_WRAP);
        }
         {fltk::Input* o = header_file_input = new fltk::Input(96, 47, 90, 22, "Header File:");
          o->callback((fltk::Callback*)header_input_cb, (void*)(1));
          o->when(fltk::WHEN_CHANGED);
        }
         {fltk::Input* o = code_file_input = new fltk::Input(96, 74, 90, 22, "Code File:");
          o->callback((fltk::Callback*)code_input_cb, (void*)(1));
          o->when(fltk::WHEN_CHANGED);
        }
         {fltk::CheckButton* o = include_H_from_C_button = new fltk::CheckButton(16, 101, 170, 22, "#include \"header\" in code");
          o->set_flag(fltk::VALUE);
          o->callback((fltk::Callback*)include_H_from_C_button_cb);
        }
        o->end();
      }
      o->end();
    }
     {fltk::Button* o = new fltk::Button(263, 250, 107, 20, "Close");
      o->callback((fltk::Callback*)cb_Close);
    }
    o->end();
    o->set_non_modal();
    o->resizable(o);
  }
  return  w;
}

fltk::DoubleBufferWindow *shell_window=(fltk::DoubleBufferWindow *)0;

fltk::Input *shell_command_input=(fltk::Input *)0;

static void cb_shell_command_input(fltk::Input*, void*) {
  fluid_prefs.set("shell_command", shell_command_input->value());
}

fltk::CheckButton *shell_writecode_button=(fltk::CheckButton *)0;

static void cb_shell_writecode_button(fltk::CheckButton*, void*) {
  fluid_prefs.set("shell_writecode", shell_writecode_button->value());
}

fltk::CheckButton *shell_writemsgs_button=(fltk::CheckButton *)0;

static void cb_shell_writemsgs_button(fltk::CheckButton*, void*) {
  fluid_prefs.set("shell_writemsgs", shell_writemsgs_button->value());
}

fltk::CheckButton *shell_savefl_button=(fltk::CheckButton *)0;

static void cb_shell_savefl_button(fltk::CheckButton*, void*) {
  fluid_prefs.set("shell_savefl", shell_savefl_button->value());
}

static void cb_Cancel(fltk::Button*, void*) {
  shell_window->hide();
}

fltk::DoubleBufferWindow *shell_run_window=(fltk::DoubleBufferWindow *)0;

fltk::TextDisplay *shell_run_display=(fltk::TextDisplay *)0;

fltk::ReturnButton *shell_run_button=(fltk::ReturnButton *)0;

static void cb_shell_run_button(fltk::ReturnButton*, void*) {
  shell_run_window->hide();
}

fltk::DoubleBufferWindow* make_shell_window() {
  fltk::DoubleBufferWindow* w;
   {fltk::DoubleBufferWindow* o = shell_window = new fltk::DoubleBufferWindow(365, 125, "Shell Command");
    o->type(241);
    o->begin();
     {fltk::Input* o = shell_command_input = new fltk::Input(10, 27, 347, 25, "Command:");
      o->labelfont(fltk::HELVETICA_BOLD);
      o->callback((fltk::Callback*)cb_shell_command_input);
      o->align(fltk::ALIGN_TOP|fltk::ALIGN_LEFT);
      char buf[1024];
      fluid_prefs.get("shell_command", buf, "", sizeof(buf));
      shell_command_input->value(buf);
    }
     {fltk::CheckButton* o = shell_writecode_button = new fltk::CheckButton(127, 61, 93, 19, "Write Code");
      o->callback((fltk::Callback*)cb_shell_writecode_button);
      int b;
      fluid_prefs.get("shell_writecode", b, 1);
      shell_writecode_button->value(b);
    }
     {fltk::CheckButton* o = shell_writemsgs_button = new fltk::CheckButton(231, 61, 126, 19, "Write Messages");
      o->callback((fltk::Callback*)cb_shell_writemsgs_button);
      o->hide();
      int b;
      fluid_prefs.get("shell_writemsgs", b, 0);
      shell_writemsgs_button->value(b);
    }
     {fltk::CheckButton* o = shell_savefl_button = new fltk::CheckButton(10, 61, 108, 19, "Save Fluid File");
      o->callback((fltk::Callback*)cb_shell_savefl_button);
      int b;
      fluid_prefs.get("shell_savefl", b, 1);
      shell_savefl_button->value(b);
    }
     {fltk::ReturnButton* o = new fltk::ReturnButton(132, 90, 143, 25, "Run Command");
      o->shortcut(0xff0d);
      o->callback((fltk::Callback*)do_shell_command);
    }
     {fltk::Button* o = new fltk::Button(285, 90, 72, 25, "Cancel");
      o->callback((fltk::Callback*)cb_Cancel);
    }
    o->end();
    o->resizable(o);
  }
   {fltk::DoubleBufferWindow* o = shell_run_window = new fltk::DoubleBufferWindow(555, 430, "Shell Command Output");
    w = o;
    o->type(241);
    o->begin();
     {fltk::TextDisplay* o = shell_run_display = new fltk::TextDisplay(10, 10, 535, 375);
      o->textfont(fltk::COURIER);
      shell_run_buffer = new fltk::TextBuffer();
      shell_run_display->buffer(shell_run_buffer);
    }
     {fltk::ReturnButton* o = shell_run_button = new fltk::ReturnButton(468, 395, 77, 25, "Close");
      o->shortcut(0xff0d);
      o->callback((fltk::Callback*)cb_shell_run_button);
    }
    o->end();
    o->resizable(o);
  }
  return  w;
}
