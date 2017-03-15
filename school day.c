
#include<stdio.h>
#include<stdlib.h>
#include<glut.h>
#include<math.h>
#include<string.h>
#define TEXTID 5

void window1();
void window2();
void window3();
void window4();
void window5();
void blackwheel(GLfloat ,GLfloat,GLdouble) ;
void sun12(GLfloat ,GLfloat,GLdouble );
void cloud12(GLfloat , GLfloat ,GLdouble );
void newtree(GLfloat , GLfloat , GLdouble );
void man12(float,float);
void man13(float,float);

int qq=0;
int rr=0;
int ss=0,vi=0;

void aeroplane(int x,int y)
{
	glColor3f(0.6,0,0.6);
	glBegin(GL_TRIANGLES);
		glVertex2f(x+100,y+25);
		glVertex2f(x+120,y+50);
		glVertex2f(x+120,y+25);
	glEnd();
	glColor3f(0.6,0,0.6);
	glBegin(GL_TRIANGLES);
		glVertex2f(x+60,y+80);
		glVertex2f(x+40,y+30);
		glVertex2f(x+20,y+30);
	glEnd();
	glColor3f(0.6,0,0.6);
	glBegin(GL_TRIANGLES);
		glVertex2f(x-20,y+20);
		glVertex2f(x,y+40);
		glVertex2f(x,y);
	glEnd();
	glColor3f(0.3,0.5,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(x+120,y+15);
		glVertex2f(x+120,y+25);
		glVertex2f(x,y+40);
		glVertex2f(x,y);
	glEnd();

}

void bird(int x,int y)
{
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_TRIANGLES);
		glVertex2f(x+5,y+30);
		glVertex2f(x+3,y+10);
		glVertex2f(x+7,y+10);
	glEnd();
	glColor3f(0.8,0.5,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(x,y+30);
		glVertex2f(x+3,y+30);
		glVertex2f(x+5,y+10);
		glVertex2f(x+3,y+10);
	glEnd();
	glColor3f(0.8,0.5,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(x+7,y+30);
		glVertex2f(x+10,y+30);
		glVertex2f(x+7,y+10);
		glVertex2f(x+5,y+10);
	glEnd();
	glColor3f(0.8,0.5,0.0);
	glBegin(GL_TRIANGLES);
		glVertex2f(x-20,y+26);
		glVertex2f(x,y+40);
		glVertex2f(x+3,y+30);
	glEnd();
	glColor3f(0.8,0.5,0.0);
	glBegin(GL_TRIANGLES);
		glVertex2f(x+7,y+30);
		glVertex2f(x+10,y+40);
		glVertex2f(x+30,y+26);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(x+3,y+10);
		glVertex2f(x+7,y+10);
		glVertex2f(x+10,y);
		glVertex2f(x,y);
	glEnd();

}

void drawText( float x, float y, int r, int g, int b, const char *string ) 
{
	int j = strlen( string );
 
	glColor3f( r, g, b );
	glRasterPos2f( x, y );
	for( int i = 0; i < j; i++ ) {
		glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24, string[i] );
	}
}

void drawText1( float x, float y, int r, int g, int b, const char *string ) 
{
	int j = strlen( string );
 
	glColor3f( r, g, b );
	glRasterPos2f( x, y );
	for( int i = 0; i < j; i++ ) {
		glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_10, string[i] );
	}
}

void blackwheel(GLfloat r1,GLfloat r2,GLdouble r3)
{
	float x1, y1, x2, y2;
	float angle;
	double radius = r3+5;
	x1 = r1, y1 = r2;
	glColor3f(0.5,0.5, 0.5);
	glPointSize(2.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x1, y1);
	for (angle = 1.0; angle < 361.0f; angle += 0.2)
	{
		x2 = x1 + sin(angle)*radius;
		y2 = y1 + cos(angle)*radius;
		glVertex2f(x2, y2);
	}
	glEnd();
}

void home()
{
		//Hill function	
	glColor3f(0.54,0.74,0.84);
	glBegin(GL_POLYGON);
		glVertex2f(-100,550);
		glVertex2f(50,850);
		glVertex2f(200,600);
		glVertex2f(350,850);
		glVertex2f(500,550);
	glEnd();

	float x=870;
	glColor3f(0.540,0.74,0.840);
	glBegin(GL_POLYGON);
		glVertex2f(x+10,550);
		glVertex2f(x+120,800);
		glVertex2f(x+250,550);
		glVertex2f(x+350,850);
		glVertex2f(x+500,550);
	glEnd();

	//HOME
	glColor3f(1,0.7529,0.7960);
	glBegin(GL_POLYGON);
		glVertex2f(200.0,400.0);
		glVertex2f(200.0,800.0);
		glVertex2f(410.0,800.0);
		glVertex2f(410.0,400.0);
	glEnd();
	
	glColor3f(1,0.4117,0.);
	glBegin(GL_POLYGON);
		glVertex2f(200.0,400.0);
		glVertex2f(200.0,800.0);
		glVertex2f(50.0,800.0);
		glVertex2f(50.0,450.0);
	glEnd();
			
	glColor3f(0.55,0.40,0.29);
	glBegin(GL_POLYGON);
		glVertex2f(200.0,800.0);
		glVertex2f(300.0,1000.0);
		glVertex2f(410.0,800.0);
	glEnd();
	
	glColor3f(0.5555,0.44440,0.2999);
	glBegin(GL_POLYGON);
		glVertex2f(200.0,800.0);
		glVertex2f(300.0,1000.0);
		glVertex2f(150.0,1000.0);
		glVertex2f(50.0,800.0);
		glEnd();
	
		//------------------------------------------------------------
			//// Door and window
		//------------------------------------------------------------
	
	glColor3f(0.7,0.6,0.4);
	glBegin(GL_POLYGON);
		glVertex2f(275.0,400.0);
		glVertex2f(275.0,550.0);
		glVertex2f(325.0,550.0);
		glVertex2f(325.0,400.0);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(100.0,550.0);
		glVertex2f(100.0,650.0);
		glVertex2f(150.0,650.0);
		glVertex2f(150.0,550.0);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
		glVertex2f(125.0,550.0);
		glVertex2f(125.0,650.0);
		glVertex2f(100.0,600.0);
		glVertex2f(150.0,600.0);
	glEnd();

	drawText(200,700,1.0,1.0,1.0,"Brundhavana Nilaya");

}

void road()
{			
	/**************  road  *********/
	glColor3ub(10,30,50);
	glBegin(GL_POLYGON);
      glVertex2i(0,275);
	  glVertex2i(1250,275);
      glVertex2i(1250,100);
      glVertex2i(0,100);
glEnd();

/************  STRIPES  ************/
	glColor3f(1.0,1.0,1.0);
	for(int x=0;x<1251;x=x+60)
	{
		glBegin(GL_POLYGON);
			glVertex2f(x,172.5+19);
			glVertex2f(x,177.5+19);
			glVertex2f(x+30,177.5+19);
			glVertex2f(x+30,172.5+19);
		glEnd();
	}	
}

