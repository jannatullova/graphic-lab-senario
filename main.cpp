#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>

//int windowWidth=800;
//int windowHeight=500;


//double windowWidth=700;
//double windowHeight=700;
double Txval=0;
double Tyval=0;
double sval=1.5;
double txval=0,txval1=0,txvalC=0,txval1C=0, txvalS=0,txval1S=0,txvalCC=0,txvallCC=0;
bool flagScale=false;
double  r=0.07,s=0.1,l=0.03;
int i;
float  tx=10,bx=10,rx=10;



void road()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.3,0.1,0);
    glVertex2f(-60,-40);
    glVertex2f(60,-40);
    glVertex2f(60,-20);
    glVertex2f(-60,-20);
    glPopMatrix();
    glEnd();
}


void boat()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(27,14);
    glVertex2f(31,9);
    glVertex2f(41,9);
    glVertex2f(45,14);
    glEnd();
    glPopMatrix();




}
boatcauni()
{
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,1,0);
    glVertex2f(30,14);
    glVertex2f(32,14);
    glVertex2f(32,16);
    glVertex2f(31,17);
    glVertex2f(30,16);
    glEnd();
    glPopMatrix();

        glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,1,0);
    glVertex2f(42,14);
    glVertex2f(42,16);
    glVertex2f(41,17);
    glVertex2f(40,16);
    glVertex2f(40,14);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2f(32,16);
    glVertex2f(32,14);
    glVertex2f(40,14);
    glVertex2f(40,16);
    glVertex2f(41,17);
    glVertex2f(31,17);

    glEnd();
    glPopMatrix();
}

void field()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.9,0);
    glVertex2f(-60,-20);
    glVertex2f(30,-20);
    glVertex2f(17,-2);
    glVertex2f(2,13);

    glVertex2f(-30,2);
    glVertex2f(-50,10);
    glVertex2f(-60,0);
    glPopMatrix();
    glEnd();
}

void river()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.8,1);
    glVertex2f(30,-20);
    glVertex2f(60,-20);
    glVertex2f(60,20);
    glVertex2f(15,20);
    glVertex2f(2,13);

    glVertex2f(17,-2);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.8,1);
    //glVertex2f(-60,0);
    //glVertex2f(-50,15);
    glVertex2f(-30,2);
    glVertex2f(2,13);
    glVertex2f(15,18);
    glVertex2f(15,20);
    glVertex2f(-60,20);
    //glVertex2f(-60,0);
    glVertex2f(-50,10);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.3,0.8,1);
    glVertex2f(-60,20);
    glVertex2f(-60,0);
    glVertex2f(-50,10);
    glPopMatrix();
    glEnd();

}

void house()
{
        glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,1.0);
    glVertex2f(-30,-15);
    glVertex2f(-23,-15);
    glVertex2f(-23,-5);
    glVertex2f(-30,-5);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(-23,-15);
    glVertex2f(-10,-15);
    glVertex2f(-10,-5);
    glVertex2f(-23,-5);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(-30,-5);
    glVertex2f(-23,-5);
    glVertex2f(-26.5,0);
    glPopMatrix();
    glEnd();

       glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(-23,-5);
    glVertex2f(-10,-5);
    glVertex2f(-13.5,0);
    glVertex2f(-26.5,0);
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-27.5,-15);
    glVertex2f(-25.5,-15);
    glVertex2f(-25.5,-10);
    glVertex2f(-27.5,-10);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,1.0);
    glVertex2f(-14,-15);
    glVertex2f(-14,-10);
    glVertex2f(-18,-10);
    glVertex2f(-18,-15);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.2,0.3,0.4);
    glVertex2f(-18,-15);
    glVertex2f(-14,-20);
    glVertex2f(-10,-20);
    glVertex2f(-14,-15);
    glPopMatrix();
    glEnd();
}

void hill()
{
    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2,0.6,0);
    glVertex2f(-60,20);
    glVertex2f(-45,20);
    glVertex2f(-52.5,30);
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2,0.6,0);
    glVertex2f(-45,20);
    glVertex2f(-30,20);
    glVertex2f(-40,25);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2,0.6,0);
    glVertex2f(-30,20);
    glVertex2f(-13,20);
    glVertex2f(-23,33);
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2,0.6,0);
    glVertex2f(-13,20);
    glVertex2f(10,20);
    glVertex2f(0,27);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2,0.6,0);
    glVertex2f(10,20);
    glVertex2f(30,20);
    glVertex2f(20,30);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2,0.6,0);
    glVertex2f(30,20);
    glVertex2f(60,20);
    glVertex2f(45,33);
    glPopMatrix();
    glEnd();

}

