#include <glut.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
void Display_on_screen(char*);
void man12(float,float);
void man13(float,float);
void man();
float scl=0.4;
int x=50,y=50;
int years=7; char yearsstring[15];
float colorx=0,colory=225.0, colorz=0;
void init(void)
{

	glClearColor(0.60,0.88,0.96,0);
	gluOrtho2D(0,1300,0,700);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
}

void drawCircle(float x1,float y1, double radius)
{
     float x2,y2;
	float angle;
	glPointSize(1);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x1,y1);
	for (angle=0.0f;angle<=3*3.14159f;angle+=0.2)
	{
		x2 = x1+sin(angle)*radius;
		y2 = y1+cos(angle)*radius;
		glVertex2f(x2,y2);
	}
	glEnd();

}

void man12(float x,float y)
{
	
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(x,y);
	glVertex2f(x-15,y+15);
	glVertex2f(x-15,y+25);
	glVertex2f(x,y+35);
	glVertex2f(x+15,y+35);
	glVertex2f(x+15,y);
	glEnd();

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x+15,y+35);
	glVertex2f(x+25,y+25);
	glVertex2f(x+25,y+15);
	glVertex2f(x+15,y);
	glEnd();
	
	glColor3f(0.0,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(x-5,y);
	glVertex2f(x-5,y-50);
	glVertex2f(x+20,y-50);
	glVertex2f(x+20,y);
	glEnd();
	
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-5,y-50);
	glVertex2f(x-5,y-80);
	glVertex2f(x+20,y-80);
	glVertex2f(x+20,y-50);
	glEnd();
	
	glColor3f(0.0,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(x+20,y);
	glVertex2f(x+20,y-20);
	glVertex2f(x-28,y-48);
	glVertex2f(x-30,y-45);
	glEnd();
	
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-5,y-80);
	glVertex2f(x+4,y-120);
	glVertex2f(x+12,y-120);
	glVertex2f(x+20,y-80);
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x,y-130);
	glVertex2f(x,y-120);
	glVertex2f(x+12,y-120);
	glVertex2f(x+12,y-130);
	glEnd();
}
void man13(float x,float y)
{
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(x,y);
	glVertex2f(x-15,y+15);
	glVertex2f(x-15,y+25);
	glVertex2f(x,y+35);
	glVertex2f(x+15,y+35);
	glVertex2f(x+15,y);
	glEnd();

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x+15,y+35);
	glVertex2f(x+25,y+25);
	glVertex2f(x+25,y+15);
	glVertex2f(x+15,y);
	glEnd();
	
	glColor3f(0.0,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(x-5,y);
	glVertex2f(x-5,y-50);
	glVertex2f(x+20,y-50);
	glVertex2f(x+20,y);
	glEnd();
	
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-5,y-50);
	glVertex2f(x-5,y-80);
	glVertex2f(x+20,y-80);
	glVertex2f(x+20,y-50);
	glEnd();
	
	glColor3f(0.0,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(x+20,y);
	glVertex2f(x+20,y-20);
	glVertex2f(x-28,y-48);
	glVertex2f(x-30,y-45);
	glEnd();
	
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-5,y-80);
	glVertex2f(x+4,y-120);
	glVertex2f(x+12,y-120);
	glVertex2f(x+20,y-80);
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x,y-130);
	glVertex2f(x,y-120);
	glVertex2f(x+12,y-120);
	glVertex2f(x+12,y-130);
	glEnd();
}
void man()
{
	glColor3ub(0,0,0);

	
	glPushMatrix();	
	glTranslatef(540,495,0);
	glutSolidTorus(1,15,100,90);
	glPopMatrix();

		glColor3ub(255,191,128);
      glPushMatrix();	
	glTranslatef(540,495,00);
	glutSolidTorus(7,7,100,90);
	glPopMatrix();
	
		glColor3ub(0,0,0);
	glBegin(GL_LINES);
 glVertex2i(1540,1497);
 glVertex2i(1540,1490);
 
 glVertex2i(1531,1503);
 glVertex2i(1537,1503);
 
 glVertex2i(1543,1503);
 glVertex2i(1549,1503);
 glEnd();


// eyes 
 glBegin(GL_POLYGON);
 glVertex2i(533,501);
 glVertex2i(535,501);
 glVertex2i(535,499);
 glVertex2i(533,499);
glEnd();

 glBegin(GL_POLYGON);
 glVertex2i(545,501);
 glVertex2i(547,501);
 glVertex2i(547,499);
 glVertex2i(545,499);
glEnd();
 // mouth
glBegin(GL_POLYGON);
 glVertex2i(536,487);
 glVertex2i(540,485);
 glVertex2i(544,487);
 glVertex2i(540,485);
glEnd();

//shart
 glBegin(GL_POLYGON);
 glColor3ub(55,50,70);

 glVertex2i(529,480);
 glVertex2i(551,480);
 glVertex2i(566,469);
 glVertex2i(561,461);
 glVertex2i(556,465);
 
 glVertex2i(556,445);
 glVertex2i(524,445);
 glVertex2i(524,465);
 glVertex2i(519,460);
 glVertex2i(514,469);
glEnd();
//hands
 glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
 glVertex2i(565,468);
 glVertex2i(575,453);
 glVertex2i(567,454);
 glVertex2i(562,462);
 glEnd();

  glBegin(GL_POLYGON);
	 glVertex2i(575,453);
 glVertex2i(556,438);
 glVertex2i(556,445);
 glVertex2i(567,454);
 glEnd();
//2
 glBegin(GL_POLYGON);
	 glVertex2i(515,468);
 glVertex2i(505,453);
 glVertex2i(513,454);
 glVertex2i(518,462);
 glEnd();

  glBegin(GL_POLYGON);
	glVertex2i(505,453);
   glVertex2i(524,438);
   glVertex2i(524,445);
   glVertex2i(513,454);
  glEnd();

 // belt
 glBegin(GL_POLYGON);
	glColor3ub(10,120,130);
 glVertex2i(556,445);
 glVertex2i(524,445);
 glVertex2i(524,440);
 glVertex2i(556,440);
glEnd();
// colar
 glBegin(GL_POLYGON);
	glColor3ub(200,140,110);
 glVertex2i(529,480);
 glVertex2i(551,480);
 glVertex2i(546,470);
 glVertex2i(534,470);
glEnd();

 glBegin(GL_TRIANGLES);
	glColor3ub(20,140,110);
 glVertex2i(540,477);
  glVertex2i(545,470);
 glVertex2i(535,470);
glEnd();

// batons
	glColor3ub(0,0,0);
	glPushMatrix();	
	glTranslatef(540,465,0);
	glutSolidTorus(1,1,100,90);
	glPopMatrix();
	glPushMatrix();	
	glTranslatef(540,458,0);
	glutSolidTorus(1,1,100,90);
	glPopMatrix();
	glPushMatrix();	
	glTranslatef(540,451,0);
	glutSolidTorus(1,1,100,90);
	glPopMatrix();

	/// pant
glBegin(GL_POLYGON);
	glColor3ub(100,140,10);
glVertex2i(555,440);
glVertex2i(525,440);
glVertex2i(520,405);
glVertex2i(530,405);
glVertex2i(533,438);
glVertex2i(550,405);
glVertex2i(560,405);
	glEnd();


}
void man14(float x,float y)
{
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(x,y);
	glVertex2f(x-15,y+15);
	glVertex2f(x-15,y+25);
	glVertex2f(x,y+35);
	glVertex2f(x+15,y+35);
	glVertex2f(x+15,y);
	glEnd();

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x+15,y+35);
	glVertex2f(x+25,y+25);
	glVertex2f(x+25,y+15);
	glVertex2f(x+15,y);
	glEnd();
	
	glColor3f(0.0,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(x-5,y);
	glVertex2f(x-5,y-50);
	glVertex2f(x+20,y-50);
	glVertex2f(x+20,y);
	glEnd();
	
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-5,y-50);
	glVertex2f(x-5,y-80);
	glVertex2f(x+20,y-80);
	glVertex2f(x+20,y-50);
	glEnd();
	
	glColor3f(0.0,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(x+20,y);
	glVertex2f(x+20,y-20);
	glVertex2f(x-28,y-48);
	glVertex2f(x-30,y-45);
	glEnd();
	
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-5,y-80);
	glVertex2f(x+4,y-120);
	glVertex2f(x+12,y-120);
	glVertex2f(x+20,y-80);
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x,y-130);
	glVertex2f(x,y-120);
	glVertex2f(x+12,y-120);
	glVertex2f(x+12,y-130);
	glEnd();
}
void man15(float x,float y)
{
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(x,y);
	glVertex2f(x-15,y+15);
	glVertex2f(x-15,y+25);
	glVertex2f(x,y+35);
	glVertex2f(x+15,y+35);
	glVertex2f(x+15,y);
	glEnd();

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x+15,y+35);
	glVertex2f(x+25,y+25);
	glVertex2f(x+25,y+15);
	glVertex2f(x+15,y);
	glEnd();
	
	glColor3f(0.0,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(x-5,y);
	glVertex2f(x-5,y-50);
	glVertex2f(x+20,y-50);
	glVertex2f(x+20,y);
	glEnd();
	
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-5,y-50);
	glVertex2f(x-5,y-80);
	glVertex2f(x+20,y-80);
	glVertex2f(x+20,y-50);
	glEnd();
	
	glColor3f(0.0,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(x+20,y);
	glVertex2f(x+20,y-20);
	glVertex2f(x-28,y-48);
	glVertex2f(x-30,y-45);
	glEnd();
	
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-5,y-80);
	glVertex2f(x+4,y-120);
	glVertex2f(x+12,y-120);
	glVertex2f(x+20,y-80);
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x,y-130);
	glVertex2f(x,y-120);
	glVertex2f(x+12,y-120);
	glVertex2f(x+12,y-130);
	glEnd();
}


void man16(float x,float y)
{
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(x,y);
	glVertex2f(x-15,y+15);
	glVertex2f(x-15,y+25);
	glVertex2f(x,y+35);
	glVertex2f(x+15,y+35);
	glVertex2f(x+15,y);
	glEnd();

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x+15,y+35);
	glVertex2f(x+25,y+25);
	glVertex2f(x+25,y+15);
	glVertex2f(x+15,y);
	glEnd();
	
	glColor3f(0.0,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(x-5,y);
	glVertex2f(x-5,y-50);
	glVertex2f(x+20,y-50);
	glVertex2f(x+20,y);
	glEnd();
	
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-5,y-50);
	glVertex2f(x-5,y-80);
	glVertex2f(x+20,y-80);
	glVertex2f(x+20,y-50);
	glEnd();
	
	glColor3f(0.0,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(x+20,y);
	glVertex2f(x+20,y-20);
	glVertex2f(x-28,y-48);
	glVertex2f(x-30,y-45);
	glEnd();
	
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-5,y-80);
	glVertex2f(x+4,y-120);
	glVertex2f(x+12,y-120);
	glVertex2f(x+20,y-80);
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x,y-130);
	glVertex2f(x,y-120);
	glVertex2f(x+12,y-120);
	glVertex2f(x+12,y-130);
	glEnd();
}
void tree(int h,int k, float scale)
{
	
	glColor3f(colorx/255.0,colory/255.0,colorz/255.0);
	glBegin(GL_POLYGON);//brown stem
		glVertex2f(10*scale+h,20*scale+k);
		glVertex2f(10*scale+h,36*scale+k);
		glVertex2f(15*scale+h,36*scale+k);
		glVertex2f(15*scale+h,20*scale+k);
	glEnd();
	//glColor3f(colorx/255,colory/255,colorz/255);
	
}