void school(GLfloat x1,GLfloat x2,GLfloat y1,GLfloat y2)
{
	//GLfloat x1=900.0,x2=1220.0,y1=400.0,y2=900.0;
	glColor3f(0.6,0.6,0.7);
	glBegin(GL_POLYGON);
		glVertex2f(x1,y1);
		glVertex2f(x1,y2);
		glVertex2f(x1+50.0,y2+50.0);
		glVertex2f(x2-50,y2+50);
		glVertex2f(x2,y2);
		glVertex2f(x2,y1);
	glEnd();

	glColor3f(0.3,0.4,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(x1,y2);
		glVertex2f(x2,y2);
		glVertex2f(x2,y2-40);
		glVertex2f(x1,y2-40);
	glEnd();
	drawText(x1+15,y2-32,0.137255,0.8,0.776863,"LITTLE-FLOWER SCHOOL");
	
	//dor and window
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(x1,y1+175);
		glVertex2f(x1,y2-175);
		glVertex2f(x1+50,y2-175);
		glVertex2f(x1+50,y1+175);
	glEnd();

	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
		glVertex2f(x1,y1+250);
		glVertex2f(x1+50,y1+250);
		glVertex2f(x1+25,y2-175);
		glVertex2f(x1+25,y1+175);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(x2,y1+175);
		glVertex2f(x2,y2-175);
		glVertex2f(x2-50,y2-175);
		glVertex2f(x2-50,y1+175);
	glEnd();

	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
		glVertex2f(x2,y1+250);
		glVertex2f(x2-50,y1+250);
		glVertex2f(x2-25,y2-175);
		glVertex2f(x2-25,y1+175);
	glEnd();

	glColor3f(0.7,0.7,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(x1+50,y1);
		glVertex2f(x1+50,y1+150);
		glVertex2f(x1+100,y1+150);
		glVertex2f(x1+100,y1);
	glEnd();
}

void man(float x,float y)
{
	//head code
	glColor3f(1.0,0.9,0.8);
	glBegin(GL_POLYGON);
	glVertex2f(x-20,y+90);
	glVertex2f(x-20,y+110);
	glVertex2f(x-10,y+130);
	glVertex2f(x,y+135);
	glVertex2f(x+10,y+130);
	glVertex2f(x+20,y+110);
	glVertex2f(x+20,y+90);
	glVertex2f(x,y+75);
	glEnd();
	
	// face code
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(x-13,y+110);
	glVertex2f(x-7,y+110);
	glVertex2f(x+7,y+110);
	glVertex2f(x+13,y+110);
	glVertex2f(x,y+105);
	glVertex2f(x,y+95);
	glVertex2f(x-05,y+85);
	glVertex2f(x+05,y+85);
	glEnd();

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-10,y+130);
	glVertex2f(x,y+135);
	glVertex2f(x+10,y+130);
	glVertex2f(x+15,y+120);
	glVertex2f(x+10,y+135);
	glVertex2f(x,y+125);
	glVertex2f(x-5,y+130);
	glVertex2f(x-10,y+120);
	glVertex2f(x-15,y+125);
	glVertex2f(x-15,y+130);
	glEnd();


	// shirt code 
	glColor3f(1.0,1.0,0.0);

	glBegin(GL_POLYGON);
	glVertex2f(x,y);
	glVertex2f(x-20,y);
	glVertex2f(x-20,y+70);
	glVertex2f(x-20,y+80);
	glVertex2f(x-15,y+80);
	glVertex2f(x,y+70);
	glVertex2f(x+15,y+80);
	glVertex2f(x+20,y+80);
	glVertex2f(x+20,y+70);
	glVertex2f(x+20,y);
	glVertex2f(x,y);
	glEnd();
	// scholders and hands code
	glBegin(GL_POLYGON);
	glVertex2f(x-20,y+65);
	glVertex2f(x-20,y+80);
	glVertex2f(x-30,y+80);
	glVertex2f(x-45,y+55);
	glVertex2f(x-45,y+55);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(x+20,y+65);
	glVertex2f(x+20,y+80);
	glVertex2f(x+30,y+80);
	glVertex2f(x+45,y+55);
	glVertex2f(x+45,y+55);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(x+45,y+55);
	glVertex2f(x+35,y);
	glVertex2f(x+25,y);
	glVertex2f(x+35,y+58);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(x-45,y+55);
	glVertex2f(x-35,y);
	glVertex2f(x-25,y);
	glVertex2f(x-35,y+58);
	glEnd();
	
	//pant code

	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-20,y);
	glVertex2f(x+20,y);
	glVertex2f(x+25,y-40);
	glVertex2f(x+10,y-40);
	glVertex2f(x,y-10);
	glVertex2f(x-10,y-40);
	glVertex2f(x-25,y-40);
	glVertex2f(x-20,y);
	glEnd();
	// legs code
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-25,y-40);
	glVertex2f(x-20,y-80);
	glVertex2f(x-15,y-80);
	glVertex2f(x-10,y-40);
	glEnd();
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(x-15,y-80);
	glVertex2f(x-20,y-80);
	glVertex2f(x-20,y-90);
	glVertex2f(x-15,y-90);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(x+25,y-40);
	glVertex2f(x+20,y-80);
	glVertex2f(x+15,y-80);
	glVertex2f(x+10,y-40);
	glEnd();
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(x+15,y-80);
	glVertex2f(x+20,y-80);
	glVertex2f(x+20,y-90);
	glVertex2f(x+15,y-90);
	glEnd();

}

void car(float x1,float y1)
{
	//x1=10.0,y1=220.0;
	glColor3f(0.3,0.2,0.8);
	glBegin(GL_POLYGON);
		
		glVertex2f(x1,y1+10);
		glVertex2f(x1,y1+70);
		glVertex2f(x1+5,y1+75);
		glVertex2f(x1+40,y1+90);
		glVertex2f(x1+70,y1+120);
		glVertex2f(x1+150,y1+120);
		glVertex2f(x1+180,y1+90);
		
		glVertex2f(x1+210,y1+75);
		glVertex2f(x1+215,y1+70);
		glVertex2f(x1+215,y1+10);
		glVertex2f(x1+205,y1);
		glVertex2f(x1+10.0,y1);
	glEnd();

	//-------car dors------------------

	glColor3f(0.4,0.5,0.7);
	glBegin(GL_POLYGON);
	
		glVertex2f(x1+40,y1+10);
		glVertex2f(x1+40,y1+70);
		glVertex2f(x1+72,y1+110);
		glVertex2f(x1+107,y1+110);
		glVertex2f(x1+107,y1+10);
		glEnd();


		glColor3f(0.1,0.2,0.3);
	glBegin(GL_POLYGON);
	
		glVertex2f(x1+50,y1+65);
		glVertex2f(x1+75,y1+100);
		glVertex2f(x1+101,y1+100);
		glVertex2f(x1+101,y1+65);
		glEnd();

		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);
			glVertex2f(x1+101,y1+55);
			glVertex2f(x1+101,y1+48);
			glVertex2f(x1+91,y1+48);
			glVertex2f(x1+91,y1+55);
		glEnd();
		
		glColor3f(0.4,0.5,0.7);
	glBegin(GL_POLYGON);
	
		glVertex2f(x1+110,y1+10);
		glVertex2f(x1+110,y1+110);
		glVertex2f(x1+142,y1+110);
		glVertex2f(x1+177,y1+72);
		glVertex2f(x1+177,y1+10);
		glEnd();

		glColor3f(0.1,0.2,0.3);
	glBegin(GL_POLYGON);
	
		glVertex2f(x1+115,y1+65);
		glVertex2f(x1+115,y1+100);
		glVertex2f(x1+137,y1+100);
		glVertex2f(x1+167,y1+65);
		glEnd();

		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);
			glVertex2f(x1+115,y1+55);
			glVertex2f(x1+115,y1+48);
			glVertex2f(x1+125,y1+48);
			glVertex2f(x1+125,y1+55);
		glEnd();
		glPointSize(3);
		blackwheel(x1+50,y1-5,10);
		blackwheel(x1+170,y1-5,10);
		//circledraw(x1+50,y1-5,13);
		//circledraw(x1+170,y1-5,13);
	drawText(x1+29,y1+10,1.0,1.0,0.5,"SCHOOL CAR");
}