void sky()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,0.3,0.9);
    glVertex2f(-60,20);
    glVertex2f(-52.5,30);
    glVertex2f(-45,20);
    glVertex2f(-40,25);
    glVertex2f(-30,20);
    glVertex2f(-23,33);
    glVertex2f(-13,20);
    glVertex2f(0,27);
    glVertex2f(10,20);
    glVertex2f(20,30);
    glVertex2f(30,20);
    glVertex2f(45,33);
    glVertex2f(60,20);
    glVertex2f(60,60);
    glVertex2f(-60,60);
    glEnd();
    glPopMatrix();
}

void sun(double x, double y)
{


    glBegin(GL_TRIANGLE_FAN);
        for(i=0;i<360;i++)
        {
            x=x+cos((i*3.14)/180)*s;
            y=y+sin((i*3.14)/180)*s;

            glVertex2f(x,y);

        }


    glEnd();



}

void cloud(double x, double y)
{


    glBegin(GL_TRIANGLE_FAN);
        for(i=0;i<360;i++)
        {
            x=x+cos((i*3.14)/180)*r;
            y=y+sin((i*3.14)/180)*r;

            glVertex2d(x,y);

        }


    glEnd();



}

void tree()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.2,0,0);
    glVertex2f(-50,-10);
    glVertex2f(-53,-13);
    glVertex2f(-42,-13);
    glVertex2f(-45,-10);
    glVertex2f(-45,0);
    glVertex2f(-50,0);

    glEnd();
    glPopMatrix();
}

void Zebra()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-60,-30.5);
    glVertex2f(-55,-30.5);
    glVertex2f(-55,-29.5);
    glVertex2f(-60,-29.5);
    glEnd();
    glPopMatrix();
}

void car()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,0,1);
    glVertex2f(-45,-35);
    glVertex2f(-28,-35);
    glVertex2f(-28,-30);
    glVertex2f(-45,-30);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,1,0);
    glVertex2f(-42,-30);
    glVertex2f(-37,-30);
    glVertex2f(-37,-27);
    glVertex2f(-40,-27);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,0,1);

    glVertex2f(-36,-30);
    glVertex2f(-31,-30);
    glVertex2f(-33,-27);
    glVertex2f(-36,-27);
    glEnd();
    glPopMatrix();

        glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(-37,-30);
    glVertex2f(-36,-30);
    glVertex2f(-36,-27);
    glVertex2f(-37,-27);
    glEnd();
    glPopMatrix();


}

void cakka(double x, double y)
{


    glBegin(GL_TRIANGLE_FAN);
        for(i=0;i<360;i++)
        {
            x=x+cos((i*3.14)/180)*l;
            y=y+sin((i*3.14)/180)*l;

            glVertex2d(x,y);

        }


    glEnd();



}
void tree2()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.2,0,0);
    glVertex2f(5,-7);
    glVertex2f(5,5);
    glVertex2f(0,5);
    glVertex2f(0,-7);
    glVertex2f(-1,-8);
    glVertex2f(6,-8);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3ub(3, 75, 3);
    glVertex2f(-5,5);
    glVertex2f(10,5);
    glVertex2f(3,15);
    glEnd();
    glPopMatrix();

       glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3ub(3, 75, 3);
    glVertex2f(-5,9);
    glVertex2f(10,9);
    glVertex2f(3,18);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(3,5);
    glVertex2f(3,20);
    glEnd();

}

