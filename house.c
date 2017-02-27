#include<GL/glut.h>
void draw()
{
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_LINES);
glColor3f(1.0,0.0,0.0);
glVertex2i(20,50);
glVertex2i(20,90);
glVertex2i(20,50);
glVertex2i(50,50);
glVertex2i(50,50);
glVertex2i(50,90);
glVertex2i(50,90);
glVertex2i(20,90);
glVertex2i(20,90);
glVertex2i(35,110);
glVertex2i(35,110);
glVertex2i(50,90);
glVertex2i(28,75);
glVertex2i(35,75);
glVertex2i(28,50);
glVertex2i(28,75);
glVertex2i(35,50);
glVertex2i(35,75);
glEnd();
glFlush();
}


int main(int argc,char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(250,250);
glutInitWindowSize(700,400);
glutCreateWindow("Madhu");
glClearColor(1.0,0.6,0.3,0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,200.0,0.0,150.0);
glutDisplayFunc(draw);
glutMainLoop();
return 0;
}

