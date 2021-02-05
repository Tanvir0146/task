#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255,0,0);
glPointSize(4.0);

glBegin(GL_LINES);
glVertex2i(0, 240);
glVertex2i(640, 240);
glVertex2i(320, 0);
glVertex2i(320, 480);
glEnd();


glColor3ub (0,0,0);
glBegin(GL_QUADS);
glVertex2i(350,50);
glVertex2i(450,50);
glVertex2i(450,150);
glVertex2i(350, 150);
glVertex2i(400, 10);
glVertex2i(510, 10);
glVertex2i(510, 100);
glVertex2i(400, 100);
glEnd();


glColor3ub (0,0,0);
glBegin(GL_TRIANGLES);
glVertex2i(400, 300);
glVertex2i(400, 400);
glVertex2i(490, 350);
glVertex2i(580, 400);
glVertex2i(580, 300);
glVertex2i(490, 350);
glEnd();


glColor3ub (0,0,0);
glBegin(GL_LINES);
glVertex2i(100,80);
glVertex2i(280,80);
glVertex2i(100,80);
glVertex2i(100,180);
glVertex2i(280,180);
glVertex2i(100,180);
glVertex2i(280,180);
glVertex2i(280,80);
glVertex2i(100,180);
glVertex2i(280,80);
glVertex2i(100,80);
glVertex2i(280,180);
glEnd();


glColor3ub (0,0,0);
glBegin(GL_TRIANGLES);
glVertex2i(50, 300);
glVertex2i(150, 375);
glVertex2i(250, 300);
glEnd();
glColor3ub (0,0,0);
glBegin(GL_TRIANGLES);
glVertex2i(50, 375);
glVertex2i(250, 375);
glVertex2i(150, 450);
glEnd();
glFlush ();
}

void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}



int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 200);
glutCreateWindow ("This is the title");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