void window1()
{
	for(int aj=0;aj<800;aj+=3)
	{
	//glColor3f(0.53,0.85,0.98);
		if(aj<=150)
		{
			glColor3f(-0.95+aj*0.008,-0.95+aj*0.009,-0.95+aj*0.009);
				glBegin(GL_POLYGON);
				glVertex2f(-100,0);
				glVertex2f(-100,1300);
				glVertex2f(1300,1300);
				glVertex2f(1300,0);
			glEnd();
		}
		if(aj>150)
		{
		glColor3f(0.53,0.85,0.98);
		glBegin(GL_POLYGON);
		glVertex2f(-100,0);
		glVertex2f(-100,1300);
		glVertex2f(1300,1300);
		glVertex2f(1300,0);
		glEnd();
		}
		sun12(500+aj*0.4,500+aj*0.5,35);
		aeroplane(1200-aj*2,1150);
		bird(500+aj*0.3,750+aj*0.7);
		bird(500+aj*0.5,750+aj*0.6);
		bird(800-aj*0.3,750+aj*0.7);
		bird(800-aj*0.5,750+aj*0.6);
		bird(500-aj*0.3,750+aj*0.7);
		bird(800+aj*0.3,750+aj*0.7);
		bird(700-aj*0.3,750+aj*0.7);
		bird(600+aj*0.3,750+aj*0.9);
		bird(900+aj*0.6,750+aj*0.4);
		newtree(500,750,50);
		newtree(700,750,50);
		
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glColor3f(0,0.5,0);
	glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0,550.0);
		glVertex2f(1300,550.0);
		glVertex2f(1300,0);
	glEnd();
	home();
	road();
	glFlush();
	for(int jk1=0;jk1<20000;jk1++)
			for(int h1=0;h1<2000;h1++);
	}
	for(int j=0;j<200000;j++)
			for(int h=0;h<20000;h++);
}

void window2()
{
	for(int ab=0;ab<1300;ab++)
	{
	glColor3f(0.53,0.85,0.98);
	glBegin(GL_POLYGON);
	glVertex2f(-100,0);
		glVertex2f(-100,1300);
		glVertex2f(1300,1300);
		glVertex2f(1300,0);
	glEnd();
	if(ab<150)
	{
	cloud12(640,1000,50);
	cloud12(690,1000,50);
	}
	if(ab>=150)
		
		{
			sun12(700,1000,35);
			cloud12(640+ab*0.2,1000,50);
			cloud12(690+ab*0.2,1000,50);
			bird(300+ab*1.2,400+ab*1.8);
			bird(500-ab*1.2,600+ab*1.8);
		}
		newtree(500,750,50);
		newtree(800,750,50);
		//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
		glColor3f(0,0.5,0);
		glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0,550.0);
		glVertex2f(1300,550.0);
		glVertex2f(1300,0);
		glEnd();
		home();
		road();
		if(ab<=148)
		{
		man(280,440-ab*0.4);
		car(0+ab,220);
		}
		if(ab>=149)
		if(ab<=151)
		{
		car(150,220);
			for(int mn=0;mn<=10000;mn++)
		for(int pq=0;pq<=10000;pq++);
	}
	if(ab>=151)
		if(ab<=1200)
		{ 
		
			car(152+ss*2,220);
			ss+=2;
		}
	glFlush();
	for(int jk12=0;jk12<2000;jk12++)
			for(int h12=0;h12<200;h12++);
	}
	for(int j=0;j<200000;j++)
		for(int h=0;h<5000;h++);

}

