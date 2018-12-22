#pragma once
#include "glut.h"
#include "math.h"
#include <stdlib.h>  


void window1(void)
{
	glColor3f(0.658, 1, 0.960);
	glPushMatrix();
	glScalef(2, 2, 2);
	glutSolidCube(0.5);
	glPopMatrix();
}
void window2(void)
{
	glColor3f(0.658, 1, 0.960);
	glPushMatrix();
	glScalef(2, 2, 2);
	glutSolidCube(0.5);
	glPopMatrix();
}
void door1(void)
{
	glColor3f(0, 0, 0);
	glPushMatrix();
	glTranslatef(0.3, 0, 0);
	glScalef(1, 2, 2);
	glutSolidCube(0.5);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.3, 0, 0);
	glScalef(1, 2, 2);
	glutSolidCube(0.5);
	glPopMatrix();
}


void building1(void)
{

	//main building
	glPushMatrix();
	glPushMatrix();
	glColor3f(0.690, 0.690, 0.690);
	glTranslatef(0, 0, 0);
	glScalef(0.3, 0.7, 0.25);
	glutSolidCube(2);
	glPopMatrix();

	//roof
	glPushMatrix();
	glColor3f(0.431, 0.431, 0.431);
	glTranslatef(0, 0.7, 0);
	glScalef(0.45, 0.05, 0.4);
	glutSolidCube(1.5);
	glPopMatrix();

	//window2
	glPushMatrix();
	glTranslatef(0, -0.4, 0);
	glScalef(0.5, 0.2, 0.501);
	window2();
	glPopMatrix();
	//door
	glPushMatrix();
	glTranslatef(0, -0.65, 0);
	glScalef(0.05, 0.1, 0.501);
	door1();
	glPopMatrix();
	//windows
	for (int i = 0; i < 5; i++)
	{
		glPushMatrix();
		glScalef(0.02, 0.8, 0.501);
		glTranslatef(-10 + ((i * 5) % 25), 0.2, 0);
		window1();
		glPopMatrix();
	}

	for (int i = 0; i < 11; i++)
	{
		glPushMatrix();
		glTranslatef(0, 0.5 - (i*0.1), 0);
		glScalef(0.601, 0.05, 0.35);
		window2();
		glPopMatrix();


	}

	glPopMatrix();
}



void building2()
{
	glPushMatrix();
	//building
	glPushMatrix(); //building outer cube
	glColor3f(0, 0.91, 0.45);
	glTranslatef(0.0f, -0.3, 0.0f);
	glScalef(2, 8.16, 1.5);
	glutSolidCube(0.2);
	glPopMatrix();

	//Floors
	for (int i = 0; i < 11; i++)
	{
		glPushMatrix();
		glColor3f(0.02, 1, 0.87);
		glTranslatef(0.0f, 0.40 + (i * -0.12), 0.0f);
		glScalef(1.7, 0.5, 1.51);
		glutSolidCube(0.2);
		glPopMatrix();

		glPushMatrix();
		glColor3f(0.02, 1, 0.87);
		glTranslatef(0.0f, 0.40 + (i * -0.12), 0.0f);
		glScalef(2.01, 0.5, 1.3);
		glutSolidCube(0.2);
		glPopMatrix();
	}

	//doors

	glPushMatrix(); //building door 1
	glColor3f(0.14, 0.14, 0.14);
	glTranslatef(-0.025f, -1.0f, 0.0f);
	glScalef(0.3, -1, 1.51);
	glutSolidCube(0.2);
	glPopMatrix();


	glPushMatrix(); //building door 2
	glColor3f(0.14, 0.14, 0.14);
	glTranslatef(0.04f, -1.0f, 0.0f);
	glScalef(0.3, -1, 1.51);
	glutSolidCube(0.2);
	glPopMatrix();

	//roof

	glPushMatrix(); //building roof
	glColor3f(0, 0.91, 0.45);
	glTranslatef(0.0f, 0.55f, 0.0f);
	glScalef(2.4, 0.4, 1.7);
	glutSolidCube(0.2);
	glPopMatrix();

	glPopMatrix();

}

