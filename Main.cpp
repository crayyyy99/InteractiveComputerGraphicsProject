#include <iostream>
using namespace std;
/*CGI Lab Test 2 by CHIN ZHEN YUAN B031910365*/
/*Press F1 to reset the view*/
/*Press QWEASDZX, arrow or PageUp/Down keys to control the view*/

#include "Main.h"
#include "LoadTexture.h"
#include "DrawScene.h"

#define PI 3.1415927
float lastx, lasty;
double rotate_x, rotate_y, rotate_z, scale;
double translate_x, translate_y, translate_z;

GLfloat lx = 0.0;
GLfloat ly = 10.0;
GLfloat lz = 0.0;
GLfloat lw = 0.0;

void camera_current()
{
	rotate_x = 4;
	rotate_y = 0.0;
	rotate_z = 0;
	translate_x = -0.5999999;
	translate_y = 3.0;
	translate_z = 19.8;
	scale = 1.0;
}

void camera_front()
{
	rotate_x = 4; 
	rotate_y = 0.0; 
	rotate_z = 0; 
	translate_x = -0.5999999;
	translate_y = 3.0; 
	translate_z = 13.4;
	scale = 1.0;
}
void camera_back()
{
	rotate_x = 4; 
	rotate_y = -176.0; 
	rotate_z = 0; 
	translate_x = 0.139269;
	translate_y = 3.0; 
	translate_z = -23.5381;
	scale = 0.6;
}
void camera_top_front()
{
	rotate_x = 18; 
	rotate_y = 0.0; 
	rotate_z = 0; 
	translate_x = 3.06e-07; 
	translate_y = 9.8; 
	translate_z = 11.3;
	scale = 1.0;
}
void camera_top_back()
{
	rotate_x = 36;
	rotate_y = -178;
	rotate_z = 0;
	translate_x = -0.649855;
	translate_y = 14.5;
	translate_z = -22.0481;
	scale = 0.7;
}
void camera_top_back_left()
{
	rotate_x = 32;
	rotate_y = -216;
	rotate_z = 0;
	translate_x = -3.34;
	translate_y = 14.1;
	translate_z = -20.36;
	scale = 1.0;
}
void camera_top_back_right()
{
	rotate_x = 34;
	rotate_y = -142;
	rotate_z = 0;
	translate_x = -3.81908;
	translate_y = 14.1;
	translate_z = -22.3351;
	scale = 1.0;
}
void camera_top_front_right()
{
	rotate_x = 36;
	rotate_y = -368;
	rotate_z = 0;
	translate_x = 10.0812;
	translate_y = 14.1;
	translate_z = 8.99726;
	scale = 1.0;
}
void camera_top_front_left()
{
	rotate_x = 30;
	rotate_y = -344;
	rotate_z = 0;
	translate_x = -13.2357;
	translate_y = 14.1;
	translate_z = 8.52605;
	scale = 1.0;
}
void camera_left()
{
	rotate_x = 20;
	rotate_y = -132;
	rotate_z = 0;
	translate_x = 30.52;
	translate_y = 12.6;
	translate_z = -24.5;
	scale = 1.0;
}
void camera_right()
{
	rotate_x = 32;
	rotate_y = -228;
	rotate_z = 0;
	translate_x = -28.1318;
	translate_y = 12.65;
	translate_z = -27.1766;
	scale = 1.0;
}

void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60, (GLfloat)w / (GLfloat)h, 1.0, 100.0);
	glMatrixMode(GL_MODELVIEW);
}

void specialKeys(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_LEFT:
		translate_z += sin(rotate_y * PI / 180) * -0.8;
		translate_x += cos(rotate_y * PI / 180) * -0.8;
		break;
	case GLUT_KEY_RIGHT:
		translate_z += sin(rotate_y * PI / 180) * 0.8;
		translate_x += cos(rotate_y * PI / 180) * 0.8;
		break;
	case GLUT_KEY_UP:
		rotate_x -= 2.0; break;
	case GLUT_KEY_DOWN:
		rotate_x += 2.0; break;
	case GLUT_KEY_PAGE_UP:
		rotate_z += 2.0; break;
	case GLUT_KEY_PAGE_DOWN:
		rotate_z -= 2.0; break;
	case GLUT_KEY_F1:
		camera_current(); break;
	case GLUT_KEY_F2:
		camera_front(); break;
	case GLUT_KEY_F3:
		camera_back(); break;
	case GLUT_KEY_F4:
		camera_top_front(); break;
	case GLUT_KEY_F5:
		camera_top_back(); break;
	case GLUT_KEY_F6:
		camera_top_back_left(); break;
	case GLUT_KEY_F7:
		camera_top_back_right(); break;
	case GLUT_KEY_F8:
		camera_top_front_left(); break;
	case GLUT_KEY_F9:
		camera_top_front_right(); break;
	case GLUT_KEY_F10:
		camera_left(); break;
	case GLUT_KEY_F11:
		camera_right(); break;
	}
}

