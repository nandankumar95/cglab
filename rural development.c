#include <glut.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
void Display_on_screen(char*);
void al_win();
GLfloat house[3][9]={{100,100,175,250,250,150,150,200,200},
					 {400,600,700,600,400,400,450,450,400},
					 {1,1,1,1,1,1,1,1,1}};
float scl=0.4;
int x=50,y=50;
int years=7; char yearsstring[15];
float colorx=0,colory=225.0, colorz=0;
void keyboard (int key, int x, int y) 
 {
	  
    /* Called when a key is pressed */
		if (key == GLUT_KEY_RIGHT)
		{
			glutHideWindow();
			
		}
		if(key==GLUT_KEY_F1)
			exit(0);
		
		if(key==GLUT_KEY_F2){
			years=7; scl=0.4; colorx=0,colory=225.0, colorz=0;
			al_win();
		}
}
void init(void)
{

	glClearColor(0,0,0,1.0);
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
void tree(int h,int k, float scale)
{
	
	glColor3f(160/255.0,69/255.0,19/255.0);
	glBegin(GL_POLYGON);//brown stem
		glVertex2f(10*scale+h,20*scale+k);
		glVertex2f(10*scale+h,36*scale+k);
		glVertex2f(15*scale+h,36*scale+k);
		glVertex2f(15*scale+h,20*scale+k);
	glEnd();
	glColor3f(colorx/255,colory/255,colorz/255);
	drawCircle(12*scale+h,40*scale+k,5*scale);
	drawCircle(17*scale+h,40*scale+k,5*scale);
	drawCircle(10*scale+h,44*scale+k,5*scale);
	drawCircle(18*scale+h,44*scale+k,5*scale);
	drawCircle(16*scale+h,48*scale+k,5*scale);
}
void drawFlower(){
	drawCircle(10,10,10);
}

void drawHuman(float h, float k){
	glColor3f(0.9804,0.8549,0.4667);//Left Palm color
	drawCircle(445+h,295+k,13);//Left Palm
	glColor3f(0.9804,0.8549,0.4667);//Right Palm color
	drawCircle(655+h,295+k,13);//Right Palm
	glColor3f(0.8118,0.0549,1);//shirt color
	glBegin(GL_POLYGON);//shirt
		glVertex2f(490+h,430+k);
		glVertex2f(610+h,430+k);
		glVertex2f(610+h,300+k);
		glVertex2f(490+h,300+k);
	glEnd();
	glColor3f(0,1,0);
	glRasterPos2f(h+520,400);
	Display_on_screen("Jaya's");
	glColor3f(0.8118,0.0549,1);//left hand shirt color
	glBegin(GL_POLYGON);//left hand shirt
		glVertex2f(490+h,430+k);
		glVertex2f(490+h,380+k);
		glVertex2f(460+h,300+k);
		glVertex2f(430+h,300+k);
	glEnd();
	glColor3f(0.8118,0.0549,1);//right hand shirt color
	glBegin(GL_POLYGON);//right hand shirt
		glVertex2f(610+h,380+k);
		glVertex2f(610+h,430+k);
		glVertex2f(670+h,300+k);
		glVertex2f(640+h,300+k);
	glEnd();
	glColor3f(0.1255,0.2157,0.0157);//Trouser color
	glBegin(GL_POLYGON);//Trouser
		glVertex2f(490+h,300+k);
		glVertex2f(610+h,300+k);
		glVertex2f(610+h,120+k);
		glVertex2f(490+h,120+k);
	glEnd();
	glColor3f(0,0,0);//shoe color
	glBegin(GL_POLYGON);//left shoe
		glVertex2f(510+h,120+k);
		glVertex2f(530+h,120+k);
		glVertex2f(490+h,100+k);
		glVertex2f(470+h,100+k);
	glEnd();
	glBegin(GL_POLYGON);//right shoe
		glVertex2f(565+h,120+k);
		glVertex2f(585+h,120+k);
		glVertex2f(545+h,100+k);
		glVertex2f(525+h,100+k);
	glEnd();
	glColor3f(0.9804,0.8549,0.4667);//face color
	drawCircle(550+h,475+k,50);//face
	glColor3f(1,1,1);//eye color
	drawCircle(525+h,480+k,10);//left eye
	drawCircle(575+h,480+k,10);//right eye
	glColor3f(0,0,0);//eyeball color
	drawCircle(525+h,475+k,5);//left eyeball
	drawCircle(575+h,475+k,5);//right eyeball
	glColor3f(0.8745,0.7019,0.1607);//nose color
	glBegin(GL_TRIANGLES);//nose
		glVertex2f(550+h,470+k);
		glVertex2f(560+h,450+k);
		glVertex2f(540+h,450+k);
	glEnd();
	glColor3f(1,0,0);//mouth color
	glBegin(GL_LINES);//mouth
		glVertex2f(525+h,450+k);
		glVertex2f(535+h,440+k);
		glVertex2f(535+h,440+k);
		glVertex2f(565+h,440+k);
		glVertex2f(565+h,440+k);
		glVertex2f(575+h,450+k);
	glEnd();
	glColor3f(1,0,0);//cap color
	glBegin(GL_QUADS);//cap
		glVertex2f(500+h,500+k);
		glVertex2f(500+h,525+k);
		glVertex2f(600+h,525+k);
		glVertex2f(600+h,500+k);
	glEnd();
}
void drawSadHuman(float h, float k){
	glColor3f(0.9804,0.8549,0.4667);//Left Palm color
	drawCircle(445+h,295+k,13);//Left Palm
	glColor3f(0.9804,0.8549,0.4667);//Right Palm color
	drawCircle(655+h,295+k,13);//Right Palm
	glColor3f(0.8118,0.0549,1);//shirt color
	glBegin(GL_POLYGON);//shirt
		glVertex2f(490+h,430+k);
		glVertex2f(610+h,430+k);
		glVertex2f(610+h,300+k);
		glVertex2f(490+h,300+k);
	glEnd();
	glRasterPos2f(h+520,400);
	Display_on_screen("Jaya's");
	glColor3f(0.8118,0.0549,1);//left hand shirt color
	glBegin(GL_POLYGON);//left hand shirt
		glVertex2f(490+h,430+k);
		glVertex2f(490+h,380+k);
		glVertex2f(460+h,300+k);
		glVertex2f(430+h,300+k);
	glEnd();
	glColor3f(0.8118,0.0549,1);//right hand shirt color
	glBegin(GL_POLYGON);//right hand shirt
		glVertex2f(610+h,380+k);
		glVertex2f(610+h,430+k);
		glVertex2f(670+h,300+k);
		glVertex2f(640+h,300+k);
	glEnd();
	glColor3f(0.1255,0.2157,0.0157);//Trouser color
	glBegin(GL_POLYGON);//Trouser
		glVertex2f(490+h,300+k);
		glVertex2f(610+h,300+k);
		glVertex2f(610+h,120+k);
		glVertex2f(490+h,120+k);
	glEnd();
	glColor3f(0,0,0);//shoe color
	glBegin(GL_POLYGON);//left shoe
		glVertex2f(510+h,120+k);
		glVertex2f(530+h,120+k);
		glVertex2f(490+h,100+k);
		glVertex2f(470+h,100+k);
	glEnd();
	glBegin(GL_POLYGON);//right shoe
		glVertex2f(565+h,120+k);
		glVertex2f(585+h,120+k);
		glVertex2f(545+h,100+k);
		glVertex2f(525+h,100+k);
	glEnd();
	glColor3f(0.9804,0.8549,0.4667);//face color
	drawCircle(550+h,475+k,50);//face
	glColor3f(1,1,1);//eye color
	drawCircle(525+h,480+k,10);//left eye
	drawCircle(575+h,480+k,10);//right eye
	glColor3f(0,0,0);//eyeball color
	drawCircle(525+h,475+k,5);//left eyeball
	drawCircle(575+h,475+k,5);//right eyeball
	glColor3f(0.8745,0.7019,0.1607);//nose color
	glBegin(GL_TRIANGLES);//nose
		glVertex2f(550+h,470+k);
		glVertex2f(560+h,450+k);
		glVertex2f(540+h,450+k);
	glEnd();
	glColor3f(1,0,0);//mouth color
	glBegin(GL_LINES);//mouth
		glVertex2f(525+h,430+k);
		glVertex2f(535+h,440+k);
		glVertex2f(535+h,440+k);
		glVertex2f(565+h,440+k);
		glVertex2f(565+h,440+k);
		glVertex2f(575+h,430+k);
	glEnd();
	glColor3f(1,0,0);//cap color
	glBegin(GL_QUADS);//cap
		glVertex2f(500+h,500+k);
		glVertex2f(500+h,525+k);
		glVertex2f(600+h,525+k);
		glVertex2f(600+h,500+k);
	glEnd();
}
void drawHouse(){
	glColor3f(0.0667,0.3373,0.2824);//house foundation color
	glBegin(GL_POLYGON);//house foundation
		glVertex2f(house[0][0],house[1][0]);
		glVertex2f(house[0][1],house[1][1]);
		glVertex2f(house[0][3],house[1][3]);
		glVertex2f(house[0][4],house[1][4]);
	glEnd();
	glColor3f(0,0,0);//house door color
	glBegin(GL_POLYGON);//house door
		glVertex2f(house[0][5],house[1][5]);
		glVertex2f(house[0][6],house[1][6]);
		glVertex2f(house[0][7],house[1][7]);
		glVertex2f(house[0][8],house[1][8]);
	glEnd();
	glColor3f(1,1,0);//house roof color
	glBegin(GL_POLYGON);//house roof
		glVertex2f(house[0][1],house[1][1]);
		glVertex2f(house[0][2],house[1][2]);
		glVertex2f(house[0][3],house[1][3]);
	glEnd();
	glRasterPos2f(120,500);
	Display_on_screen("Jeetu Nilaya");
}
void drawBackground(){
	glColor3f(0,1,0);
	glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0,450);
		glVertex2f(1300,450);
		glVertex2f(1300,0);
	glEnd();
	glColor3f(0,0,1);
	glBegin(GL_POLYGON);
		glVertex2f(0,450);
		glVertex2f(0,700);
		glVertex2f(1300,700);
		glVertex2f(1300,450);
	glEnd();
	glFlush();
	glColor3f(1,0.35,0);
	drawCircle(900,550,50);//sun
	
}
void drawForeground(){
	tree(0,40,scl);
	tree(70,40,scl);
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
void drawPesticide(int h){
	glColor3f(1,0,0);
	glBegin(GL_POLYGON);
		glVertex2f(h+490,300);
		glVertex2f(h+490,390);
		glVertex2f(h+600,390);
		glVertex2f(h+600,300);
	glEnd();
	glColor3f(1,1,1);
	glRasterPos2f(h+500,345);
	Display_on_screen("Madhu");
	glRasterPos2f(h+500,330);
	Display_on_screen("Fertilizer");
	glRasterPos2f(h+500,550);
	Display_on_screen("HE APPLIES Fertilizer TO HIS WHOLE FARM");
}
void drawHumanWithFertilizer(){
	drawHuman(x-=60,10);
	drawPesticide((x-=100));
}
void drawFrame8(){
	drawBackground();
	drawHouse();
	drawSadHuman((x),10);
	drawForeground();
	glColor3f(1.0f, 1.0f, 1.0f);
	glRasterPos3f(350,590,0);
	Display_on_screen("The trees EVENTUALLY WITHERED AND DIED");
	glRasterPos3f(350,555,0);
	Display_on_screen("ATHI AASEY GATHI KEDU..GO GREEN GO ORGANIC...NO ARTIFICIAL");
	glFlush();
}
void drawFrame7(){
	drawBackground();
	drawHouse();
	colorx+=18; colory-=25; colorz+=5; 
	drawSadHuman((x),10);
	drawForeground();
	glColor3f(1.0f, 1.0f, 1.0f);
	glRasterPos3f(350,590,0);
	Display_on_screen("The trees started to lose its organic nature");
	glRasterPos3f(350,555,0);
	Display_on_screen("They lost their green texture");
	glFlush();
}
void drawFrame6(){
	drawBackground();
	drawHouse();
	drawHumanWithFertilizer();
	drawForeground();
	glFlush();
}
void drawFrame5(){
	drawBackground();
	
	drawHouse();
	drawHuman((x),10);
	drawForeground();
	glColor3f(1.0f, 1.0f, 1.0f);
	glRasterPos3f(350,590,0);
	Display_on_screen("HE GOT A BAD IDEA OF APPLYING PESTICIDES TO MAKE MORE MONEY");
	glRasterPos3f(350,555,0);
	Display_on_screen("HIS GREED FORCED HIM TO PERFORM A EVIL DEED");
	glFlush();
}
void drawFrame4(){
	drawBackground();
	
	drawHouse();
	drawHuman((x+=110),10);
	scl+=0.234;
	drawForeground();
	glColor3f(1.0f, 1.0f, 1.0f);
	glRasterPos3f(350,595,0);
	Display_on_screen("The Plants started to grow slowly");
	glRasterPos3f(350,575,0);
	years-=1;
	sprintf(yearsstring,"%d",years);
	strcat(yearsstring," Years Passed:");
	Display_on_screen(yearsstring);
	glFlush();
}
void drawFrame3(){
	drawBackground();
	drawHouse();
	drawHuman(50,50);	
	drawForeground();
	glColor3f(1,0,0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(5,50);
		glVertex2f(5,310);
		glVertex2f(1200,310);
		glVertex2f(1200,50);
	glEnd();
	glColor3f(1.0f, 1.0f, 1.0f);
	glRasterPos3f(350,595,0);
	Display_on_screen("He decided to plant teakwood in his farm!!!!!");
	glRasterPos3f(350,575,0);
	Display_on_screen("He became more ambitious");
	glFlush();
}
void drawFrame2(){
	drawBackground();
	
	drawHouse();
	drawHuman(50,50);
	glRasterPos3f(350,595,0);
	glColor3f(1.0f, 1.0f, 1.0f);
	Display_on_screen("Once upon a time in a small village,there used to be a farmer called JAYACHANDRA");
	glRasterPos3f(350,595,0);
	Display_on_screen("Once upon a time in a small village,there used to be a farmer called JAYACHANDRA");
	glRasterPos3f(350,580,0);
	Display_on_screen("He wanted to make more money!!!!!!!");
	glFlush();
}
void drawFrame1() 
{  					
	 glColor3f(1.0, 0.0, 1.0);
	 glRasterPos3f(350,600,0);
  	 Display_on_screen("Dayananda Sagar College of Engineering");
	 glRasterPos3f(350,550,0);
  	 Display_on_screen("Computer Graphics Project on Rural development"); 
	glColor3f(1.0, 0.0, 1.0);
	 glRasterPos3f(280,500,0);
  	 Display_on_screen("* Developers:");
	 glRasterPos3f(280,480,0);
  	 Display_on_screen("* 1. Madhusudan.N USN: 1DS10CS045");
	 glRasterPos3f(280,460,0);
  	 Display_on_screen("* 2. Jayachandra.N USN: 1DS10CS035");
	 glRasterPos3f(280,440,0);
  	 Display_on_screen("* 3. Jetendhar.P.V USN: 1DS10CS036");
     	glRasterPos3f(280,400,0);
  	 Display_on_screen("* Faculty Guides:");
	 glRasterPos3f(280,360,0);
  	 Display_on_screen("* Mrs. Kusuma M, Associate Professor, Dayananda Sagar College of Engineering");
	 glRasterPos3f(280,330,0);
  	 Display_on_screen("* Mrs. Sasidhar B, Assistant Professor,Dayananda Sagar College of Engineering ");
	 glRasterPos3f(280,300,0);
  	 Display_on_screen("* Mrs. Sai Rani G, Assistant Professor,Dayananda Sagar College of Engineering");
	 glRasterPos3f(280,270,0);
  	 Display_on_screen("* Mrs. Poornima A B, Assistant Professor,Dayananda Sagar College of Engineering");
     	glRasterPos3f(280,210,0);
	 Display_on_screen("* PRESS RIGHT ARROW KEY TO MOVE THE SLIDES");
   	 glRasterPos3f(280,190,0);
     	Display_on_screen("* PRESS F1 TO EXIT");
	 glFlush();
}
void al_win()
{	


	init();
	glutCreateWindow("Twenty first Slide");
	init();
	glutDisplayFunc(drawFrame8);
	glutSpecialFunc(keyboard);


	glutCreateWindow("Twentieth Slide");
	init();
	glutDisplayFunc(drawFrame7);
	glutSpecialFunc(keyboard);

	glutCreateWindow("Ninteenth Slide");
	init();
	glutDisplayFunc(drawFrame7);
	glutSpecialFunc(keyboard);

	glutCreateWindow("Eighteenth Slide");
	init();
	glutDisplayFunc(drawFrame6);
	glutSpecialFunc(keyboard);

	glutCreateWindow("Sixteenth Slide");
	init();
	glutDisplayFunc(drawFrame6);
	glutSpecialFunc(keyboard);

	glutCreateWindow("Fifteenth Slide");
	init();
	glutDisplayFunc(drawFrame6);
	glutSpecialFunc(keyboard);

	glutCreateWindow("Fourteenth Slide");
	init();
	glutDisplayFunc(drawFrame6);
	glutSpecialFunc(keyboard);


	glutCreateWindow("Thirteenth Slide");
	init();
	glutDisplayFunc(drawFrame6);
	glutSpecialFunc(keyboard);

	glutCreateWindow("Twelth Slide");
	init();
	glutDisplayFunc(drawFrame6);
	glutSpecialFunc(keyboard);

	glutCreateWindow("Eleventh Slide");
	init();
	glutDisplayFunc(drawFrame5);
	glutSpecialFunc(keyboard);

	glutCreateWindow("Tenth Slide");
	init();
	glutDisplayFunc(drawFrame4);
	glutSpecialFunc(keyboard);

	glutCreateWindow("Ninth Slide");
	init();
	glutDisplayFunc(drawFrame4);
	glutSpecialFunc(keyboard);

	glutCreateWindow("Eighth Slide");
	init();
	glutDisplayFunc(drawFrame4);
	glutSpecialFunc(keyboard);

	glutCreateWindow("Seventh Slide");
	init();
	glutDisplayFunc(drawFrame4);
	glutSpecialFunc(keyboard);

	glutCreateWindow("Sixth Slide");
	init();
	glutDisplayFunc(drawFrame4);
	glutSpecialFunc(keyboard);

	glutCreateWindow("Fifth Slide");
	init();
	glutDisplayFunc(drawFrame4);
	glutSpecialFunc(keyboard);

	glutCreateWindow("Fourth Slide");
	init();
	glutDisplayFunc(drawFrame4);
	glutSpecialFunc(keyboard);

	glutCreateWindow("Third Slide");
	init();
	glutDisplayFunc(drawFrame3);
	glutSpecialFunc(keyboard);

	glutCreateWindow("Second Slide");
	init();
	glutDisplayFunc(drawFrame2);
	glutSpecialFunc(keyboard);

    glutCreateWindow("!!!First Slide!!!");
	init();
	glutDisplayFunc(drawFrame1);
	glutSpecialFunc(keyboard);
}


int main(int argc, char** argv){
	glutInit(&argc, argv);
	//we initizlilze the glut. functions
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(1300,700);
	glutCreateWindow("First Window");
	glutDisplayFunc(drawFrame1);
	glutSpecialFunc(keyboard);
	init();
	al_win();
	glutMainLoop();
}


