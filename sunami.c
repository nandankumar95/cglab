#include<stdlib.h>
#include<string.h>
#include<glut.h>
#include<windows.h>
#include<math.h>
char pname[] = "TSUNAMI";
char done[] = "DONE BY:-";
char sname1[] = "ANUPAMA";
char sname2[] = "ASHWINI S.";
char sname3[] = "BHAGYASHREE R.G.";
char sname4[]="1DS11CS012";
char sname5[]="1DS11CS020";
char sname6[]="1DS11CS025";
char sname7[]="Press 'i' for instruction...";
char tname1[]="BEFORE-TSUNAMI";
char tname2[]="DURING-TSUNAMI";
char tname3[]="AFTER-TSUNAMI";
char i1[]="INSTRUCTIONS:-";
char i2[]="Press 'b' for Before-Tsunami";
char i3[]="Press 'd' for During-Tsunami";
char i4[]="Press 'a' for After-Tsunami";
char i6[]="Press 'e' for exit";
char i5[]="The following sequence need to be followed:-";
char s1[]="Tsunami disasters from 1980-2008:-";
char s2[]="Average no. of events:-18";
char s3[]="Average no. of people killed:-229,551";
char s4[]="Average people killed per year:-7,916";
char s5[]="Average no. of people affected:-2,481,879";
char s6[]="Average no. of people affected per year:-85,582";
char s7[]="Average economic damage(US$*1,000):-10,046,000";
char s8[]="Average economic damage per year(US$*1,000):-346,414";
unsigned char k;

void myinit()
{
	glClearColor(1.0,1.0,1.0,1.0);
	glColor3f(1,1,0);
	glPointSize(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(20.0,500.0,20.0,500.0);
	glutPostRedisplay();
}



void display_string(int x, int y, char *string, int font)
{
	int len,i;
	glRasterPos2f(x, y);
   len = (int) strlen(string);
   for (i = 0; i < len; i++) 
   {
		if(font==1)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]);
		if(font==2)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string[i]);
		if(font==3)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,string[i]);
		if(font==4)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,string[i]);
	}

}

void draw_pixel(GLint cx,GLint cy)
{
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POINTS);
	glPointSize(1.0);
	glVertex2i(cx,cy);
	glEnd();
}

void plotpixels(GLint h,GLint k,GLint x,GLint y)
{
	draw_pixel(x+h,y+k);
	draw_pixel(-x+h,y+k);
	draw_pixel(x+h,-y+k);
	draw_pixel(-x+h,-y+k);
	draw_pixel(y+h,x+k);
	draw_pixel(-y+h,x+k);
	draw_pixel(y+h,-x+k);
	draw_pixel(-y+h,-x+k);
	
}

void circle_draw(GLint h,GLint k,GLint r)
{
	GLint d=1-r,x=0,y=r;
	while(y>x)
	{
		plotpixels(h,k,x,y);
		if(d<0)
			d+=2*x+3;
		else
		{
			d+=2*(x-y)+5;
			--y;
		}
		++x;
	}
	plotpixels(h,k,x,y);
}


void cyl()
{
	GLint r=4;
	circle_draw(280,40,r);
	circle_draw(310,40,r);
}

void instructions()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(1.0,1.0,1.0,1.0);
    glColor3f(0,0,1);
	display_string(190,300,i5,1);
	glColor3f(1,0,0);
	display_string(250,400,i1,1);
	glColor3f(0.5,0.6,0.1);
    display_string(190,275,i2,1);
    display_string(190,245,i3,1);
    display_string(190,215,i4,1);
	display_string(190,340,i6,1);
	glFlush();
	glutSwapBuffers();
}