void drawBackground(){
	glColor3f(160/255.0,69/255.0,19/255.0);
	glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0,450);
		glVertex2f(1300,450);
		glVertex2f(1300,0);
	glEnd();
	glColor3f(0.2,1.1,93.9);
	glBegin(GL_POLYGON);
		glVertex2f(0,450);
		glVertex2f(0,700);
		glVertex2f(1300,700);
		glVertex2f(1300,450);
	glEnd();
	glFlush();
	glColor3f(1,0.99,0);
	drawCircle(900,550,50);//sun
	
}
void drawForeground()
{
	tree(-10,10,scl);
	tree(-10,20,scl);
	tree(-10,30,scl);
	tree(-10,40,scl);
	tree(-10,50,scl);
	tree(-10,60,scl);
	tree(-10,70,scl);
	tree(-10,80,scl);
	tree(-10,90,scl);

	tree(0,10,scl);
	tree(0,20,scl);
	tree(0,30,scl);
	tree(0,40,scl);
	tree(0,50,scl);
	tree(0,60,scl);
	tree(0,70,scl);
	tree(0,80,scl);
	tree(0,90,scl);

	tree(0,110,scl);
	tree(0,120,scl);
	tree(0,130,scl);
	tree(0,140,scl);
	tree(0,150,scl);
	tree(0,160,scl);
	tree(0,170,scl);
	tree(0,180,scl);
	tree(0,190,scl);

	tree(0,210,scl);
	tree(0,220,scl);
	tree(0,230,scl);
	tree(0,240,scl);
	tree(0,250,scl);
	tree(0,260,scl);
	tree(0,270,scl);
	tree(0,280,scl);
	tree(0,290,scl);

	tree(0,310,scl);
	tree(0,320,scl);
	tree(0,330,scl);
	tree(0,340,scl);
	tree(0,350,scl);
	tree(0,360,scl);
	tree(0,370,scl);
	tree(0,380,scl);
	tree(0,390,scl);

	tree(10,10,scl);
	tree(10,20,scl);
	tree(10,30,scl);
	tree(10,40,scl);
	tree(10,50,scl);
	tree(10,60,scl);
	tree(10,70,scl);
	tree(10,80,scl);
	tree(10,90,scl);

	tree(10,110,scl);
	tree(10,120,scl);
	tree(10,130,scl);
	tree(10,140,scl);
	tree(10,150,scl);
	tree(10,160,scl);
	tree(10,170,scl);
	tree(10,180,scl);
	tree(10,190,scl);

	tree(10,210,scl);
	tree(10,220,scl);
	tree(10,230,scl);
	tree(10,240,scl);
	tree(10,250,scl);
	tree(10,260,scl);
	tree(10,270,scl);
	tree(10,280,scl);
	tree(10,290,scl);

	tree(10,310,scl);
	tree(10,320,scl);
	tree(10,330,scl);
	tree(10,340,scl);
	tree(10,350,scl);
	tree(10,360,scl);
	tree(10,370,scl);
	tree(10,380,scl);
	tree(10,390,scl);



	tree(20,10,scl);
	tree(20,20,scl);
	tree(20,30,scl);
	tree(20,40,scl);
	tree(20,50,scl);
	tree(20,60,scl);
	tree(20,70,scl);
	tree(20,80,scl);
	tree(20,90,scl);

	tree(20,110,scl);
	tree(20,120,scl);
	tree(20,130,scl);
	tree(20,140,scl);
	tree(20,150,scl);
	tree(20,160,scl);
	tree(20,170,scl);
	tree(20,180,scl);
	tree(20,190,scl);

	tree(20,210,scl);
	tree(20,220,scl);
	tree(20,230,scl);
	tree(20,240,scl);
	tree(20,250,scl);
	tree(20,260,scl);
	tree(20,270,scl);
	tree(20,280,scl);
	tree(20,290,scl);

	tree(20,310,scl);
	tree(20,320,scl);
	tree(20,330,scl);
	tree(20,340,scl);
	tree(20,350,scl);
	tree(20,360,scl);
	tree(20,370,scl);
	tree(20,380,scl);
	tree(20,390,scl);

	tree(30,10,scl);
	tree(30,20,scl);
	tree(30,30,scl);
	tree(30,40,scl);
	tree(30,50,scl);
	tree(30,60,scl);
	tree(30,70,scl);
	tree(30,80,scl);
	tree(30,90,scl);

	tree(30,110,scl);
	tree(30,120,scl);
	tree(30,130,scl);
	tree(30,140,scl);
	tree(30,150,scl);
	tree(30,160,scl);
	tree(30,170,scl);
	tree(30,180,scl);
	tree(30,190,scl);

	tree(30,210,scl);
	tree(30,220,scl);
	tree(30,230,scl);
	tree(30,240,scl);
	tree(30,250,scl);
	tree(30,260,scl);
	tree(30,270,scl);
	tree(30,280,scl);
	tree(30,290,scl);

	tree(30,310,scl);
	tree(30,320,scl);
	tree(30,330,scl);
	tree(30,340,scl);
	tree(30,350,scl);
	tree(30,360,scl);
	tree(30,370,scl);
	tree(30,380,scl);
	tree(30,390,scl);

	tree(40,10,scl);
	tree(40,20,scl);
	tree(40,30,scl);
	tree(40,40,scl);
	tree(40,50,scl);
	tree(40,60,scl);
	tree(40,70,scl);
	tree(40,80,scl);
	tree(40,90,scl);

	tree(40,110,scl);
	tree(40,120,scl);
	tree(40,130,scl);
	tree(40,140,scl);
	tree(40,150,scl);
	tree(40,160,scl);
	tree(40,170,scl);
	tree(40,180,scl);
	tree(40,190,scl);

	tree(40,210,scl);
	tree(40,220,scl);
	tree(40,230,scl);
	tree(40,240,scl);
	tree(40,250,scl);
	tree(40,260,scl);
	tree(40,270,scl);
	tree(40,280,scl);
	tree(40,290,scl);

	tree(40,310,scl);
	tree(40,320,scl);
	tree(40,330,scl);
	tree(40,340,scl);
	tree(40,350,scl);
	tree(40,360,scl);
	tree(40,370,scl);
	tree(40,380,scl);
	tree(40,390,scl);

	tree(50,10,scl);
	tree(50,20,scl);
	tree(50,30,scl);
	tree(50,40,scl);
	tree(50,50,scl);
	tree(50,60,scl);
	tree(50,70,scl);
	tree(50,80,scl);
	tree(50,90,scl);

	tree(50,110,scl);
	tree(50,120,scl);
	tree(50,130,scl);
	tree(50,140,scl);
	tree(50,150,scl);
	tree(50,160,scl);
	tree(50,170,scl);
	tree(50,180,scl);
	tree(50,190,scl);

	tree(50,210,scl);
	tree(50,220,scl);
	tree(50,230,scl);
	tree(50,240,scl);
	tree(50,250,scl);
	tree(50,260,scl);
	tree(50,270,scl);
	tree(50,280,scl);
	tree(50,290,scl);

	tree(50,310,scl);
	tree(50,320,scl);
	tree(50,330,scl);
	tree(50,340,scl);
	tree(50,350,scl);
	tree(50,360,scl);
	tree(50,370,scl);
	tree(50,380,scl);
	tree(50,390,scl);

	tree(60,10,scl);
	tree(60,20,scl);
	tree(60,30,scl);
	tree(60,40,scl);
	tree(60,50,scl);
	tree(60,60,scl);
	tree(60,70,scl);
	tree(60,80,scl);
	tree(60,90,scl);

	tree(60,110,scl);
	tree(60,120,scl);
	tree(60,130,scl);
	tree(60,140,scl);
	tree(60,150,scl);
	tree(60,160,scl);
	tree(60,170,scl);
	tree(60,180,scl);
	tree(60,190,scl);

	tree(60,210,scl);
	tree(60,220,scl);
	tree(60,230,scl);
	tree(60,240,scl);
	tree(60,250,scl);
	tree(60,260,scl);
	tree(60,270,scl);
	tree(60,280,scl);
	tree(60,290,scl);

	tree(60,310,scl);
	tree(60,320,scl);
	tree(60,330,scl);
	tree(60,340,scl);
	tree(60,350,scl);
	tree(60,360,scl);
	tree(60,370,scl);
	tree(60,380,scl);
	tree(60,390,scl);

	tree(70,10,scl);
	tree(70,20,scl);
	tree(70,30,scl);
	tree(70,40,scl);
	tree(70,50,scl);
	tree(70,60,scl);
	tree(70,70,scl);
	tree(70,80,scl);
	tree(70,90,scl);

	tree(70,110,scl);
	tree(70,120,scl);
	tree(70,130,scl);
	tree(70,140,scl);
	tree(70,150,scl);
	tree(70,160,scl);
	tree(70,170,scl);
	tree(70,180,scl);
	tree(70,190,scl);

	tree(70,210,scl);
	tree(70,220,scl);
	tree(70,230,scl);
	tree(70,240,scl);
	tree(70,250,scl);
	tree(70,260,scl);
	tree(70,270,scl);
	tree(70,280,scl);
	tree(70,290,scl);

	tree(70,310,scl);
	tree(70,320,scl);
	tree(70,330,scl);
	tree(70,340,scl);
	tree(70,350,scl);
	tree(70,360,scl);
	tree(70,370,scl);
	tree(70,380,scl);
	tree(70,390,scl);

	tree(80,10,scl);
	tree(80,20,scl);
	tree(80,30,scl);
	tree(80,40,scl);
	tree(80,50,scl);
	tree(80,60,scl);
	tree(80,70,scl);
	tree(80,80,scl);
	tree(80,90,scl);

	tree(80,110,scl);
	tree(80,120,scl);
	tree(80,130,scl);
	tree(80,140,scl);
	tree(80,150,scl);
	tree(80,160,scl);
	tree(80,170,scl);
	tree(80,180,scl);
	tree(80,190,scl);

	tree(80,210,scl);
	tree(80,220,scl);
	tree(80,230,scl);
	tree(80,240,scl);
	tree(80,250,scl);
	tree(80,260,scl);
	tree(80,270,scl);
	tree(80,280,scl);
	tree(80,290,scl);

	tree(80,310,scl);
	tree(80,320,scl);
	tree(80,330,scl);
	tree(80,340,scl);
	tree(80,350,scl);
	tree(80,360,scl);
	tree(80,370,scl);
	tree(80,380,scl);
	tree(80,390,scl);

	tree(90,10,scl);
	tree(90,20,scl);
	tree(90,30,scl);
	tree(90,40,scl);
	tree(90,50,scl);
	tree(90,60,scl);
	tree(90,70,scl);
	tree(90,80,scl);
	tree(90,90,scl);

	tree(90,110,scl);
	tree(90,120,scl);
	tree(90,130,scl);
	tree(90,140,scl);
	tree(90,150,scl);
	tree(90,160,scl);
	tree(90,170,scl);
	tree(90,180,scl);
	tree(90,190,scl);

	tree(90,210,scl);
	tree(90,220,scl);
	tree(90,230,scl);
	tree(90,240,scl);
	tree(90,250,scl);
	tree(90,260,scl);
	tree(90,270,scl);
	tree(90,280,scl);
	tree(90,290,scl);

	tree(90,310,scl);
	tree(90,320,scl);
	tree(90,330,scl);
	tree(90,340,scl);
	tree(90,350,scl);
	tree(90,360,scl);
	tree(90,370,scl);
	tree(90,380,scl);
	tree(90,390,scl);

	tree(100,10,scl);
	tree(100,20,scl);
	tree(100,30,scl);
	tree(100,40,scl);
	tree(100,50,scl);
	tree(100,60,scl);
	tree(100,70,scl);
	tree(100,80,scl);
	tree(100,90,scl);

	tree(100,110,scl);
	tree(100,120,scl);
	tree(100,130,scl);
	tree(100,140,scl);
	tree(100,150,scl);
	tree(100,160,scl);
	tree(100,170,scl);
	tree(100,180,scl);
	tree(100,190,scl);

	tree(100,210,scl);
	tree(100,220,scl);
	tree(100,230,scl);
	tree(100,240,scl);
	tree(100,250,scl);
	tree(100,260,scl);
	tree(100,270,scl);
	tree(100,280,scl);
	tree(100,290,scl);

	tree(100,310,scl);
	tree(100,320,scl);
	tree(100,330,scl);
	tree(100,340,scl);
	tree(100,350,scl);
	tree(100,360,scl);
	tree(100,370,scl);
	tree(100,380,scl);
	tree(100,390,scl);

	tree(110,10,scl);
	tree(110,20,scl);
	tree(110,30,scl);
	tree(110,40,scl);
	tree(110,50,scl);
	tree(110,60,scl);
	tree(110,70,scl);
	tree(110,80,scl);
	tree(110,90,scl);

	tree(110,110,scl);
	tree(110,120,scl);
	tree(110,130,scl);
	tree(110,140,scl);
	tree(110,150,scl);
	tree(110,160,scl);
	tree(110,170,scl);
	tree(110,180,scl);
	tree(110,190,scl);

	tree(110,210,scl);
	tree(110,220,scl);
	tree(110,230,scl);
	tree(110,240,scl);
	tree(110,250,scl);
	tree(110,260,scl);
	tree(110,270,scl);
	tree(110,280,scl);
	tree(110,290,scl);

	tree(110,310,scl);
	tree(110,320,scl);
	tree(110,330,scl);
	tree(110,340,scl);
	tree(110,350,scl);
	tree(110,360,scl);
	tree(110,370,scl);
	tree(110,380,scl);
	tree(110,390,scl);

	tree(120,10,scl);
	tree(120,20,scl);
	tree(120,30,scl);
	tree(120,40,scl);
	tree(120,50,scl);
	tree(120,60,scl);
	tree(120,70,scl);
	tree(120,80,scl);
	tree(120,90,scl);

	tree(120,110,scl);
	tree(120,120,scl);
	tree(120,130,scl);
	tree(120,140,scl);
	tree(120,150,scl);
	tree(120,160,scl);
	tree(120,170,scl);
	tree(120,180,scl);
	tree(120,190,scl);

	tree(120,210,scl);
	tree(120,220,scl);
	tree(120,230,scl);
	tree(120,240,scl);
	tree(120,250,scl);
	tree(120,260,scl);
	tree(120,270,scl);
	tree(120,280,scl);
	tree(120,290,scl);

	tree(120,310,scl);
	tree(120,320,scl);
	tree(120,330,scl);
	tree(120,340,scl);
	tree(120,350,scl);
	tree(120,360,scl);
	tree(120,370,scl);
	tree(120,380,scl);
	tree(120,390,scl);

	tree(130,10,scl);
	tree(130,20,scl);
	tree(130,30,scl);
	tree(130,40,scl);
	tree(130,50,scl);
	tree(130,60,scl);
	tree(130,70,scl);
	tree(130,80,scl);
	tree(130,90,scl);

	tree(130,110,scl);
	tree(130,120,scl);
	tree(130,130,scl);
	tree(130,140,scl);
	tree(130,150,scl);
	tree(130,160,scl);
	tree(130,170,scl);
	tree(130,180,scl);
	tree(130,190,scl);

	tree(130,210,scl);
	tree(130,220,scl);
	tree(130,230,scl);
	tree(130,240,scl);
	tree(130,250,scl);
	tree(130,260,scl);
	tree(130,270,scl);
	tree(130,280,scl);
	tree(130,290,scl);

	tree(130,310,scl);
	tree(130,320,scl);
	tree(130,330,scl);
	tree(130,340,scl);
	tree(130,350,scl);
	tree(130,360,scl);
	tree(130,370,scl);
	tree(130,380,scl);
	tree(130,390,scl);

	tree(140,10,scl);
	tree(140,20,scl);
	tree(140,30,scl);
	tree(140,40,scl);
	tree(140,50,scl);
	tree(140,60,scl);
	tree(140,70,scl);
	tree(140,80,scl);
	tree(140,90,scl);

	tree(140,110,scl);
	tree(140,120,scl);
	tree(140,130,scl);
	tree(140,140,scl);
	tree(140,150,scl);
	tree(140,160,scl);
	tree(140,170,scl);
	tree(140,180,scl);
	tree(140,190,scl);

	tree(140,210,scl);
	tree(140,220,scl);
	tree(140,230,scl);
	tree(140,240,scl);
	tree(140,250,scl);
	tree(140,260,scl);
	tree(140,270,scl);
	tree(140,280,scl);
	tree(140,290,scl);

	tree(140,310,scl);
	tree(140,320,scl);
	tree(140,330,scl);
	tree(140,340,scl);
	tree(140,350,scl);
	tree(140,360,scl);
	tree(140,370,scl);
	tree(140,380,scl);
	tree(140,390,scl);

	tree(150,10,scl);
	tree(150,20,scl);
	tree(150,30,scl);
	tree(150,40,scl);
	tree(150,50,scl);
	tree(150,60,scl);
	tree(150,70,scl);
	tree(150,80,scl);
	tree(150,90,scl);

	tree(150,110,scl);
	tree(150,120,scl);
	tree(150,130,scl);
	tree(150,140,scl);
	tree(150,150,scl);
	tree(150,160,scl);
	tree(150,170,scl);
	tree(150,180,scl);
	tree(150,190,scl);

	tree(150,210,scl);
	tree(150,220,scl);
	tree(150,230,scl);
	tree(150,240,scl);
	tree(150,250,scl);
	tree(150,260,scl);
	tree(150,270,scl);
	tree(150,280,scl);
	tree(150,290,scl);

	tree(150,310,scl);
	tree(150,320,scl);
	tree(150,330,scl);
	tree(150,340,scl);
	tree(150,350,scl);
	tree(150,360,scl);
	tree(150,370,scl);
	tree(150,380,scl);
	tree(150,390,scl);

	tree(160,10,scl);
	tree(160,20,scl);
	tree(160,30,scl);
	tree(160,40,scl);
	tree(160,50,scl);
	tree(160,60,scl);
	tree(160,70,scl);
	tree(160,80,scl);
	tree(160,90,scl);

	tree(160,110,scl);
	tree(160,120,scl);
	tree(160,130,scl);
	tree(160,140,scl);
	tree(160,150,scl);
	tree(160,160,scl);
	tree(160,170,scl);
	tree(160,180,scl);
	tree(160,190,scl);

	tree(160,210,scl);
	tree(160,220,scl);
	tree(160,230,scl);
	tree(160,240,scl);
	tree(160,250,scl);
	tree(160,260,scl);
	tree(160,270,scl);
	tree(160,280,scl);
	tree(160,290,scl);

	tree(160,310,scl);
	tree(160,320,scl);
	tree(160,330,scl);
	tree(160,340,scl);
	tree(160,350,scl);
	tree(160,360,scl);
	tree(160,370,scl);
	tree(160,380,scl);
	tree(160,390,scl);

	tree(170,10,scl);
	tree(170,20,scl);
	tree(170,30,scl);
	tree(170,40,scl);
	tree(170,50,scl);
	tree(170,60,scl);
	tree(170,70,scl);
	tree(170,80,scl);
	tree(170,90,scl);

	tree(170,110,scl);
	tree(170,120,scl);
	tree(170,130,scl);
	tree(170,140,scl);
	tree(170,150,scl);
	tree(170,160,scl);
	tree(170,170,scl);
	tree(170,180,scl);
	tree(170,190,scl);

	tree(170,210,scl);
	tree(170,220,scl);
	tree(170,230,scl);
	tree(170,240,scl);
	tree(170,250,scl);
	tree(170,260,scl);
	tree(170,270,scl);
	tree(170,280,scl);
	tree(170,290,scl);

	tree(170,310,scl);
	tree(170,320,scl);
	tree(170,330,scl);
	tree(170,340,scl);
	tree(170,350,scl);
	tree(170,360,scl);
	tree(170,370,scl);
	tree(170,380,scl);
	tree(170,390,scl);

	tree(180,10,scl);
	tree(180,20,scl);
	tree(180,30,scl);
	tree(180,40,scl);
	tree(180,50,scl);
	tree(180,60,scl);
	tree(180,70,scl);
	tree(180,80,scl);
	tree(180,90,scl);

	tree(180,110,scl);
	tree(180,120,scl);
	tree(180,130,scl);
	tree(180,140,scl);
	tree(180,150,scl);
	tree(180,160,scl);
	tree(180,170,scl);
	tree(180,180,scl);
	tree(180,190,scl);

	tree(180,210,scl);
	tree(180,220,scl);
	tree(180,230,scl);
	tree(180,240,scl);
	tree(180,250,scl);
	tree(180,260,scl);
	tree(180,270,scl);
	tree(180,280,scl);
	tree(180,290,scl);

	tree(180,310,scl);
	tree(180,320,scl);
	tree(180,330,scl);
	tree(180,340,scl);
	tree(180,350,scl);
	tree(180,360,scl);
	tree(180,370,scl);
	tree(180,380,scl);
	tree(180,390,scl);

	tree(190,10,scl);
	tree(190,20,scl);
	tree(190,30,scl);
	tree(190,40,scl);
	tree(190,50,scl);
	tree(190,60,scl);
	tree(190,70,scl);
	tree(190,80,scl);
	tree(190,90,scl);

	tree(190,110,scl);
	tree(190,120,scl);
	tree(190,130,scl);
	tree(190,140,scl);
	tree(190,150,scl);
	tree(190,160,scl);
	tree(190,170,scl);
	tree(190,180,scl);
	tree(190,190,scl);
	
	tree(190,210,scl);
	tree(190,220,scl);
	tree(190,230,scl);
	tree(190,240,scl);
	tree(190,250,scl);
	tree(190,260,scl);
	tree(190,270,scl);
	tree(190,280,scl);
	tree(190,290,scl);

	tree(190,310,scl);
	tree(190,320,scl);
	tree(190,330,scl);
	tree(190,340,scl);
	tree(190,350,scl);
	tree(190,360,scl);
	tree(190,370,scl);
	tree(190,380,scl);
	tree(190,390,scl);

	tree(200,10,scl);
	tree(200,20,scl);
	tree(200,30,scl);
	tree(200,40,scl);
	tree(200,50,scl);
	tree(200,60,scl);
	tree(200,70,scl);
	tree(200,80,scl);
	tree(200,90,scl);

	tree(200,110,scl);
	tree(200,120,scl);
	tree(200,130,scl);
	tree(200,140,scl);
	tree(200,150,scl);
	tree(200,160,scl);
	tree(200,170,scl);
	tree(200,180,scl);
	tree(200,190,scl);

	tree(200,210,scl);
	tree(200,220,scl);
	tree(200,230,scl);
	tree(200,240,scl);
	tree(200,250,scl);
	tree(200,260,scl);
	tree(200,270,scl);
	tree(200,280,scl);
	tree(200,290,scl);

	tree(200,310,scl);
	tree(200,320,scl);
	tree(200,330,scl);
	tree(200,340,scl);
	tree(200,350,scl);
	tree(200,360,scl);
	tree(200,370,scl);
	tree(200,380,scl);
	tree(200,390,scl);

	tree(210,10,scl);
	tree(210,20,scl);
	tree(210,30,scl);
	tree(210,40,scl);
	tree(210,50,scl);
	tree(210,60,scl);
	tree(210,70,scl);
	tree(210,80,scl);
	tree(210,90,scl);

	tree(210,110,scl);
	tree(210,120,scl);
	tree(210,130,scl);
	tree(210,140,scl);
	tree(210,150,scl);
	tree(210,160,scl);
	tree(210,170,scl);
	tree(210,180,scl);
	tree(210,190,scl);

	tree(210,210,scl);
	tree(210,220,scl);
	tree(210,230,scl);
	tree(210,240,scl);
	tree(210,250,scl);
	tree(210,260,scl);
	tree(210,270,scl);
	tree(210,280,scl);
	tree(210,290,scl);

	tree(210,310,scl);
	tree(210,320,scl);
	tree(210,330,scl);
	tree(210,340,scl);
	tree(210,350,scl);
	tree(210,360,scl);
	tree(210,370,scl);
	tree(210,380,scl);
	tree(210,390,scl);

	tree(220,10,scl);
	tree(220,20,scl);
	tree(220,30,scl);
	tree(220,40,scl);
	tree(220,50,scl);
	tree(220,60,scl);
	tree(220,70,scl);
	tree(220,80,scl);
	tree(220,90,scl);

	tree(220,110,scl);
	tree(220,120,scl);
	tree(220,130,scl);
	tree(220,140,scl);
	tree(220,150,scl);
	tree(220,160,scl);
	tree(220,170,scl);
	tree(220,180,scl);
	tree(220,190,scl);

	tree(220,210,scl);
	tree(220,220,scl);
	tree(220,230,scl);
	tree(220,240,scl);
	tree(220,250,scl);
	tree(220,260,scl);
	tree(220,270,scl);
	tree(220,280,scl);
	tree(220,290,scl);

	tree(220,310,scl);
	tree(220,320,scl);
	tree(220,330,scl);
	tree(220,340,scl);
	tree(220,350,scl);
	tree(220,360,scl);
	tree(220,370,scl);
	tree(220,380,scl);
	tree(220,390,scl);

	tree(230,10,scl);
	tree(230,20,scl);
	tree(230,30,scl);
	tree(230,40,scl);
	tree(230,50,scl);
	tree(230,60,scl);
	tree(230,70,scl);
	tree(230,80,scl);
	tree(230,90,scl);

	tree(240,10,scl);
	tree(240,20,scl);
	tree(240,30,scl);
	tree(240,40,scl);
	tree(240,50,scl);
	tree(240,60,scl);
	tree(240,70,scl);
	tree(240,80,scl);
	tree(240,90,scl);

	tree(240,110,scl);
	tree(240,120,scl);
	tree(240,130,scl);
	tree(240,140,scl);
	tree(240,150,scl);
	tree(240,160,scl);
	tree(240,170,scl);
	tree(240,180,scl);
	tree(240,190,scl);

	tree(240,210,scl);
	tree(240,220,scl);
	tree(240,230,scl);
	tree(240,240,scl);
	tree(240,250,scl);
	tree(240,260,scl);
	tree(240,270,scl);
	tree(240,280,scl);
	tree(240,290,scl);

	tree(240,310,scl);
	tree(240,320,scl);
	tree(240,330,scl);
	tree(240,340,scl);
	tree(240,350,scl);
	tree(240,360,scl);
	tree(240,370,scl);
	tree(240,380,scl);
	tree(240,390,scl);

	tree(250,10,scl);
	tree(250,20,scl);
	tree(250,30,scl);
	tree(250,40,scl);
	tree(250,50,scl);
	tree(250,60,scl);
	tree(250,70,scl);
	tree(250,80,scl);
	tree(250,90,scl);

	tree(250,110,scl);
	tree(250,120,scl);
	tree(250,130,scl);
	tree(250,140,scl);
	tree(250,150,scl);
	tree(250,160,scl);
	tree(250,170,scl);
	tree(250,180,scl);
	tree(250,190,scl);

	tree(250,210,scl);
	tree(250,220,scl);
	tree(250,230,scl);
	tree(250,240,scl);
	tree(250,250,scl);
	tree(250,260,scl);
	tree(250,270,scl);
	tree(250,280,scl);
	tree(250,290,scl);

	tree(250,310,scl);
	tree(250,320,scl);
	tree(250,330,scl);
	tree(250,340,scl);
	tree(250,350,scl);
	tree(250,360,scl);
	tree(250,370,scl);
	tree(250,380,scl);
	tree(250,390,scl);

	tree(260,10,scl);
	tree(260,20,scl);
	tree(260,30,scl);
	tree(260,40,scl);
	tree(260,50,scl);
	tree(260,60,scl);
	tree(260,70,scl);
	tree(260,80,scl);
	tree(260,90,scl);

	tree(260,110,scl);
	tree(260,120,scl);
	tree(260,130,scl);
	tree(260,140,scl);
	tree(260,150,scl);
	tree(260,160,scl);
	tree(260,170,scl);
	tree(260,180,scl);
	tree(260,190,scl);

	tree(260,210,scl);
	tree(260,220,scl);
	tree(260,230,scl);
	tree(260,240,scl);
	tree(260,250,scl);
	tree(260,260,scl);
	tree(260,270,scl);
	tree(260,280,scl);
	tree(260,290,scl);

	tree(260,310,scl);
	tree(260,320,scl);
	tree(260,330,scl);
	tree(260,340,scl);
	tree(260,350,scl);
	tree(260,360,scl);
	tree(260,370,scl);
	tree(260,380,scl);
	tree(260,390,scl);

	tree(270,10,scl);
	tree(270,20,scl);
	tree(270,30,scl);
	tree(270,40,scl);
	tree(270,50,scl);
	tree(270,60,scl);
	tree(270,70,scl);
	tree(270,80,scl);
	tree(270,90,scl);

	tree(270,110,scl);
	tree(270,120,scl);
	tree(270,130,scl);
	tree(270,140,scl);
	tree(270,150,scl);
	tree(270,160,scl);
	tree(270,170,scl);
	tree(270,180,scl);
	tree(270,190,scl);

	tree(270,210,scl);
	tree(270,220,scl);
	tree(270,230,scl);
	tree(270,240,scl);
	tree(270,250,scl);
	tree(270,260,scl);
	tree(270,270,scl);
	tree(270,280,scl);
	tree(270,290,scl);

	tree(270,310,scl);
	tree(270,320,scl);
	tree(270,330,scl);
	tree(270,340,scl);
	tree(270,350,scl);
	tree(270,360,scl);
	tree(270,370,scl);
	tree(270,380,scl);
	tree(270,390,scl);

	tree(280,10,scl);
	tree(280,20,scl);
	tree(280,30,scl);
	tree(280,40,scl);
	tree(280,50,scl);
	tree(280,60,scl);
	tree(280,70,scl);
	tree(280,80,scl);
	tree(280,90,scl);

	tree(280,110,scl);
	tree(280,120,scl);
	tree(280,130,scl);
	tree(280,140,scl);
	tree(280,150,scl);
	tree(280,160,scl);
	tree(280,170,scl);
	tree(280,180,scl);
	tree(280,190,scl);

	tree(280,210,scl);
	tree(280,220,scl);
	tree(280,230,scl);
	tree(280,240,scl);
	tree(280,250,scl);
	tree(280,260,scl);
	tree(280,270,scl);
	tree(280,280,scl);
	tree(280,290,scl);

	tree(280,310,scl);
	tree(280,320,scl);
	tree(280,330,scl);
	tree(280,340,scl);
	tree(280,350,scl);
	tree(280,360,scl);
	tree(280,370,scl);
	tree(280,380,scl);
	tree(280,390,scl);

	tree(290,10,scl);
	tree(290,20,scl);
	tree(290,30,scl);
	tree(290,40,scl);
	tree(290,50,scl);
	tree(290,60,scl);
	tree(290,70,scl);
	tree(290,80,scl);
	tree(290,90,scl);

	tree(290,110,scl);
	tree(290,120,scl);
	tree(290,130,scl);
	tree(290,140,scl);
	tree(290,150,scl);
	tree(290,160,scl);
	tree(290,170,scl);
	tree(290,180,scl);
	tree(290,190,scl);

	tree(290,210,scl);
	tree(290,220,scl);
	tree(290,230,scl);
	tree(290,240,scl);
	tree(290,250,scl);
	tree(290,260,scl);
	tree(290,270,scl);
	tree(290,280,scl);
	tree(290,290,scl);

	tree(290,310,scl);
	tree(290,320,scl);
	tree(290,330,scl);
	tree(290,340,scl);
	tree(290,350,scl);
	tree(290,360,scl);
	tree(290,370,scl);
	tree(290,380,scl);
	tree(290,390,scl);

	tree(300,10,scl);
	tree(300,20,scl);
	tree(300,30,scl);
	tree(300,40,scl);
	tree(300,50,scl);
	tree(300,60,scl);
	tree(300,70,scl);
	tree(300,80,scl);
	tree(300,90,scl);

	tree(300,110,scl);
	tree(300,120,scl);
	tree(300,130,scl);
	tree(300,140,scl);
	tree(300,150,scl);
	tree(300,160,scl);
	tree(300,170,scl);
	tree(300,180,scl);
	tree(300,190,scl);

	tree(300,210,scl);
	tree(300,220,scl);
	tree(300,230,scl);
	tree(300,240,scl);
	tree(300,250,scl);
	tree(300,260,scl);
	tree(300,270,scl);
	tree(300,280,scl);
	tree(300,290,scl);

	tree(300,310,scl);
	tree(300,320,scl);
	tree(300,330,scl);
	tree(300,340,scl);
	tree(300,350,scl);
	tree(300,360,scl);
	tree(300,370,scl);
	tree(300,380,scl);
	tree(300,390,scl);

	tree(310,10,scl);
	tree(310,20,scl);
	tree(310,30,scl);
	tree(310,40,scl);
	tree(310,50,scl);
	tree(310,60,scl);
	tree(310,70,scl);
	tree(310,80,scl);
	tree(310,90,scl);

	tree(310,110,scl);
	tree(310,120,scl);
	tree(310,130,scl);
	tree(310,140,scl);
	tree(310,150,scl);
	tree(310,160,scl);
	tree(310,170,scl);
	tree(310,180,scl);
	tree(310,190,scl);

	tree(310,210,scl);
	tree(310,220,scl);
	tree(310,230,scl);
	tree(310,240,scl);
	tree(310,250,scl);
	tree(310,260,scl);
	tree(310,270,scl);
	tree(310,280,scl);
	tree(310,290,scl);

	tree(310,310,scl);
	tree(310,320,scl);
	tree(310,330,scl);
	tree(310,340,scl);
	tree(310,350,scl);
	tree(310,360,scl);
	tree(310,370,scl);
	tree(310,380,scl);
	tree(310,390,scl);

	tree(320,10,scl);
	tree(320,20,scl);
	tree(320,30,scl);
	tree(320,40,scl);
	tree(320,50,scl);
	tree(320,60,scl);
	tree(320,70,scl);
	tree(320,80,scl);
	tree(320,90,scl);

	tree(320,110,scl);
	tree(320,120,scl);
	tree(320,130,scl);
	tree(320,140,scl);
	tree(320,150,scl);
	tree(320,160,scl);
	tree(320,170,scl);
	tree(320,180,scl);
	tree(320,190,scl);

	tree(320,210,scl);
	tree(320,220,scl);
	tree(320,230,scl);
	tree(320,240,scl);
	tree(320,250,scl);
	tree(320,260,scl);
	tree(320,270,scl);
	tree(320,280,scl);
	tree(320,290,scl);

	tree(320,310,scl);
	tree(320,320,scl);
	tree(320,330,scl);
	tree(320,340,scl);
	tree(320,350,scl);
	tree(320,360,scl);
	tree(320,370,scl);
	tree(320,380,scl);
	tree(320,390,scl);

	tree(330,10,scl);
	tree(330,20,scl);
	tree(330,30,scl);
	tree(330,40,scl);
	tree(330,50,scl);
	tree(330,60,scl);
	tree(330,70,scl);
	tree(330,80,scl);
	tree(330,90,scl);

	tree(330,110,scl);
	tree(330,120,scl);
	tree(330,130,scl);
	tree(330,140,scl);
	tree(330,150,scl);
	tree(330,160,scl);
	tree(330,170,scl);
	tree(330,180,scl);
	tree(330,190,scl);

	tree(330,210,scl);
	tree(330,220,scl);
	tree(330,230,scl);
	tree(330,240,scl);
	tree(330,250,scl);
	tree(330,260,scl);
	tree(330,270,scl);
	tree(330,280,scl);
	tree(330,290,scl);

	tree(330,310,scl);
	tree(330,320,scl);
	tree(330,330,scl);
	tree(330,340,scl);
	tree(330,350,scl);
	tree(330,360,scl);
	tree(330,370,scl);
	tree(330,380,scl);
	tree(330,390,scl);

	tree(340,10,scl);
	tree(340,20,scl);
	tree(340,30,scl);
	tree(340,40,scl);
	tree(340,50,scl);
	tree(340,60,scl);
	tree(340,70,scl);
	tree(340,80,scl);
	tree(340,90,scl);

	tree(340,110,scl);
	tree(340,120,scl);
	tree(340,130,scl);
	tree(340,140,scl);
	tree(340,150,scl);
	tree(340,160,scl);
	tree(340,170,scl);
	tree(340,180,scl);
	tree(340,190,scl);

	tree(340,210,scl);
	tree(340,220,scl);
	tree(340,230,scl);
	tree(340,240,scl);
	tree(340,250,scl);
	tree(340,260,scl);
	tree(340,270,scl);
	tree(340,280,scl);
	tree(340,290,scl);

	tree(340,310,scl);
	tree(340,320,scl);
	tree(340,330,scl);
	tree(340,340,scl);
	tree(340,350,scl);
	tree(340,360,scl);
	tree(340,370,scl);
	tree(340,380,scl);
	tree(340,390,scl);

	tree(350,10,scl);
	tree(350,20,scl);
	tree(350,30,scl);
	tree(350,40,scl);
	tree(350,50,scl);
	tree(350,60,scl);
	tree(350,70,scl);
	tree(350,80,scl);
	tree(350,90,scl);

	tree(350,110,scl);
	tree(350,120,scl);
	tree(350,130,scl);
	tree(350,140,scl);
	tree(350,150,scl);
	tree(350,160,scl);
	tree(350,170,scl);
	tree(350,180,scl);
	tree(350,190,scl);

	tree(350,210,scl);
	tree(350,220,scl);
	tree(350,230,scl);
	tree(350,240,scl);
	tree(350,250,scl);
	tree(350,260,scl);
	tree(350,270,scl);
	tree(350,280,scl);
	tree(350,290,scl);

	tree(350,310,scl);
	tree(350,320,scl);
	tree(350,330,scl);
	tree(350,340,scl);
	tree(350,350,scl);
	tree(350,360,scl);
	tree(350,370,scl);
	tree(350,380,scl);
	tree(350,390,scl);

	tree(360,10,scl);
	tree(360,20,scl);
	tree(360,30,scl);
	tree(360,40,scl);
	tree(360,50,scl);
	tree(360,60,scl);
	tree(360,70,scl);
	tree(360,80,scl);
	tree(360,90,scl);

	tree(360,110,scl);
	tree(360,120,scl);
	tree(360,130,scl);
	tree(360,140,scl);
	tree(360,150,scl);
	tree(360,160,scl);
	tree(360,170,scl);
	tree(360,180,scl);
	tree(360,190,scl);

	tree(360,210,scl);
	tree(360,220,scl);
	tree(360,230,scl);
	tree(360,240,scl);
	tree(360,250,scl);
	tree(360,260,scl);
	tree(360,270,scl);
	tree(360,280,scl);
	tree(360,290,scl);

	tree(360,310,scl);
	tree(360,320,scl);
	tree(360,330,scl);
	tree(360,340,scl);
	tree(360,350,scl);
	tree(360,360,scl);
	tree(360,370,scl);
	tree(360,380,scl);
	tree(360,390,scl);

	tree(370,10,scl);
	tree(370,20,scl);
	tree(370,30,scl);
	tree(370,40,scl);
	tree(370,50,scl);
	tree(370,60,scl);
	tree(370,70,scl);
	tree(370,80,scl);
	tree(370,90,scl);

	tree(370,110,scl);
	tree(370,120,scl);
	tree(370,130,scl);
	tree(370,140,scl);
	tree(370,150,scl);
	tree(370,160,scl);
	tree(370,170,scl);
	tree(370,180,scl);
	tree(370,190,scl);

	tree(370,210,scl);
	tree(370,220,scl);
	tree(370,230,scl);
	tree(370,240,scl);
	tree(370,250,scl);
	tree(370,260,scl);
	tree(370,270,scl);
	tree(370,280,scl);
	tree(370,290,scl);

	tree(370,310,scl);
	tree(370,320,scl);
	tree(370,330,scl);
	tree(370,340,scl);
	tree(370,350,scl);
	tree(370,360,scl);
	tree(370,370,scl);
	tree(370,380,scl);
	tree(370,390,scl);

	tree(380,10,scl);
	tree(380,20,scl);
	tree(380,30,scl);
	tree(380,40,scl);
	tree(380,50,scl);
	tree(380,60,scl);
	tree(380,70,scl);
	tree(380,80,scl);
	tree(380,90,scl);

	tree(380,110,scl);
	tree(380,120,scl);
	tree(380,130,scl);
	tree(380,140,scl);
	tree(380,150,scl);
	tree(380,160,scl);
	tree(380,170,scl);
	tree(380,180,scl);
	tree(380,190,scl);

	tree(380,210,scl);
	tree(380,220,scl);
	tree(380,230,scl);
	tree(380,240,scl);
	tree(380,250,scl);
	tree(380,260,scl);
	tree(380,270,scl);
	tree(380,280,scl);
	tree(380,290,scl);

	tree(380,310,scl);
	tree(380,320,scl);
	tree(380,330,scl);
	tree(380,340,scl);
	tree(380,350,scl);
	tree(380,360,scl);
	tree(380,370,scl);
	tree(380,380,scl);
	tree(380,390,scl);

	tree(390,10,scl);
	tree(390,20,scl);
	tree(390,30,scl);
	tree(390,40,scl);
	tree(390,50,scl);
	tree(390,60,scl);
	tree(390,70,scl);
	tree(390,80,scl);
	tree(390,90,scl);

	tree(390,110,scl);
	tree(390,120,scl);
	tree(390,130,scl);
	tree(390,140,scl);
	tree(390,150,scl);
	tree(390,160,scl);
	tree(390,170,scl);
	tree(390,180,scl);
	tree(390,190,scl);

	tree(390,210,scl);
	tree(390,220,scl);
	tree(390,230,scl);
	tree(390,240,scl);
	tree(390,250,scl);
	tree(390,260,scl);
	tree(390,270,scl);
	tree(390,280,scl);
	tree(390,290,scl);

	tree(390,310,scl);
	tree(390,320,scl);
	tree(390,330,scl);
	tree(390,340,scl);
	tree(390,350,scl);
	tree(390,360,scl);
	tree(390,370,scl);
	tree(390,380,scl);
	tree(390,390,scl);

	tree(400,10,scl);
	tree(400,20,scl);
	tree(400,30,scl);
	tree(400,40,scl);
	tree(400,50,scl);
	tree(400,60,scl);
	tree(400,70,scl);
	tree(400,80,scl);
	tree(400,90,scl);

	tree(400,110,scl);
	tree(400,120,scl);
	tree(400,130,scl);
	tree(400,140,scl);
	tree(400,150,scl);
	tree(400,160,scl);
	tree(400,170,scl);
	tree(400,180,scl);
	tree(400,190,scl);

	tree(400,210,scl);
	tree(400,220,scl);
	tree(400,230,scl);
	tree(400,240,scl);
	tree(400,250,scl);
	tree(400,260,scl);
	tree(400,270,scl);
	tree(400,280,scl);
	tree(400,290,scl);

	tree(400,310,scl);
	tree(400,320,scl);
	tree(400,330,scl);
	tree(400,340,scl);
	tree(400,350,scl);
	tree(400,360,scl);
	tree(400,370,scl);
	tree(400,380,scl);
	tree(400,390,scl);



	tree(410,10,scl);
	tree(410,20,scl);
	tree(410,30,scl);
	tree(410,40,scl);
	tree(410,50,scl);
	tree(410,60,scl);
	tree(410,70,scl);
	tree(410,80,scl);
	tree(410,90,scl);

	tree(410,110,scl);
	tree(410,120,scl);
	tree(410,130,scl);
	tree(410,140,scl);
	tree(410,150,scl);
	tree(410,160,scl);
	tree(410,170,scl);
	tree(410,180,scl);
	tree(410,190,scl);

	tree(410,210,scl);
	tree(410,220,scl);
	tree(410,230,scl);
	tree(410,240,scl);
	tree(410,250,scl);
	tree(410,260,scl);
	tree(410,270,scl);
	tree(410,280,scl);
	tree(410,290,scl);

	tree(410,310,scl);
	tree(410,320,scl);
	tree(410,330,scl);
	tree(410,340,scl);
	tree(410,350,scl);
	tree(410,360,scl);
	tree(410,370,scl);
	tree(410,380,scl);
	tree(410,390,scl);

	tree(420,10,scl);
	tree(420,20,scl);
	tree(420,30,scl);
	tree(420,40,scl);
	tree(420,50,scl);
	tree(420,60,scl);
	tree(420,70,scl);
	tree(420,80,scl);
	tree(420,90,scl);

	tree(420,110,scl);
	tree(420,120,scl);
	tree(420,130,scl);
	tree(420,140,scl);
	tree(420,150,scl);
	tree(420,160,scl);
	tree(420,170,scl);
	tree(420,180,scl);
	tree(420,190,scl);

    tree(420,210,scl);
	tree(420,220,scl);
	tree(420,230,scl);
	tree(420,240,scl);
	tree(420,250,scl);
	tree(420,260,scl);
	tree(420,270,scl);
	tree(420,280,scl);
	tree(420,290,scl);

	tree(420,310,scl);
	tree(420,320,scl);
	tree(420,330,scl);
	tree(420,340,scl);
	tree(420,350,scl);
	tree(420,360,scl);
	tree(420,370,scl);
	tree(420,380,scl);
	tree(420,390,scl);



	tree(430,10,scl);
	tree(430,20,scl);
	tree(430,30,scl);
	tree(430,40,scl);
	tree(430,50,scl);
	tree(430,60,scl);
	tree(430,70,scl);
	tree(430,80,scl);
	tree(430,90,scl);

	tree(430,110,scl);
	tree(430,120,scl);
	tree(430,130,scl);
	tree(430,140,scl);
	tree(430,150,scl);
	tree(430,160,scl);
	tree(430,170,scl);
	tree(430,180,scl);
	tree(430,190,scl);

	tree(430,210,scl);
	tree(430,220,scl);
	tree(430,230,scl);
	tree(430,240,scl);
	tree(430,250,scl);
	tree(430,260,scl);
	tree(430,270,scl);
	tree(430,280,scl);
	tree(430,290,scl);

	tree(430,310,scl);
	tree(430,320,scl);
	tree(430,330,scl);
	tree(430,340,scl);
	tree(430,350,scl);
	tree(430,360,scl);
	tree(430,370,scl);
	tree(430,380,scl);
	tree(430,390,scl);

	tree(440,10,scl);
	tree(440,20,scl);
	tree(440,30,scl);
	tree(440,40,scl);
	tree(440,50,scl);
	tree(440,60,scl);
	tree(440,70,scl);
	tree(440,80,scl);
	tree(440,90,scl);

	tree(440,110,scl);
	tree(440,120,scl);
	tree(440,130,scl);
	tree(440,140,scl);
	tree(440,150,scl);
	tree(440,160,scl);
	tree(440,170,scl);
	tree(440,180,scl);
	tree(440,190,scl);

	tree(440,210,scl);
	tree(440,220,scl);
	tree(440,230,scl);
	tree(440,240,scl);
	tree(440,250,scl);
	tree(440,260,scl);
	tree(440,270,scl);
	tree(440,280,scl);
	tree(440,290,scl);

	tree(440,310,scl);
	tree(440,320,scl);
	tree(440,330,scl);
	tree(440,340,scl);
	tree(440,350,scl);
	tree(440,360,scl);
	tree(440,370,scl);
	tree(440,380,scl);
	tree(440,390,scl);

	tree(450,10,scl);
	tree(450,20,scl);
	tree(450,30,scl);
	tree(450,40,scl);
	tree(450,50,scl);
	tree(450,60,scl);
	tree(450,70,scl);
	tree(450,80,scl);
	tree(450,90,scl);

	tree(450,110,scl);
	tree(450,120,scl);
	tree(450,130,scl);
	tree(450,140,scl);
	tree(450,150,scl);
	tree(450,160,scl);
	tree(450,170,scl);
	tree(450,180,scl);
	tree(450,190,scl);

	tree(450,210,scl);
	tree(450,220,scl);
	tree(450,230,scl);
	tree(450,240,scl);
	tree(450,250,scl);
	tree(450,260,scl);
	tree(450,270,scl);
	tree(450,280,scl);
	tree(450,290,scl);

	tree(450,310,scl);
	tree(450,320,scl);
	tree(450,330,scl);
	tree(450,340,scl);
	tree(450,350,scl);
	tree(450,360,scl);
	tree(450,370,scl);
	tree(450,380,scl);
	tree(450,390,scl);

	tree(460,10,scl);
	tree(460,20,scl);
	tree(460,30,scl);
	tree(460,40,scl);
	tree(460,50,scl);
	tree(460,60,scl);
	tree(460,70,scl);
	tree(460,80,scl);
	tree(460,90,scl);

	tree(460,110,scl);
	tree(460,120,scl);
	tree(460,130,scl);
	tree(460,140,scl);
	tree(460,150,scl);
	tree(460,160,scl);
	tree(460,170,scl);
	tree(460,180,scl);
	tree(460,190,scl);

	tree(460,210,scl);
	tree(460,220,scl);
	tree(460,230,scl);
	tree(460,240,scl);
	tree(460,250,scl);
	tree(460,260,scl);
	tree(460,270,scl);
	tree(460,280,scl);
	tree(460,290,scl);

	tree(460,310,scl);
	tree(460,320,scl);
	tree(460,330,scl);
	tree(460,340,scl);
	tree(460,350,scl);
	tree(460,360,scl);
	tree(460,370,scl);
	tree(460,380,scl);
	tree(460,390,scl);

	tree(470,10,scl);
	tree(470,20,scl);
	tree(470,30,scl);
	tree(470,40,scl);
	tree(470,50,scl);
	tree(470,60,scl);
	tree(470,70,scl);
	tree(470,80,scl);
	tree(470,90,scl);

	tree(470,110,scl);
	tree(470,120,scl);
	tree(470,130,scl);
	tree(470,140,scl);
	tree(470,150,scl);
	tree(470,160,scl);
	tree(470,170,scl);
	tree(470,180,scl);
	tree(470,190,scl);

	tree(470,210,scl);
	tree(470,220,scl);
	tree(470,230,scl);
	tree(470,240,scl);
	tree(470,250,scl);
	tree(470,260,scl);
	tree(470,270,scl);
	tree(470,280,scl);
	tree(470,290,scl);

	tree(470,310,scl);
	tree(470,320,scl);
	tree(470,330,scl);
	tree(470,340,scl);
	tree(470,350,scl);
	tree(470,360,scl);
	tree(470,370,scl);
	tree(470,380,scl);
	tree(470,390,scl);

	
	tree(490,10,scl);
	tree(490,20,scl);
	tree(490,30,scl);
	tree(490,40,scl);
	tree(490,50,scl);
	tree(490,60,scl);
	tree(490,70,scl);
	tree(490,80,scl);
	tree(490,90,scl);

	tree(490,110,scl);
	tree(490,120,scl);
	tree(490,130,scl);
	tree(490,140,scl);
	tree(490,150,scl);
	tree(490,160,scl);
	tree(490,170,scl);
	tree(490,180,scl);
	tree(490,190,scl);

	tree(490,210,scl);
	tree(490,220,scl);
	tree(490,230,scl);
	tree(490,240,scl);
	tree(490,250,scl);
	tree(490,260,scl);
	tree(490,270,scl);
	tree(490,280,scl);
	tree(490,290,scl);

	tree(490,310,scl);
	tree(490,320,scl);
	tree(490,330,scl);
	tree(490,340,scl);
	tree(490,350,scl);
	tree(490,360,scl);
	tree(490,370,scl);
	tree(490,380,scl);
	tree(490,390,scl);

	tree(500,10,scl);
	tree(500,20,scl);
	tree(500,30,scl);
	tree(500,40,scl);
	tree(500,50,scl);
	tree(500,60,scl);
	tree(500,70,scl);
	tree(500,80,scl);
	tree(500,90,scl);

	tree(500,110,scl);
	tree(500,120,scl);
	tree(500,130,scl);
	tree(500,140,scl);
	tree(500,150,scl);
	tree(500,160,scl);
	tree(500,170,scl);
	tree(500,180,scl);
	tree(500,190,scl);

	tree(500,210,scl);
	tree(500,220,scl);
	tree(500,230,scl);
	tree(500,240,scl);
	tree(500,250,scl);
	tree(500,260,scl);
	tree(500,270,scl);
	tree(500,280,scl);
	tree(500,290,scl);

	tree(500,310,scl);
	tree(500,320,scl);
	tree(500,330,scl);
	tree(500,340,scl);
	tree(500,350,scl);
	tree(500,360,scl);
	tree(500,370,scl);
	tree(500,380,scl);
	tree(500,390,scl);

	tree(510,10,scl);
	tree(510,20,scl);
	tree(510,30,scl);
	tree(510,40,scl);
	tree(510,50,scl);
	tree(510,60,scl);
	tree(510,70,scl);
	tree(510,80,scl);
	tree(510,90,scl);

	tree(510,110,scl);
	tree(510,120,scl);
	tree(510,130,scl);
	tree(510,140,scl);
	tree(510,150,scl);
	tree(510,160,scl);
	tree(510,170,scl);
	tree(510,180,scl);
	tree(510,190,scl);

	tree(510,210,scl);
	tree(510,220,scl);
	tree(510,230,scl);
	tree(510,240,scl);
	tree(510,250,scl);
	tree(510,260,scl);
	tree(510,270,scl);
	tree(510,280,scl);
	tree(510,290,scl);

	tree(510,310,scl);
	tree(510,320,scl);
	tree(510,330,scl);
	tree(510,340,scl);
	tree(510,350,scl);
	tree(510,360,scl);
	tree(510,370,scl);
	tree(510,380,scl);
	tree(510,390,scl);

	tree(520,10,scl);
	tree(520,20,scl);
	tree(520,30,scl);
	tree(520,40,scl);
	tree(520,50,scl);
	tree(520,60,scl);
	tree(520,70,scl);
	tree(520,80,scl);
	tree(520,90,scl);

	tree(520,110,scl);
	tree(520,120,scl);
	tree(520,130,scl);
	tree(520,140,scl);
	tree(520,150,scl);
	tree(520,160,scl);
	tree(520,170,scl);
	tree(520,180,scl);
	tree(520,190,scl);
	
	tree(520,210,scl);
	tree(520,220,scl);
	tree(520,230,scl);
	tree(520,240,scl);
	tree(520,250,scl);
	tree(520,260,scl);
	tree(520,270,scl);
	tree(520,280,scl);
	tree(520,290,scl);

	tree(520,310,scl);
	tree(520,320,scl);
	tree(520,330,scl);
	tree(520,340,scl);
	tree(520,350,scl);
	tree(520,360,scl);
	tree(520,370,scl);
	tree(520,380,scl);
	tree(520,390,scl);

	tree(530,10,scl);
	tree(530,20,scl);
	tree(530,30,scl);
	tree(530,40,scl);
	tree(530,50,scl);
	tree(530,60,scl);
	tree(530,70,scl);
	tree(530,80,scl);
	tree(530,90,scl);

	tree(530,110,scl);
	tree(530,120,scl);
	tree(530,130,scl);
	tree(530,140,scl);
	tree(530,150,scl);
	tree(530,160,scl);
	tree(530,170,scl);
	tree(530,180,scl);
	tree(530,190,scl);

	tree(530,210,scl);
	tree(530,220,scl);
	tree(530,230,scl);
	tree(530,240,scl);
	tree(530,250,scl);
	tree(530,260,scl);
	tree(530,270,scl);
	tree(530,280,scl);
	tree(530,290,scl);

	tree(530,310,scl);
	tree(530,320,scl);
	tree(530,330,scl);
	tree(530,340,scl);
	tree(530,350,scl);
	tree(530,360,scl);
	tree(530,370,scl);
	tree(530,380,scl);
	tree(530,390,scl);

	tree(540,10,scl);
	tree(540,20,scl);
	tree(540,30,scl);
	tree(540,40,scl);
	tree(540,50,scl);
	tree(540,60,scl);
	tree(540,70,scl);
	tree(540,80,scl);
	tree(540,90,scl);

	tree(540,110,scl);
	tree(540,120,scl);
	tree(540,130,scl);
	tree(540,140,scl);
	tree(540,150,scl);
	tree(540,160,scl);
	tree(540,170,scl);
	tree(540,180,scl);
	tree(540,190,scl);

	tree(540,210,scl);
	tree(540,220,scl);
	tree(540,230,scl);
	tree(540,240,scl);
	tree(540,250,scl);
	tree(540,260,scl);
	tree(540,270,scl);
	tree(540,280,scl);
	tree(540,290,scl);

	tree(540,310,scl);
	tree(540,320,scl);
	tree(540,330,scl);
	tree(540,340,scl);
	tree(540,350,scl);
	tree(540,360,scl);
	tree(540,370,scl);
	tree(540,380,scl);
	tree(540,390,scl);

	tree(550,10,scl);
	tree(550,20,scl);
	tree(550,30,scl);
	tree(550,40,scl);
	tree(550,50,scl);
	tree(550,60,scl);
	tree(550,70,scl);
	tree(550,80,scl);
	tree(550,90,scl);

	tree(550,110,scl);
	tree(550,120,scl);
	tree(550,130,scl);
	tree(550,140,scl);
	tree(550,150,scl);
	tree(550,160,scl);
	tree(550,170,scl);
	tree(550,180,scl);
	tree(550,190,scl);

    tree(550,210,scl);
	tree(550,220,scl);
	tree(550,230,scl);
	tree(550,240,scl);
	tree(550,250,scl);
	tree(550,260,scl);
	tree(550,270,scl);
	tree(550,280,scl);
	tree(550,290,scl);

	tree(550,310,scl);
	tree(550,320,scl);
	tree(550,330,scl);
	tree(550,340,scl);
	tree(550,350,scl);
	tree(550,360,scl);
	tree(550,370,scl);
	tree(550,380,scl);
	tree(550,390,scl);

	tree(560,10,scl);
	tree(560,20,scl);
	tree(560,30,scl);
	tree(560,40,scl);
	tree(560,50,scl);
	tree(560,60,scl);
	tree(560,70,scl);
	tree(560,80,scl);
	tree(560,90,scl);

	tree(560,110,scl);
	tree(560,120,scl);
	tree(560,130,scl);
	tree(560,140,scl);
	tree(560,150,scl);
	tree(560,160,scl);
	tree(560,170,scl);
	tree(560,180,scl);
	tree(560,190,scl);

	tree(560,210,scl);
	tree(560,220,scl);
	tree(560,230,scl);
	tree(560,240,scl);
	tree(560,250,scl);
	tree(560,260,scl);
	tree(560,270,scl);
	tree(560,280,scl);
	tree(560,290,scl);

	tree(560,310,scl);
	tree(560,320,scl);
	tree(560,330,scl);
	tree(560,340,scl);
	tree(560,350,scl);
	tree(560,360,scl);
	tree(560,370,scl);
	tree(560,380,scl);
	tree(560,390,scl);

	tree(570,10,scl);
	tree(570,20,scl);
	tree(570,30,scl);
	tree(570,40,scl);
	tree(570,50,scl);
	tree(570,60,scl);
	tree(570,70,scl);
	tree(570,80,scl);
	tree(570,90,scl);

	tree(570,110,scl);
	tree(570,120,scl);
	tree(570,130,scl);
	tree(570,140,scl);
	tree(570,150,scl);
	tree(570,160,scl);
	tree(570,170,scl);
	tree(570,180,scl);
	tree(570,190,scl);

	tree(570,210,scl);
	tree(570,220,scl);
	tree(570,230,scl);
	tree(570,240,scl);
	tree(570,250,scl);
	tree(570,260,scl);
	tree(570,270,scl);
	tree(570,280,scl);
	tree(570,290,scl);

	tree(570,310,scl);
	tree(570,320,scl);
	tree(570,330,scl);
	tree(570,340,scl);
	tree(570,350,scl);
	tree(570,360,scl);
	tree(570,370,scl);
	tree(570,380,scl);
	tree(570,390,scl);

	tree(580,10,scl);
	tree(580,20,scl);
	tree(580,30,scl);
	tree(580,40,scl);
	tree(580,50,scl);
	tree(580,60,scl);
	tree(580,70,scl);
	tree(580,80,scl);
	tree(580,90,scl);

	tree(580,110,scl);
	tree(580,120,scl);
	tree(580,130,scl);
	tree(580,140,scl);
	tree(580,150,scl);
	tree(580,160,scl);
	tree(580,170,scl);
	tree(580,180,scl);
	tree(580,190,scl);

	tree(580,210,scl);
	tree(580,220,scl);
	tree(580,230,scl);
	tree(580,240,scl);
	tree(580,250,scl);
	tree(580,260,scl);
	tree(580,270,scl);
	tree(580,280,scl);
	tree(580,290,scl);

	tree(580,310,scl);
	tree(580,320,scl);
	tree(580,330,scl);
	tree(580,340,scl);
	tree(580,350,scl);
	tree(580,360,scl);
	tree(580,370,scl);
	tree(580,380,scl);
	tree(580,390,scl);

	tree(590,10,scl);
	tree(590,20,scl);
	tree(590,30,scl);
	tree(590,40,scl);
	tree(590,50,scl);
	tree(590,60,scl);
	tree(590,70,scl);
	tree(590,80,scl);
	tree(590,90,scl);

	tree(590,110,scl);
	tree(590,120,scl);
	tree(590,130,scl);
	tree(590,140,scl);
	tree(590,150,scl);
	tree(590,160,scl);
	tree(590,170,scl);
	tree(590,180,scl);
	tree(590,190,scl);

	tree(590,210,scl);
	tree(590,220,scl);
	tree(590,230,scl);
	tree(590,240,scl);
	tree(590,250,scl);
	tree(590,260,scl);
	tree(590,270,scl);
	tree(590,280,scl);
	tree(590,290,scl);

	tree(590,310,scl);
	tree(590,320,scl);
	tree(590,330,scl);
	tree(590,340,scl);
	tree(590,350,scl);
	tree(590,360,scl);
	tree(590,370,scl);
	tree(590,380,scl);
	tree(590,390,scl);

	tree(600,10,scl);
	tree(600,20,scl);
	tree(600,30,scl);
	tree(600,40,scl);
	tree(600,50,scl);
	tree(600,60,scl);
	tree(600,70,scl);
	tree(600,80,scl);
	tree(600,90,scl);

	tree(600,110,scl);
	tree(600,120,scl);
	tree(600,130,scl);
	tree(600,140,scl);
	tree(600,150,scl);
	tree(600,160,scl);
	tree(600,170,scl);
	tree(600,180,scl);
	tree(600,190,scl);

	tree(600,210,scl);
	tree(600,220,scl);
	tree(600,230,scl);
	tree(600,240,scl);
	tree(600,250,scl);
	tree(600,260,scl);
	tree(600,270,scl);
	tree(600,280,scl);
	tree(600,290,scl);

	tree(600,310,scl);
	tree(600,320,scl);
	tree(600,330,scl);
	tree(600,340,scl);
	tree(600,350,scl);
	tree(600,360,scl);
	tree(600,370,scl);
	tree(600,380,scl);
	tree(600,390,scl);

	tree(610,10,scl);
	tree(610,20,scl);
	tree(610,30,scl);
	tree(610,40,scl);
	tree(610,50,scl);
	tree(610,60,scl);
	tree(610,70,scl);
	tree(610,80,scl);
	tree(610,90,scl);

	tree(610,110,scl);
	tree(610,120,scl);
	tree(610,130,scl);
	tree(610,140,scl);
	tree(610,150,scl);
	tree(610,160,scl);
	tree(610,170,scl);
	tree(610,180,scl);
	tree(610,190,scl);

	tree(610,210,scl);
	tree(610,220,scl);
	tree(610,230,scl);
	tree(610,240,scl);
	tree(610,250,scl);
	tree(610,260,scl);
	tree(610,270,scl);
	tree(610,280,scl);
	tree(610,290,scl);

	tree(610,310,scl);
	tree(610,320,scl);
	tree(610,330,scl);
	tree(610,340,scl);
	tree(610,350,scl);
	tree(610,360,scl);
	tree(610,370,scl);
	tree(610,380,scl);
	tree(610,390,scl);

	tree(620,10,scl);
	tree(620,20,scl);
	tree(620,30,scl);
	tree(620,40,scl);
	tree(620,50,scl);
	tree(620,60,scl);
	tree(620,70,scl);
	tree(620,80,scl);
	tree(620,90,scl);

	tree(620,110,scl);
	tree(620,120,scl);
	tree(620,130,scl);
	tree(620,140,scl);
	tree(620,150,scl);
	tree(620,160,scl);
	tree(620,170,scl);
	tree(620,180,scl);
	tree(620,190,scl);

	tree(620,210,scl);
	tree(620,220,scl);
	tree(620,230,scl);
	tree(620,240,scl);
	tree(620,250,scl);
	tree(620,260,scl);
	tree(620,270,scl);
	tree(620,280,scl);
	tree(620,290,scl);

	tree(620,310,scl);
	tree(620,320,scl);
	tree(620,330,scl);
	tree(620,340,scl);
	tree(620,350,scl);
	tree(620,360,scl);
	tree(620,370,scl);
	tree(620,380,scl);
	tree(620,390,scl);

	tree(640,10,scl);
	tree(640,20,scl);
	tree(640,30,scl);
	tree(640,40,scl);
	tree(640,50,scl);
	tree(640,60,scl);
	tree(640,70,scl);
	tree(640,80,scl);
	tree(640,90,scl);

	tree(640,110,scl);
	tree(640,120,scl);
	tree(640,130,scl);
	tree(640,140,scl);
	tree(640,150,scl);
	tree(640,160,scl);
	tree(640,170,scl);
	tree(640,180,scl);
	tree(640,190,scl);

	tree(640,210,scl);
	tree(640,220,scl);
	tree(640,230,scl);
	tree(640,240,scl);
	tree(640,250,scl);
	tree(640,260,scl);
	tree(640,270,scl);
	tree(640,280,scl);
	tree(640,290,scl);

	tree(640,310,scl);
	tree(640,320,scl);
	tree(640,330,scl);
	tree(640,340,scl);
	tree(640,350,scl);
	tree(640,360,scl);
	tree(640,370,scl);
	tree(640,380,scl);
	tree(640,390,scl);

	tree(650,10,scl);
	tree(650,20,scl);
	tree(650,30,scl);
	tree(650,40,scl);
	tree(650,50,scl);
	tree(650,60,scl);
	tree(650,70,scl);
	tree(650,80,scl);
	tree(650,90,scl);

	tree(650,110,scl);
	tree(650,120,scl);
	tree(650,130,scl);
	tree(650,140,scl);
	tree(650,150,scl);
	tree(650,160,scl);
	tree(650,170,scl);
	tree(650,180,scl);
	tree(650,190,scl);

	tree(650,210,scl);
	tree(650,220,scl);
	tree(650,230,scl);
	tree(650,240,scl);
	tree(650,250,scl);
	tree(650,260,scl);
	tree(650,270,scl);
	tree(650,280,scl);
	tree(650,290,scl);

	tree(650,310,scl);
	tree(650,320,scl);
	tree(650,330,scl);
	tree(650,340,scl);
	tree(650,350,scl);
	tree(650,360,scl);
	tree(650,370,scl);
	tree(650,380,scl);
	tree(650,390,scl);

	tree(660,10,scl);
	tree(660,20,scl);
	tree(660,30,scl);
	tree(660,40,scl);
	tree(660,50,scl);
	tree(660,60,scl);
	tree(660,70,scl);
	tree(660,80,scl);
	tree(660,90,scl);

	tree(660,110,scl);
	tree(660,120,scl);
	tree(660,130,scl);
	tree(660,140,scl);
	tree(660,150,scl);
	tree(660,160,scl);
	tree(660,170,scl);
	tree(660,180,scl);
	tree(660,190,scl);

	tree(660,210,scl);
	tree(660,220,scl);
	tree(660,230,scl);
	tree(660,240,scl);
	tree(660,250,scl);
	tree(660,260,scl);
	tree(660,270,scl);
	tree(660,280,scl);
	tree(660,290,scl);

	tree(660,310,scl);
	tree(660,320,scl);
	tree(660,330,scl);
	tree(660,340,scl);
	tree(660,350,scl);
	tree(660,360,scl);
	tree(660,370,scl);
	tree(660,380,scl);
	tree(660,390,scl);

	tree(670,10,scl);
	tree(670,20,scl);
	tree(670,30,scl);
	tree(670,40,scl);
	tree(670,50,scl);
	tree(670,60,scl);
	tree(670,70,scl);
	tree(670,80,scl);
	tree(670,90,scl);

	tree(670,110,scl);
	tree(670,120,scl);
	tree(670,130,scl);
	tree(670,140,scl);
	tree(670,150,scl);
	tree(670,160,scl);
	tree(670,170,scl);
	tree(670,180,scl);
	tree(670,190,scl);

	tree(670,210,scl);
	tree(670,220,scl);
	tree(670,230,scl);
	tree(670,240,scl);
	tree(670,250,scl);
	tree(670,260,scl);
	tree(670,270,scl);
	tree(670,280,scl);
	tree(670,290,scl);

	tree(670,310,scl);
	tree(670,320,scl);
	tree(670,330,scl);
	tree(670,340,scl);
	tree(670,350,scl);
	tree(670,360,scl);
	tree(670,370,scl);
	tree(670,380,scl);
	tree(670,390,scl);

	tree(680,10,scl);
	tree(680,20,scl);
	tree(680,30,scl);
	tree(680,40,scl);
	tree(680,50,scl);
	tree(680,60,scl);
	tree(680,70,scl);
	tree(680,80,scl);
	tree(680,90,scl);

	tree(680,110,scl);
	tree(680,120,scl);
	tree(680,130,scl);
	tree(680,140,scl);
	tree(680,150,scl);
	tree(680,160,scl);
	tree(680,170,scl);
	tree(680,180,scl);
	tree(680,190,scl);

	tree(680,210,scl);
	tree(680,220,scl);
	tree(680,230,scl);
	tree(680,240,scl);
	tree(680,250,scl);
	tree(680,260,scl);
	tree(680,270,scl);
	tree(680,280,scl);
	tree(680,290,scl);
	
	tree(680,310,scl);
	tree(680,320,scl);
	tree(680,330,scl);
	tree(680,340,scl);
	tree(680,350,scl);
	tree(680,360,scl);
	tree(680,370,scl);
	tree(680,380,scl);
	tree(680,390,scl);

    tree(690,10,scl);
	tree(690,20,scl);
	tree(690,30,scl);
	tree(690,40,scl);
	tree(690,50,scl);
	tree(690,60,scl);
	tree(690,70,scl);
	tree(690,80,scl);
	tree(690,90,scl);

	tree(690,110,scl);
	tree(690,120,scl);
	tree(690,130,scl);
	tree(690,140,scl);
	tree(690,150,scl);
	tree(690,160,scl);
	tree(690,170,scl);
	tree(690,180,scl);
	tree(690,190,scl);

	tree(690,210,scl);
	tree(690,220,scl);
	tree(690,230,scl);
	tree(690,240,scl);
	tree(690,250,scl);
	tree(690,260,scl);
	tree(690,270,scl);
	tree(690,280,scl);
	tree(690,290,scl);

	tree(690,310,scl);
	tree(690,320,scl);
	tree(690,330,scl);
	tree(690,340,scl);
	tree(690,350,scl);
	tree(690,360,scl);
	tree(690,370,scl);
	tree(690,380,scl);
	tree(690,390,scl);

	tree(700,10,scl);
	tree(700,20,scl);
	tree(700,30,scl);
	tree(700,40,scl);
	tree(700,50,scl);
	tree(700,60,scl);
	tree(700,70,scl);
	tree(700,80,scl);
	tree(700,90,scl);

	tree(700,110,scl);
	tree(700,120,scl);
	tree(700,130,scl);
	tree(700,140,scl);
	tree(700,150,scl);
	tree(700,160,scl);
	tree(700,170,scl);
	tree(700,180,scl);
	tree(700,190,scl);

	tree(700,210,scl);
	tree(700,220,scl);
	tree(700,230,scl);
	tree(700,240,scl);
	tree(700,250,scl);
	tree(700,260,scl);
	tree(700,270,scl);
	tree(700,280,scl);
	tree(700,290,scl);

	tree(700,310,scl);
	tree(700,320,scl);
	tree(700,330,scl);
	tree(700,340,scl);
	tree(700,350,scl);
	tree(700,360,scl);
	tree(700,370,scl);
	tree(700,380,scl);
	tree(700,390,scl);

	tree(710,10,scl);
	tree(710,20,scl);
	tree(710,30,scl);
	tree(710,40,scl);
	tree(710,50,scl);
	tree(710,60,scl);
	tree(710,70,scl);
	tree(710,80,scl);
	tree(710,90,scl);

	tree(710,110,scl);
	tree(710,120,scl);
	tree(710,130,scl);
	tree(710,140,scl);
	tree(710,150,scl);
	tree(710,160,scl);
	tree(710,170,scl);
	tree(710,180,scl);
	tree(710,190,scl);

	tree(710,210,scl);
	tree(710,220,scl);
	tree(710,230,scl);
	tree(710,240,scl);
	tree(710,250,scl);
	tree(710,260,scl);
	tree(710,270,scl);
	tree(710,280,scl);
	tree(710,290,scl);

	tree(710,310,scl);
	tree(710,320,scl);
	tree(710,330,scl);
	tree(710,340,scl);
	tree(710,350,scl);
	tree(710,360,scl);
	tree(710,370,scl);
	tree(710,380,scl);
	tree(710,390,scl);

	tree(720,10,scl);
	tree(720,20,scl);
	tree(720,30,scl);
	tree(720,40,scl);
	tree(720,50,scl);
	tree(720,60,scl);
	tree(720,70,scl);
	tree(720,80,scl);
	tree(720,90,scl);

	tree(720,110,scl);
	tree(720,120,scl);
	tree(720,130,scl);
	tree(720,140,scl);
	tree(720,150,scl);
	tree(720,160,scl);
	tree(720,170,scl);
	tree(720,180,scl);
	tree(720,190,scl);

	tree(720,210,scl);
	tree(720,220,scl);
	tree(720,230,scl);
	tree(720,240,scl);
	tree(720,250,scl);
	tree(720,260,scl);
	tree(720,270,scl);
	tree(720,280,scl);
	tree(720,290,scl);

	tree(720,310,scl);
	tree(720,320,scl);
	tree(720,330,scl);
	tree(720,340,scl);
	tree(720,350,scl);
	tree(720,360,scl);
	tree(720,370,scl);
	tree(720,380,scl);
	tree(720,390,scl);

	tree(730,10,scl);
	tree(730,20,scl);
	tree(730,30,scl);
	tree(730,40,scl);
	tree(730,50,scl);
	tree(730,60,scl);
	tree(730,70,scl);
	tree(730,80,scl);
	tree(730,90,scl);

	tree(730,110,scl);
	tree(730,120,scl);
	tree(730,130,scl);
	tree(730,140,scl);
	tree(730,150,scl);
	tree(730,160,scl);
	tree(730,170,scl);
	tree(730,180,scl);
	tree(730,190,scl);

	tree(730,210,scl);
	tree(730,220,scl);
	tree(730,230,scl);
	tree(730,240,scl);
	tree(730,250,scl);
	tree(730,260,scl);
	tree(730,270,scl);
	tree(730,280,scl);
	tree(730,290,scl);

	tree(730,310,scl);
	tree(730,320,scl);
	tree(730,330,scl);
	tree(730,340,scl);
	tree(730,350,scl);
	tree(730,360,scl);
	tree(730,370,scl);
	tree(730,380,scl);
	tree(730,390,scl);

	tree(740,10,scl);
	tree(740,20,scl);
	tree(740,30,scl);
	tree(740,40,scl);
	tree(740,50,scl);
	tree(740,60,scl);
	tree(740,70,scl);
	tree(740,80,scl);
	tree(740,90,scl);

	tree(740,110,scl);
	tree(740,120,scl);
	tree(740,130,scl);
	tree(740,140,scl);
	tree(740,150,scl);
	tree(740,160,scl);
	tree(740,170,scl);
	tree(740,180,scl);
	tree(740,190,scl);

	tree(740,210,scl);
	tree(740,220,scl);
	tree(740,230,scl);
	tree(740,240,scl);
	tree(740,250,scl);
	tree(740,260,scl);
	tree(740,270,scl);
	tree(740,280,scl);
	tree(740,290,scl);

	tree(740,310,scl);
	tree(740,320,scl);
	tree(740,330,scl);
	tree(740,340,scl);
	tree(740,350,scl);
	tree(740,360,scl);
	tree(740,370,scl);
	tree(740,380,scl);
	tree(740,390,scl);

	tree(750,10,scl);
	tree(750,20,scl);
	tree(750,30,scl);
	tree(750,40,scl);
	tree(750,50,scl);
	tree(750,60,scl);
	tree(750,70,scl);
	tree(750,80,scl);
	tree(750,90,scl);

	tree(750,110,scl);
	tree(750,120,scl);
	tree(750,130,scl);
	tree(750,140,scl);
	tree(750,150,scl);
	tree(750,160,scl);
	tree(750,170,scl);
	tree(750,180,scl);
	tree(750,190,scl);

	tree(750,210,scl);
	tree(750,220,scl);
	tree(750,230,scl);
	tree(750,240,scl);
	tree(750,250,scl);
	tree(750,260,scl);
	tree(750,270,scl);
	tree(750,280,scl);
	tree(750,290,scl);

	tree(750,310,scl);
	tree(750,320,scl);
	tree(750,330,scl);
	tree(750,340,scl);
	tree(750,350,scl);
	tree(750,360,scl);
	tree(750,370,scl);
	tree(750,380,scl);
	tree(750,390,scl);

	tree(760,10,scl);
	tree(760,20,scl);
	tree(760,30,scl);
	tree(760,40,scl);
	tree(760,50,scl);
	tree(760,60,scl);
	tree(760,70,scl);
	tree(760,80,scl);
	tree(760,90,scl);

	
	tree(760,110,scl);
	tree(760,120,scl);
	tree(760,130,scl);
	tree(760,140,scl);
	tree(760,150,scl);
	tree(760,160,scl);
	tree(760,170,scl);
	tree(760,180,scl);
	tree(760,190,scl);

	
	tree(760,210,scl);
	tree(760,220,scl);
	tree(760,230,scl);
	tree(760,240,scl);
	tree(760,250,scl);
	tree(760,260,scl);
	tree(760,270,scl);
	tree(760,280,scl);
	tree(760,290,scl);

	
	tree(760,310,scl);
	tree(760,320,scl);
	tree(760,330,scl);
	tree(760,340,scl);
	tree(760,350,scl);
	tree(760,360,scl);
	tree(760,370,scl);
	tree(760,380,scl);
	tree(760,390,scl);

	tree(780,10,scl);
	tree(780,20,scl);
	tree(780,30,scl);
	tree(780,40,scl);
	tree(780,50,scl);
	tree(780,60,scl);
	tree(780,70,scl);
	tree(780,80,scl);
	tree(780,90,scl);

	tree(780,110,scl);
	tree(780,120,scl);
	tree(780,130,scl);
	tree(780,140,scl);
	tree(780,150,scl);
	tree(780,160,scl);
	tree(780,170,scl);
	tree(780,180,scl);
	tree(780,190,scl);

	tree(780,210,scl);
	tree(780,220,scl);
	tree(780,230,scl);
	tree(780,240,scl);
	tree(780,250,scl);
	tree(780,260,scl);
	tree(780,270,scl);
	tree(780,280,scl);
	tree(780,290,scl);

	tree(780,310,scl);
	tree(780,320,scl);
	tree(780,330,scl);
	tree(780,340,scl);
	tree(780,350,scl);
	tree(780,360,scl);
	tree(780,370,scl);
	tree(780,380,scl);
	tree(780,390,scl);

	tree(790,10,scl);
	tree(790,20,scl);
	tree(790,30,scl);
	tree(790,40,scl);
	tree(790,50,scl);
	tree(790,60,scl);
	tree(790,70,scl);
	tree(790,80,scl);
	tree(790,90,scl);

	tree(790,110,scl);
	tree(790,120,scl);
	tree(790,130,scl);
	tree(790,140,scl);
	tree(790,150,scl);
	tree(790,160,scl);
	tree(790,170,scl);
	tree(790,180,scl);
	tree(790,190,scl);

	tree(790,210,scl);
	tree(790,220,scl);
	tree(790,230,scl);
	tree(790,240,scl);
	tree(790,250,scl);
	tree(790,260,scl);
	tree(790,270,scl);
	tree(790,280,scl);
	tree(790,290,scl);

	tree(790,310,scl);
	tree(790,320,scl);
	tree(790,330,scl);
	tree(790,340,scl);
	tree(790,350,scl);
	tree(790,360,scl);
	tree(790,370,scl);
	tree(790,380,scl);
	tree(790,390,scl);

    tree(800,10,scl);
	tree(800,20,scl);
	tree(800,30,scl);
	tree(800,40,scl);
	tree(800,50,scl);
	tree(800,60,scl);
	tree(800,70,scl);
	tree(800,80,scl);
	tree(800,90,scl);

	tree(800,110,scl);
	tree(800,120,scl);
	tree(800,130,scl);
	tree(800,140,scl);
	tree(800,150,scl);
	tree(800,160,scl);
	tree(800,170,scl);
	tree(800,180,scl);
	tree(800,190,scl);

	tree(800,210,scl);
	tree(800,220,scl);
	tree(800,230,scl);
	tree(800,240,scl);
	tree(800,250,scl);
	tree(800,260,scl);
	tree(800,270,scl);
	tree(800,280,scl);
	tree(800,290,scl);

	tree(800,310,scl);
	tree(800,320,scl);
	tree(800,330,scl);
	tree(800,340,scl);
	tree(800,350,scl);
	tree(800,360,scl);
	tree(800,370,scl);
	tree(800,380,scl);
	tree(800,390,scl);

	tree(810,10,scl);
	tree(810,20,scl);
	tree(810,30,scl);
	tree(810,40,scl);
	tree(810,50,scl);
	tree(810,60,scl);
	tree(810,70,scl);
	tree(810,80,scl);
	tree(810,90,scl);

	tree(810,110,scl);
	tree(810,120,scl);
	tree(810,130,scl);
	tree(810,140,scl);
	tree(810,150,scl);
	tree(810,160,scl);
	tree(810,170,scl);
	tree(810,180,scl);
	tree(810,190,scl);

	tree(810,210,scl);
	tree(810,220,scl);
	tree(810,230,scl);
	tree(810,240,scl);
	tree(810,250,scl);
	tree(810,260,scl);
	tree(810,270,scl);
	tree(810,280,scl);
	tree(810,290,scl);

	tree(810,310,scl);
	tree(810,320,scl);
	tree(810,330,scl);
	tree(810,340,scl);
	tree(810,350,scl);
	tree(810,360,scl);
	tree(810,370,scl);
	tree(810,380,scl);
	tree(810,390,scl);

	tree(820,10,scl);
	tree(820,20,scl);
	tree(820,30,scl);
	tree(820,40,scl);
	tree(820,50,scl);
	tree(820,60,scl);
	tree(820,70,scl);
	tree(820,80,scl);
	tree(820,90,scl);

	tree(820,110,scl);
	tree(820,120,scl);
	tree(820,130,scl);
	tree(820,140,scl);
	tree(820,150,scl);
	tree(820,160,scl);
	tree(820,170,scl);
	tree(820,180,scl);
	tree(820,190,scl);

	tree(820,210,scl);
	tree(820,220,scl);
	tree(820,230,scl);
	tree(820,240,scl);
	tree(820,250,scl);
	tree(820,260,scl);
	tree(820,270,scl);
	tree(820,280,scl);
	tree(820,290,scl);

	tree(820,310,scl);
	tree(820,320,scl);
	tree(820,330,scl);
	tree(820,340,scl);
	tree(820,350,scl);
	tree(820,360,scl);
	tree(820,370,scl);
	tree(820,380,scl);
	tree(820,390,scl);

	tree(830,10,scl);
	tree(830,20,scl);
	tree(830,30,scl);
	tree(830,40,scl);
	tree(830,50,scl);
	tree(830,60,scl);
	tree(830,70,scl);
	tree(830,80,scl);
	tree(830,90,scl);

	tree(830,110,scl);
	tree(830,120,scl);
	tree(830,130,scl);
	tree(830,140,scl);
	tree(830,150,scl);
	tree(830,160,scl);
	tree(830,170,scl);
	tree(830,180,scl);
	tree(830,190,scl);

	tree(830,210,scl);
	tree(830,220,scl);
	tree(830,230,scl);
	tree(830,240,scl);
	tree(830,250,scl);
	tree(830,260,scl);
	tree(830,270,scl);
	tree(830,280,scl);
	tree(830,290,scl);

	tree(830,310,scl);
	tree(830,320,scl);
	tree(830,330,scl);
	tree(830,340,scl);
	tree(830,350,scl);
	tree(830,360,scl);
	tree(830,370,scl);
	tree(830,380,scl);
	tree(830,390,scl);

	tree(840,10,scl);
	tree(840,20,scl);
	tree(840,30,scl);
	tree(840,40,scl);
	tree(840,50,scl);
	tree(840,60,scl);
	tree(840,70,scl);
	tree(840,80,scl);
	tree(840,90,scl);

	tree(840,110,scl);
	tree(840,120,scl);
	tree(840,130,scl);
	tree(840,140,scl);
	tree(840,150,scl);
	tree(840,160,scl);
	tree(840,170,scl);
	tree(840,180,scl);
	tree(840,190,scl);

    tree(840,210,scl);
	tree(840,220,scl);
	tree(840,230,scl);
	tree(840,240,scl);
	tree(840,250,scl);
	tree(840,260,scl);
	tree(840,270,scl);
	tree(840,280,scl);
	tree(840,290,scl);

    tree(840,310,scl);
	tree(840,320,scl);
	tree(840,330,scl);
	tree(840,340,scl);
	tree(840,350,scl);
	tree(840,360,scl);
	tree(840,370,scl);
	tree(840,380,scl);
	tree(840,390,scl);

	tree(850,10,scl);
	tree(850,20,scl);
	tree(850,30,scl);
	tree(850,40,scl);
	tree(850,50,scl);
	tree(850,60,scl);
	tree(850,70,scl);
	tree(850,80,scl);
	tree(850,90,scl);

	tree(850,110,scl);
	tree(850,120,scl);
	tree(850,130,scl);
	tree(850,140,scl);
	tree(850,150,scl);
	tree(850,160,scl);
	tree(850,170,scl);
	tree(850,180,scl);
	tree(850,190,scl);

	tree(850,210,scl);
	tree(850,220,scl);
	tree(850,230,scl);
	tree(850,240,scl);
	tree(850,250,scl);
	tree(850,260,scl);
	tree(850,270,scl);
	tree(850,280,scl);
	tree(850,290,scl);

	tree(850,310,scl);
	tree(850,320,scl);
	tree(850,330,scl);
	tree(850,340,scl);
	tree(850,350,scl);
	tree(850,360,scl);
	tree(850,370,scl);
	tree(850,380,scl);
	tree(850,390,scl);

	tree(860,10,scl);
	tree(860,20,scl);
	tree(860,30,scl);
	tree(860,40,scl);
	tree(860,50,scl);
	tree(860,60,scl);
	tree(860,70,scl);
	tree(860,80,scl);
	tree(860,90,scl);

	tree(860,110,scl);
	tree(860,120,scl);
	tree(860,130,scl);
	tree(860,140,scl);
	tree(860,150,scl);
	tree(860,160,scl);
	tree(860,170,scl);
	tree(860,180,scl);
	tree(860,190,scl);

	tree(860,210,scl);
	tree(860,220,scl);
	tree(860,230,scl);
	tree(860,240,scl);
	tree(860,250,scl);
	tree(860,260,scl);
	tree(860,270,scl);
	tree(860,280,scl);
	tree(860,290,scl);

	tree(860,310,scl);
	tree(860,320,scl);
	tree(860,330,scl);
	tree(860,340,scl);
	tree(860,350,scl);
	tree(860,360,scl);
	tree(860,370,scl);
	tree(860,380,scl);
	tree(860,390,scl);

	tree(870,10,scl);
	tree(870,20,scl);
	tree(870,30,scl);
	tree(870,40,scl);
	tree(870,50,scl);
	tree(870,60,scl);
	tree(870,70,scl);
	tree(870,80,scl);
	tree(870,90,scl);

	tree(870,110,scl);
	tree(870,120,scl);
	tree(870,130,scl);
	tree(870,140,scl);
	tree(870,150,scl);
	tree(870,160,scl);
	tree(870,170,scl);
	tree(870,180,scl);
	tree(870,190,scl);

	tree(870,210,scl);
	tree(870,220,scl);
	tree(870,230,scl);
	tree(870,240,scl);
	tree(870,250,scl);
	tree(870,260,scl);
	tree(870,270,scl);
	tree(870,280,scl);
	tree(870,290,scl);

	tree(870,310,scl);
	tree(870,320,scl);
	tree(870,330,scl);
	tree(870,340,scl);
	tree(870,350,scl);
	tree(870,360,scl);
	tree(870,370,scl);
	tree(870,380,scl);
	tree(870,390,scl);

	tree(880,10,scl);
	tree(880,20,scl);
	tree(880,30,scl);
	tree(880,40,scl);
	tree(880,50,scl);
	tree(880,60,scl);
	tree(880,70,scl);
	tree(880,80,scl);
	tree(880,90,scl);

	tree(880,110,scl);
	tree(880,120,scl);
	tree(880,130,scl);
	tree(880,140,scl);
	tree(880,150,scl);
	tree(880,160,scl);
	tree(880,170,scl);
	tree(880,180,scl);
	tree(880,190,scl);

	tree(880,210,scl);
	tree(880,220,scl);
	tree(880,230,scl);
	tree(880,240,scl);
	tree(880,250,scl);
	tree(880,260,scl);
	tree(880,270,scl);
	tree(880,280,scl);
	tree(880,290,scl);

	tree(880,310,scl);
	tree(880,320,scl);
	tree(880,330,scl);
	tree(880,340,scl);
	tree(880,350,scl);
	tree(880,360,scl);
	tree(880,370,scl);
	tree(880,380,scl);
	tree(880,390,scl);

	tree(890,10,scl);
	tree(890,20,scl);
	tree(890,30,scl);
	tree(890,40,scl);
	tree(890,50,scl);
	tree(890,60,scl);
	tree(890,70,scl);
	tree(890,80,scl);
	tree(890,90,scl);

	tree(890,110,scl);
	tree(890,120,scl);
	tree(890,130,scl);
	tree(890,140,scl);
	tree(890,150,scl);
	tree(890,160,scl);
	tree(890,170,scl);
	tree(890,180,scl);
	tree(890,190,scl);

	tree(890,210,scl);
	tree(890,220,scl);
	tree(890,230,scl);
	tree(890,240,scl);
	tree(890,250,scl);
	tree(890,260,scl);
	tree(890,270,scl);
	tree(890,280,scl);
	tree(890,290,scl);

	tree(890,310,scl);
	tree(890,320,scl);
	tree(890,330,scl);
	tree(890,340,scl);
	tree(890,350,scl);
	tree(890,360,scl);
	tree(890,370,scl);
	tree(890,380,scl);
	tree(890,390,scl);

	tree(910,10,scl);
	tree(910,20,scl);
	tree(910,30,scl);
	tree(910,40,scl);
	tree(910,50,scl);
	tree(910,60,scl);
	tree(910,70,scl);
	tree(910,80,scl);
	tree(910,90,scl);

	tree(910,110,scl);
	tree(910,120,scl);
	tree(910,130,scl);
	tree(910,140,scl);
	tree(910,150,scl);
	tree(910,160,scl);
	tree(910,170,scl);
	tree(910,180,scl);
	tree(910,190,scl);

	tree(910,210,scl);
	tree(910,220,scl);
	tree(910,230,scl);
	tree(910,240,scl);
	tree(910,250,scl);
	tree(910,260,scl);
	tree(910,270,scl);
	tree(910,280,scl);
	tree(910,290,scl);

	tree(910,310,scl);
	tree(910,320,scl);
	tree(910,330,scl);
	tree(910,340,scl);
	tree(910,350,scl);
	tree(910,360,scl);
	tree(910,370,scl);
	tree(910,380,scl);
	tree(910,390,scl);

	tree(920,10,scl);
	tree(920,20,scl);
	tree(920,30,scl);
	tree(920,40,scl);
	tree(920,50,scl);
	tree(920,60,scl);
	tree(920,70,scl);
	tree(920,80,scl);
	tree(920,90,scl);

	tree(920,110,scl);
	tree(920,120,scl);
	tree(920,130,scl);
	tree(920,140,scl);
	tree(920,150,scl);
	tree(920,160,scl);
	tree(920,170,scl);
	tree(920,180,scl);
	tree(920,190,scl);

	tree(920,210,scl);
	tree(920,220,scl);
	tree(920,230,scl);
	tree(920,240,scl);
	tree(920,250,scl);
	tree(920,260,scl);
	tree(920,270,scl);
	tree(920,280,scl);
	tree(920,290,scl);

	tree(920,310,scl);
	tree(920,320,scl);
	tree(920,330,scl);
	tree(920,340,scl);
	tree(920,350,scl);
	tree(920,360,scl);
	tree(920,370,scl);
	tree(920,380,scl);
	tree(920,390,scl);

	tree(930,10,scl);
	tree(930,20,scl);
	tree(930,30,scl);
	tree(930,40,scl);
	tree(930,50,scl);
	tree(930,60,scl);
	tree(930,70,scl);
	tree(930,80,scl);
	tree(930,90,scl);

	tree(930,110,scl);
	tree(930,120,scl);
	tree(930,130,scl);
	tree(930,140,scl);
	tree(930,150,scl);
	tree(930,160,scl);
	tree(930,170,scl);
	tree(930,180,scl);
	tree(930,190,scl);

	tree(930,210,scl);
	tree(930,220,scl);
	tree(930,230,scl);
	tree(930,240,scl);
	tree(930,250,scl);
	tree(930,260,scl);
	tree(930,270,scl);
	tree(930,280,scl);
	tree(930,290,scl);

	tree(930,310,scl);
	tree(930,320,scl);
	tree(930,330,scl);
	tree(930,340,scl);
	tree(930,350,scl);
	tree(930,360,scl);
	tree(930,370,scl);
	tree(930,380,scl);
	tree(930,390,scl);

	tree(940,10,scl);
	tree(940,20,scl);
	tree(940,30,scl);
	tree(940,40,scl);
	tree(940,50,scl);
	tree(940,60,scl);
	tree(940,70,scl);
	tree(940,80,scl);
	tree(940,90,scl);

	tree(940,110,scl);
	tree(940,120,scl);
	tree(940,130,scl);
	tree(940,140,scl);
	tree(940,150,scl);
	tree(940,160,scl);
	tree(940,170,scl);
	tree(940,180,scl);
	tree(940,190,scl);

	tree(940,210,scl);
	tree(940,220,scl);
	tree(940,230,scl);
	tree(940,240,scl);
	tree(940,250,scl);
	tree(940,260,scl);
	tree(940,270,scl);
	tree(940,280,scl);
	tree(940,290,scl);

	tree(940,310,scl);
	tree(940,320,scl);
	tree(940,330,scl);
	tree(940,340,scl);
	tree(940,350,scl);
	tree(940,360,scl);
	tree(940,370,scl);
	tree(940,380,scl);
	tree(940,390,scl);

	tree(950,10,scl);
	tree(950,20,scl);
	tree(950,30,scl);
	tree(950,40,scl);
	tree(950,50,scl);
	tree(950,60,scl);
	tree(950,70,scl);
	tree(950,80,scl);
	tree(950,90,scl);

	tree(950,110,scl);
	tree(950,120,scl);
	tree(950,130,scl);
	tree(950,140,scl);
	tree(950,150,scl);
	tree(950,160,scl);
	tree(950,170,scl);
	tree(950,180,scl);
	tree(950,190,scl);

	tree(950,210,scl);
	tree(950,220,scl);
	tree(950,230,scl);
	tree(950,240,scl);
	tree(950,250,scl);
	tree(950,260,scl);
	tree(950,270,scl);
	tree(950,280,scl);
	tree(950,290,scl);

	tree(950,310,scl);
	tree(950,320,scl);
	tree(950,330,scl);
	tree(950,340,scl);
	tree(950,350,scl);
	tree(950,360,scl);
	tree(950,370,scl);
	tree(950,380,scl);
	tree(950,390,scl);

	tree(960,10,scl);
	tree(960,20,scl);
	tree(960,30,scl);
	tree(960,40,scl);
	tree(960,50,scl);
	tree(960,60,scl);
	tree(960,70,scl);
	tree(960,80,scl);
	tree(960,90,scl);

	tree(960,110,scl);
	tree(960,120,scl);
	tree(960,130,scl);
	tree(960,140,scl);
	tree(960,150,scl);
	tree(960,160,scl);
	tree(960,170,scl);
	tree(960,180,scl);
	tree(960,190,scl);
		tree(960,210,scl);
	tree(960,220,scl);
	tree(960,230,scl);
	tree(960,240,scl);
	tree(960,250,scl);
	tree(960,260,scl);
	tree(960,270,scl);
	tree(960,280,scl);
	tree(960,290,scl);
		tree(960,310,scl);
	tree(960,320,scl);
	tree(960,330,scl);
	tree(960,340,scl);
	tree(960,350,scl);
	tree(960,360,scl);
	tree(960,370,scl);
	tree(960,380,scl);
	tree(960,390,scl);

	
		tree(970,10,scl);
	tree(970,20,scl);
	tree(970,30,scl);
	tree(970,40,scl);
	tree(970,50,scl);
	tree(970,60,scl);
	tree(970,70,scl);
	tree(970,80,scl);
	tree(970,90,scl);

	tree(970,110,scl);
	tree(970,120,scl);
	tree(970,130,scl);
	tree(970,140,scl);
	tree(970,150,scl);
	tree(970,160,scl);
	tree(970,170,scl);
	tree(970,180,scl);
	tree(970,190,scl);

	tree(970,210,scl);
	tree(970,220,scl);
	tree(970,230,scl);
	tree(970,240,scl);
	tree(970,250,scl);
	tree(970,260,scl);
	tree(970,270,scl);
	tree(970,280,scl);
	tree(970,290,scl);

	tree(970,310,scl);
	tree(970,320,scl);
	tree(970,330,scl);
	tree(970,340,scl);
	tree(970,350,scl);
	tree(970,360,scl);
	tree(970,370,scl);
	tree(970,380,scl);
	tree(970,390,scl);
	
	tree(980,10,scl);
	tree(980,20,scl);
	tree(980,30,scl);
	tree(980,40,scl);
	tree(980,50,scl);
	tree(980,60,scl);
	tree(980,70,scl);
	tree(980,80,scl);
	tree(980,90,scl);

	tree(980,110,scl);
	tree(980,120,scl);
	tree(980,130,scl);
	tree(980,140,scl);
	tree(980,150,scl);
	tree(980,160,scl);
	tree(980,170,scl);
	tree(980,180,scl);
	tree(980,190,scl);

	tree(980,210,scl);
	tree(980,220,scl);
	tree(980,230,scl);
	tree(980,240,scl);
	tree(980,250,scl);
	tree(980,260,scl);
	tree(980,270,scl);
	tree(980,280,scl);
	tree(980,290,scl);

	tree(980,310,scl);
	tree(980,320,scl);
	tree(980,330,scl);
	tree(980,340,scl);
	tree(980,350,scl);
	tree(980,360,scl);
	tree(980,370,scl);
	tree(980,380,scl);
	tree(980,390,scl);

	tree(990,10,scl);
	tree(990,20,scl);
	tree(990,30,scl);
	tree(990,40,scl);
	tree(990,50,scl);
	tree(990,60,scl);
	tree(990,70,scl);
	tree(990,80,scl);
	tree(990,90,scl);

	tree(990,110,scl);
	tree(990,120,scl);
	tree(990,130,scl);
	tree(990,140,scl);
	tree(990,150,scl);
	tree(990,160,scl);
	tree(990,170,scl);
	tree(990,180,scl);
	tree(990,190,scl);

	tree(990,210,scl);
	tree(990,220,scl);
	tree(990,230,scl);
	tree(990,240,scl);
	tree(990,250,scl);
	tree(990,260,scl);
	tree(990,270,scl);
	tree(990,280,scl);
	tree(990,290,scl);

	tree(990,310,scl);
	tree(990,320,scl);
	tree(990,330,scl);
	tree(990,340,scl);
	tree(990,350,scl);
	tree(990,360,scl);
	tree(990,370,scl);
	tree(990,380,scl);
	tree(990,390,scl);

	tree(1000,10,scl);
	tree(1000,20,scl);
	tree(1000,30,scl);
	tree(1000,40,scl);
	tree(1000,50,scl);
	tree(1000,60,scl);
	tree(1000,70,scl);
	tree(1000,80,scl);
	tree(1000,90,scl);

	tree(1000,110,scl);
	tree(1000,120,scl);
	tree(1000,130,scl);
	tree(1000,140,scl);
	tree(1000,150,scl);
	tree(1000,160,scl);
	tree(1000,170,scl);
	tree(1000,180,scl);
	tree(1000,190,scl);

	tree(1000,210,scl);
	tree(1000,220,scl);
	tree(1000,230,scl);
	tree(1000,240,scl);
	tree(1000,250,scl);
	tree(1000,260,scl);
	tree(1000,270,scl);
	tree(1000,280,scl);
	tree(1000,290,scl);

	tree(1000,310,scl);
	tree(1000,320,scl);
	tree(1000,330,scl);
	tree(1000,340,scl);
	tree(1000,350,scl);
	tree(1000,360,scl);
	tree(1000,370,scl);
	tree(1000,380,scl);
	tree(1000,390,scl);

	tree(1010,10,scl);
	tree(1010,20,scl);
	tree(1010,30,scl);
	tree(1010,40,scl);
	tree(1010,50,scl);
	tree(1010,60,scl);
	tree(1010,70,scl);
	tree(1010,80,scl);
	tree(1010,90,scl);

	tree(1010,110,scl);
	tree(1010,120,scl);
	tree(1010,130,scl);
	tree(1010,140,scl);
	tree(1010,150,scl);
	tree(1010,160,scl);
	tree(1010,170,scl);
	tree(1010,180,scl);
	tree(1010,190,scl);

	tree(1010,210,scl);
	tree(1010,220,scl);
	tree(1010,230,scl);
	tree(1010,240,scl);
	tree(1010,250,scl);
	tree(1010,260,scl);
	tree(1010,270,scl);
	tree(1010,280,scl);
	tree(1010,290,scl);

	tree(1010,310,scl);
	tree(1010,320,scl);
	tree(1010,330,scl);
	tree(1010,340,scl);
	tree(1010,350,scl);
	tree(1010,360,scl);
	tree(1010,370,scl);
	tree(1010,380,scl);
	tree(1010,390,scl);

	tree(1030,110,scl);
	tree(1030,120,scl);
	tree(1030,130,scl);
	tree(1030,140,scl);
	tree(1030,150,scl);
	tree(1030,160,scl);
	tree(1030,170,scl);
	tree(1030,180,scl);
	tree(1030,190,scl);

	tree(1030,210,scl);
	tree(1030,220,scl);
	tree(1030,230,scl);
	tree(1030,240,scl);
	tree(1030,250,scl);
	tree(1030,260,scl);
	tree(1030,270,scl);
	tree(1030,280,scl);
	tree(1030,290,scl);

	tree(1030,310,scl);
	tree(1030,320,scl);
	tree(1030,330,scl);
	tree(1030,340,scl);
	tree(1030,350,scl);
	tree(1030,360,scl);
	tree(1030,370,scl);
	tree(1030,380,scl);
	tree(1030,390,scl);

	tree(1040,10,scl);
	tree(1040,20,scl);
	tree(1040,30,scl);
	tree(1040,40,scl);
	tree(1040,50,scl);
	tree(1040,60,scl);
	tree(1040,70,scl);
	tree(1040,80,scl);
	tree(1040,90,scl);

	tree(1040,110,scl);
	tree(1040,120,scl);
	tree(1040,130,scl);
	tree(1040,140,scl);
	tree(1040,150,scl);
	tree(1040,160,scl);
	tree(1040,170,scl);
	tree(1040,180,scl);
	tree(1040,190,scl);

	tree(1040,210,scl);
	tree(1040,220,scl);
	tree(1040,230,scl);
	tree(1040,240,scl);
	tree(1040,250,scl);
	tree(1040,260,scl);
	tree(1040,270,scl);
	tree(1040,280,scl);
	tree(1040,290,scl);

	tree(1040,310,scl);
	tree(1040,320,scl);
	tree(1040,330,scl);
	tree(1040,340,scl);
	tree(1040,350,scl);
	tree(1040,360,scl);
	tree(1040,370,scl);
	tree(1040,380,scl);
	tree(1040,390,scl);

	tree(1050,10,scl);
	tree(1050,20,scl);
	tree(1050,30,scl);
	tree(1050,40,scl);
	tree(1050,50,scl);
	tree(1050,60,scl);
	tree(1050,70,scl);
	tree(1050,80,scl);
	tree(1050,90,scl);

	tree(1050,110,scl);
	tree(1050,120,scl);
	tree(1050,130,scl);
	tree(1050,140,scl);
	tree(1050,150,scl);
	tree(1050,160,scl);
	tree(1050,170,scl);
	tree(1050,180,scl);
	tree(1050,190,scl);

	tree(1050,210,scl);
	tree(1050,220,scl);
	tree(1050,230,scl);
	tree(1050,240,scl);
	tree(1050,250,scl);
	tree(1050,260,scl);
	tree(1050,270,scl);
	tree(1050,280,scl);
	tree(1050,290,scl);

	tree(1050,310,scl);
	tree(1050,320,scl);
	tree(1050,330,scl);
	tree(1050,340,scl);
	tree(1050,350,scl);
	tree(1050,360,scl);
	tree(1050,370,scl);
	tree(1050,380,scl);
	tree(1050,390,scl);

	tree(1060,10,scl);
	tree(1060,20,scl);
	tree(1060,30,scl);
	tree(1060,40,scl);
	tree(1060,50,scl);
	tree(1060,60,scl);
	tree(1060,70,scl);
	tree(1060,80,scl);
	tree(1060,90,scl);

	tree(1060,110,scl);
	tree(1060,120,scl);
	tree(1060,130,scl);
	tree(1060,140,scl);
	tree(1060,150,scl);
	tree(1060,160,scl);
	tree(1060,170,scl);
	tree(1060,180,scl);
	tree(1060,190,scl);

	tree(1060,210,scl);
	tree(1060,220,scl);
	tree(1060,230,scl);
	tree(1060,240,scl);
	tree(1060,250,scl);
	tree(1060,260,scl);
	tree(1060,270,scl);
	tree(1060,280,scl);
	tree(1060,290,scl);

	tree(1060,310,scl);
	tree(1060,320,scl);
	tree(1060,330,scl);
	tree(1060,340,scl);
	tree(1060,350,scl);
	tree(1060,360,scl);
	tree(1060,370,scl);
	tree(1060,380,scl);
	tree(1060,390,scl);

	tree(1070,10,scl);
	tree(1070,20,scl);
	tree(1070,30,scl);
	tree(1070,40,scl);
	tree(1070,50,scl);
	tree(1070,60,scl);
	tree(1070,70,scl);
	tree(1070,80,scl);
	tree(1070,90,scl);

	tree(1070,110,scl);
	tree(1070,120,scl);
	tree(1070,130,scl);
	tree(1070,140,scl);
	tree(1070,150,scl);
	tree(1070,160,scl);
	tree(1070,170,scl);
	tree(1070,180,scl);
	tree(1070,190,scl);

	tree(1070,210,scl);
	tree(1070,220,scl);
	tree(1070,230,scl);
	tree(1070,240,scl);
	tree(1070,250,scl);
	tree(1070,260,scl);
	tree(1070,270,scl);
	tree(1070,280,scl);
	tree(1070,290,scl);

	tree(1070,310,scl);
	tree(1070,320,scl);
	tree(1070,330,scl);
	tree(1070,340,scl);
	tree(1070,350,scl);
	tree(1070,360,scl);
	tree(1070,370,scl);
	tree(1070,380,scl);
	tree(1070,390,scl);

	tree(1080,10,scl);
	tree(1080,20,scl);
	tree(1080,30,scl);
	tree(1080,40,scl);
	tree(1080,50,scl);
	tree(1080,60,scl);
	tree(1080,70,scl);
	tree(1080,80,scl);
	tree(1080,90,scl);

	tree(1080,110,scl);
	tree(1080,120,scl);
	tree(1080,130,scl);
	tree(1080,140,scl);
	tree(1080,150,scl);
	tree(1080,160,scl);
	tree(1080,170,scl);
	tree(1080,180,scl);
	tree(1080,190,scl);

	tree(1080,210,scl);
	tree(1080,220,scl);
	tree(1080,230,scl);
	tree(1080,240,scl);
	tree(1080,250,scl);
	tree(1080,260,scl);
	tree(1080,270,scl);
	tree(1080,280,scl);
	tree(1080,290,scl);

	tree(1080,310,scl);
	tree(1080,320,scl);
	tree(1080,330,scl);
	tree(1080,340,scl);
	tree(1080,350,scl);
	tree(1080,360,scl);
	tree(1080,370,scl);
	tree(1080,380,scl);
	tree(1080,390,scl);

	tree(1090,10,scl);
	tree(1090,20,scl);
	tree(1090,30,scl);
	tree(1090,40,scl);
	tree(1090,50,scl);
	tree(1090,60,scl);
	tree(1090,70,scl);
	tree(1090,80,scl);
	tree(1090,90,scl);

	tree(1090,110,scl);
	tree(1090,120,scl);
	tree(1090,130,scl);
	tree(1090,140,scl);
	tree(1090,150,scl);
	tree(1090,160,scl);
	tree(1090,170,scl);
	tree(1090,180,scl);
	tree(1090,190,scl);

	tree(1090,210,scl);
	tree(1090,220,scl);
	tree(1090,230,scl);
	tree(1090,240,scl);
	tree(1090,250,scl);
	tree(1090,260,scl);
	tree(1090,270,scl);
	tree(1090,280,scl);
	tree(1090,290,scl);

	tree(1090,310,scl);
	tree(1090,320,scl);
	tree(1090,330,scl);
	tree(1090,340,scl);
	tree(1090,350,scl);
	tree(1090,360,scl);
	tree(1090,370,scl);
	tree(1090,380,scl);
	tree(1090,390,scl);

	tree(1100,10,scl);
	tree(1100,20,scl);
	tree(1100,30,scl);
	tree(1100,40,scl);
	tree(1100,50,scl);
	tree(1100,60,scl);
	tree(1100,70,scl);
	tree(1100,80,scl);
	tree(1100,90,scl);

	tree(1100,110,scl);
	tree(1100,120,scl);
	tree(1100,130,scl);
	tree(1100,140,scl);
	tree(1100,150,scl);
	tree(1100,160,scl);
	tree(1100,170,scl);
	tree(1100,180,scl);
	tree(1100,190,scl);

	tree(1100,210,scl);
	tree(1100,220,scl);
	tree(1100,230,scl);
	tree(1100,240,scl);
	tree(1100,250,scl);
	tree(1100,260,scl);
	tree(1100,270,scl);
	tree(1100,280,scl);
	tree(1100,290,scl);

	tree(1100,310,scl);
	tree(1100,320,scl);
	tree(1100,330,scl);
	tree(1100,340,scl);
	tree(1100,350,scl);
	tree(1100,360,scl);
	tree(1100,370,scl);
	tree(1100,380,scl);
	tree(1100,390,scl);


	tree(150,40,scl);
	tree(230,40,scl);
	tree(270,40,scl);
	tree(330,40,scl);
	tree(340,50,scl);
	tree(380,55,scl);
	tree(400,40,scl);
	tree(470,40,scl);
	tree(650,40,scl);
	tree(730,40,scl);
	tree(770,40,scl);
	tree(830,40,scl);
	tree(840,50,scl);
	tree(880,55,scl);
	tree(600,40,scl);
	tree(670,40,scl);
	tree(850,40,scl);
	tree(930,40,scl);
	tree(970,40,scl);
	tree(1030,40,scl);
	tree(1040,50,scl);
	tree(1080,40,scl);

	tree(0,-20,scl);
	tree(70,-20,scl);
	tree(150,-20,scl);
	tree(230,-20,scl);
	tree(270,-20,scl);
	tree(330,-20,scl);
	tree(340,10,scl);
	tree(380,15,scl);
	tree(400,-20,scl);
	tree(470,-20,scl);
	tree(650,-20,scl);
	tree(730,-20,scl);
	tree(770,-20,scl);
	tree(830,-20,scl);
	tree(840,0,scl);
	tree(880,10,scl);
	tree(600,-20,scl);
	tree(670,-20,scl);
	tree(850,-20,scl);
	tree(930,-20,scl);
	tree(970,-20,scl);
	tree(1030,-20,scl);
	tree(1040,0,scl);
	tree(1080,-20,scl);

	
	glFlush();
}

void Display_on_screen(char *string)
{
	  
     while(*string){
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, *string++);
	 }
	 
}
void drawFrame3()
{
	
	drawBackground();
	
	drawForeground();
	
	glColor3f(1,1,1);
	for(int t=0;t<300;t+=1)
	{
	man12(200-t*0.1,150+t*0.0);
	man13(100-t*0.1,150+t*0.0);
	man14(300-t*0.1,150+t*0.0);
	man15(400-t*0.1,150+t*0.0);
	man15(500-t*0.1,150+t*0.0);
	man();
	}
	glColor3f(0,0,0);
	glRasterPos3f(350,615,0);
	Display_on_screen("CHILDREN IN RURAL AREA BEING LABOUR AS YOUNG AS 5-7 YEARS OLD IN AGRICULTURE SECTOR");
	glRasterPos3f(350,545,0);
	Display_on_screen("CHILD LABOUR IN THE AGRICULTURE SECTOR");
	
	
	glFlush();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	//we initizlilze the glut. functions
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(1300,700);
	glutCreateWindow("Rural area Window");
	glutDisplayFunc(drawFrame3);
		init();
	glutMainLoop();
}