void keyboard(unsigned char key, int x, int y)
{
	float angle = 360 - rotate_y;
	switch (key)
	{
	case 'a':
		rotate_y -= 4.0; break;
	case 'd':
		rotate_y += 4.0; break;
	case 'w': //near
		translate_x += sin(angle * PI / 180) * -0.8;
		translate_z += cos(angle * PI / 180) * -0.8;
		break;
	case 's': //far
		translate_x += sin(angle * PI / 180) * 0.8;
		translate_z += cos(angle * PI / 180) * 0.8;
		break;
	case 'q': //up
		translate_y += 0.65; break;
	case 'e': //down
		translate_y -= 0.65; break;
	case 'z': //zoom in
		scale += 0.07; break;
	case 'x': //zoom out
		scale -= 0.07; break;
	//case '8':
	//	ly += 10.0; break; //move the light up
	//case '5':
	//	ly -= 10.0; break; //move the light down
	//case '4':
	//	lx -= 10.0; break; //move the light left
	//case '6':
	//	lx += 10.0; break; //move the light right
	//case '7':
	//	lz -= 10.0; break; //move the light front
	//case '1':
	//	lz += 10.0; break; //move the light behind

	case '27': //ESC
		exit(0); break;
	}


}

void mouseMovement(int x, int y) {

	int diffx = x - lastx;//check the difference between the current xand the last x position
	int diffy = y - lasty; //check the difference between the current yand the last y position

	lastx = x; //set lastx to the current x position
	lasty = y; //set lasty to the current y position
	rotate_x += (float)diffy; //set the xrot to xrot with the addition of the difference in the y position
	rotate_y += (float)diffx;    //set the xrot to yrot with the addition of the difference in the x position
}

void timer(int)
{
	glutPostRedisplay();
	glutTimerFunc(1000.0 / 60.0, timer, 0);
}

void init()
{
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING); //enable the lighting
	glEnable(GL_LIGHT0); //enable LIGHT0, our Diffuse Light
	glEnable(GL_LIGHT1); //enable LIGHT1, our Ambient Light
	glShadeModel(GL_SMOOTH); //set the shader to smooth shader
	glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE); //cause a material color to track the current color

}

void display(void)
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_TEXTURE_2D);

	glLoadIdentity();

	//Lights
	GLfloat ambientLight[] = { 0.8, 0.8, 0.8, 1.0 };
	GLfloat diffuseLight[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat specularLight[] = { 0.8, 0.8, 0.8, 1.0 };
	GLfloat lightPosition[] = { 0.0, 20.0, 0.0, 1.0 };

	glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseLight);
	glLightfv(GL_LIGHT1, GL_AMBIENT, ambientLight);
	glLightfv(GL_LIGHT0, GL_SPECULAR, specularLight);
	glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);
	glEnable(GL_COLOR_MATERIAL);

	glLineWidth(1.0f); //Set line width

	//Transform ->glRotated/glTranslated = current matrix * rotation/translation matrix
	glRotated(rotate_x, 1.0, 0.0, 0.0);
	glRotated(rotate_y, 0.0, 1.0, 0.0);
	glRotated(rotate_z, 0.0, 0.0, 1.0);
	glTranslated(-translate_x, -translate_y, -translate_z);
	glScalef(0.5 * scale, 0.5 * scale, 0.5 * scale);

	DrawScene ds;
	glPushMatrix();
	glTranslatef(0, -1, 0);
	ds.DisplayTexturedScene_MainEntrance();
	ds.DisplayTexturedScene_MainEntranceSideCorridor();
	ds.DisplayTexturedScene_Stair();
	ds.DisplayTexturedScene_Stair2();
	ds.DisplayTexturedScene_LecOffice();

	ds.DisplayTexturedScene_LeftWingFront();
	ds.DisplayTexturedScene_LeftWingBack();
	ds.DisplayTexturedScene_LeftWingMekdi();

	ds.DisplayTexturedScene_RightWingFront();
	ds.DisplayTexturedScene_RightWingBack();
	ds.DisplayTexturedScene_RightWingWalkway();
	glPopMatrix();

	ds.DisplayTexturedScene_Ground();

	ds.DisplayTexturedScene_Parking();
	ds.DisplayTexturedScene_Tree();
	ds.DisplayTexturedScene_Tree2();
	ds.DisplayTexturedScene_Tree3();
	ds.StreetLight();

	ds.Car();
	ds.Bench();
	ds.Bus();
	ds.TrashCan();
	ds.glassBox();
	ds.waterDispenser();

	cout << rotate_x << endl;
	cout << rotate_y << endl;
	cout << rotate_z << endl;
	cout << endl;
	cout << translate_x << endl;
	cout << translate_y << endl;
	cout << translate_z << endl;
	cout << endl;
	cout << lx << endl;
	cout << ly << endl;
	cout << lz << endl;

	cout << endl;
	cout << scale << endl;
	cout << "\n" << endl;

	glutSwapBuffers();
}

int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1080, 720);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("CGI Project - Group Cylinder");
	init();
	camera_current();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutSpecialFunc(specialKeys);
	//glutPassiveMotionFunc(mouseMovement); //check for mouse movement
	glutTimerFunc(1000.0 / 60.0, timer, 0);

	
	glutMainLoop();



}