void firstpage(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(1,1,1,1);
	//field
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.35,0.6,0.25);
	glVertex2f(0,0);
	glVertex2f(0,150);
	glVertex2f(500,0);
	glVertex2f(500,150);
	glEnd();
	//plant
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0.4,0);
	glVertex2f(75,50);
	glVertex2f(70,86);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0.4,0);
	glVertex2f(75,50);
	glVertex2f(70,86);
	glEnd();
	glBegin(GL_QUAD_STRIP);
	glColor3f(0,0.4,0);
	glVertex2f(72,80);
	glVertex2f(80,85);
	glVertex2f(80,77);
	glVertex2f(85,77);
	glEnd();
	glBegin(GL_QUAD_STRIP);
	glColor3f(0,0.4,0);
	glVertex2f(71,83);
	glVertex2f(68,87);
	glVertex2f(65,79);
	glVertex2f(61,83);
	glEnd();
	//road
	glBegin(GL_POLYGON);
	glColor3f(0.67,0.67,0.67);
	glVertex2f(0.0,120.0);
	glVertex2f(0,230);
	glVertex2f(500,230);
	glVertex2f(500,120);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(0,120);
	glVertex2f(500,120);
	glVertex2f(0,230);
	glVertex2f(500,230);
	glEnd();
	glBegin(GL_QUAD_STRIP);
	glColor3f(1,1,1);
	glVertex2f(0,173);
	glVertex2f(0,177);
	glVertex2f(30,173);
	glVertex2f(30,177);
	glEnd();
	glBegin(GL_QUAD_STRIP);
	glColor3f(1,1,1);
	glVertex2f(80,173);
	glVertex2f(80,177);
	glVertex2f(110,173);
	glVertex2f(110,177);
	glEnd();
	glBegin(GL_QUAD_STRIP);
	glColor3f(1,1,1);
	glVertex2f(160,173);
	glVertex2f(160,177);
	glVertex2f(190,173);
	glVertex2f(190,177);
	glEnd();
	glBegin(GL_QUAD_STRIP);
	glColor3f(1,1,1);
	glVertex2f(240,173);
	glVertex2f(240,177);
	glVertex2f(270,173);
	glVertex2f(270,177);
	glEnd();
	glBegin(GL_QUAD_STRIP);
	glColor3f(1,1,1);
	glVertex2f(330,173);
	glVertex2f(330,177);
	glVertex2f(360,173);
	glVertex2f(360,177);
	glEnd();
	glBegin(GL_QUAD_STRIP);
	glColor3f(1,1,1);
	glVertex2f(410,173);
	glVertex2f(410,177);
	glVertex2f(440,173);
	glVertex2f(440,177);
	glEnd();
	glBegin(GL_QUAD_STRIP);
	glColor3f(1,1,1);
	glVertex2f(490,173);
	glVertex2f(490,177);
	glVertex2f(520,173);
	glVertex2f(520,177);
	glEnd();
	//water
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.3,1.3);
	glVertex2f(0,350);
	glVertex2f(0,420);
	glVertex2f(20,420);
	glVertex2f(40,400);
	glVertex2f(60,420);
	glVertex2f(90,410);
	glVertex2f(100,400);
	glVertex2f(120,400);
	glVertex2f(140,420);
	glVertex2f(160,420);
	glVertex2f(180,400);
	glVertex2f(200,400);
	glVertex2f(220,420);
	glVertex2f(240,420);
	glVertex2f(260,400);
	glVertex2f(280,400);
	glVertex2f(300,420);
	glVertex2f(320,420);
	glVertex2f(340,400);
	glVertex2f(360,400);
	glVertex2f(380,420);
	glVertex2f(400,420);
	glVertex2f(420,400);
	glVertex2f(440,400);
	glVertex2f(460,420);
	glVertex2f(480,420);
	glVertex2f(500,400);
	glVertex2f(520,420);
	glVertex2f(540,420);
	glVertex2f(540,350);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.3,0);
	glVertex2f(260,430);
	glVertex2f(270,410);
	glVertex2f(290,410);
	glVertex2f(300,430);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1,0,0);
	glVertex2f(270,430);
	glVertex2f(270,450);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex2f(270,450);
	glVertex2f(280,445);
	glVertex2f(270,438);
	glEnd();
	//ground
	glBegin(GL_POLYGON);
	glColor3f(0.75,0.6,0.2);
	glVertex2f(0,230);
	glVertex2f(0,350);
	glVertex2f(500,350);
	glVertex2f(500,230);
	glEnd();

		//tent
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(130,240);
	glVertex2f(160,240);
	glVertex2f(160,280);
	glVertex2f(130,280);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(130,280);
	glVertex2f(145,300);
	glVertex2f(160,280);
	glEnd();
	//box
	glBegin(GL_POLYGON);
	glColor3f(0.255,0.0,0.255);
	glVertex2f(130,275);
	glVertex2f(135,275);
	glVertex2f(135,280);
	glVertex2f(130,280);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.255,0.0,0.255);
	glVertex2f(136,275);
	glVertex2f(141,275);
	glVertex2f(141,280);
	glVertex2f(136,280);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.255,0.0,0.255);
	glVertex2f(142,275);
	glVertex2f(147,275);
	glVertex2f(147,280);
	glVertex2f(142,280);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.255,0.0,0.255);
	glVertex2f(148,275);
	glVertex2f(153,275);
	glVertex2f(153,280);
	glVertex2f(148,280);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.255,0.0,0.255);
	glVertex2f(154,275);
	glVertex2f(160,275);
	glVertex2f(160,280);
	glVertex2f(154,280);
	glEnd();

	//flag
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(145,298);
	glVertex2f(145,313);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(145,303);
	glVertex2f(150,308);
	glVertex2f(145,313);
	glEnd();
	//House
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(330,55);
	glVertex2f(400,55);
	glVertex2f(400,100);
	glVertex2f(330,100);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(330,100);
	glVertex2f(365,130);
	glVertex2f(400,100);
	glEnd();
	//door
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.8,0.0);
	glVertex2f(355,55);
	glVertex2f(355,65);
	glVertex2f(375,65);
	glVertex2f(375,55);
	glEnd();
	//Car
	glBegin(GL_POLYGON);
	glColor3f(0.,0.0,0.8);
	glVertex2f(270,45);
	glVertex2f(270,60);
	glVertex2f(280,60);
	glVertex2f(290,70);
	glVertex2f(300,70);
	glVertex2f(310,60);
	glVertex2f(320,60);
	glVertex2f(320,45);
	glEnd();
	//tree
	glBegin(GL_POLYGON);
	glColor3f(0.53,0.25,0.12);
	glVertex2f(450,20);
	glVertex2f(460,25);
	glVertex2f(445,80);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.5,0.0);
	glVertex2f(445,80);
	glVertex2f(430,50);
	glVertex2f(435,80);
	glVertex2f(410,90);
	glVertex2f(433,95);
	glVertex2f(425,120);
	glVertex2f(445,95);
	glVertex2f(455,120);
	glVertex2f(445,95);
	glVertex2f(480,100);
	glVertex2f(460,85);
	glVertex2f(475,60);
	glEnd();
	//house1
	glBegin(GL_POLYGON);
	glColor3f(1,1,0);
	glVertex2f(135,30);
	glVertex2f(173,50);
	glVertex2f(173,90);
	glVertex2f(135,90);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex2f(135,76);
	glVertex2f(125,100);
	glVertex2f(165,110);
	glVertex2f(175,90);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1,0,0);
	glVertex2f(125,100);
	glVertex2f(115,80);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0,0,0.8);
	glVertex2f(125,100);
	glVertex2f(115,80);
	glVertex2f(115,50);
	glVertex2f(135,30);
	glVertex2f(135,76);
	glVertex2f(125,100);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(125,100);
	glVertex2f(115,80);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.5,0.3,0);
	glVertex2f(145,55);
	glVertex2f(145,70);
	glVertex2f(160,76);
	glVertex2f(160,62);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(152.5,58);
	glVertex2f(152.5,73);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(145,62.5);
	glVertex2f(160,69.5);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.5,0.3,0);
	glVertex2f(118,47);
	glVertex2f(118,63);
	glVertex2f(128,55);
	glVertex2f(128,37);
	glEnd();
	//house2
	glBegin(GL_POLYGON);
	glColor3f(0.4,0.2,0.3);
	glVertex2f(200,40);
	glVertex2f(200,80);
	glVertex2f(250,80);
	glVertex2f(250,40);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(196,80);
	glVertex2f(225.5,100);
	glVertex2f(253,80);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.5,0.3,0);
	glVertex2f(220,40);
	glVertex2f(220,60);
	glVertex2f(230,60);
	glVertex2f(230,40);
	glEnd();
	//bird
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glPointSize(15.0);
	glColor3f(0.0,0.0,0.0);
	glVertex2f(409.2,462.9);
	glVertex2f(404.1,459.3);
	glVertex2f(404.1,459.3);
	glVertex2f(399.0,446.1);
	glVertex2f(399.0,446.1);
	glVertex2f(396.8,438.1);
	glVertex2f(396.8,438.1);
	glVertex2f(389.5,443.2);
	glVertex2f(389.5,443.2);
	glVertex2f(384.4,447.6);
	glVertex2f(384.4,447.6);
	glVertex2f(379.3,447.6);
	glVertex2f(379.3,447.6);
	glVertex2f(372.7,448.3);
	glVertex2f(372.7,448.3);
	glEnd();
	//bird2
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glPointSize(15.0);
	glVertex2f(74.2,442.9);
	glVertex2f(84.9,435.4);
	glVertex2f(84.9,435.4);
	glVertex2f(93.5,426.8);
	glVertex2f(93.5,426.8);
	glVertex2f(97.8,440.8);
	glVertex2f(97.8,440.8);
	glVertex2f(102.2,450.4);
	glVertex2f(102.2,450.4);
	glVertex2f(108.6,459.0);
	glEnd();
	//bird
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glPointSize(15.0);
	glVertex2f(141.9,471.0);
	glVertex2f(150.5,471.0);
	glVertex2f(150.5,471.0);
	glVertex2f(158.1,464.5);
	glVertex2f(158.1,464.5);
	glVertex2f(165.6,457.0);
	glVertex2f(165.6,457.0);
	glVertex2f(168.8,465.6);
	glVertex2f(168.8,465.6);
	glVertex2f(171.0,475.3);
	glVertex2f(171.0,475.3);
	glVertex2f(175.3,479.6);
	glVertex2f(175.3,479.6);
	glVertex2f(186.0,483.9);
	glEnd();
	//bird
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glPointSize(15.0);
	glVertex2f(223.7,458.1);
	glVertex2f(232.3,455.9);
	glVertex2f(232.3,455.9);
	glVertex2f(240.9,451.6);
	glVertex2f(240.9,451.6);
	glVertex2f(248.4,443.0);
	glVertex2f(248.4,443.0);
	glVertex2f(251.6,451.6);
	glVertex2f(251.6,451.6);
	glVertex2f(255.9,460.2);
	glVertex2f(255.9,460.2);
	glVertex2f(260.2,466.7);
	glVertex2f(260.2,466.7);
	glVertex2f(267.7,471.0);
	glEnd();
	//bird
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glPointSize(15.0);
	glVertex2f(296.8,450.5);
	glVertex2f(304.3,448.4);
	glVertex2f(304.3,448.5);
	glVertex2f(310.8,444.1);
	glVertex2f(310.8,444.1);
	glVertex2f(318.3,439.8);
	glVertex2f(318.3,439.8);
	glVertex2f(323.2,448.4);
	glVertex2f(323.2,448.4);
	glVertex2f(328.0,453.8);
	glVertex2f(328.0,453.8);
	glVertex2f(337.6,461.3);
	glEnd();
	//house2
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.35,0.8);
	glVertex2f(60,240);
	glVertex2f(60,280);
	glVertex2f(100,280);
	glVertex2f(100,240);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.6,0.6);
	glVertex2f(60,280);
	glVertex2f(45,280);
	glVertex2f(60,295);
	glVertex2f(100,295);
	glVertex2f(115,280);
	glVertex2f(100,280);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.3,0.7);
	glVertex2f(75,240);
	glVertex2f(75,255);
	glVertex2f(85,255);
	glVertex2f(85,240);
	glEnd();
	//tree
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.3,0.0);
	glVertex2f(460,245);
	glVertex2f(440,320);
	glVertex2f(470,245);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.7,0.0);
	glVertex2f(440,320);
	glVertex2f(430,295);
	glVertex2f(435,320);
	glVertex2f(420,330);
	glVertex2f(435,330);
	glVertex2f(438,355);
	glVertex2f(440,337);
	glVertex2f(450,346);
	glVertex2f(441,338);
	glVertex2f(449,325);
	glEnd();
	//boat
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.5,0,0);
	glVertex2f(230,310);
	glVertex2f(280,310);
	glVertex2f(220,330);
	glVertex2f(290,330);
	glEnd();
	glBegin(GL_QUAD_STRIP);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(240,310);
	glVertex2f(255,340);
	glVertex2f(270,310);
	glEnd();
	glBegin(GL_QUAD_STRIP);
	glColor3f(0,0,1);
	glVertex2f(160,320);
	glVertex2f(200,320);
	glVertex2f(150,340);
	glVertex2f(210,340);
	glEnd();
	cyl();
	glColor3f(0.0,0.0,0.0);
	display_string(200,400,tname1,2);
	glFlush();
}

