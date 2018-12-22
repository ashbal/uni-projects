#include "glut.h"
#include "math.h"
#include <Windows.h>
#include <stdlib.h> 
#include "buildings.h"
#include "vehicles.h"
#include "GLAux.h"
#include <iostream>
#pragma comment(lib,"Glaux.lib")
using namespace std;

GLuint g_Texture[50];


void CreateTexture(GLuint textureArray[], LPSTR strFileName, int textureID)
{
	AUX_RGBImageRec *pBitmap = NULL;

	if (!strFileName)	// Return from the function if no file name was passed in
		return;


	pBitmap = auxDIBImageLoadA(strFileName);	// Load the bitmap and store the data

	if (pBitmap == NULL)		// If we can't load the file, quit!
		exit(0);
	glGenTextures(1, &textureArray[textureID]);
	glBindTexture(GL_TEXTURE_2D, textureArray[textureID]);
	gluBuild2DMipmaps(GL_TEXTURE_2D, 1, pBitmap->sizeX, pBitmap->sizeY, GL_RGB, GL_UNSIGNED_BYTE, pBitmap->data);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);


	if (pBitmap)		// If we loaded the bitmap
	{
		if (pBitmap->data)	// If there is texture data
		{
			free(pBitmap->data);// Free the texture data, we don't need it anymore
		}

		free(pBitmap);		// Free the bitmap structure
	}
}

void initGL() {
	string str = "road.bmp";
	LPSTR s = const_cast<char *>(str.c_str());
	CreateTexture(g_Texture, s, 0);
}



bool isAnimationScene = false;
bool isDoorAnimationScene = false;
bool isLClosed = false;
bool isSClosed = false;

float angle = 0;
float carPos = 18;
float lx = 0;
float lz = 1;
float ly = 0;
float x = 20;
float z = -20;
float y = 1;
float deltaAngle = 0;
float deltaMove = 0;

void reshape(int w, int h)
{
	if (h == 0)
	{
		h = 1;
	}
	float ratio = w * 1 / h;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glViewport(0, 0, w, h);
	
	gluPerspective(45, ratio, 0.1, 100);
	glMatrixMode(GL_MODELVIEW);
}


void computePos(float deltaMove)
{
	x += deltaMove * lx*0.1f;
	z += deltaMove * lz*0.1f;
}

void computeDir(float deltaAngle)
{
	angle += deltaAngle;
	lx = sin(angle);
	
	lz = -cos(angle);
}


void road()
{
	glPushMatrix();
	glPushMatrix();
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);

	glTexGenf(GL_S, GL_TEXTURE_GEN_MODE, GL_OBJECT_LINEAR);
	glTexGenf(GL_T, GL_TEXTURE_GEN_MODE, GL_OBJECT_LINEAR);

	glEnable(GL_TEXTURE_GEN_S);
	glEnable(GL_TEXTURE_GEN_T);
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, g_Texture[0]);
	glPushMatrix();
	glColor3f(0.270, 0.298, 0.329);
	glScalef(2, 0.7, 0);

	glutSolidCube(1.0);
	glPopMatrix();
	glDisable(GL_TEXTURE_GEN_S);
	glDisable(GL_TEXTURE_GEN_T);
	glDisable(GL_TEXTURE_2D);
	glPopMatrix();
	//glPushMatrix();
	////Road
	//glPushMatrix();
	//glColor3f(0.270, 0.298, 0.329);
	//glScalef(2, 0.7, 0);
	//glutSolidCube(1);
	//glPopMatrix();


	//White Lines
	glPushMatrix();
	glColor3f(0.952, 0.960, 0.968);
	glScalef(10, 0.1, 0.01);
	glTranslatef(0, 3, 0.01);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.952, 0.960, 0.968);
	glScalef(10, 0.1, 0.01);
	glTranslatef(0, -3, 0.01);
	glutSolidCube(0.2);
	glPopMatrix();

	//White Dashes
	glPushMatrix();
	glColor3f(0.952, 0.960, 0.968);
	glScalef(1, 0.2, 0.01);
	glTranslatef(0, 0, 0.01);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.952, 0.960, 0.968);
	glScalef(1, 0.2, 0.01);
	glTranslatef(0.5, 0, 0.01);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.952, 0.960, 0.968);
	glScalef(1, 0.2, 0.01);
	glTranslatef(-0.5, 0, 0.01);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.952, 0.960, 0.968);
	glScalef(1, 0.2, 0.01);
	glTranslatef(1, 0, 0.01);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.952, 0.960, 0.968);
	glScalef(1, 0.2, 0.01);
	glTranslatef(-1, 0, 0.01);
	glutSolidCube(0.2);
	glPopMatrix();

	glPopMatrix();
}