void window3()
{
	for(int z=0;z<1700;z+=2)
	{
	glColor3f(0.53,0.85,0.98);
	glBegin(GL_POLYGON);
	glVertex2f(-100,0);
		glVertex2f(-100,1300);
		glVertex2f(1300,1300);
		glVertex2f(1300,0);
	glEnd();
	aeroplane(1600-z*8,1150);
	newtree(100+z*0.03,950,50);
	newtree(400+z*0.03,950,50);
	sun12(800+z*0.03,1000+z*0.1,35);
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glColor3f(0.53,0.85,0.98);
	//ground
	glColor3f(0.88,0.78,0.68);
	glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0,800);
		glVertex2f(1300,800);
		glVertex2f(1300,0);
	glEnd();

	//grass
	glColor3f(0,.5,0);
	int l,k,i=-20,j=150;
	glColor3f(0,.5,0);
	for(l=0;l<40;l++)
	{	
		for(k=0;k<140;k++)
		{
			glBegin(GL_LINES);
			glVertex2i(i+14,j);
			glVertex2i(i+12,j+14);
			glVertex2i(i+15,j);
			glVertex2i(i+15,j+17);
			glVertex2i(i+16,j);
			glVertex2i(i+18,j+14);
			glEnd();
			i+=10;
		}
		j+=10;
		i=-20;
	}
	//road
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
      glVertex2i(0,275);
	  glVertex2i(1250,275);
      glVertex2i(1250,100);
      glVertex2i(0,100);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	for(int x=0;x<1251;x=x+60)
	{
		glBegin(GL_POLYGON);
			glVertex2f(x,172.5+19);
			glVertex2f(x,177.5+19);
			glVertex2f(x+30,177.5+19);
			glVertex2f(x+30,172.5+19);
		glEnd();
	}
	// school buildings	
	glBegin(GL_QUADS);
	glColor3f(0.1,0.6,0.6);
	glVertex2i(210,430);
	glVertex2i(450,430);
	glVertex2i(450,900);
	glVertex2i(210,900);
	glColor3f(0.0,0.46,0.46);
	glVertex2i(450,430);
	glVertex2i(700,490);
	glVertex2i(700,960);
	glVertex2i(450,900);
	
	//blue stripes
	glColor3f(0.1372,0.1372,0.5568);
	glVertex2i(210,870);
	glVertex2i(210,840);
	glVertex2i(450,840);
	glVertex2i(450,870);
	glVertex2i(210,810);
	glVertex2i(210,780);
	glVertex2i(450,780);
	glVertex2i(450,810);
	glVertex2i(210,750);
	glVertex2i(210,720);
	glVertex2i(450,720);
	glVertex2i(450,750);
	glColor3f(0.1,0.1,0.5);
	glVertex2i(450,840);
	glVertex2i(450,870);
	glVertex2i(700,930);
	glVertex2i(700,900);
	glVertex2i(450,780);
	glVertex2i(450,810);
	glVertex2i(700,870);
	glVertex2i(700,840);
	glVertex2i(450,720);
	glVertex2i(450,750);
	glVertex2i(700,810);
	glVertex2i(700,780);
	
	glColor3f(0.1,0.1,0.5);
	glVertex2i(210,690);
	glVertex2i(210,660);
	glVertex2i(450,660);
	glVertex2i(450,690);
	glVertex2i(450,690);
	glVertex2i(700,750);
	glVertex2i(700,720);
	glVertex2i(450,660);

	glColor3f(0.1,0.1,0.5);
	glVertex2i(210,630);
	glVertex2i(210,600);
	glVertex2i(450,600);
	glVertex2i(450,630);
	glVertex2i(450,630);
	glVertex2i(700,690);
	glVertex2i(700,660);
	glVertex2i(450,600);

	glColor3f(0.1,0.1,0.5);
	glVertex2i(210,570);
	glVertex2i(210,540);
	glVertex2i(450,540);
	glVertex2i(450,570);
	glVertex2i(450,570);
	glVertex2i(700,630);
	glVertex2i(700,600);
	glVertex2i(450,540);

	glColor3f(0.1,0.1,0.5);
	glVertex2i(210,510);
	glVertex2i(210,480);
	glVertex2i(450,480);
	glVertex2i(450,510);
	glVertex2i(450,510);
	glVertex2i(700,570);
	glVertex2i(700,540);
	glVertex2i(450,480);
	glEnd();

	//glass divider
	glColor3f(0.4,0.4,0.6);
	i=250,j;
	for(j=1;j<6;j++)
	{
		glBegin(GL_LINES);
		glVertex2f(i,430);
		glVertex2f(i,900);
		glEnd();
		i+=240;
		glBegin(GL_LINES);
		glVertex2f(i,430);
		glVertex2f(i,935);
		glEnd();
		i-=200;
	}
	
	//terrace
	glColor3f(1.0,0.66,0.66);
	glBegin(GL_QUADS);
	glVertex2i(210,900);
	glVertex2i(450,900);
	glVertex2i(700,960);
	glVertex2i(430,960);
	glEnd();

	school(700.0,1100.0,400.0,900.0);

		//-------------------
	// black board
	//-------------------
	if(z>840)
		//if(z<=550)
	{
	
	 GLfloat x1=700.0,x2=1050.0,y1=400.0,y2=900.0;
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);
		glVertex2f(x1+70,y2-200);
		glVertex2f(x1+70,y2-50);
		glVertex2f(x2-50,y2-50);
		glVertex2f(x2-50,y2-200);
	glEnd();
	drawText(x1+85,y2-90,1,1,1,"A B C D E F G");
	drawText(x1+90,y2-140,1,1,1,"g f e d c b a");
	drawText(x1+85,y2-185,1,0,1,"1  2  3  4  5 6 7 8 9 10"); 
	
	// chair
		glColor3f(0.76,0.67,0.51);
	glBegin(GL_POLYGON);
	glVertex2f(x1+110,y1+150);
	glVertex2f(x1+110,y1+250);
	glVertex2f(x2-90,y1+250);
	glVertex2f(x2-90,y1+150);
	glEnd();

	glColor3f(1.0,0.5,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x1+120,y1+160);
	glVertex2f(x1+120,y1+185);
	glVertex2f(x2-100,y1+185);
	glVertex2f(x2-100,y1+160);
	glEnd();

	glColor3f(1.0,0.85,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(x1+120,y1+215);
	glVertex2f(x1+120,y1+240);
	glVertex2f(x2-100,y1+240);
	glVertex2f(x2-100,y1+215);
	glEnd();

	}	
		if(z<=740)
		car(-20+z,220);
		if(z>=740)
			if(z<=840)
			{
				man13(770,280+qq);
				car(740,220);
				qq++;
			}
			
			if(z>=840)
			{
				car(740+rr,220);
				rr++;
			}
			glFlush();
			for(int jk13=0;jk13<20000;jk13++)
				for(int h13=0;h13<200;h13++);
			}
	
			for(int jk15=0;jk15<20000;jk15++)
				for(int h15=0;h15<2000;h15++);
}

void cloud12(GLfloat r1, GLfloat r2,GLdouble r3)
{
	float x1, y1, x2, y2;
	float angle;
	double radius = r3;
	x1 = r1, y1 = r2;
	glColor3f(1, 1, 1);
	glPointSize(2.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x1, y1);
	for (angle = 1.0; angle < 361.0f; angle += 0.2)
	{
		x2 = x1 + sin(angle)*radius;
		y2 = y1 + cos(angle)*radius;
		glVertex2f(x2, y2);
	}glEnd();
	float x4, y4, x3, y3;
	float angle1;
	double radius1 = r3+10;
	x4= r1+50, y4 = r2;
	glColor3f(1, 1, 1);
	glPointSize(2.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x4, y4);
	for (angle1 = 1.0; angle1 < 361.0f; angle1 += 0.2)
	{
		x3 = x4 + sin(angle1)*radius1;
		y3 = y4 + cos(angle1)*radius1;
		glVertex2f(x3, y3);
	}glEnd();
	float x5, y5, x6, y6;
	float angle2;
	double radius2 = r3;
	x5= r1+30, y5 = r2+50;
	glColor3f(1, 1, 1);
	glPointSize(2.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x5, y5);
	for (angle2 = 1.0; angle2 < 361.0f; angle2 += 0.2)
	{
		x6 = x5 + sin(angle2)*radius2;
		y6 = y5 + cos(angle2)*radius2;
		glVertex2f(x6, y6);
	}glEnd();
	}

