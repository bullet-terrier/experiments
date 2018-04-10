/*
  -IGL to link to open Gl.

  Integrating with opengl to render data.
  We'll see how this goes while I wait on 
  some of the reports to return.

  I'll try to start by drawing a line.
  
*/

// they include windows to start - we don't have that. Immediate deviation.
// #include <GL/glut.h> // GLUT, include glu.h and gl.h -- their note.
#include <glu.h>
#include <gl.h>
// trying again

/*
  Handle window-repoaint event. Call when the window appears/needs repainting.
  -- seems useful.
*/

void dislplay()
{
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // set the background to black and opaque - rgbo.
  glClear(GL_COLOR_BUFFER_BIT);         // clear the color buffer (background) (need to access the bus for this?)
  
  printf("glClear lives at %d",&glClear(GL_COLOR_BUFFER_BIT)); // I don't think this will work..

  // draw a red 1x1 square centered at the origin
  glBegin(GL_QUADS);                    // EACH SET OF 4 vertices forms a quad...
    glColor3f(1.0f,0.0f, 0.0f);
    glVertex2f(-0.5f, -0.5f);           // Euclidean points! I'm happy with this - I can control vectors I believe.
    glVertex2f(0.5f, -0.5f); 
    glVertex2f(0.5f, 0.5f); // .5 units off in any direction. looks like a struct wrapper would be super handy.
    glVertex2f(-0.5f, 0.5f); 
  glEnd(); // I'm not sure what this does - unless it finishes and pushes the object to memory.
  glFlush(); // render. noted.
}

int main(int argc, char **argcv)
{
  glutInit(&argc, argv); // initialize GLUT with the address of the program.
  glutCreateWindow("OpenGL Setup Test"); // create a window with the given title.
  glutInitWindowSize(800,600); // I'm deviating to make life more amusing. inject a little whimsy.
  glutInitWindowPosition(50,50); // initialize the base window position - top left corner expanding by definition.
  glutDisplayFunc(display); // register display callback handler for window re-paint
  glutMainLoop();  // enter the event processing loop.
  return 0;  
}