void car1(int i)
{
	glClear(GL_COLOR_BUFFER_BIT);
	firstpage();
	//Car
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.8);
	glVertex2f(5+i,200);
	glVertex2f(5+i,220);
	glVertex2f(10+i,220);
	glVertex2f(20+i,245);
	glVertex2f(45+i,245);
	glVertex2f(55+i,220);
	glVertex2f(65+i,220);
	glVertex2f(65+i,200);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(55+i,200);
	glVertex2f(52.5+i,208);
	glVertex2f(50+i,210);
	glVertex2f(47.5+i,208);
	glVertex2f(45+i,200);
	glVertex2f(47.5+i,193);
	glVertex2f(50+i,191);
	glVertex2f(52.5+i,193);
	glVertex2f(55+i,200);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(20+i,200);
	glVertex2f(17.5+i,208);
	glVertex2f(15+i,210);
	glVertex2f(13.5+i,208);
	glVertex2f(11+i,200);
	glVertex2f(13.5+i,193);
	glVertex2f(15+i,191);
	glVertex2f(17.5+i,193);
	glVertex2f(20+i,200);
	glEnd();
	glFlush();
}

void bus(int i)
{
	glClear(GL_COLOR_BUFFER_BIT);
	firstpage();
	glBegin(GL_POLYGON);
	glColor3f(1,1,0);
	glVertex2f(490-i,160);
	glVertex2f(490-i,210);
	glVertex2f(400-i,210);
	glVertex2f(400-i,160);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1,0,0);
	glVertex2f(490-i,185);
	glVertex2f(400-i,185);
	glVertex2f(490-i,185);
	glVertex2f(490-i,210);
	glVertex2f(480-i,185);
	glVertex2f(480-i,210);
	glVertex2f(470-i,185);
	glVertex2f(470-i,210);
	glVertex2f(460-i,185);
	glVertex2f(460-i,210);
	glVertex2f(450-i,185);
	glVertex2f(450-i,210);
	glVertex2f(440-i,185);
	glVertex2f(440-i,210);
	glVertex2f(430-i,185);
	glVertex2f(430-i,210);
	glVertex2f(420-i,185);
	glVertex2f(420-i,210);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(490-i,160);
	glVertex2f(490-i,210);
	glVertex2f(400-i,210);
	glVertex2f(400-i,160);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(480-i,160);
	glVertex2f(477.5-i,168);
	glVertex2f(475-i,170);
	glVertex2f(472.5-i,168);
	glVertex2f(470-i,160);
	glVertex2f(472.5-i,152);
	glVertex2f(475-i,150);
	glVertex2f(477.5-i,152);
	glVertex2f(480-i,160);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(420-i,160);
	glVertex2f(417.5-i,168);
	glVertex2f(415-i,170);
	glVertex2f(412.5-i,168);
	glVertex2f(410-i,160);
	glVertex2f(412.5-i,152);
	glVertex2f(415-i,150);
	glVertex2f(417.5-i,152);
	glVertex2f(420-i,160);
	glEnd();
	glFlush();
}

