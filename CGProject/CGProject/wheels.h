#pragma once
#include "glut.h"
#include "math.h"
#include <stdlib.h>  


GLUquadricObj *obj = gluNewQuadric();


void cross()
{

	glPushMatrix();

	glPushMatrix();
	glColor3f(0.913, 0.909, 0.925);
	glRotatef(30, 0, 0, 1);
	glTranslatef(0, 0, -0.203);
	glScalef(0.2, 0.9, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.913, 0.909, 0.925);
	glRotatef(-30, 0, 0, 1);
	glTranslatef(0, 0, -0.203);
	glScalef(0.2, 0.9, 0);
	glutSolidCube(1);
	glPopMatrix();
	glPopMatrix();
}

void wheel2()
{
	glPushMatrix();
	//Outer cylinder
	glPushMatrix();
	glColor3f(0.188, 0.176, 0.215);
	glScalef(0.5625, 1, 1);
	glTranslatef(0, 0, -0.2);
	gluCylinder(obj, 1, 1, 0.4, 200, 100);
	glPopMatrix();

	//cap
	glPushMatrix();
	glColor3f(0.188, 0.176, 0.215);
	glScalef(0.5625, 1, 1);
	glTranslatef(0, 0, -0.2);
	gluDisk(obj, 0, 1, 200, 100);
	glPopMatrix();
	//cap
	glPushMatrix();
	glColor3f(0.188, 0.176, 0.215);
	glScalef(0.5625, 1, 1);
	glTranslatef(0, 0, 0.2);
	gluDisk(obj, 0, 1, 200, 100);
	glPopMatrix();


	glPushMatrix();
	glColor3f(0.913, 0.909, 0.925);
	glScalef(0.39375, 0.7, 1);
	glTranslatef(0, 0, -0.201);
	gluDisk(obj, 0, 1, 200, 100);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.360, 0.345, 0.384);
	glScalef(0.39375, 0.7, 1);
	glTranslatef(0, 0, 0.201);
	gluDisk(obj, 0, 1, 200, 100);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.360, 0.345, 0.384);
	glScalef(0.28125, 0.5, 1);
	glTranslatef(0, 0, -0.202);
	gluDisk(obj, 0, 1, 200, 100);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.188, 0.176, 0.215);
	glScalef(0.28125, 0.5, 1);
	glTranslatef(0, 0, 0.202);
	gluDisk(obj, 0, 1, 200, 100);
	glPopMatrix();


	glPushMatrix();
	glColor3f(0.913, 0.909, 0.925);
	glRotatef(30, 0, 0, 1);
	glTranslatef(0, 0, -0.203);
	glScalef(0.2, 0.9, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.913, 0.909, 0.925);
	glRotatef(-30, 0, 0, 1);
	glTranslatef(0, 0, -0.203);
	glScalef(0.2, 0.9, 0);
	glutSolidCube(1);
	glPopMatrix();


	glPopMatrix();
}

void wheel1()
{
	glPushMatrix();
	//Outer
	glPushMatrix();
	glColor3f(0.188, 0.176, 0.215);
	glScalef(0.5625, 1, 1);
	glTranslatef(0, 0, -0.1);
	gluCylinder(obj, 1, 1, 0.4, 200, 100);
	glPopMatrix();

	//cap
	glPushMatrix();
	glColor3f(0.188, 0.176, 0.215);
	glScalef(0.5625, 1, 1);
	glTranslatef(0, 0, -0.1);
	gluDisk(obj, 0, 1, 200, 100);
	glPopMatrix();
	//cap
	glPushMatrix();
	glColor3f(0.188, 0.176, 0.215);
	glScalef(0.5625, 1, 1);
	glTranslatef(0, 0, 0.1);
	gluDisk(obj, 0, 1, 200, 100);
	glPopMatrix();


	glPushMatrix();
	glColor3f(0.360, 0.345, 0.384);
	glScalef(0.39375, 0.7, 1);
	glTranslatef(0, 0, -0.101);
	gluDisk(obj, 0, 1, 200, 100);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.913, 0.909, 0.925);
	glScalef(0.3375, 0.6, 1);
	glTranslatef(0, 0, -0.102);
	gluDisk(obj, 0, 1, 200, 100);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.188, 0.176, 0.215);
	glScalef(0.16875, 0.3, 1);
	glTranslatef(0, 0, -0.103);
	gluDisk(obj, 0, 1, 200, 100);
	glPopMatrix();




	glPopMatrix();
}

void wheel3()
{

	glPushMatrix();
	//Outer cylinder
	glPushMatrix();
	glColor3f(0.37, 0.43, 0.44);
	glScalef(0.5625, 1, 1);
	glTranslatef(0, 0, -0.1);
	gluCylinder(obj, 1, 1, 0.4, 200, 100);
	glPopMatrix();

	//cap
	glPushMatrix();
	glColor3f(0.37, 0.43, 0.44);
	glScalef(0.5625, 1, 1);
	glTranslatef(0, 0, -0.1);
	gluDisk(obj, 0, 1, 200, 100);
	glPopMatrix();
	//cap
	glPushMatrix();
	glColor3f(0.37, 0.43, 0.44);
	glScalef(0.5625, 1, 1);
	glTranslatef(0, 0, 0.1);
	gluDisk(obj, 0, 1, 200, 100);
	glPopMatrix();


	glPushMatrix();
	glColor3f(0.91, 0.89, 0.85);
	glScalef(0.28125, 0.5, 1);
	glTranslatef(0, 0, -0.102);
	gluDisk(obj, 0, 1, 200, 100);
	glPopMatrix();


	glPopMatrix();
}
