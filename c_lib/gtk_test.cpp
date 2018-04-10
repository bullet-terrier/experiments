
/*
  attempting to use gtk - set up windowed mode on mechanisms.
  I'll have to see if I can force it to install dependencies at run.

  compilation will be something to handle
  g++ instead of gcc for this program (need to see if there's a clib for it)
  gtk_test.cpp.

  // use the backtick to push additional information
  // keep in mind `!='
  // append result of backtick to the mechanism./
  `pkg-config --cflags gtk+-2.0` ;
  `pkg-config --libs gtk+-2.0`;
  `pkg-config -cflags+-2.0`; 
  use those to integrate graphics.h?
*/
#include <gtk/gtk.h>

int main(int argc, char **argv[])
{
  // initialize gtk with the address of argc and argv.
  gtk_init(&argc,&argv);

  GtkWidget* window; // not too fond of this but we'll see what I can do on a canvas.

  // mechanism to generate an entity
  // call constructors the same way I do in my MTG app.
  // pass toplevel.
  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  // add an exit button function. 
  // g_signal_connect() ; handle event signals. I like it. 4 params.
  // connect a signal to a function - generate api calls.
  // 1) listen (entity)
  // 2) listen-event (string literal)
  // 3) function to call (macro callback- we'll see this elsewhere.)
  // 4) arguments to pass - pass null is okay
  g_signal_connect(window,"delete-event",G_CALLBACK(gtk_main_quit,&'\x0'),
  // graphics loop
  
  // make visible.
  // alternatively gtk_widget_show_all();
  gtk_widget_show(window); // might be better off defining some types.
  gtk_main();
  return 0;
}