void newtree(GLfloat r1, GLfloat r2, GLdouble r3)
{
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(r1+10,r2+80);
	glVertex2f(r1+40,r2+80);
	glVertex2f(r1+60,r2-220);
	glVertex2f(r1,r2-220);
	glEnd();
		float x1, y1, x2, y2;
	float angle;
	double radius = r3;
	x1 = r1-20, y1 = r2;
	glColor3f(0, 1, 0);
	glPointSize(2.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x1, y1);
	for (angle = 1.0; angle < 361.0f; angle += 0.2)
	{
		x2 = x1 + sin(angle)*radius;
		y2 = y1 + cos(angle)*radius;
		glVertex2f(x2, y2);
	}glEnd();
	float x4, y4, x3, y3;
	float angle1;
	double radius1 = r3+10;
	x4= r1+70, y4 = r2;
	glColor3f(0, 1, 0);
	glPointSize(2.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x4, y4);
	for (angle1 = 1.0; angle1 < 361.0f; angle1 += 0.2)
	{
		x3 = x4 + sin(angle1)*radius1;
		y3 = y4 + cos(angle1)*radius1;
		glVertex2f(x3, y3);
	}glEnd();
	float x5, y5, x6, y6;
	float angle2;
	double radius2 = r3;
	x5= r1+30, y5 = r2+50;
	glColor3f(0, 1, 0);
	glPointSize(2.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x5, y5);
	for (angle2 = 1.0; angle2 < 361.0f; angle2 += 0.2)
	{
		x6 = x5 + sin(angle2)*radius2;
		y6 = y5 + cos(angle2)*radius2;
		glVertex2f(x6, y6);
	}glEnd();
	float xo, yo, xp, yp;
	float anglep;
	double radiusp = r3;
	xo= r1+10, yo = r2-50;
	glColor3f(0, 1, 0);
	glPointSize(2.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(xo, yo);
	for (anglep = 1.0; anglep < 361.0f; anglep += 0.2)
	{
		xp = xo + sin(anglep)*radiusp;
		yp = yo + cos(anglep)*radiusp;
		glVertex2f(xp, yp);
	}
	glEnd();
}

void sun12(GLfloat r1, GLfloat r2, GLdouble r3)
{
		
	float x1, y1, x2, y2;
	float angle;
	double radius = r3+30;
	x1 = r1, y1 = r2;
	glColor3f(1, 1, 0);
	glPointSize(2.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x1, y1);
	for (angle = 1.0; angle < 361.0f; angle += 0.2)
	{
		x2 = x1 + sin(angle)*radius;
		y2 = y1 + cos(angle)*radius;
		glVertex2f(x2, y2);
	}
	glEnd();
}

void football(GLfloat r1, GLfloat r2,GLdouble r3)
{
		
	float x1, y1, x2, y2;
	float angle;
	double radius = r3;
	x1 = r1, y1 = r2;
	glColor3f(0, 0, 1);
	glPointSize(2.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x1, y1);
	for (angle = 1.0; angle < 361.0f; angle += 0.2)
	{
		x2 = x1 + sin(angle)*radius;
		y2 = y1 + cos(angle)*radius;
		glVertex2f(x2, y2);
	}
	glEnd();
}
	
void footman(int x,int y)
{
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x,y);
	glVertex2f(x-15,y+15);
	glVertex2f(x-15,y+25);
	glVertex2f(x,y+35);
	glVertex2f(x+15,y+35);
	glVertex2f(x+15,y);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(x+15,y+35);
	glVertex2f(x+25,y+25);
	glVertex2f(x+25,y+15);
	glVertex2f(x+15,y);
	glEnd();
	
	glColor3f(0.7,1.0,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(x-5,y);
	glVertex2f(x-5,y-50);
	glVertex2f(x+20,y-50);
	glVertex2f(x+20,y);
	glEnd();
	
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-5,y-50);
	glVertex2f(x-5,y-80);
	glVertex2f(x+20,y-80);
	glVertex2f(x+20,y-50);
	glEnd();
	
	glColor3f(0.7,1.0,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(x-5,y);
	glVertex2f(x-5,y-20);
	glVertex2f(x+43,y-48);
	glVertex2f(x+45,y-45);
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
	glVertex2f(x+4,y-130);
	glVertex2f(x+4,y-120);
	glVertex2f(x+16,y-120);
	glVertex2f(x+16,y-130);
	glEnd();
}
	
void footman2(int x,int y)
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

void treesa(int x,int y)
{
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x,y);
	glVertex2f(x+40,y+80);
	glVertex2f(x+80,y+60);
	glVertex2f(x+80,y+40);
	glEnd();
	
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x+40,y+80);
	glVertex2f(x,y+160);
	glVertex2f(x+80,y+80);
	glVertex2f(x+80,y+60);
	glEnd();
	
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x+80,y+80);
	glVertex2f(x+80,y+60);
	glVertex2f(x+120,y+60);
	glVertex2f(x+160,y+160);
	glEnd();
	
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x+80,y+40);
	glVertex2f(x+80,y+60);
	glVertex2f(x+120,y+60);
	glVertex2f(x+160,y);
	glEnd();
	
	glColor3f(0.4,0.8,0.4);
	glBegin(GL_POLYGON);
	glVertex2f(x+70,y+45);
	glVertex2f(x+90,y+45);
	glVertex2f(x+90,y-100);
	glVertex2f(x+70,y-100);
	glEnd();

	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x+70,y-50);
	glVertex2f(x+70,y-54);
	glVertex2f(x+90,y-54);
	glVertex2f(x+90,y-50);
	glEnd();

	glColor3f(1,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(x+70,y-70);
	glVertex2f(x+70,y-74);
	glVertex2f(x+90,y-74);
	glVertex2f(x+90,y-70);
	glEnd();

}