void building4()
{

	//building
	glPushMatrix(); //building 4th cube
	glColor3f(0.309804, 0.184314, 0.309804);
	glTranslatef(0.0f, 0.35f, 0.0f);
	glScalef(0.4, 0.5, 0.8);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix(); //building 3rd cube
	glColor3f(0.309804, 0.184314, 0.309804);
	glTranslatef(0.0f, 0.25f, 0.0f);
	glScalef(1.0, 0.5, 1.2);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix(); //building 2nd cube
	glColor3f(0.309804, 0.184314, 0.309804);
	glTranslatef(0.0f, 0.15f, 0.0f);
	glScalef(1.6, 0.5, 1.6);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix(); //building 1st cube
	glColor3f(0.309804, 0.184314, 0.309804);
	glTranslatef(0.0f, -0.55, 0.0f);
	glScalef(2.2, 6.5, 2);
	glutSolidCube(0.2);
	glPopMatrix();


	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(0.0f, 0.35f, 0.0f);
	glScalef(0.25, 0.25, 0.81);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(0.0f, 0.35f, 0.0f);
	glScalef(0.41, 0.25, 0.5);
	glutSolidCube(0.2);
	glPopMatrix();

	for (int i = 0; i < 3; i++)
	{
		glPushMatrix();
		glColor3f(1, 1, 1);
		glTranslatef(-0.06 + (i*0.06), 0.25f, 0.0f);
		glScalef(0.25, 0.25, 1.21);
		glutSolidCube(0.2);
		glPopMatrix();
	}

	for (int i = 0; i < 3; i++)
	{
		glPushMatrix();
		glColor3f(1, 1, 1);
		glTranslatef(0, 0.25f, -0.07 + (0.07*i));
		glScalef(1.01, 0.25, 0.3);
		glutSolidCube(0.2);
		glPopMatrix();

	}



	for (int i = 0; i < 5; i++)
	{
		glPushMatrix();
		glColor3f(1, 1, 1);
		glTranslatef(-0.12 + (i*0.06), 0.15f, 0.0f);
		glScalef(0.25, 0.25, 1.61);
		glutSolidCube(0.2);
		glPopMatrix();
	}


	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(0.0f, 0.15f, 0.075f);
	glScalef(1.61, 0.25, 0.6);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(0.0f, 0.15f, -0.075f);
	glScalef(1.61, 0.25, 0.6);
	glutSolidCube(0.2);
	glPopMatrix();

	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			glPushMatrix();
			glColor3f(1, 1, 1);
			glTranslatef(-0.18 + (j*0.06), 0.05f - (0.1*i), 0.0f);
			glScalef(0.25, 0.25, 2.01);
			glutSolidCube(0.2);
			glPopMatrix();
		}
	}

	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			glPushMatrix();
			glColor3f(1, 1, 1);
			glTranslatef(0, 0.05f - (0.1*i), -0.14 + (0.07*j));
			glScalef(2.21, 0.25, 0.3);
			glutSolidCube(0.2);
			glPopMatrix();

		}
	}



	//door
	glPushMatrix();
	glPushMatrix(); //building door 1
	glColor3f(0, 0, 0);
	glTranslatef(-0.012f, -1.16f, 0.0f);
	glScalef(0.1, 0.3, 2.01);
	glutSolidCube(0.2);
	glPopMatrix();


	glPushMatrix(); //building door 2
	glColor3f(0, 0, 0);
	glTranslatef(0.012f, -1.16f, 0.0f);
	glScalef(0.1, 0.3, 2.01);
	glutSolidCube(0.2);
	glPopMatrix();



	glPopMatrix();


}



