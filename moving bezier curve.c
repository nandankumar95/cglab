Document: Moving Bezier Curve.c
/*
* moving bezier curve program in c/c++
* http://www.openglprojects.in
* http://hindi.openglprojects.in // hindi version
*
*/
#include<glut.h>
#include<math.h>
#include<stdio.h>
int bzco[4][2]={{0,0},{99,201},{204,49},{320,300}},c[4],n=3;
int s1x,s1y,s2x,s2y;
void bezierCoefficients(int n,int *c)
{
int k,i;
for(k=0;k<=n;k++)
{
c[k]=1;
for(i=n;i>=k+1;i--)
c[k]*=i;
for(i=n-k;i>=2;i--)
c[k]/=i;
}
}
void display(void)
{ int k;
float x,y,u,blend;
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0,0.0,1.0);
glLineWidth(3.0);
glBegin(GL_LINE_STRIP);
for(u=0;u<1.0;u+=0.01)
{x=0;y=0;
for(k=0;k<4;k++)
{
blend=c[k]*pow(u,k)*pow(1-u,n-k);
x+=bzco[k][0]*blend;
y+=bzco[k][1]*blend;
}
glVertex2f(x,y);
}
glEnd();
//moving points
/*
glBegin(GL_POINTS);
glVertex2f(bzco[1][0],bzco[1][1]);
glVertex2f(bzco[2][0],bzco[2][1]);
glEnd();
*/
glFlush();
glutSwapBuffers();
} void myinit()
{
glClearColor(1.0,1.0,1.0,1.0);
glColor3f(1.0,0.0,0.0);
glPointSize(5.0);
gluOrtho2D(0.0,320.0,0.0,300.0);
} void motion(void)
{
bzco[1][0]+=s1x;
bzco[1][1]+=s1y;
bzco[2][0]+=s2x;
bzco[2][1]+=s2y;
if(bzco[1][0]<0||bzco[1][0]>320)
{
s1x=-s1x;
} if(bzco[1][1]<0||bzco[1][1]>300)
{
s1y=-s1y;
Page 1
Document: Moving Bezier Curve.c
} if(bzco[2][0]<0||bzco[2][0]>320)
{
s2x=-s2x;
} if(bzco[2][1]<0||bzco[2][1]>300)
{
s2y=-s2y;
} glutPostRedisplay();
} int main(int argc, char ** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
glutInitWindowSize(320,300);
glutCreateWindow("Moving Bezier Curve");
glutDisplayFunc(display);
glutIdleFunc(motion);
myinit();
bezierCoefficients(n,c);
s1x=-1;s1y=-1;s2x=-1;s2y=1;
glutMainLoop();
return 0;
}
Page 2