void taap12(int x,int y)
{
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(x,y);
	glVertex2f(x-150,y);
	glVertex2f(x-150,y+150);
	glVertex2f(x,y+150);
	glEnd();

	glColor3f(1,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(x-150,y+110);
	glVertex2f(x-150,y+100);
	glVertex2f(x-190,y+100);
	glVertex2f(x-190,y+110);
	glEnd();
	
	glColor3f(1,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(x-190,y+100);
	glVertex2f(x-185,y+100);
	glVertex2f(x-185,y+95);
	glVertex2f(x-190,y+95);
	glEnd();
	drawText(x-145,y+60,1.0,1.0,0.0,"TAP WATER");
}

void man12(float x,float y)
{
	//head code
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-20,y+90);
	glVertex2f(x-20,y+110);
	glVertex2f(x-10,y+130);
	glVertex2f(x,y+135);
	glVertex2f(x+10,y+130);
	glVertex2f(x+20,y+110);
	glVertex2f(x+20,y+90);
	glVertex2f(x,y+75);
	glEnd();
	
	// face code
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(x-13,y+110);
	glVertex2f(x-7,y+110);
	glVertex2f(x+7,y+110);
	glVertex2f(x+13,y+110);
	glVertex2f(x,y+105);
	glVertex2f(x,y+95);
	glVertex2f(x-05,y+85);
	glVertex2f(x+05,y+85);
	glEnd();

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-10,y+130);
	glVertex2f(x,y+135);
	glVertex2f(x+10,y+130);
	glVertex2f(x+15,y+120);
	glVertex2f(x+10,y+135);
	glVertex2f(x,y+125);
	glVertex2f(x-5,y+130);
	glVertex2f(x-10,y+120);
	glVertex2f(x-15,y+125);
	glVertex2f(x-15,y+130);
	glEnd();

	// shirt code 
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x,y);
	glVertex2f(x-20,y);
	glVertex2f(x-20,y+70);
	glVertex2f(x-20,y+80);
	glVertex2f(x-15,y+80);
	glVertex2f(x,y+70);
	glVertex2f(x+15,y+80);
	glVertex2f(x+20,y+80);
	glVertex2f(x+20,y+70);
	glVertex2f(x+20,y);
	glVertex2f(x,y);
	glEnd();
	
	// scholders and hands code
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-20,y+65);
	glVertex2f(x-20,y+80);
	glVertex2f(x-30,y+80);
	glVertex2f(x-45,y+55);
	glVertex2f(x-45,y+55);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(x+20,y+65);
	glVertex2f(x+20,y+80);
	glVertex2f(x+30,y+80);
	glVertex2f(x+45,y+55);
	glVertex2f(x+45,y+55);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(x+45,y+55);
	glVertex2f(x+35,y);
	glVertex2f(x+25,y);
	glVertex2f(x+35,y+58);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(x-45,y+55);
	glVertex2f(x-35,y);
	glVertex2f(x-25,y);
	glVertex2f(x-35,y+58);
	glEnd();
	
	//pant code

	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-20,y);
	glVertex2f(x+20,y);
	glVertex2f(x+25,y-40);
	glVertex2f(x+10,y-40);
	glVertex2f(x,y-10);
	glVertex2f(x-10,y-40);
	glVertex2f(x-25,y-40);
	glVertex2f(x-20,y);
	glEnd();
	// legs code
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-25,y-40);
	glVertex2f(x-20,y-80);
	glVertex2f(x-15,y-80);
	glVertex2f(x-10,y-40);
	glEnd();

	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(x-15,y-80);
	glVertex2f(x-20,y-80);
	glVertex2f(x-20,y-90);
	glVertex2f(x-15,y-90);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(x+25,y-40);
	glVertex2f(x+20,y-80);
	glVertex2f(x+15,y-80);
	glVertex2f(x+10,y-40);
	glEnd();
	glColor3f(0,0,0);

	glBegin(GL_POLYGON);
	glVertex2f(x+15,y-80);
	glVertex2f(x+20,y-80);
	glVertex2f(x+20,y-90);
	glVertex2f(x+15,y-90);
	glEnd();

}

void man13(float x,float y)
{
	//head code
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-20,y+90);
	glVertex2f(x-20,y+110);
	glVertex2f(x-10,y+130);
	glVertex2f(x,y+135);
	glVertex2f(x+10,y+130);
	glVertex2f(x+20,y+110);
	glVertex2f(x+20,y+90);
	glVertex2f(x,y+75);
	glEnd();
	
	// face code
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(x-13,y+110);
	glVertex2f(x-7,y+110);
	glVertex2f(x+7,y+110);
	glVertex2f(x+13,y+110);
	glVertex2f(x,y+105);
	glVertex2f(x,y+95);
	glVertex2f(x-05,y+85);
	glVertex2f(x+05,y+85);
	glEnd();

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-10,y+130);
	glVertex2f(x,y+135);
	glVertex2f(x+10,y+130);
	glVertex2f(x+15,y+120);
	glVertex2f(x+10,y+135);
	glVertex2f(x,y+125);
	glVertex2f(x-5,y+130);
	glVertex2f(x-10,y+120);
	glVertex2f(x-15,y+125);
	glVertex2f(x-15,y+130);
	glEnd();

	// shirt code 
	glColor3f(1.0,1.0,0.0);

	glBegin(GL_POLYGON);
	glVertex2f(x,y);
	glVertex2f(x-20,y);
	glVertex2f(x-20,y+70);
	glVertex2f(x-20,y+80);
	glVertex2f(x-15,y+80);
	glVertex2f(x,y+70);
	glVertex2f(x+15,y+80);
	glVertex2f(x+20,y+80);
	glVertex2f(x+20,y+70);
	glVertex2f(x+20,y);
	glVertex2f(x,y);
	glEnd();
	//bag

	glColor3f(0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-12,y+20);
	glVertex2f(x-12,y+65);
	glVertex2f(x+16,y+65);
	glVertex2f(x+16,y+20);
	glEnd();

	// scholders and hands code
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-20,y+65);
	glVertex2f(x-20,y+80);
	glVertex2f(x-30,y+80);
	glVertex2f(x-45,y+55);
	glVertex2f(x-45,y+55);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(x+20,y+65);
	glVertex2f(x+20,y+80);
	glVertex2f(x+30,y+80);
	glVertex2f(x+45,y+55);
	glVertex2f(x+45,y+55);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(x+45,y+55);
	glVertex2f(x+35,y);
	glVertex2f(x+25,y);
	glVertex2f(x+35,y+58);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(x-45,y+55);
	glVertex2f(x-35,y);
	glVertex2f(x-25,y);
	glVertex2f(x-35,y+58);
	glEnd();
	
	//pant code

	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-20,y);
	glVertex2f(x+20,y);
	glVertex2f(x+25,y-40);
	glVertex2f(x+10,y-40);
	glVertex2f(x,y-10);
	glVertex2f(x-10,y-40);
	glVertex2f(x-25,y-40);
	glVertex2f(x-20,y);
	glEnd();

	// legs code
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(x-25,y-40);
	glVertex2f(x-20,y-80);
	glVertex2f(x-15,y-80);
	glVertex2f(x-10,y-40);
	glEnd();

	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(x-15,y-80);
	glVertex2f(x-20,y-80);
	glVertex2f(x-20,y-90);
	glVertex2f(x-15,y-90);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(x+25,y-40);
	glVertex2f(x+20,y-80);
	glVertex2f(x+15,y-80);
	glVertex2f(x+10,y-40);
	glEnd();

	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(x+15,y-80);
	glVertex2f(x+20,y-80);
	glVertex2f(x+20,y-90);
	glVertex2f(x+15,y-90);
	glEnd();

}