void window3(void)
{
	glColor3f(0.407, 0.694, 0.874);
	glPushMatrix();
	glScalef(2, 2, 4);
	glutSolidCube(0.5);
	glPopMatrix();
}
void building3(void)
{
	//main structure
	glPushMatrix();
	glColor3f(0.901, 0.901, 0.901);
	glTranslatef(0, 0, 0);
	glScalef(0.15, 0.7, 0.24);
	glutSolidCube(2);
	glPopMatrix();
	//main struct top
	glPushMatrix();
	glColor3f(0.901, 0.901, 0.901);
	glTranslatef(0, 0.8, 0);
	glScalef(0.08, 0.15, 0.16);
	glutSolidCube(2);
	glPopMatrix();

	//windows in main struct
	for (int i = 0; i < 8; i++)
	{
		glPushMatrix();
		glScalef(0.015, 1.2, 0.241);
		glTranslatef(-7 + ((i * 2)) % 35, 0, 0);
		window3();
		glPopMatrix();
	}


	for (int i = 0; i < 4; i++)
	{
		glPushMatrix();
		glScalef(0.015, 0.2, 0.161);
		glTranslatef(-3 + ((i * 2)) % 35, 4, 0);
		window3();
		glPopMatrix();
	}


	for (int i = 0; i < 4; i++)
	{
		glPushMatrix();
		glScalef(0.161, 0.04, 0.13);
		glTranslatef(0, 22 - (1.5*i), 0);
		window3();
		glPopMatrix();
	}

	for (int i = 0; i < 20; i++)
	{
		glPushMatrix();
		glScalef(0.301, 0.04, 0.2);
		glTranslatef(0, 14.5 - (1.5*i), 0);
		window3();
		glPopMatrix();
	}



	//left struct
	glPushMatrix();
	glColor3f(0.901, 0.901, 0.901);
	glTranslatef(-0.272, -0.2, -0.1);
	glScalef(0.12, 0.5, 0.18);
	glutSolidCube(2);
	glPopMatrix();


	//windows in left struct
	for (int i = 0; i < 6; i++)
	{
		glPushMatrix();
		glScalef(0.015, 0.5, 0.181);
		glTranslatef(-23 + ((i * 2)) % 35, -0.7, -0.551);
		window3();
		glPopMatrix();
	}
	for (int i = 0; i < 6; i++)
	{
		glPushMatrix();
		glScalef(0.015, 0.2, 0.181);
		glTranslatef(-23 + ((i * 2)) % 35, 0.4, -0.551);
		window3();
		glPopMatrix();
	}

	for (int i = 0; i < 13; i++)
	{
		glPushMatrix();
		glTranslatef(-0.272, 0, 0);
		glPushMatrix();
		glPushMatrix();
		glScalef(0.241, 0.04, 0.14);
		glTranslatef(0, 4 - (1.5*i), -0.7);
		window3();
		glPopMatrix();
		glPopMatrix();
		glPopMatrix();
	}


	//Right Struct
	glPushMatrix();
	glColor3f(0.901, 0.901, 0.901);
	glTranslatef(0.272, -0.2, 0);
	glScalef(0.12, 0.5, 0.18);
	glutSolidCube(2);
	glPopMatrix();
	//windows in right struct
	for (int i = 0; i < 6; i++)
	{
		glPushMatrix();
		glScalef(0.015, 0.80, 0.181);
		glTranslatef(13 + ((i * 2)) % 35, -0.245, 0);
		window3();
		glPopMatrix();
	}

	for (int i = 0; i < 13; i++)
	{
		glPushMatrix();
		glTranslatef(0.272, 0, 0);
		glPushMatrix();
		glPushMatrix();
		glScalef(0.241, 0.04, 0.14);
		glTranslatef(0, 4 - (1.5*i), 0);
		window3();
		glPopMatrix();
		glPopMatrix();
		glPopMatrix();
	}
	//roof of left struct
	glPushMatrix();
	glColor3f(0.843, 0.843, 0.835);
	glTranslatef(0.272, 0.33, 0);
	glScalef(0.05, 0.03, 0.12);
	glutSolidCube(2);
	glPopMatrix();

	//Base
	glPushMatrix();
	glColor3f(0.843, 0.843, 0.835);
	glTranslatef(-0.06, -0.8, 0);
	glScalef(0.45, 0.1, 0.3);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.211, 0.305, 0.568);
	glTranslatef(-0.06, -0.7, 0);
	glScalef(0.48, 0.03, 0.32);
	glutSolidCube(2);
	glPopMatrix();

	//Base Door
	glPushMatrix();
	glColor3f(0.227, 0.223, 0.211);
	glTranslatef(-0.36, -0.87, 0);
	glScalef(0.04, 0.03, 0.301);
	glutSolidCube(2);
	glPopMatrix();
	glFlush();
}