void scene()
{
	glPushMatrix();
	glPushMatrix();
	glColor3f(0, 0.9, 0);
	glBegin(GL_POLYGON);
	
	glVertex3f(50, -0.5, 50);
	glVertex3f(-50, -0.5, 50);
	glVertex3f(-50, -0.5, -50);
	glVertex3f(50, -0.5, -50);

	glEnd();
	glPopMatrix();


	glColor3f(0.38, 0.38, 0.38);
	glBegin(GL_POLYGON);

	glVertex3f(50, -0.499, 10);
	glVertex3f(-50, -0.499, 10);
	glVertex3f(-50, -0.499, -50);
	glVertex3f(50, -0.499, -50);

	glEnd();
	glPopMatrix();

	glPushMatrix();
	glScalef(-10, 10, 10); 
	glTranslatef(-0.3,0.75, 3);
	building8();
	glPopMatrix();

	glPushMatrix();
	glScalef(15, 15, 15);
	glTranslatef(0.9, 0.47, 2);
	building7();
	glPopMatrix();

	glPushMatrix();
	glScalef(20, 20, 20);
	glTranslatef(-0.3, 0.37, 2);
	building6();
	glPopMatrix();

	glPushMatrix();
	glScalef(-10, 10, 10);
	glTranslatef(1, 0.85, 2.5);
	building3();
	glPopMatrix();

	glPushMatrix();
	glScalef(10, 10, 10);
	glTranslatef(-1.5, 1, 3.5);
	building2();
	glPopMatrix();

	glPushMatrix();
	glScalef(10, 10, 10);
	glTranslatef(2.5, 0.6, 2.5);
	building1();
	glPopMatrix();

	glPushMatrix();
	glScalef(10, 12, 10);
	glTranslatef(0.18, 1.15, 4);
	building4();
	glPopMatrix();

	if (!isAnimationScene)
	{
		glPushMatrix();
		glTranslatef(0, 0, -1);
		lambo();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(5, 0.25, 0.5);
		sedan(0.1, 0.07, 0.38);
		glPopMatrix();

		glPushMatrix();
		glScalef(-1, 1, 1);
		glTranslatef(-6, 0.25, 4);
		car1();
		glPopMatrix();

		glPushMatrix();
		glScalef(-1, 1, 1);
		glTranslatef(-11, 0.25, 5.5);
		sedan(0.09, 0.09, 0.09);
		glPopMatrix();



		glPushMatrix();
		glScalef(-1.2, 1.2, 1.2);
		glTranslatef(-8, 0.6, -0.8);
		van1();
		glPopMatrix();



		glPushMatrix();
		glScalef(1.2, 1.2, 1.2);
		glTranslatef(2, 0.6, 4);
		van2();
		glPopMatrix();



		glPushMatrix();
		glScalef(2, 2, 2);
		glTranslatef(-3, 0.55, 2.5);
		truck1();
		glPopMatrix();

		glPushMatrix();
		glScalef(-2, 2, 2);
		glTranslatef(-8, 0.55, 2);
		truck2();
		glPopMatrix();

		glPushMatrix();
		glScalef(-1.2, 1.2, 1.2);
		glTranslatef(-13, 0.55, 0);
		suv2();
		glPopMatrix();

		glPushMatrix();
		glScalef(-1.2, 1.2, 1.2);
		glTranslatef(-17, 0.55, -0.4);
		suv1();
		glPopMatrix();
	}
	else
	{
		if (!isDoorAnimationScene)
		{
			glPushMatrix();
			glTranslatef(carPos, 0, -1);
			lambo();
			glPopMatrix();
		}
		else
		{
			glPushMatrix();
			glTranslatef(11, 0, -11);
			glRotatef(-30, 0, 1, 0);
			lambo();
			glPopMatrix();

			glPushMatrix();
			glTranslatef(8.5, 0.25, -11);
			glRotatef(-150, 0, 1, 0);
			sedan(0.1, 0.07, 0.38);
			glPopMatrix();
		}
		

	}


	for (int i = 0; i < 14; i++)
	{
		glPushMatrix();
		glScalef(5, 5, 5);
		glTranslatef(-6+ i, -0.09, 1);
		glRotatef(90, 1, 0, 0);
		road();
		glPopMatrix();
	}

	for (int i = 0; i < 14; i++)
	{
		glPushMatrix();
		glScalef(5, 5, 5);
		glTranslatef(-6 + i, -0.09, 0);
		glRotatef(90, 1, 0, 0);
		road();
		glPopMatrix();
	}
	

	glPopMatrix();
	
}