void window4()
{
	for(int t=0;t<300;t+=1)
	{
	//glColor3f(0.53,0.85,0.98);
	glColor3f(0.53,0.85,0.98);
	glBegin(GL_POLYGON);
	glVertex2f(0,900);
		glVertex2f(0,1300);
		glVertex2f(1300,1300);
		glVertex2f(1300,900);
	glEnd();

	//ground
	glColor3f(0.88,0.78,0.68);
	glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0,800);
		glVertex2f(1300,800);
		glVertex2f(1300,0);
	glEnd();

	school(900.0,1220.0,400.0,900.0);
	sun12(550+t*0.3,1150-t*0.3,30);
	
	cloud12(350,1100,50);
	cloud12(737,1015,50);
	
	treesa(650,800);
	treesa(350,800);
	treesa(50,800);
	man(20+t*0.4,660);
	treesa(100,650);
	treesa(410,650);
	treesa(690,650);
	man(600+t*0.6,490);
	taap12(870,410);
	footman2(960-t*0.6,360+t*0.3);
	footman(200+t*2.0,500-t*0.4);
	man12(500-t*0.1,350+t*0.2);
	football(690+t*0.45,210+t*0.1,25);
	footman(620+t*0.4,360-t*0.3);
	footman(580+t,320-t*0.1);
	footman2(920+t*0.4,320);

	//stresser function
	int a1=100,b1=400;
	glColor3f(0.0,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2i(a1,b1);
	glVertex2i(a1,b1+30);
	glVertex2i(a1+200,b1+60);
	glVertex2i(a1+200,b1+30);
	
	glEnd();
	glColor3f(0.0,0.5,0.6);
	glBegin(GL_POLYGON);
	glVertex2i(a1+90,b1+15);
	glVertex2i(a1+110,b1+15);
	glVertex2i(a1+110,b1-75);
	glVertex2i(a1+90,b1-75);
	glEnd();

	glColor3f(1.0,0.0,0.7);
	glBegin(GL_LINE_LOOP);
	glVertex2i(a1+25,b1-25);
	glVertex2i(a1+25,b1);
	glVertex2i(a1+5,b1+30);
	glVertex2i(a1+5,b1+60);
	glVertex2i(a1+15,b1+60);
	glVertex2i(a1+15,b1+30);
	glVertex2i(a1+35,b1);
	glVertex2i(a1+35,b1-25);
	glEnd();

	glColor3f(1.0,0.0,0.7);
	glBegin(GL_LINE_LOOP);
	glVertex2i(265,400);
	glVertex2i(265,430);
	glVertex2i(285,460);
	glVertex2i(285,490);
	glVertex2i(295,490);
	glVertex2i(295,460);
	glVertex2i(275,430);
	glVertex2i(275,400);
	glEnd();

	//slider Game

	glColor3f(0.0,0.4,0.4);
	glBegin(GL_QUADS);
	glVertex2i(350,150);
	glVertex2i(350,300);
	glVertex2i(355,300);
	glVertex2i(355,150);
	glEnd();

	glColor3f(0.0,0.7,0.4);
	glBegin(GL_QUADS);
	glVertex2i(350,300);
	glVertex2i(365,310);
	glVertex2i(485,140);
	glVertex2i(470,130);
	glEnd();

	glColor3f(0.0,0.3,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(350,300);
	glVertex2i(368,310);
	glVertex2i(488,140);
	glVertex2i(470,130);
	glEnd();

	glColor3f(0.0,0.4,0.9);
	glBegin(GL_LINE_LOOP);
	glVertex2i(280,150);
	glVertex2i(290,155);
	glVertex2i(355,300);
	glVertex2i(350,300);
	glEnd();
	
	glFlush();
	for(int jk16=0;jk16<20000;jk16++)
			for(int h16=0;h16<200;h16++);
	}
	for(int jk16=0;jk16<20000;jk16++)
			for(int h16=0;h16<20000;h16++);
}

void man3(float x,float y)
{
	man12(x,y);
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_POLYGON);
	{
		glVertex2d(x+10,y+10);
		glVertex2d(x+10,y+30);
		glVertex2d(x+30,y+10);
		glVertex2d(x+30,y+30);
	}
	glEnd();

}

void window5()
{
	for(int uv=0;uv<150;uv+=4)
	{

		if(uv<=60)
		{
		glColor3f(0,0.6+uv*0.004,1);
		glBegin(GL_POLYGON);
			glVertex2f(-100,0);
			glVertex2f(-100,1300);
			glVertex2f(1300,1300);
			glVertex2f(1300,0);
			glVertex2f(-100,0);
		glEnd();
		}
		newtree(500,750,50);
		newtree(800,750,50);
		//glColor3f(0.0,0.7,0.5);
		glColor3f(0,0.5,0);
		glBegin(GL_POLYGON);
			glVertex2f(0,0);
			glVertex2f(0,550.0);
			glVertex2f(1300,550.0);
			glVertex2f(1300,0);
		glEnd();
	
	//road
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
      glVertex2i(0,275);
	  glVertex2i(1250,275);
      glVertex2i(1250,100);
      glVertex2i(0,100);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	for(int x=0;x<1251;x=x+60)
	{
		glBegin(GL_POLYGON);
			glVertex2f(x,172.5+19);
			glVertex2f(x,177.5+19);
			glVertex2f(x+30,177.5+19);
			glVertex2f(x+30,172.5+19);
		glEnd();
	}
	home();
	school(900.0,1220.0,400.0,900.0);
	man(1000,420-uv*0.5);
	car(1050.0-uv,220.0);
	glFlush();
	for(int jk16=0;jk16<20000;jk16++)
			for(int h16=0;h16<2000;h16++);
	}
	for(int g=0;g<1000000;g++)
	for(int f=0;f<100;f++);
	for(int vw=0;vw<700;vw+=2)
	{
		glColor3f(0.0,0.7,0.5);
		if(vw<30)
		{
			glColor3f(0.6+vw*0.0006,1-vw*0.0008,0);
			glBegin(GL_POLYGON);
				glVertex2f(-100,0);
				glVertex2f(-100,1300);
				glVertex2f(1300,1300);
				glVertex2f(1300,0);
			glEnd();
		sun12(1030,1200-vw*0.4,35);
		}
		if(vw>80)
		{
			glColor3f(0.8+vw*0.0002,1-vw*0.0005,0);
			glBegin(GL_POLYGON);
				glVertex2f(-100,0);
				glVertex2f(-100,1300);
				glVertex2f(1300,1300);
				glVertex2f(1300,0);
			glEnd();
			sun12(1030,1200-vw*0.4,35);
			bird(-100+vw*0.3,1350-vw*1.9);
			bird(-300+vw*0.5,1350-vw*1.6);
			bird(1150-vw*0.3,1350-vw*1.7);
			bird(950-vw*0.5,1350-vw*1.5);
			bird(750-vw*0.3,1350-vw*1.9);
			bird(0+vw*0.3,1350-vw*1.5);
			bird(200-vw*0.3,1350-vw*1.8);
			bird(300+vw*0.3,1350-vw*1.2);
			bird(500+vw*0.6,1350-vw*1.4);
		}
		newtree(500,750,50);
		newtree(800,750,50);
		glColor3f(0,0.5,0);
		glBegin(GL_POLYGON);
			glVertex2f(0,0);
			glVertex2f(0,550.0);
			glVertex2f(1300,550.0);
			glVertex2f(1300,0);
		glEnd();

	//road
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
      glVertex2i(0,275);
	  glVertex2i(1250,275);
      glVertex2i(1250,100);
      glVertex2i(0,100);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	for(int x=0;x<1251;x=x+60)
	{
		glBegin(GL_POLYGON);
			glVertex2f(x,172.5+19);
			glVertex2f(x,177.5+19);
			glVertex2f(x+30,177.5+19);
			glVertex2f(x+30,172.5+19);
		glEnd();
	}
	home();
	school(900.0,1220.0,400.0,900.0);
	car(900.0-vw,220.0);
	glFlush();
	for(int jk16=0;jk16<20000;jk16++)
			for(int h16=0;h16<200;h16++);
	}
	for(int g1=0;g1<1000000;g1++)
	for(int f=0;f<100;f++);
	for(int uv1=0;uv1<400;uv1++)
	{
	//glColor3f(0.0,0.7,0.5);
	glColor3f(0,0.5,0);
	glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0,550.0);
		glVertex2f(1300,550.0);
		glVertex2f(1300,0);
	glEnd();
	newtree(500,750,50);
	newtree(800,750,50);
	//road
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
      glVertex2i(0,275);
	  glVertex2i(1250,275);
      glVertex2i(1250,100);
      glVertex2i(0,100);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	for(int x=0;x<1251;x=x+60)
	{
		glBegin(GL_POLYGON);
			glVertex2f(x,172.5+19);
			glVertex2f(x,177.5+19);
			glVertex2f(x+30,177.5+19);
			glVertex2f(x+30,172.5+19);
		glEnd();
	}
	home();
	school(900.0,1220.0,400.0,900.0);
	if(uv1<=130)
	man13(280,350+uv1*0.5);
	car(200-uv1*3,220.0);
	glFlush();
	for(int jk16=0;jk16<20000;jk16++)
			for(int h16=0;h16<500;h16++);
	}
	
}