void building5()
{

	glPushMatrix();
	//building
	//glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix(); //building 3rd cube
	glColor3f(0, 0, 0);
	glTranslatef(0.0f, 0.60f, 0.0f);
	glScalef(2, -3, 2);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix(); //building 2nd cube
	glColor3f(0, 0, 0);
	glTranslatef(0.0f, 0.0f, 0.0f);
	glScalef(3, -3, 3);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix(); //building 1st cube
	glColor3f(0, 0, 0);
	glTranslatef(0.0f, -0.6f, 0.0f);
	glScalef(4, -3, 4);
	glutSolidCube(0.2);
	glPopMatrix();

	//windows

	glPushMatrix();
	glColor3f(0.9, 0.93, 1);
	glTranslatef(-0.1f, 0.75f, 0.0f);
	glScalef(0.9, -1.0, 2);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.9, 0.93, 1);
	glTranslatef(0.1f, 0.75f, 0.0f);
	glScalef(0.9, -1.0, 2);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.9, 0.93, 1);
	glTranslatef(0.1f, 0.45f, 0.0f);
	glScalef(0.9, -1.0, 2);
	glutSolidCube(0.2);
	glPopMatrix();

	glTranslatef(-0.1f, 0.45f, 0.0f);
	glScalef(0.9, -1.0, 2);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.9, 0.93, 1);
	glTranslatef(-0.2f, 0.15f, 0.0f);
	glScalef(0.9, -1.0, 3);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.9, 0.93, 1);
	glTranslatef(0.0f, 0.15f, 0.0f);
	glScalef(0.9, -1.0, 3);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.9, 0.93, 1);
	glTranslatef(0.2f, 0.15f, 0.0f);
	glScalef(0.9, -1.0, 3);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.9, 0.93, 1);
	glTranslatef(0.2f, -0.15f, 0.0f);
	glScalef(0.9, -1.0, 3);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.9, 0.93, 1);
	glTranslatef(0.0f, -0.15f, 0.0f);
	glScalef(0.9, -1.0, 3);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.9, 0.93, 1);
	glTranslatef(-0.2f, -0.15f, 0.0f);
	glScalef(0.9, -1.0, 3);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.9, 0.93, 1);
	glTranslatef(-0.3f, -0.5f, 0.0f);
	glScalef(0.9, -1.0, 4);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.9, 0.93, 1);
	glTranslatef(-0.1f, -0.5f, 0.0f);
	glScalef(0.9, -1.0, 4);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.9, 0.93, 1);
	glTranslatef(0.1f, -0.5f, 0.0f);
	glScalef(0.9, -1.0, 4);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.9, 0.93, 1);
	glTranslatef(0.3f, -0.5f, 0.0f);
	glScalef(0.9, -1.0, 4);
	glutSolidCube(0.2);
	glPopMatrix();

	//door
	glPushMatrix(); //building door 4
	glColor3f(0.9, 0.93, 1);
	glTranslatef(0.3f, -0.8f, 0.0f);
	glScalef(0.5, -1.0, 4);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix(); //building door 4
	glColor3f(0.9, 0.93, 1);
	glTranslatef(0.15f, -0.8f, 0.0f);
	glScalef(0.5, -1.0, 4);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix(); //building door 3
	glColor3f(0.9, 0.93, 1);
	glTranslatef(0.0f, -0.8f, 0.0f);
	glScalef(0.5, -1.0, 4);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix(); //building door 2
	glColor3f(0.9, 0.93, 1);
	glTranslatef(-0.15f, -0.8f, 0.0f);
	glScalef(0.5, -1.0, 4);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix(); //building door 1
	glColor3f(0.9, 0.93, 1);
	glTranslatef(-0.3f, -0.8f, 0.0f);
	glScalef(0.5, -1.0, 4);
	glutSolidCube(0.2);
	glPopMatrix();




	glPopMatrix();


}