void car_move()
{
	for(float i=0;i<=500;i+=3)
	{
		car1(i);	
		for(int k=0;k<=10000000;k++);
		glutSwapBuffers();
	}
}

void second_page()
{
	car_move();
	for(float i=0;i<=500;i+=3)
	{
		bus(i);
		for(int k=0;k<=10000000;k++);
		glutSwapBuffers();
	}
}

void waves(int i)
{
	glClearColor(1,1,1,1);
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.3,1.3);
	glVertex2f(6.5,374.2+i);
	glVertex2f(16.1,386.0+i);
	glVertex2f(20.4,397.8+i);
	glVertex2f(28.0,409.7+i);
	glVertex2f(35.5,418.3+i);
	glVertex2f(35.5,435.3+i);
	glVertex2f(32.3,444.1+i);
	glVertex2f(32.2,455.9+i);
	glVertex2f(32.2,465.6+i);
	glVertex2f(21.5,475.1+i);
	glVertex2f(40.9,475.1+i);
	glVertex2f(62.4,472.0+i);
	glVertex2f(76.3,471.0+i);
	glVertex2f(86.0,467.7+i);
	glVertex2f(101.1,463.4+i);
	glVertex2f(114.0,454.8+i);
	glVertex2f(122.6,447.3+i);
	glVertex2f(131.2,439.8+i);
	glVertex2f(141.9,435.5+i);
	glVertex2f(153.8,431.2+i);
	glVertex2f(153.8,416.1+i);
	glVertex2f(154.8,404.3+i);
	glVertex2f(154.8,392.5+i);
	glVertex2f(152.7,380.6+i);
	glVertex2f(149.5,368.8+i);
	glVertex2f(163.4,368.8+i);
	glVertex2f(169.9,377.4+i);
	glVertex2f(175.3,386.6+i);
	glVertex2f(181.7,392.5+i);
	glVertex2f(188.2,400.0+i);
	glVertex2f(195.7,409.7+i);
	glVertex2f(201.1,418.3+i);
	glVertex2f(205.4,425.8+i);
	glVertex2f(210.8,434.4+i);
	glVertex2f(217.2,446.2+i);
	glVertex2f(218.3,458.1+i);
	glVertex2f(220.4,472.0+i);
	glVertex2f(236.9,477.4+i);
	glVertex2f(235.5,476.3+i);
	glVertex2f(244.1,476.3+i);
	glVertex2f(251.6,477.4+i);
	glVertex2f(261.3,480.6+i);
	glVertex2f(271.0,480.6+i);
	glVertex2f(278.5,480.6+i);
	glVertex2f(293.5,486.0+i);
	glVertex2f(307.5,476.3+i);
	glVertex2f(314.0,464.5+i);
	glVertex2f(321.5,452.7+i);
	glVertex2f(330.1,428.0+i);
	glVertex2f(328.0,410.8+i);
    glVertex2f(328.0,401.1+i);
	glVertex2f(332.3,390.3+i);
	glVertex2f(331.2,381.7+i);
	glVertex2f(323.7,371.0+i);
	glVertex2f(336.6,378.5+i);
	glVertex2f(347.3,389.2+i);
	glVertex2f(359.1,395.7+i);
	glVertex2f(368.8,402.2+i);
	glVertex2f(379.6,406.5+i);
	glVertex2f(390.3,417.2+i);
	glVertex2f(401.1,423.7+i);
	glVertex2f(403.2,441.7+i);
	glVertex2f(401.1,460.2+i);
	glVertex2f(394.6,468.8+i);
	glVertex2f(406.5,469.9+i);
	glVertex2f(419.4,464.5+i);
	glVertex2f(434.4,458.1+i);
	glVertex2f(451.6,455.9+i);
	glVertex2f(465.6,444.1+i);
	glVertex2f(472.0,434.4+i);
	glVertex2f(489.2,420.4+i);
	glVertex2f(493.5,402.2+i);
	glVertex2f(496.8,405.0+i);
	glVertex2f(497.8,402.2+i);
	glVertex2f(487.1,404.2+i);
	glVertex2f(481.7,403.9+i);
	glVertex2f(467.7,401.7+i);
	glVertex2f(454.8,400.0+i);
	glVertex2f(479.0,402.8+i);
	glVertex2f(415.1,397.8+i);
	glVertex2f(397.8,387.8+i);
	glVertex2f(381.7,381.7+i);
	glVertex2f(366.7,375.1+i);
	glVertex2f(350.5,368.8+i);
	glVertex2f(334.4,369.5+i);
	glVertex2f(322.6,367.7+i);
	glVertex2f(305.4,375.3+i);
	glVertex2f(292.5,383.9+i);
	glVertex2f(274.2,395.7+i);
	glVertex2f(259.1,401.1+i);
	glVertex2f(241.9,396.8+i);
	glVertex2f(221.5,393.5+i);
	glVertex2f(197.8,378.5+i);
	glVertex2f(186.0,374.8+i);
	glVertex2f(165.6,365.6+i);
	glVertex2f(150.5,366.7+i);
	glVertex2f(132.3,371.0+i);
	glVertex2f(119.4,380.6+i);
	glVertex2f(107.5,396.8+i);
	glVertex2f(90.3,398.5+i);
	glVertex2f(67.7,392.5+i);
	glVertex2f(51.6,388.2+i);
	glVertex2f(33.3,380.6+i);
	glVertex2f(18.3,374.2+i);
	glVertex2f(5.4,371.0+i);
	glEnd();
	glFlush();
	glutSwapBuffers();
}