void bench()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.9,0.5,0.1);
    glVertex2f(8,-9);
    glVertex2f(8,-13);
    glVertex2f(20,-13);
    glVertex2f(20,-9);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,0.1,0.2);
    glVertex2f(8,-13);
    glVertex2f(10,-16);
    glVertex2f(22,-16);
    glVertex2f(20,-13);
    glEnd();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(8,-13);
    glVertex2f(8,-16);
    glEnd();

       glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(10,-16);
    glVertex2f(10,-19);
    glEnd();

           glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(20,-13);
    glVertex2f(20,-18);
    glEnd();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(22,-16);
    glVertex2f(22,-19);
    glEnd();

}
void name()
{
    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(-15,40);
    glVertex2f(-15,30);
    glEnd();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(-15,30);
    glVertex2f(-10,30);
    glEnd();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(-9,40);
    glVertex2f(-9,30);
    glEnd();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(-9,30);
    glVertex2f(-4,30);
    glEnd();

        glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(-4,40);
    glVertex2f(-4,30);
    glEnd();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(-4,40);
    glVertex2f(-9,40);
    glEnd();

       glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(-3,40);
    glVertex2f(0,30);
    glEnd();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(2,40);
    glVertex2f(0,30);
    glEnd();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(3,30);
    glVertex2f(5,40);
    glEnd();

        glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(8,30);
    glVertex2f(5,40);
    glEnd();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(4,35);
    glVertex2f(6.5,35);
    glEnd();
}


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-60,60,-40,60);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
//    glViewport(0, 0 ,windowWidth ,windowHeight);
    road();
    glEnd();
    glPopMatrix();


    glPushMatrix();
    field();
    glEnd();
    glPopMatrix();


    glPushMatrix();
    river();
     glEnd();
    glPopMatrix();


    glPushMatrix();
    house();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    sky();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    hill();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255,215,0);
    glTranslatef(txvalS,0,0);
    sun(35,45);
    glPopMatrix();

    glPushMatrix();
	glColor3ub(220,220,220);
	glTranslatef(txvalC,0,0);
	cloud(-45,45);
	cloud(-47,43);
	cloud(-40,42);
	cloud(-48,47);
	cloud(-39,48);
	cloud(-36,45);
	glPopMatrix();



    glPushMatrix();
    glTranslatef(txvalS,0,0);

    boat();

    glEnd();
    glPopMatrix();

      glPushMatrix();
    glTranslatef(txvalS,0,0);


    boatcauni();
    glEnd();
    glPopMatrix();

        glPushMatrix();
    tree();
    glColor3ub(3, 75, 3);
    cloud(-47,3);
    cloud(-44,-2);
    cloud(-48,-2);
    cloud(-52,-2);
     cloud(-50,3);
     cloud(-45,3);
     cloud(-47,9);
    glEnd();
    glPopMatrix();

        glPushMatrix();
    glTranslatef(-8,-20,0);
    boat();
    boatcauni();
    glEnd();
    glPopMatrix();
    glEnd();
    glPopMatrix();

    glPushMatrix();

    Zebra();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(10,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(20,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(30,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(40,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(50,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(60,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(70,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(80,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(90,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(100,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(110,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(txvalC,0,0);
    car();
    glColor3f(0,0,0);
    cakka(-40.5,-37);
    cakka(-32,-37);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    tree2();
    glEnd();
    glPopMatrix();

       glPushMatrix();
   bench();
    glEnd();
    glPopMatrix();

    glPushMatrix();
 name();
    glEnd();
    glPopMatrix();

        glFlush();
    glutSwapBuffers();
}
void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {

    case 'R':
        flagScale=true;
        break;
    case 'r':
        flagScale=false;
        break;



    case 27:	// Escape key
        exit(1);
    }
    glutPostRedisplay();
}


void animate()
{
	if (flagScale == true)
	{
		//txval-= 0.005;
		txval+= 0.2;
		if(txval > 60){
           txval = -60;
			//txval1 = 1;
		}

		txvalC += 0.01;
		if(txvalC >= 120){
           txvalC = -120;
			//txval1 = 1;
		}

		txvalS-= 0.01;
		if(txvalS <= -120){
           txvalS = 60;
			//txval1 = 1;
		}

		//cloud circle txvalCC
		 txvalCC-= 0.01;
		if(txvalCC < -60){
           txvalCC = 60;
			//txval1 = 1;
		}



	}
	if (flagScale == false)
	{
		txval = 0;
		txval1 = 0;

		txvalC = 0;
		txval1C = 0;

		txvalS = 0;
		txval1S = 0;

		//circle cloud

		txvalCC=0;
		txvallCC=0;

	}

	glutPostRedisplay();
}

int main (int argc, char **argv)
{
glutInit(&argc, argv);
glutInitWindowSize(1200,800);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitDisplayMode(GLUT_DOUBLE); // Enable double buffered mode

glutInitWindowPosition(10,10);
//glutInitWindowSize(windowWidth, windowHeight);
glutCreateWindow("fainal senario");
glShadeModel( GL_SMOOTH );
glEnable( GL_DEPTH_TEST );

//car animation
glutKeyboardFunc(myKeyboardFunc);
glutIdleFunc(animate);



glutDisplayFunc(display);



glDepthFunc(GL_LEQUAL);    // Set the type of depth-test

glutMainLoop();
return 0;
}