//Building 6 (brown)
void brownSlit(void)
{
	glColor3f(0.380, 0.254, 0.160);
	glPushMatrix();
	glScalef(2, 2, 2);
	glutSolidCube(0.5);
	glPopMatrix();
}
void LbrownSlit(void)
{
	glColor3f(0.564, 0.329, 0.235);
	glPushMatrix();
	glScalef(2, 2, 2);
	glutSolidCube(0.5);
	glPopMatrix();
}
void coolers(void)
{
	//bottom
	glColor3f(0.709, 0.709, 0.709);
	glPushMatrix();
	glScalef(2, 2, 2);
	glutSolidCube(0.5);
	glPopMatrix();
	//top
	glColor3f(0.709, 0.709, 0.709);
	glPushMatrix();
	glScalef(1, 1.3, 1);
	glTranslatef(0, 0.6, 0);
	glutSolidCube(0.5);
	glPopMatrix();
	glFlush();
}



void building6(void)
{
	//Main back block with dark slits 
	glPushMatrix();
	glColor3f(0.662, 0.431, 0.258);
	glTranslatef(0, 0, 0);
	glScalef(0.15, 0.4, 0.1);
	glutSolidCube(2);
	glPopMatrix();

	for (int i = 0; i < 10; i++)
	{
		glPushMatrix();
		glTranslatef(0, -0.35 + (i*0.082), 0);
		glScalef(0.301, 0.04, 0.201);
		brownSlit();
		glPopMatrix();
	}

	//Simple maroonish block in front
	glPushMatrix();
	glColor3f(0.462, 0.196, 0.137);
	glTranslatef(0, 0.05, 0);
	glScalef(0.125, 0.45, 0.102);
	glutSolidCube(2);
	glPopMatrix();

	//Lighter block with door at bottom
	glPushMatrix();
	glColor3f(0.662, 0.431, 0.258);
	glTranslatef(0, 0, 0);
	glScalef(0.07, 0.4, 0.15);
	glutSolidCube(2);
	glPopMatrix();

	for (int i = 0; i < 10; i++)
	{
		glPushMatrix();
		glTranslatef(0, -0.30 + (i*0.076), 0);
		glScalef(0.141, 0.03, 0.301);
		LbrownSlit();
		glPopMatrix();
	}
	//big slit at bottom
	glPushMatrix();
	glTranslatef(0, -0.375, 0);
	glScalef(0.141, 0.05, 0.301);
	LbrownSlit();
	glPopMatrix();
	//doors
	glPushMatrix();
	glTranslatef(0, -0.375, 0);
	glScalef(0.03, 0.05, 0.305);
	door1();
	glPopMatrix();

	//Coolers at top
	glPushMatrix();
	glTranslatef(-0.07, 0.53, 0);
	glScalef(0.06, 0.06, 0.06);
	coolers();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 0.53, 0);
	glScalef(0.06, 0.06, 0.06);
	coolers();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.07, 0.53, 0);
	glScalef(0.06, 0.06, 0.06);
	coolers();
	glPopMatrix();


	glFlush();
}



void window4(void)
{
	glColor3f(0.458, 0.807, 0.819);
	glPushMatrix();
	glScalef(2, 2, 2);
	glutSolidCube(0.5);
	glPopMatrix();
}
void window5(void)
{
	glColor3f(0.258, 0.592, 0.603);
	glPushMatrix();
	glScalef(2, 2, 2);
	glutSolidCube(0.5);
	glPopMatrix();
}
void block(void)
{
	//main block
	glPushMatrix();
	glColor3f(0.901, 0.901, 0.901);
	glTranslatef(0, 0, 0);
	glScalef(0.13, 0.5, 0.13);
	glutSolidCube(2);
	glPopMatrix();
	//roof
	glPushMatrix();
	glColor3f(0.901, 0.901, 0.901);
	glTranslatef(0, 0.5, 0);
	glScalef(0.15, 0.05, 0.15);
	glutSolidCube(2);
	glPopMatrix();
	//Base
	glPushMatrix();
	glColor3f(0.792, 0.788, 0.788);
	glTranslatef(0, -0.5, 0);
	glScalef(0.14, 0.02, 0.14);
	glutSolidCube(2);
	glPopMatrix();
	//windows (sea green) 
	for (int i = 0; i < 12; i++)
	{
		glPushMatrix();
		glScalef(0.261, 0.04, 0.261);
		glTranslatef(0, -11.5 + (2 * i), 0);
		window4();
		glPopMatrix();
	}
	//Windows (darker green)
	for (int i = 0; i < 11; i++)
	{
		glPushMatrix();
		glScalef(0.261, 0.04, 0.261);
		glTranslatef(0, -10.5 + (2 * i), 0);
		window5();
		glPopMatrix();
	}


}
void building7(void)
{
	////left block
	glPushMatrix();
	glScalef(0.7, 0.9, 1);
	glTranslatef(-0.3, -0.0559, 0.2);
	block();
	glPopMatrix();

	////rightest block
	glPushMatrix();
	glScalef(0.6, 0.7, 1);
	glTranslatef(0.6, -0.222, 0.05);
	block();
	glPopMatrix();

	////right block
	glPushMatrix();
	glScalef(0.7, 0.9, 1);
	glTranslatef(0.3, -0.0559, 0.1);
	block();
	glPopMatrix();
	//center block
	glPushMatrix();
	glScalef(0.9, 1, 1);
	glTranslatef(0, 0, 0);
	block();
	glPopMatrix();
	//center block roof
	glPushMatrix();
	glColor3f(0.662, 0.431, 0.258);
	glScalef(0.3, 0.1, 0.2);
	glTranslatef(0, 5.75, 0);
	glutSolidCube(0.5);
	glPopMatrix();

	glFlush();
}