void waves1(int i)
{
	glClearColor(1,1,1,1);
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.3,1.3);
	glVertex2f(0,500-i);
	glVertex2f(5.4,492.8-i);
	glVertex2f(10,485.2-i);
	glVertex2f(12,453.9-i);
	glVertex2f(14,428.3-i);
	glVertex2f(15.1,300.9-i);
	glVertex2f(32.3,336.0-i);
	glVertex2f(50.5,318-i);
	glVertex2f(59.5,343.9-i);
	glVertex2f(71.0,387.8-i);
	glVertex2f(81.7,407.5-i);
	glVertex2f(100,380.6-i);
	glVertex2f(115.1,428.0-i);
	glVertex2f(146.2,416.1-i);
	glVertex2f(168.8,402.2-i);
	glVertex2f(183.9,421.5-i);
	glVertex2f(205.4,438.7-i);
	glVertex2f(198.9,404.3-i);
	glVertex2f(223.7,392.5-i);
	glVertex2f(250.5,407.5-i);
	glVertex2f(261.3,384.9-i);
	glVertex2f(265.6,359.1-i);
	glVertex2f(286.0,381.7-i);
	glVertex2f(303.4,411.8-i);
	glVertex2f(336.6,438.7-i);
	glVertex2f(372.0,443.0-i);
	glVertex2f(397.8,424.7-i);
	glVertex2f(417.2,388.2-i);
	glVertex2f(441.9,377.4-i);
	glVertex2f(473.1,389.0-i);
	glVertex2f(494.6,405.4-i);
	glVertex2f(512,500-i);
	glEnd();
	glFlush();
	glutSwapBuffers();
	glColor3f(0.0,0.0,0.0);
	display_string(200,150,tname2,2);
	glEnd();
	glFlush();
	glutSwapBuffers();
}