void manual()
{
	//Content Page
	glClearColor(0.0,1.0,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	drawText(600.0,1050.0,1,0,0,"CONTENTS");
	drawText(400.0,950.0,1,0,1,"Press 's' to go back to Home Page");
	drawText(400.0,850.0,1,0,1,"press 'e' for the Demonstration of project");
	drawText(400.0,750.0,1,0,1,"press '1' to goto First window ");
	drawText(400.0,650.0,1,0,1,"press '2' to goto Second window");
	drawText(400.0,550.0,1,0,1,"press '3' to goto Third window");
	drawText(400.0,450.0,1,0,1,"press '4' to goto Fourth window");
	drawText(400.0,350.0,1,0,1,"press '5' to goto Fifth window");
	drawText(400.0,250.0,1,0,1,"press 'q' to Quit from project");
	glFlush();
}

void win11()
{
	glClearColor(0.0,0.5,0.4,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	//draw text for the first visual
	drawText(400,700,1,0,0,"action--->good morning---it is the place where student stays");
	drawText(400,600,1,0,0,"press 1 to see the visual");
	glFlush();
}

void win21()
{
	glClearColor(0.0,0.5,0.4,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	//draw text for the first visual
	drawText(400,700,1,0,0,"action---->car comes and picks him to the school");
	drawText(400,600,1,0,0,"press 2 to see the visual");
	glFlush();
	}

void win31()
{
	glClearColor(0.0,0.5,0.4,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	//draw text for the first visual
	drawText(400,700,1,0,0,"action--->car drops him in the school");
	drawText(400,600,1,0,0,"press 3 to see the visual");
	glFlush();
}

void win41()
{
	glClearColor(0.0,0.5,0.4,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	//draw text for the first visual
	drawText(400,700,1,0,0,"action--->students play during their free time");
	drawText(400,600,1,0,0,"games-->hide & seek,  foot ball  ---etc");
	drawText(400,500,1,0,0,"press 4 to see the visual");
	glFlush();
}

void win51()
{
	glClearColor(0.0,0.5,0.4,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	//draw text for the first visual
	drawText(400,700,1,0,0,"action--->student returns to his home");
	drawText(400,600,1,0,0,"press 5 to see the visual");
     glFlush();
}

void win61()
{
	glClearColor(0.0,0.5,0.4,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	//draw text for the visual
	drawText(600,700,1,0,0,"THANK YOU");
	drawText(400,500,1,0,0,"press 'r' to restart the project");
	drawText(400,400,1,0,0," press 'q' to quit from project");
     glFlush();
}

void win1()
{
	int i,j;
	glClearColor(1.0,1.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	window1();
	for(i=0;i<10000;i++)
		for(j=0;j<10000;j++);	
	win21();
}

void win2()
{
	int j;
	glClearColor(1.0,1.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	window2();
	for(j=0;j<10000;j++);		
	win31();
}

void win3()
{
	int i,j;
	glClearColor(1.0,1.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	window3();
	for(i=0;i<10000;i++)
		for(j=0;j<10000;j++);
	win41();		
}

void win4()
{
	int i,j;
	glClearColor(1.0,1.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	window4();
	for(i=0;i<10000;i++)
		for(j=0;j<10000;j++);
	win51();		
}

void win5()
{
	int i,j;
	glClearColor(1.0,1.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	window5();
	for(i=0;i<10000;i++)
		for(j=0;j<10000;j++);
		win61();	
}

void display()
{
	glClearColor(0.0,0.5,2.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	drawText(550,1000,1,1,1,"PROJECT TITLE:");
	drawText(440,900,1,1,0," SCHOOL  CHILD  DAILY  ROUTINE");

	drawText(580,800,1,1,1,"Developed By:");
	
	drawText(200,700,0,1,0,"RUTHRA MOORTHY P R");
	drawText(250,650,1,1,1,"(1DS12CS079)");

	drawText(800,700,0,1,0,"SANTHOSH S");
	drawText(790,650,1,1,1,"(1DS12CS082)");

	drawText(550,550,0,1,0,"VINODH N");
	drawText(540,500,1,1,1,"(1DS13CS422)");

	/*drawText(430.0,530.0,1,1,1,"UNDER THE GUIDENCE OF");
	drawText(50.0,450.0,1,1,0,"Prof.Kusuma M");
	drawText(450.0,450.0,1,1,0,"Prof.Ravichandra H");
	drawText(850.0,450.0,1,1,0,"Prof.Shasidhar B");
	
	drawText(50.0,400.0,1,1,0,"Associate Professor, Dept of CSE");
	drawText(50.0,350,1,1,0,"DSCE, Bangalore");
	drawText(450.0,400.0,1,1,0,"Assistant Professor, Dept of CSE");
	drawText(450.0,350,1,1,0,"DSCE, Bangalore");
	drawText(850.0,400.0,1,1,0,"Assistant Professor, Dept of CSE");
	drawText(850.0,350,1,1,0,"DSCE, Bangalore");*/

	drawText(430,250,0,1,0,"PRESS 'x' FOR MANUAL PAGE");
	glFlush();

}

void Normalkey(unsigned char k,int x,int y)
{
	switch(k)
	{
		case 'x': manual();
				  break;

		case 'e': win11();
				  break;

		case '1':win1();
			     break;

		case '2':win2();
				break;

		case '3':win3();
				break;

		case '4':win4();
				break;

		case '5':win5();
				break;

		case '6':win61();
				break;

		case 'r': win11();
				  break;

		case 's':display();
				break;

		case 'q': exit(0);

		default:exit(0);
	}
}

void init()
{

	glClearColor(0.60,0.88,0.96,0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1250,0,1250);
	
}

void main(int argc, char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(1250,1250);
	glutCreateWindow("SchoolChild Day Life");	
	glutDisplayFunc(display);
	glutKeyboardFunc(Normalkey);
	init();
	glutMainLoop();
}