void building8()
{



	glPushMatrix();

	glPushMatrix(); //building 1st cube
	glColor3f(0.184314, 0.184314, 0.309804);
	glTranslatef(0.2f, -0.6f, 0.0f);
	glScalef(1, 2, 2);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix(); //building 2nd cube
	glColor3f(0.184314, 0.184314, 0.309804);
	glTranslatef(-0.1f, 0, 0.0f);
	glScalef(2, 8, 2);
	glutSolidCube(0.2);
	glPopMatrix();



	glPushMatrix(); //building 3rd cube
	glColor3f(0.137255, 0.137255, 0.556863);
	glTranslatef(-0.2f, -0.6f, 0.0f);
	glScalef(2, 2, 2.01);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix(); //building 4th cube
	glColor3f(0.137255, 0.137255, 0.556863);
	glTranslatef(-0.2f, 0.25f, 0.0f);
	glScalef(2, 5.5, 2.01);
	glutSolidCube(0.2);
	glPopMatrix();










	glPushMatrix();
	glColor3f(0.184314, 0.184314, 0.309804);
	glTranslatef(-0.05f, 0.25f, 0.0f);
	glScalef(0.2, -5, 2.02);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.184314, 0.184314, 0.309804);
	glTranslatef(-0.13f, 0.25f, 0.0f);
	glScalef(0.2, -5, 2.02);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.184314, 0.184314, 0.309804);
	glTranslatef(-0.21f, 0.25f, 0.0f);
	glScalef(0.2, -5, 2.02);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.184314, 0.184314, 0.309804);
	glTranslatef(-0.29f, 0.25f, 0.0f);
	glScalef(0.2, -5, 2.02);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.184314, 0.184314, 0.309804);
	glTranslatef(-0.36f, 0.25f, 0.0f);
	glScalef(0.2, -5, 2.02);
	glutSolidCube(0.2);
	glPopMatrix();


	glPushMatrix();
	glColor3f(0.184314, 0.184314, 0.309804);
	glTranslatef(-0.13f, -0.55f, 0.0f);
	glScalef(0.2, -1.3, 2.02);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.184314, 0.184314, 0.309804);
	glTranslatef(-0.21f, -0.55f, 0.0f);
	glScalef(0.2, -1.3, 2.02);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.184314, 0.184314, 0.309804);
	glTranslatef(-0.29f, -0.55f, 0.0f);
	glScalef(0.2, -1.3, 2.02);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.184314, 0.184314, 0.309804);
	glTranslatef(-0.36f, -0.55f, 0.0f);
	glScalef(0.2, -1.3, 2.02);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(-0.25f, -0.75f, 0.0f);
	glScalef(0.3, -0.5, 2.02);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(-0.15f, -0.75f, 0.0f);
	glScalef(0.3, -0.5, 2.02);
	glutSolidCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.184314, 0.184314, 0.309804);
	glTranslatef(-0.05f, -0.55f, 0.0f);
	glScalef(0.2, -1.3, 2.02);
	glutSolidCube(0.2);
	glPopMatrix();
	glPopMatrix();



}