void third_page()
{
	//firstpage();
	int j=30;
	for(int i=0;i<=60;i+=1)
	{
		if(k=='f')
			break;
		else
		{
			i=i+5;
			waves(i);
			glFlush();
			for(int k=0;k<=10000000;k++);
			waves1(j);
			j=j+30;
			glFlush();
			for(int l=0;l<=80000000;l++);
		
		}
	}
}

void fourth_page()
{
	GLint r=4;
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(1,1,1,1);
	glColor3f(1,1,1);
	//field
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.35,0.6,0.25);
	glVertex2f(0,0);
	glVertex2f(0,150);
	glVertex2f(500,0);
	glVertex2f(500,150);
	glEnd();
	//water
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.3,1.3);
	glVertex2f(0,300);
	glVertex2f(0,500);
	glVertex2f(500,500);
	glVertex2f(500,250);
	glEnd();
		//rock1
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.7,0.7);
	glVertex2f(225,455);
	glVertex2f(240,470);
	glVertex2f(252,480);
	glVertex2f(270,485);
	glVertex2f(280,480);
	glVertex2f(290,470);
	glVertex2f(300,460);
	glEnd();
	//rock2
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.7,0.7);
	glVertex2f(400,460);
	glVertex2f(410,470);
	glVertex2f(420,479);
	glVertex2f(430,480);
	glVertex2f(440,473);
	glVertex2f(450,470);
	glEnd();
	//ground
	glBegin(GL_POLYGON);
	glColor3f(0.75,0.6,0.2);
	glVertex2f(0,230);
	glVertex2f(0,300);
	glVertex2f(500,250);
	glVertex2f(500,120);
	glEnd();
	//road
	glBegin(GL_POLYGON);
	glColor3f(0.67,0.67,0.67);
	glVertex2f(0.0,120.0);
	glVertex2f(0,230);
	glVertex2f(500,230);
	glVertex2f(500,120);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(0,120);
	glVertex2f(500,120);
	glVertex2f(0,230);
	glVertex2f(500,230);
	glEnd();
	glBegin(GL_QUAD_STRIP);
	glColor3f(1,1,1);
	glVertex2f(0,173);
	glVertex2f(0,177);
	glVertex2f(30,173);
	glVertex2f(30,177);
	glEnd();
	glBegin(GL_QUAD_STRIP);
	glColor3f(1,1,1);
	glVertex2f(80,173);
	glVertex2f(80,177);
	glVertex2f(110,173);
	glVertex2f(110,177);
	glEnd();
	glBegin(GL_QUAD_STRIP);
	glColor3f(1,1,1);
	glVertex2f(160,173);
	glVertex2f(160,177);
	glVertex2f(190,173);
	glVertex2f(190,177);
	glEnd();
	glBegin(GL_QUAD_STRIP);
	glColor3f(1,1,1);
	glVertex2f(240,173);
	glVertex2f(240,177);
	glVertex2f(270,173);
	glVertex2f(270,177);
	glEnd();
	glBegin(GL_QUAD_STRIP);
	glColor3f(1,1,1);
	glVertex2f(330,173);
	glVertex2f(330,177);
	glVertex2f(360,173);
	glVertex2f(360,177);
	glEnd();
	glBegin(GL_QUAD_STRIP);
	glColor3f(1,1,1);
	glVertex2f(410,173);
	glVertex2f(410,177);
	glVertex2f(440,173);
	glVertex2f(440,177);
	glEnd();
	glBegin(GL_QUAD_STRIP);
	glColor3f(1,1,1);
	glVertex2f(490,173);
	glVertex2f(490,177);
	glVertex2f(520,173);
	glVertex2f(520,177);
	glEnd();
		//fish
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,1.0);
	glVertex2f(50,350);
	glVertex2f(60,360);
	glVertex2f(80,350);
	glVertex2f(85,355);
	glVertex2f(85,345);
	glVertex2f(80,350);
	glVertex2f(60,340);
	glVertex2f(50,350);
	glEnd();
	glColor3f(0,0,0);
	glBegin(GL_POINTS);
	glPointSize(0.3);
	glVertex2f(55,352);
	glEnd();