void scene2()
{
	for (int i = 0; i < 14; i++)
	{
		glPushMatrix();
		glScalef(5, 5, 5);
		glTranslatef(-6 + i, -0.09, 0);
		glRotatef(90, 1, 0, 0);
		road();
		glPopMatrix();
	}
}

void animation()
{
	if (deltaMove)
		computePos(deltaMove);
	
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0, 0, 1, 0);
	glLoadIdentity();
	//gluLookAt(x, y, z, x + lx, y + ly, z + lz, 0, 1, 0);
	gluLookAt(x, y, z, x, y + ly, z + lz, 0, 1, 0);
	glPushMatrix();
	glTranslatef(0, 0, -12);
	//glRotatef(270,1 , 0,0);
	scene2();
	glPopMatrix();
	glutSwapBuffers();
}


void cityPano()
{
	if (deltaMove)
		computePos(deltaMove);
	if (deltaAngle)
		computeDir(deltaAngle);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0, 0, 1, 0);
	glLoadIdentity();
	//gluLookAt(x, y, z, x + lx, y + ly, z + lz, 0, 1, 0);
	gluLookAt(x, y, z, x, y + ly, z + lz, 0, 1, 0);
	glPushMatrix();
	glTranslatef(0, 0, -12);
	//glRotatef(270,1 , 0,0);
	scene();
	glPopMatrix();
	glutSwapBuffers();
	

}

void myidlefunction()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0, 0, 1, 0);
	if (isAnimationScene && carPos > -12 && !isDoorAnimationScene)
	{
		carPos -= 0.1;
	}
	if (isDoorAnimationScene)
	{
		
		if (ldoor_angle_z == 0)
			isLClosed = true;
		if (ldoor_angle_z == 60)
			isLClosed = false;

		if (sedan_door_angle == 0)
			isSClosed = true;
		if (ldoor_angle_z == 40)
			isSClosed = false;

		//Lambo door open close sequence
		if (isLClosed && ldoor_angle_z < 60)
		{

			ldoor_angle_z += 1;
			ldoor_angle_y += 0.2;
			//glutPostRedisplay();

		}
		if (!isLClosed && ldoor_angle_z > 0)
		{
			ldoor_angle_z -= 1;
			ldoor_angle_y -= 0.2;
		}

		///////

		/// Sedan open-close sequence
		if (isSClosed && sedan_door_angle < 40)
		{

			sedan_door_angle += 1;
			
			//glutPostRedisplay();

		}
		if (!isSClosed && sedan_door_angle > 0)
		{
			sedan_door_angle -= 1;
			
		}

	}
	glutPostRedisplay();
}

void pressKey(int key, int xx, int yy)
{
	switch (key)
	{
	case GLUT_KEY_LEFT:
	{

		x+=0.2;
		break;
	}
	case GLUT_KEY_RIGHT:x-=0.2; break;
	case GLUT_KEY_UP:deltaMove = 2; break;
	case GLUT_KEY_DOWN:deltaMove = -2; break;
	case GLUT_KEY_PAGE_UP:y += 0.5; break;
	case GLUT_KEY_PAGE_DOWN:y -= 0.5; break;
	case GLUT_KEY_F1:
		carPos = 18;
		x = 10;
		z = -30;
		isDoorAnimationScene = false;
		isAnimationScene = true;
		break;
	case GLUT_KEY_F2:
		x = 10;
		z = -30;
		isAnimationScene = true;
		isDoorAnimationScene = true;
		break;
	case GLUT_KEY_F3:
		x = 20;
		z = -20;
		isAnimationScene = false;
		isDoorAnimationScene = false;
		break;
	
	}
}

void releaseKey(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_LEFT:
	case GLUT_KEY_RIGHT: deltaAngle = 0; break;
	case GLUT_KEY_UP:
	case GLUT_KEY_DOWN: deltaMove = 0; break;
	}
}

void keyboard1(unsigned char key, int x, int y)
{
	switch (key)
	{
	case'+':
		ly += 0.01;
		glutPostRedisplay();
		break;
	case'-':
		ly -= 0.01;
		glutPostRedisplay();
		break;
	}
}




int main(int argc, char**argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_RGBA | GLUT_DOUBLE);
	glutInitWindowSize(1280, 720);
	glutInitWindowPosition(50, 100);
	glutCreateWindow("City");
	glutDisplayFunc(cityPano);
	initGL();
	glutKeyboardFunc(keyboard1);
	glutReshapeFunc(reshape);
	glutIdleFunc(myidlefunction);
	glutSpecialFunc(pressKey);
	glutSpecialUpFunc(releaseKey);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);
	glutMainLoop();
	return 0;
}