//boat
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.5,0,0);
	glVertex2f(230,310);
	glVertex2f(265,310);
	glVertex2f(220,330);
	glVertex2f(280,320);
	glVertex2f(265,325);
	glVertex2f(265,310);
	glEnd();
// boat crack
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.3,1.3);
	glVertex2f(240,310);
	glVertex2f(237,320);
	glVertex2f(260,350);
	glVertex2f(240,320);
	glVertex2f(243,310);
	glEnd();
	//brick
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(140,35);
	glVertex2f(145,35);
	glVertex2f(145,30);
	glVertex2f(140,30);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(150,35);
	glVertex2f(155,35);
	glVertex2f(155,30);
	glVertex2f(150,30);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(160,40);
	glVertex2f(165,40);
	glVertex2f(165,35);
	glVertex2f(160,35);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(167,42);
	glVertex2f(172,42);
	glVertex2f(172,37);
	glVertex2f(167,37);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(165,45);
	glVertex2f(170,45);
	glVertex2f(170,42);
	glVertex2f(165,42);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(165,70);
	glVertex2f(170,70);
	glVertex2f(170,65);
	glVertex2f(165,65);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(163,75);
	glVertex2f(167,75);
	glVertex2f(167,71);
	glVertex2f(163,71);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(160,70);
	glVertex2f(164,70);
	glVertex2f(164,65);
	glVertex2f(160,65);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(157,75);
	glVertex2f(162,75);
	glVertex2f(162,71);
	glVertex2f(157,71);
	glEnd();
	//car
	glBegin(GL_POLYGON);
	glColor3f(0.255,0.192,0.203);
	glVertex2f(400,50);
	glVertex2f(400,75);
	glVertex2f(475,75);
	glVertex2f(475,50);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.35,0.8);
	glVertex2f(415,75);
	glVertex2f(430,85);
	glVertex2f(440,85);
	glVertex2f(455,75);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.210,0.106,0.30);
	glVertex2f(375,35);
	glVertex2f(400,75);
	glVertex2f(415,95);
	glVertex2f(400,100);
	glVertex2f(360,40);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.210,0.106,0.30);
	glVertex2f(385,70);
	glVertex2f(380,73);
	glVertex2f(370,88);
	glVertex2f(395,90);
	glEnd();
	circle_draw(420,50,r);
	circle_draw(465,50,r);
	//broken house
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(115,40);
	glVertex2f(115,80);
	glVertex2f(135,90);
	glVertex2f(135,30);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(115,80);
	glVertex2f(125,110);
	glVertex2f(135,90);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(173,50);
	glVertex2f(135,30);
	glVertex2f(135,90);
	glVertex2f(173,55);
	glEnd();
	//door
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.3,0.0);
	glVertex2f(118,37);
	glVertex2f(120,55);
	glVertex2f(128,53);
	glVertex2f(125,33);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.3,0.0);
	glVertex2f(145,55);
	glVertex2f(145,70);
	glVertex2f(160,62);
	glEnd();
	//new house
	glBegin(GL_POLYGON);
	glColor3f(0.4,0.2,0.3);
	glVertex2f(200,40);
	glVertex2f(200,80);
	glVertex2f(250,80);
	glVertex2f(250,40);
	glEnd();
	//door
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.3,0);
	glVertex2f(220,40);
	glVertex2f(220,60);
	glVertex2f(230,60);
	glVertex2f(230,40);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(200,80);
	glVertex2f(225,100);
	glVertex2f(220,95);
	glVertex2f(227,90);
	glVertex2f(222,85);
	glVertex2f(223,75);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(250,80);
	glVertex2f(235,98);
	glVertex2f(230,95);
	glVertex2f(233,90);
	glVertex2f(229,85);
	glVertex2f(235,80);
	glVertex2f(223,75);
	glEnd();
	//broken tree
	glBegin(GL_POLYGON);
	glColor3f(0.53,0.25,0.12);
	glVertex2f(470,230);
	glVertex2f(400,215);
	glVertex2f(470,210);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(400,215);
	glVertex2f(435,250);
	glVertex2f(390,245);
	glVertex2f(385,290);
	glVertex2f(380,245);
	glVertex2f(350,280);
	glVertex2f(370,225);
	glVertex2f(335,200);
	glVertex2f(380,210);
	glVertex2f(390,180);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	display_string(200,150,tname3,2);
	display_string(30,490,s1,2);
	display_string(30,480,s2,3);
	display_string(30,470,s3,3);
	display_string(30,460,s4,3);
	display_string(30,450,s5,3);
	display_string(30,440,s6,3);
	display_string(30,430,s7,3);
	display_string(30,420,s8,3);
	glEnd();
	glFlush();
	glutSwapBuffers();
}

void key(unsigned char k,int x,int y)
{
	switch(k)
		{
			case 'i':instructions();
				break;
			case 'b':second_page();
				break;
			case 'd':third_page();
				break;
			case 'a':fourth_page();
				break;
			case 'e':exit(0);
		}
}

void display(void)
{
	glClearColor(0.8, 0.8, 0.8, 0.8);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	display_string(230,400,pname,1);
	display_string(230,300,done,1);
	glColor3f(0,0,1);
	display_string(180,200,sname1,1);
	display_string(280,200,sname2,1);
	display_string(215,150,sname3,1);
	glColor3f(0.1,0.1,0.1);	
	display_string(220,50,sname7,1);
	glColor3f(0.5,.6,.1);
	display_string(180,180,sname4,1);
	display_string(280,180,sname5,1);
	display_string(230,130,sname6,1);
	glFlush();
	glutSwapBuffers();
}

void main(int argc,char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
glutInitWindowSize(500,500);
glutCreateWindow("Tsunami");
glutKeyboardFunc(key);
glutDisplayFunc(display);
myinit();
glutMainLoop();
}

