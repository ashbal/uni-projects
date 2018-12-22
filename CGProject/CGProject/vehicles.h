#pragma once
#include "glut.h"
#include "math.h"
#include <stdlib.h>  
#include "wheels.h"


float sedan_door_angle = 0;
float ldoor_angle_z = 0;
float ldoor_angle_y = 0;
float ld_post_scale_x = 1;
float ld_post_scale_y = 1;


void lambo_door()
{
	glPushMatrix();

	//glLineWidth(1);
	glPushMatrix();
	glLineWidth(1);
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-0.3156, 0.225, 0);
	glVertex3f(-0.3422, 0.2278, 0);
	glVertex3f(-0.4078, 0.1472, 0);
	glVertex3f(-0.3781, -0.1472, 0);
	glVertex3f(0.0938, -0.0944, 0);
	glVertex3f(0.1672, 0.2694, 0);
	glVertex3f(0.1797, 0.2972, 0);
	glVertex3f(0.1438, 0.3472, 0);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.83, 0.16, 0);
	glVertex3f(-0.3156, 0.225, 0);
	glVertex3f(-0.3422, 0.2278, 0);
	glVertex3f(-0.4078, 0.1472, 0);
	glVertex3f(-0.3781, -0.1472, 0);
	glVertex3f(0.0938, -0.0944, 0);
	glVertex3f(0.1672, 0.2694, 0);
	glVertex3f(0.1797, 0.2972, 0);
	glVertex3f(0.1438, 0.3472, 0);
	glEnd();
	glPopMatrix();
	glPopMatrix();
}

void sedan_door_front(char d, double r, double g, double b )
{
	float x = 0;
	if (d == 'r')
	{
		x = 0.001;
	}
	if (d == 'l')
	{
		x = -0.001;
	}
	glPushMatrix();
	glPushMatrix();
	glLineWidth(1);
	glBegin(GL_POLYGON);
	glColor3f(r, g, b);
	glVertex3f(-0.375, 0.1, 0);
	glVertex3f(-0.4062, -0.0167, 0);
	glVertex3f(-0.4062, -0.4167, 0);
	glVertex3f(0.1203, -0.4, 0);
	glVertex3f(0.1344, 0.1389, 0);
	glEnd();
	glPopMatrix();
	//10 handle
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.54, 0.52, 0.75);
	glVertex3f(0.0078, 0.0694, x);
	glVertex3f(0.0903, 0.0694, x);
	glVertex3f(0.0903, 0.0417, x);
	glVertex3f(0.0078, 0.0417, x);
	glEnd();
	glPopMatrix();
	//L
	glPushMatrix();
	glLineWidth(1);
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-0.375, 0.1, x);
	glVertex3f(-0.4062, -0.0167, x);
	glVertex3f(-0.4062, -0.4167, x);
	glVertex3f(0.1203, -0.4, x);
	glVertex3f(0.1344, 0.1389, x);
	glEnd();
	glPopMatrix();
	glPopMatrix();
}

void sedan_door_back(char d, double r, double g, double b)
{
	float x = 0;
	if (d == 'r')
	{
		x = 0.001;
	}
	if (d == 'l')
	{
		x = -0.001;
	}
	glPushMatrix();
	glPushMatrix();
	//glLineWidth(1);
	glBegin(GL_POLYGON);
	glColor3f(r,g,b);
	glVertex3f(0.1344, 0.1389, 0);
	glVertex3f(0.1203, -0.4, 0);
	glVertex3f(0.4109, -0.3972, 0);
	glVertex3f(0.5625, -0.0472, 0);
	glVertex3f(0.5656, 0.1639, 0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glLineWidth(1);
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(0.1344, 0.1389, x);
	glVertex3f(0.1203, -0.4, x);
	glVertex3f(0.4109, -0.3972, x);
	glVertex3f(0.5625, -0.0472, x);
	glVertex3f(0.5656, 0.1639, x);
	glEnd();
	glPopMatrix();

	//11 Right back handle
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.54, 0.52, 0.75);
	glVertex3f(0.4484, 0.0861, x);
	glVertex3f(0.5262, 0.0861, x);
	glVertex3f(0.5262, 0.0556, x);
	glVertex3f(0.4484, 0.0556, x);
	glEnd();
	glPopMatrix();
	glPopMatrix();
}


void suv1()
{
	//1 Right Side
	

	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-1, -0.2778, 0.45);
	glVertex3f(-0.9828, 0.325, 0.45);
	glVertex3f(-0.6781, 0.7972, 0.35);
	glVertex3f(-0.0234, 0.7972, 0.35);
	glVertex3f(0.1328, 0.75, 0.35);
	glVertex3f(0.4953, 0.3389, 0.45);
	glVertex3f(0.8719, 0.3056, 0.45);
	glVertex3f(0.9547, 0.1417, 0.45);
	glVertex3f(1, -0.1528, 0.45);
	glVertex3f(1, -0.4722, 0.45);
	glVertex3f(-0.8578, -0.4722, 0.45);
	glEnd();
	


	
	glBegin(GL_POLYGON);
	glColor3f(0.831, 0.952, 0.968);
	glVertex3f(0.1785, 0.7, 0.32);
	glVertex3f(0.1785, 0.7, -0.32);
	glVertex3f(0.4855, 0.35, -0.4);
	glVertex3f(0.4855, 0.35, 0.4);

	//glVertex3f(0.1328, 0.75, 0.40);
	//glVertex3f(0.4953, 0.3389, 0.40);
	//glVertex3f(0.4953, 0.3389, 0.40);
	//glVertex3f(0.4953, 0.3389, 0.40);
	glEnd();
	


	//1 Left Side
	
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-1, -0.2778, -0.45);
	glVertex3f(-0.9828, 0.325, -0.45);
	glVertex3f(-0.6781, 0.7972, -0.35);
	glVertex3f(-0.0234, 0.7972, -0.35);
	glVertex3f(0.1328, 0.75, -0.35);
	glVertex3f(0.4953, 0.3389, -0.45);
	glVertex3f(0.8719, 0.3056, -0.45);
	glVertex3f(0.9547, 0.1417, -0.45);
	glVertex3f(1, -0.1528, -0.45);
	glVertex3f(1, -0.4722, -0.45);
	glVertex3f(-0.8578, -0.4722, -0.45);
	glEnd();
	

	//1 Center Strip
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0, 0, 0);
	glVertex3f(-1, -0.2778, -0.45);
	glVertex3f(-1, -0.2778, 0.45);
	glVertex3f(-0.9828, 0.325, -0.45);
	glVertex3f(-0.9828, 0.325, 0.45);
	glVertex3f(-0.6781, 0.7972, -0.35);
	glVertex3f(-0.6781, 0.7972, 0.35);
	glVertex3f(-0.0234, 0.7972, -0.35);
	glVertex3f(-0.0234, 0.7972, 0.35);
	glVertex3f(0.1328, 0.75, -0.35);
	glVertex3f(0.1328, 0.75, 0.35);
	glVertex3f(0.4953, 0.3389, -0.45);
	glVertex3f(0.4953, 0.3389, 0.45);
	glVertex3f(0.8719, 0.3056, -0.45);
	glVertex3f(0.8719, 0.3056, 0.45);
	glVertex3f(0.9547, 0.1417, -0.45);
	glVertex3f(0.9547, 0.1417, 0.45);
	glVertex3f(1, -0.1528, -0.45);
	glVertex3f(1, -0.1528, 0.45);
	glVertex3f(1, -0.4722, -0.45);
	glVertex3f(1, -0.4722, 0.45);
	glVertex3f(-0.8578, -0.4722, -0.45);
	glVertex3f(-0.8578, -0.4722, 0.45);
	glVertex3f(-1, -0.2778, -0.45);
	glVertex3f(-1, -0.2778, 0.45);
	glEnd();
	



	//2 Right
	
	glBegin(GL_POLYGON);
	glColor3f(0.831, 0.952, 0.968);
	glVertex3f(-0.6422, 0.35, 0.451);
	glVertex3f(-0.3094, 0.35, 0.451);
	glVertex3f(-0.3094, 0.5889, 0.38);
	glVertex3f(-0.4953, 0.5889, 0.38);
	glEnd();
	

	//2 Left
	
	glBegin(GL_POLYGON);
	glColor3f(0.831, 0.952, 0.968);
	glVertex3f(-0.6422, 0.35, -0.451);
	glVertex3f(-0.3094, 0.35, -0.451);
	glVertex3f(-0.3094, 0.5889, -0.38);
	glVertex3f(-0.4953, 0.5889, -0.38);
	glEnd();
	


	//3 Right
	
	glBegin(GL_POLYGON);
	glColor3f(0.831, 0.952, 0.968);
	glVertex3f(-0.1906, 0.5889, 0.38);
	glVertex3f(0.0859, 0.5889, 0.38);
	glVertex3f(0.3203, 0.35, 0.451);
	glVertex3f(-0.1906, 0.35, 0.451);
	glEnd();
	

	//3 Left
	
	glBegin(GL_POLYGON);
	glColor3f(0.831, 0.952, 0.968);
	glVertex3f(-0.1906, 0.5889, -0.38);
	glVertex3f(0.0859, 0.5889, -0.38);
	glVertex3f(0.3203, 0.35, -0.451);
	glVertex3f(-0.1906, 0.35, -0.451);
	glEnd();
	

	//4 Right //Back Lights
	
	glBegin(GL_POLYGON);
	glColor3f(0.866, 0, 0);
	glVertex3f(-0.9922, 0.0056, 0.451);
	glVertex3f(-0.875, 0.0056, 0.451);
	glVertex3f(-0.875, 0.1889, 0.451);
	glVertex3f(-0.9859, 0.1889, 0.451);
	glEnd();
	



	//4 Left
	
	glBegin(GL_POLYGON);
	glColor3f(0.866, 0, 0);
	glVertex3f(-0.9922, 0.0056, -0.451);
	glVertex3f(-0.875, 0.0056, -0.451);
	glVertex3f(-0.875, 0.1889, -0.451);
	glVertex3f(-0.9859, 0.1889, -0.451);
	glEnd();
	

	
	glBegin(GL_POLYGON);
	glColor3f(0.866, 0, 0);
	glVertex3f(-0.9922, 0.0056, -0.451);
	glVertex3f(-0.9922, 0.0056, -0.251);
	glVertex3f(-0.99, 0.1889, -0.251);
	glVertex3f(-0.99, 0.1889, -0.451);
	glEnd();
	


	
	glBegin(GL_POLYGON);
	glColor3f(0.866, 0, 0);
	glVertex3f(-0.9922, 0.0056, 0.451);
	glVertex3f(-0.9922, 0.0056, 0.251);
	glVertex3f(-0.99, 0.1889, 0.251);
	glVertex3f(-0.99, 0.1889, 0.451);


	glEnd();
	



	//5 Right // Front Light SubRight
	
	glBegin(GL_POLYGON);
	glColor3f(0.921, 0.847, 0.058);
	glVertex3f(0.9875, 0.0056, 0.451);
	glVertex3f(0.8328, 0.0056, 0.451);
	glVertex3f(0.8984, -0.1556, 0.451);
	glVertex3f(1, -0.1556, 0.451);
	glEnd();
	


	//5 Right // Front Light SubLeft
	
	glBegin(GL_POLYGON);
	glColor3f(0.921, 0.847, 0.058);
	glVertex3f(0.9875, 0.0056, 0.25);
	glVertex3f(0.8328, 0.0056, 0.25);
	glVertex3f(0.8984, -0.1556, 0.25);
	glVertex3f(1, -0.1556, 0.25);
	glEnd();
	

	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.921, 0.847, 0.058);
	glVertex3f(0.9875, 0.0056, 0.25);
	glVertex3f(0.9875, 0.0056, 0.451);
	glVertex3f(0.8328, 0.0056, 0.25);
	glVertex3f(0.8328, 0.0056, 0.451);
	glVertex3f(0.8984, -0.1556, 0.25);
	glVertex3f(0.8984, -0.1556, 0.451);
	glVertex3f(1, -0.1556, 0.25);
	glVertex3f(1, -0.1556, 0.451);
	glVertex3f(0.9875, 0.0056, 0.25);
	glVertex3f(0.9875, 0.0056, 0.451);
	glEnd();
	






	//5 Left // Front Light SubRight
	
	glBegin(GL_POLYGON);
	glColor3f(0.921, 0.847, 0.058);
	glVertex3f(0.9875, 0.0056, -0.25);
	glVertex3f(0.8328, 0.0056, -0.25);
	glVertex3f(0.8984, -0.1556, -0.25);
	glVertex3f(1, -0.1556, -0.25);
	glEnd();
	

	//5 Left  SubLeft
	
	glBegin(GL_POLYGON);
	glColor3f(0.921, 0.847, 0.058);
	glVertex3f(0.9875, 0.0056, -0.451);
	glVertex3f(0.8328, 0.0056, -0.451);
	glVertex3f(0.8984, -0.1556, -0.451);
	glVertex3f(1, -0.1556, -0.451);
	glEnd();
	

	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.921, 0.847, 0.058);
	glVertex3f(0.9875, 0.0056, -0.25);
	glVertex3f(0.9875, 0.0056, -0.451);
	glVertex3f(0.8328, 0.0056, -0.25);
	glVertex3f(0.8328, 0.0056, -0.451);
	glVertex3f(0.8984, -0.1556, -0.25);
	glVertex3f(0.8984, -0.1556, -0.451);
	glVertex3f(1, -0.1556, -0.25);
	glVertex3f(1, -0.1556, -0.451);
	glVertex3f(0.9875, 0.0056, -0.25);
	glVertex3f(0.9875, 0.0056, -0.451);
	glEnd();
	



	//6 Right
	
	glBegin(GL_POLYGON);
	glColor3f(0.086, 0.094, 0.086);
	glVertex3f(-0.1672, 0.0778, 0.451);
	glVertex3f(-0.0875, 0.0778, 0.451);
	glVertex3f(-0.0875, 0.0361, 0.451);
	glVertex3f(-0.1672, 0.0361, 0.451);
	glEnd();
	

	//6 Left
	
	glBegin(GL_POLYGON);
	glColor3f(0.086, 0.094, 0.086);
	glVertex3f(-0.1672, 0.0778, -0.451);
	glVertex3f(-0.0875, 0.0778, -0.451);
	glVertex3f(-0.0875, 0.0361, -0.451);
	glVertex3f(-0.1672, 0.0361, -0.451);
	glEnd();

	

	glPushMatrix();
	glScalef(0.35, 0.35, 0.4);
	glTranslatef(-1.7, -1.3, -1);
	wheel2();
	glPopMatrix();
	


	glPushMatrix();
	glScalef(0.35, 0.35, 0.4);
	glTranslatef(-1.7, -1.3, 1);
	glRotatef(180, 0, 1, 0);
	wheel2();
	glPopMatrix();


	glPushMatrix();
	glScalef(0.35, 0.35, 0.4);
	glTranslatef(1.85, -1.3, -1);
	wheel2();
	glPopMatrix();



	glPushMatrix();
	glScalef(0.35, 0.35, 0.4);
	glTranslatef(1.85, -1.3, 1);
	glRotatef(180, 0, 1, 0);
	wheel2();
	glPopMatrix();
	glPopMatrix();
	

}


void truck1()
{
	

	//1r
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.18, 0.22, 0.31);
	glVertex3f(-0.9281, 0.8333, 0.3);
	glVertex3f(-0.9281, -0.225, 0.3);
	glVertex3f(0.5203, -0.225, 0.3);
	glVertex3f(0.5203, 0.8333, 0.3);
	glEnd();
	

	//1l
	
	glBegin(GL_POLYGON);
	glColor3f(0.18, 0.22, 0.31);
	glVertex3f(-0.9281, 0.8333, -0.3);
	glVertex3f(-0.9281, -0.225, -0.3);
	glVertex3f(0.5203, -0.225, -0.3);
	glVertex3f(0.5203, 0.8333, -0.3);
	glEnd();
	

	//1c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.18, 0.22, 0.31);
	glVertex3f(-0.9281, 0.8333, -0.3);
	glVertex3f(-0.9281, 0.8333, 0.3);
	glVertex3f(-0.9281, -0.225, -0.3);
	glVertex3f(-0.9281, -0.225, 0.3);
	glVertex3f(0.5203, -0.225, -0.3);
	glVertex3f(0.5203, -0.225, 0.3);
	glVertex3f(0.5203, 0.8333, -0.3);
	glVertex3f(0.5203, 0.8333, 0.3);
	glVertex3f(-0.9281, 0.8333, -0.3);
	glVertex3f(-0.9281, 0.8333, 0.3);
	glEnd();
	

	//2r
	
	glBegin(GL_POLYGON);
	glColor3f(0.36, 0.35, 0.38);
	glVertex3f(-0.9672, -0.225, 0.3);
	glVertex3f(0.9688, -0.225, 0.3);
	glVertex3f(0.9688, -0.5167, 0.3);
	glVertex3f(-0.9672, -0.5167, 0.3);
	glEnd();
	

	//2l
	
	glBegin(GL_POLYGON);
	glColor3f(0.36, 0.35, 0.38);
	glVertex3f(-0.9672, -0.225, -0.3);
	glVertex3f(0.9688, -0.225, -0.3);
	glVertex3f(0.9688, -0.5167, -0.3);
	glVertex3f(-0.9672, -0.5167, -0.3);
	glEnd();
	

	//2c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.36, 0.35, 0.38);
	glVertex3f(-0.9672, -0.225, -0.3);
	glVertex3f(-0.9672, -0.225, 0.3);
	glVertex3f(0.9688, -0.225, -0.3);
	glVertex3f(0.9688, -0.225, 0.3);
	glVertex3f(0.9688, -0.5167, -0.3);
	glVertex3f(0.9688, -0.5167, 0.3);
	glVertex3f(-0.9672, -0.5167, -0.3);
	glVertex3f(-0.9672, -0.5167, 0.3);
	glVertex3f(-0.9672, -0.225, -0.3);
	glVertex3f(-0.9672, -0.225, 0.3);
	glEnd();
	

	//3r
	
	glBegin(GL_POLYGON);
	glColor3f(0.25, 0.24, 0.27);
	glVertex3f(0.9688, -0.5167, 0.301);
	glVertex3f(-0.9672, -0.5167, 0.301);
	glVertex3f(-0.9672, -0.4667, 0.301);
	glVertex3f(0.9688, -0.4667, 0.301);
	glEnd();
	

	//3l
	
	glBegin(GL_POLYGON);
	glColor3f(0.25, 0.24, 0.27);
	glVertex3f(0.9688, -0.5167, -0.301);
	glVertex3f(-0.9672, -0.5167, -0.301);
	glVertex3f(-0.9672, -0.4667, -0.301);
	glVertex3f(0.9688, -0.4667, -0.301);
	glEnd();
	

	//3c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.25, 0.24, 0.27);
	glVertex3f(0.969, -0.5167, -0.301);
	glVertex3f(0.969, -0.5167, 0.301);
	glVertex3f(-0.968, -0.5167, -0.301);
	glVertex3f(-0.968, -0.5167, 0.301);
	glVertex3f(-0.968, -0.4667, -0.301);
	glVertex3f(-0.968, -0.4667, 0.301);
	glVertex3f(0.969, -0.4667, -0.301);
	glVertex3f(0.969, -0.4667, 0.301);
	glVertex3f(0.969, -0.5167, -0.301);
	glVertex3f(0.969, -0.5167, 0.301);
	glEnd();
	

	//4r
	
	glBegin(GL_POLYGON);
	glColor3f(0.36, 0.35, 0.38);
	glVertex3f(-0.9672, -0.225, 0.3);
	glVertex3f(-0.9422, -0.225, 0.3);
	glVertex3f(-0.9422, -0.6278, 0.3);
	glVertex3f(-0.9672, -0.6278, 0.3);
	glEnd();
	

	//4l
	
	glBegin(GL_POLYGON);
	glColor3f(0.36, 0.35, 0.38);
	glVertex3f(-0.9672, -0.225, -0.3);
	glVertex3f(-0.9422, -0.225, -0.3);
	glVertex3f(-0.9422, -0.6278, -0.3);
	glVertex3f(-0.9672, -0.6278, -0.3);
	glEnd();
	

	//4c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.36, 0.35, 0.38);
	glVertex3f(-0.9672, -0.225, -0.3);
	glVertex3f(-0.9672, -0.225, 0.3);
	glVertex3f(-0.9422, -0.225, -0.3);
	glVertex3f(-0.9422, -0.225, 0.3);
	glVertex3f(-0.9422, -0.6278, -0.3);
	glVertex3f(-0.9422, -0.6278, 0.3);
	glVertex3f(-0.9672, -0.6278, -0.3);
	glVertex3f(-0.9672, -0.6278, 0.3);
	glVertex3f(-0.9672, -0.225, -0.3);
	glVertex3f(-0.9672, -0.225, 0.3);
	glEnd();
	


	//5r
	
	glBegin(GL_POLYGON);
	glColor3f(0.96, 0.34, 0.04);
	glVertex3f(-1, -0.4167, 0.3);
	glVertex3f(-0.9672, -0.4167, 0.3);
	glVertex3f(-0.9672, -0.5778, 0.3);
	glVertex3f(-1, -0.5778, 0.3);
	glEnd();
	

	//5l
	
	glBegin(GL_POLYGON);
	glColor3f(0.96, 0.34, 0.04);
	glVertex3f(-1, -0.4167, -0.3);
	glVertex3f(-0.9672, -0.4167, -0.3);
	glVertex3f(-0.9672, -0.5778, -0.3);
	glVertex3f(-1, -0.5778, -0.3);
	glEnd();
	

	//5c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.96, 0.34, 0.04);
	glVertex3f(-1, -0.4167, -0.3);
	glVertex3f(-1, -0.4167, 0.3);
	glVertex3f(-0.9672, -0.4167, -0.3);
	glVertex3f(-0.9672, -0.4167, 0.3);
	glVertex3f(-0.9672, -0.5778, -0.3);
	glVertex3f(-0.9672, -0.5778, 0.3);
	glVertex3f(-1, -0.5778, -0.3);
	glVertex3f(-1, -0.5778, 0.3);
	glVertex3f(-1, -0.4167, -0.3);
	glVertex3f(-1, -0.4167, 0.3);
	glEnd();
	


	//6r
	
	glBegin(GL_POLYGON);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(0.5547, 0.5722, 0.3);
	glVertex3f(0.8828, 0.5722, 0.3);
	glVertex3f(0.9328, 0.4583, 0.3);
	glVertex3f(0.5547, 0.4583, 0.3);
	glEnd();
	

	//6l
	
	glBegin(GL_POLYGON);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(0.5547, 0.5722, -0.3);
	glVertex3f(0.8828, 0.5722, -0.3);
	glVertex3f(0.9328, 0.4583, -0.3);
	glVertex3f(0.5547, 0.4583, -0.3);
	glEnd();
	

	//6c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(0.5547, 0.5722, -0.3);
	glVertex3f(0.5547, 0.5722, 0.3);
	glVertex3f(0.8828, 0.5722, -0.3);
	glVertex3f(0.8828, 0.5722, 0.3);
	glVertex3f(0.9328, 0.4583, -0.3);
	glVertex3f(0.9328, 0.4583, 0.3);
	glVertex3f(0.5547, 0.4583, -0.3);
	glVertex3f(0.5547, 0.4583, 0.3);
	glVertex3f(0.5547, 0.5722, -0.3);
	glVertex3f(0.5547, 0.5722, 0.3);
	glEnd();
	


	//7r
	
	glBegin(GL_POLYGON);
	glColor3f(0.96, 0.34, 0.04);
	glVertex3f(0.5547, 0.4583, 0.301);
	glVertex3f(0.8969, 0.4583, 0.301);
	glVertex3f(0.9766, 0.0806, 0.301);
	glVertex3f(0.9766, -0.3778, 0.301);
	glVertex3f(0.8453, -0.3778, 0.301);
	glVertex3f(0.8453, -0.2472, 0.301);
	glVertex3f(0.5547, -0.2472, 0.301);
	glEnd();
	

	//7l
	
	glBegin(GL_POLYGON);
	glColor3f(0.96, 0.34, 0.04);
	glVertex3f(0.5547, 0.4583, -0.301);
	glVertex3f(0.8969, 0.4583, -0.301);
	glVertex3f(0.9766, 0.0806, -0.301);
	glVertex3f(0.9766, -0.3778, -0.301);
	glVertex3f(0.8453, -0.3778, -0.301);
	glVertex3f(0.8453, -0.2472, -0.301);
	glVertex3f(0.5547, -0.2472, -0.301);
	glEnd();
	

	//front light l
	
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(0.9767, 0, -0.27);
	glVertex3f(0.9767, -0.15, -0.27);
	glVertex3f(0.9767, -0.15, -0.13);
	glVertex3f(0.9767, 0, -0.13);
	glEnd();
	


	//front light l
	
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(0.9767, 0, 0.27);
	glVertex3f(0.9767, -0.15, 0.27);
	glVertex3f(0.9767, -0.15, 0.13);
	glVertex3f(0.9767, 0, 0.13);
	glEnd();
	

	//windscreen
	
	glBegin(GL_POLYGON);
	glColor3f(0.53, 0.84, 0.97);

	glVertex3f(0.9046, 0.4222, -0.27);
	glVertex3f(0.9573, 0.1722, -0.27);
	glVertex3f(0.9573, 0.1722, 0.27);
	glVertex3f(0.9046, 0.4222, 0.27);

	glEnd();
	

	//7c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.96, 0.34, 0.04);
	glVertex3f(0.5547, 0.4583, -0.301);
	glVertex3f(0.5547, 0.4583, 0.301);
	glVertex3f(0.8969, 0.4583, -0.301);
	glVertex3f(0.8969, 0.4583, 0.301);
	glVertex3f(0.9766, 0.0806, -0.301);
	glVertex3f(0.9766, 0.0806, 0.301);
	glVertex3f(0.9766, -0.3778, -0.301);
	glVertex3f(0.9766, -0.3778, 0.301);
	glVertex3f(0.8453, -0.3778, -0.301);
	glVertex3f(0.8453, -0.3778, 0.301);
	glVertex3f(0.8453, -0.2472, -0.301);
	glVertex3f(0.8453, -0.2472, 0.301);
	glVertex3f(0.5547, -0.2472, -0.301);
	glVertex3f(0.5547, -0.2472, 0.301);
	glVertex3f(0.5547, 0.4583, -0.301);
	glVertex3f(0.5547, 0.4583, 0.301);
	glEnd();
	

	//8r
	
	glBegin(GL_POLYGON);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(0.5859, 0.4222, 0.302);
	glVertex3f(0.65, 0.4222, 0.302);
	glVertex3f(0.65, 0.175, 0.302);
	glVertex3f(0.5859, 0.175, 0.302);
	glEnd();
	

	//8l
	
	glBegin(GL_POLYGON);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(0.5859, 0.4222, -0.302);
	glVertex3f(0.65, 0.4222, -0.302);
	glVertex3f(0.65, 0.175, -0.302);
	glVertex3f(0.5859, 0.175, -0.302);
	glEnd();
	

	//9r
	
	glBegin(GL_POLYGON);
	glColor3f(0.53, 0.84, 0.97);
	glVertex3f(0.7062, 0.4222, 0.302);
	glVertex3f(0.8812, 0.4222, 0.302);
	glVertex3f(0.7062, 0.1722, 0.302);
	glEnd();
	

	//9l
	
	glBegin(GL_POLYGON);
	glColor3f(0.53, 0.84, 0.97);
	glVertex3f(0.7062, 0.4222, -0.302);
	glVertex3f(0.8812, 0.4222, -0.302);
	glVertex3f(0.7062, 0.1722, -0.302);
	glEnd();
	


	//10r
	
	glBegin(GL_POLYGON);
	glColor3f(0.66, 0.87, 0.98);
	glVertex3f(0.8812, 0.4222, 0.302);
	glVertex3f(0.7062, 0.1722, 0.302);
	glVertex3f(0.9359, 0.1722, 0.302);
	glEnd();
	

	//10l
	
	glBegin(GL_POLYGON);
	glColor3f(0.66, 0.87, 0.98);
	glVertex3f(0.8812, 0.4222, -0.302);
	glVertex3f(0.7062, 0.1722, -0.302);
	glVertex3f(0.9359, 0.1722, -0.302);
	glEnd();
	

	//11r
	
	glBegin(GL_POLYGON);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(0.7078, -0.0028, 0.302);
	glVertex3f(0.7844, -0.0028, 0.302);
	glVertex3f(0.7844, -0.0472, 0.302);
	glVertex3f(0.7078, -0.0472, 0.302);
	glEnd();
	

	//11l
	
	glBegin(GL_POLYGON);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(0.7078, -0.0028, -0.302);
	glVertex3f(0.7844, -0.0028, -0.302);
	glVertex3f(0.7844, -0.0472, -0.302);
	glVertex3f(0.7078, -0.0472, -0.302);
	glEnd();
	

	//12r r
	
	glBegin(GL_POLYGON);
	glColor3f(0.42, 0.41, 0.44);
	glVertex3f(0.0078, -0.3167, 0.32);
	glVertex3f(0.3781, -0.3167, 0.32);
	glVertex3f(0.3781, -0.5722, 0.32);
	glVertex3f(0.0078, -0.5722, 0.32);
	glEnd();
	

	//12r l
	
	glBegin(GL_POLYGON);
	glColor3f(0.42, 0.41, 0.44);
	glVertex3f(0.0078, -0.3167, 0.2);
	glVertex3f(0.3781, -0.3167, 0.2);
	glVertex3f(0.3781, -0.5722, 0.2);
	glVertex3f(0.0078, -0.5722, 0.2);
	glEnd();
	

	//12r c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.42, 0.41, 0.44);
	glVertex3f(0.0078, -0.3167, 0.2);
	glVertex3f(0.0078, -0.3167, 0.32);
	glVertex3f(0.3781, -0.3167, 0.2);
	glVertex3f(0.3781, -0.3167, 0.32);
	glVertex3f(0.3781, -0.5722, 0.2);
	glVertex3f(0.3781, -0.5722, 0.32);
	glVertex3f(0.0078, -0.5722, 0.2);
	glVertex3f(0.0078, -0.5722, 0.32);
	glVertex3f(0.0078, -0.3167, 0.2);
	glVertex3f(0.0078, -0.3167, 0.32);
	glEnd();
	

	//12l r
	
	glBegin(GL_POLYGON);
	glColor3f(0.42, 0.41, 0.44);
	glVertex3f(0.0078, -0.3167, -0.32);
	glVertex3f(0.3781, -0.3167, -0.32);
	glVertex3f(0.3781, -0.5722, -0.32);
	glVertex3f(0.0078, -0.5722, -0.32);
	glEnd();
	

	//12l l
	
	glBegin(GL_POLYGON);
	glColor3f(0.42, 0.41, 0.44);
	glVertex3f(0.0078, -0.3167, -0.2);
	glVertex3f(0.3781, -0.3167, -0.2);
	glVertex3f(0.3781, -0.5722, -0.2);
	glVertex3f(0.0078, -0.5722, -0.2);
	glEnd();
	

	//12l c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.42, 0.41, 0.44);
	glVertex3f(0.0078, -0.3167, -0.2);
	glVertex3f(0.0078, -0.3167, -0.32);
	glVertex3f(0.3781, -0.3167, -0.2);
	glVertex3f(0.3781, -0.3167, -0.32);
	glVertex3f(0.3781, -0.5722, -0.2);
	glVertex3f(0.3781, -0.5722, -0.32);
	glVertex3f(0.0078, -0.5722, -0.2);
	glVertex3f(0.0078, -0.5722, -0.32);
	glVertex3f(0.0078, -0.3167, -0.2);
	glVertex3f(0.0078, -0.3167, -0.32);
	glEnd();
	

	//13 r
	
	glBegin(GL_POLYGON);
	glColor3f(0.52, 0.51, 0.55);
	glVertex3f(0.0078, -0.3167, 0.321);
	glVertex3f(0.3781, -0.3167, 0.321);
	glVertex3f(0.3781, -0.3944, 0.321);
	glVertex3f(0.0078, -0.3944, 0.321);
	glEnd();
	

	//13 l
	
	glBegin(GL_POLYGON);
	glColor3f(0.52, 0.51, 0.55);
	glVertex3f(0.0078, -0.3167, -0.321);
	glVertex3f(0.3781, -0.3167, -0.321);
	glVertex3f(0.3781, -0.3944, -0.321);
	glVertex3f(0.0078, -0.3944, -0.321);
	glEnd();
	

	//13 l c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.52, 0.51, 0.55);
	glVertex3f(0.0077, -0.3166, -0.321);
	glVertex3f(0.0077, -0.3166, 0.321);
	glVertex3f(0.3782, -0.3166, -0.321);
	glVertex3f(0.3782, -0.3166, 0.321);
	glVertex3f(0.3782, -0.3944, -0.321);
	glVertex3f(0.3782, -0.3944, 0.321);
	glVertex3f(0.0077, -0.3944, -0.321);
	glVertex3f(0.0077, -0.3944, 0.321);
	glVertex3f(0.0077, -0.3166, -0.321);
	glVertex3f(0.0077, -0.3166, 0.321);
	glEnd();
	


	//14r
	
	glBegin(GL_POLYGON);
	glColor3f(0.78, 0.78, 0.8);
	glVertex3f(0.3781, -0.3944, 0.321);
	glVertex3f(0.0078, -0.3944, 0.321);
	glVertex3f(0.0078, -0.4833, 0.321);
	glVertex3f(0.3781, -0.4833, 0.321);
	glEnd();
	

	//14l
	
	glBegin(GL_POLYGON);
	glColor3f(0.78, 0.78, 0.8);
	glVertex3f(0.3781, -0.3944, -0.321);
	glVertex3f(0.0078, -0.3944, -0.321);
	glVertex3f(0.0078, -0.4833, -0.321);
	glVertex3f(0.3781, -0.4833, -0.321);
	glEnd();
	

	//14c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.78, 0.78, 0.8);
	glVertex3f(0.3783, -0.3944, -0.321);
	glVertex3f(0.3783, -0.3944, 0.321);
	glVertex3f(0.007, -0.3944, -0.321);
	glVertex3f(0.0077, -0.3944, 0.321);
	glVertex3f(0.0077, -0.4833, -0.321);
	glVertex3f(0.0077, -0.4833, 0.321);
	glVertex3f(0.3783, -0.4833, -0.321);
	glVertex3f(0.3783, -0.4833, 0.321);
	glVertex3f(0.3783, -0.3944, -0.321);
	glVertex3f(0.3783, -0.3944, 0.321);
	glEnd();
	

	//15r
	
	glBegin(GL_POLYGON);
	glColor3f(0.47, 0.76, 0.87);
	glVertex3f(-0.875, 0.7667, 0.301);
	glVertex3f(0.4766, 0.7667, 0.301);
	glVertex3f(0.4766, -0.1556, 0.301);
	glVertex3f(-0.875, -0.1556, 0.301);
	glEnd();
	

	//15
	
	glBegin(GL_POLYGON);
	glColor3f(0.47, 0.76, 0.87);
	glVertex3f(-0.875, 0.7667, -0.301);
	glVertex3f(0.4766, 0.7667, -0.301);
	glVertex3f(0.4766, -0.1556, -0.301);
	glVertex3f(-0.875, -0.1556, -0.301);
	glEnd();
	

	glPushMatrix();
	glScalef(0.26, 0.26, 0.28);
	glTranslatef(-2.7, -2, -1);
	wheel1();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.26, 0.26, 0.28);
	glTranslatef(-1.2, -2, -1);
	wheel1();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.26, 0.26, 0.28);
	glTranslatef(2.7, -2, -1);
	wheel1();
	glPopMatrix();


	glPushMatrix();
	glScalef(0.26, 0.26, 0.28);
	glTranslatef(-2.7, -2, 1);
	glRotatef(180, 0, 1, 0);
	wheel1();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.26, 0.26, 0.28);
	glTranslatef(-1.2, -2, 1);
	glRotatef(180, 0, 1, 0);
	wheel1();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.26, 0.26, 0.28);
	glTranslatef(2.7, -2, 1);
	glRotatef(180, 0, 1, 0);
	wheel1();
	glPopMatrix();
	glPopMatrix();


	
}

void truck2()
{
	

	//1r
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.92, 0.33, 0.33);
	glVertex3f(1, 0.7222, 0.28);
	glVertex3f(-0.4594, 0.7222, 0.28);
	glVertex3f(-0.4594, 0.6389, 0.28);
	glVertex3f(1, 0.6389, 0.28);
	glEnd();
	

	//1l
	
	glBegin(GL_POLYGON);
	glColor3f(0.92, 0.33, 0.33);
	glVertex3f(1, 0.7222, -0.28);
	glVertex3f(-0.4594, 0.7222, -0.28);
	glVertex3f(-0.4594, 0.6389, -0.28);
	glVertex3f(1, 0.6389, -0.28);
	glEnd();
	

	//1c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.92, 0.33, 0.33);
	glVertex3f(1, 0.7222, -0.28);
	glVertex3f(1, 0.7222, 0.28);
	glVertex3f(-0.4594, 0.7222, -0.28);
	glVertex3f(-0.4594, 0.7222, 0.28);
	glVertex3f(-0.4594, 0.6389, -0.28);
	glVertex3f(-0.4594, 0.6389, 0.28);
	glVertex3f(1, 0.6389, -0.28);
	glVertex3f(1, 0.6389, 0.28);
	glVertex3f(1, 0.7222, -0.28);
	glVertex3f(1, 0.7222, 0.28);
	glEnd();
	


	//2r
	
	glBegin(GL_POLYGON);
	glColor3f(0.91, 0.89, 0.85);
	glVertex3f(-0.4594, 0.6389, 0.28);
	glVertex3f(-0.4594, 0.4028, 0.28);
	glVertex3f(1, 0.4028, 0.28);
	glVertex3f(1, 0.6389, 0.28);
	glEnd();
	

	//2l
	
	glBegin(GL_POLYGON);
	glColor3f(0.91, 0.89, 0.85);
	glVertex3f(-0.4594, 0.6389, -0.28);
	glVertex3f(-0.4594, 0.4028, -0.28);
	glVertex3f(1, 0.4028, -0.28);
	glVertex3f(1, 0.6389, -0.28);
	glEnd();
	

	//2c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.91, 0.89, 0.85);
	glVertex3f(-0.4594, 0.6389, -0.28);
	glVertex3f(-0.4594, 0.6389, 0.28);
	glVertex3f(-0.4594, 0.4028, -0.28);
	glVertex3f(-0.4594, 0.4028, 0.28);
	glVertex3f(1, 0.4028, -0.28);
	glVertex3f(1, 0.4028, 0.28);
	glVertex3f(1, 0.6389, -0.28);
	glVertex3f(1, 0.6389, 0.28);
	glEnd();
	


	//3r
	
	glBegin(GL_POLYGON);
	glColor3f(0.98, 0.39, 0.37);
	glVertex3f(-0.4594, 0.4028, 0.28);
	glVertex3f(1, 0.4028, 0.28);
	glVertex3f(1, -0.4528, 0.28);
	glVertex3f(-0.4594, -0.4528, 0.28);
	glEnd();
	


	//3l
	
	glBegin(GL_POLYGON);
	glColor3f(0.98, 0.39, 0.37);
	glVertex3f(-0.4594, 0.4028, -0.28);
	glVertex3f(1, 0.4028, -0.28);
	glVertex3f(1, -0.4528, -0.28);
	glVertex3f(-0.4594, -0.4528, -0.28);
	glEnd();
	

	//3c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.98, 0.39, 0.37);
	glVertex3f(-0.4594, 0.4028, -0.28);
	glVertex3f(-0.4594, 0.4028, 0.28);
	glVertex3f(1, 0.4028, -0.28);
	glVertex3f(1, 0.4028, 0.28);
	glVertex3f(1, -0.4528, -0.28);
	glVertex3f(1, -0.4528, 0.28);
	glVertex3f(-0.4594, -0.4528, -0.28);
	glVertex3f(-0.4594, -0.4528, 0.28);
	glVertex3f(-0.4594, 0.4028, -0.28);
	glVertex3f(-0.4594, 0.4028, 0.28);
	glEnd();
	




	//4r
	
	glBegin(GL_POLYGON);
	glColor3f(0.92, 0.33, 0.33);
	glVertex3f(1, -0.4528, 0.28);
	glVertex3f(-0.4594, -0.4528, 0.28);
	glVertex3f(-0.4594, -0.5306, 0.28);
	glVertex3f(1, -0.5306, 0.28);
	glEnd();
	

	//4l
	
	glBegin(GL_POLYGON);
	glColor3f(0.92, 0.33, 0.33);
	glVertex3f(1, -0.4528, -0.28);
	glVertex3f(-0.4594, -0.4528, -0.28);
	glVertex3f(-0.4594, -0.5306, -0.28);
	glVertex3f(1, -0.5306, -0.28);
	glEnd();
	


	//4c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.92, 0.33, 0.33);
	glVertex3f(1, -0.4528, -0.28);
	glVertex3f(1, -0.4528, 0.28);
	glVertex3f(-0.4594, -0.4528, -0.28);
	glVertex3f(-0.4594, -0.4528, 0.28);
	glVertex3f(-0.4594, -0.5306, -0.28);
	glVertex3f(-0.4594, -0.5306, 0.28);
	glVertex3f(1, -0.5306, -0.28);
	glVertex3f(1, -0.5306, 0.28);
	glVertex3f(1, -0.4528, -0.28);
	glVertex3f(1, -0.4528, 0.28);
	glEnd();
	


	//5r
	
	glBegin(GL_POLYGON);
	glColor3f(0.23, 0.3, 0.34);
	glVertex3f(-0.4594, -0.5306, 0.15);
	glVertex3f(-0.4594, -0.1944, 0.15);
	glVertex3f(-0.5484, -0.1944, 0.15);
	glVertex3f(-0.5484, -0.5306, 0.15);
	glEnd();
	

	//5l
	
	glBegin(GL_POLYGON);
	glColor3f(0.23, 0.3, 0.34);
	glVertex3f(-0.4594, -0.5306, -0.15);
	glVertex3f(-0.4594, -0.1944, -0.15);
	glVertex3f(-0.5484, -0.1944, -0.15);
	glVertex3f(-0.5484, -0.5306, -0.15);
	glEnd();
	



	//5c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.23, 0.3, 0.34);
	glVertex3f(-0.4594, -0.5306, -0.15);
	glVertex3f(-0.4594, -0.5306, 0.15);
	glVertex3f(-0.4594, -0.1944, -0.15);
	glVertex3f(-0.4594, -0.1944, 0.15);
	glVertex3f(-0.5484, -0.1944, -0.15);
	glVertex3f(-0.5484, -0.1944, 0.15);
	glVertex3f(-0.5484, -0.5306, -0.15);
	glVertex3f(-0.5484, -0.5306, 0.15);
	glVertex3f(-0.4594, -0.5306, -0.15);
	glVertex3f(-0.4594, -0.5306, 0.15);
	glEnd();
	

	//6r r
	
	glBegin(GL_POLYGON);
	glColor3f(0.23, 0.3, 0.34);
	glVertex3f(-0.0141, -0.5306, 0.28);
	glVertex3f(-0.0141, -0.6333, 0.28);
	glVertex3f(0.2891, -0.6333, 0.28);
	glVertex3f(0.2891, -0.5306, 0.28);
	glEnd();
	

	//6r l
	
	glBegin(GL_POLYGON);
	glColor3f(0.23, 0.3, 0.34);
	glVertex3f(-0.0141, -0.5306, 0.15);
	glVertex3f(-0.0141, -0.6333, 0.15);
	glVertex3f(0.2891, -0.6333, 0.15);
	glVertex3f(0.2891, -0.5306, 0.15);
	glEnd();
	

	//6l c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.23, 0.3, 0.34);
	glVertex3f(-0.0141, -0.5306, 0.15);
	glVertex3f(-0.0141, -0.5306, 0.28);
	glVertex3f(-0.0141, -0.6333, 0.15);
	glVertex3f(-0.0141, -0.6333, 0.28);
	glVertex3f(0.2891, -0.6333, 0.15);
	glVertex3f(0.2891, -0.6333, 0.28);
	glVertex3f(0.2891, -0.5306, 0.15);
	glVertex3f(0.2891, -0.5306, 0.28);
	glVertex3f(-0.0141, -0.5306, 0.15);
	glVertex3f(-0.0141, -0.5306, 0.28);
	glEnd();
	

	//6l r
	
	glBegin(GL_POLYGON);
	glColor3f(0.23, 0.3, 0.34);
	glVertex3f(-0.0141, -0.5306, -0.28);
	glVertex3f(-0.0141, -0.6333, -0.28);
	glVertex3f(0.2891, -0.6333, -0.28);
	glVertex3f(0.2891, -0.5306, -0.28);
	glEnd();
	

	//6l l
	
	glBegin(GL_POLYGON);
	glColor3f(0.23, 0.3, 0.34);
	glVertex3f(-0.0141, -0.5306, -0.15);
	glVertex3f(-0.0141, -0.6333, -0.15);
	glVertex3f(0.2891, -0.6333, -0.15);
	glVertex3f(0.2891, -0.5306, -0.15);
	glEnd();
	

	//6l c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.23, 0.3, 0.34);
	glVertex3f(-0.0141, -0.5306, -0.15);
	glVertex3f(-0.0141, -0.5306, -0.28);
	glVertex3f(-0.0141, -0.6333, -0.15);
	glVertex3f(-0.0141, -0.6333, -0.28);
	glVertex3f(0.2891, -0.6333, -0.15);
	glVertex3f(0.2891, -0.6333, -0.28);
	glVertex3f(0.2891, -0.5306, -0.15);
	glVertex3f(0.2891, -0.5306, -0.28);
	glVertex3f(-0.0141, -0.5306, -0.15);
	glVertex3f(-0.0141, -0.5306, -0.28);
	glEnd();
	


	//7r
	
	glBegin(GL_POLYGON);
	glColor3f(0.33, 0.37, 0.38);
	glVertex3f(-0.5484, -0.5306, 0.2);
	glVertex3f(-1, -0.5306, 0.2);
	glVertex3f(-1, 0.0389, 0.2);
	glVertex3f(-0.5484, 0.0389, 0.2);
	glEnd();
	

	//7l
	
	glBegin(GL_POLYGON);
	glColor3f(0.33, 0.37, 0.38);
	glVertex3f(-0.5484, -0.5306, -0.2);
	glVertex3f(-1, -0.5306, -0.2);
	glVertex3f(-1, 0.0389, -0.2);
	glVertex3f(-0.5484, 0.0389, -0.2);
	glEnd();
	

	//7c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.33, 0.37, 0.38);
	glVertex3f(-0.5484, -0.5306, -0.2);
	glVertex3f(-0.5484, -0.5306, 0.2);
	glVertex3f(-1, -0.5306, -0.2);
	glVertex3f(-1, -0.5306, 0.2);
	glVertex3f(-1, 0.0389, -0.2);
	glVertex3f(-1, 0.0389, 0.2);
	glVertex3f(-0.5484, 0.0389, -0.2);
	glVertex3f(-0.5484, 0.0389, 0.2);
	glVertex3f(-0.5484, -0.5306, -0.2);
	glVertex3f(-0.5484, -0.5306, 0.2);
	glEnd();
	

	//8r
	
	glBegin(GL_POLYGON);
	glColor3f(0.4, 0.42, 0.42);
	glVertex3f(-1, 0.0389, 0.2);
	glVertex3f(-0.5484, 0.0389, 0.2);
	glVertex3f(-0.5484, 0.4333, 0.2);
	glVertex3f(-0.8781, 0.4333, 0.2);
	glEnd();
	

	// windscreen
	
	glBegin(GL_POLYGON);
	glColor3f(1, 0.87, 0.88);
	glVertex3f(-0.98, 0.1056, 0.17);
	glVertex3f(-0.899, 0.3667, 0.17);
	glVertex3f(-0.899, 0.3667, -0.17);
	glVertex3f(-0.98, 0.1056, -0.17);
	glEnd();
	

	//8l
	
	glBegin(GL_POLYGON);
	glColor3f(0.4, 0.42, 0.42);
	glVertex3f(-1, 0.0389, -0.2);
	glVertex3f(-0.5484, 0.0389, -0.2);
	glVertex3f(-0.5484, 0.4333, -0.2);
	glVertex3f(-0.8781, 0.4333, -0.2);
	glEnd();
	

	//8c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.4, 0.42, 0.42);
	glVertex3f(-1, 0.0389, -0.2);
	glVertex3f(-1, 0.0389, 0.2);
	glVertex3f(-0.5484, 0.0389, -0.2);
	glVertex3f(-0.5484, 0.0389, 0.2);
	glVertex3f(-0.5484, 0.4333, -0.2);
	glVertex3f(-0.5484, 0.4333, 0.2);
	glVertex3f(-0.8781, 0.4333, -0.2);
	glVertex3f(-0.8781, 0.4333, 0.2);
	glVertex3f(-1, 0.0389, -0.2);
	glVertex3f(-1, 0.0389, 0.2);
	glEnd();
	


	//9r
	
	glBegin(GL_POLYGON);
	glColor3f(0.53, 0.51, 0.51);
	glVertex3f(-0.5484, -0.1944, 0.15);
	glVertex3f(-0.5031, -0.1944, 0.15);
	glVertex3f(-0.5031, 0.3667, 0.15);
	glVertex3f(-0.5484, 0.3667, 0.15);
	glEnd();
	

	//9l
	
	glBegin(GL_POLYGON);
	glColor3f(0.53, 0.51, 0.51);
	glVertex3f(-0.5484, -0.1944, -0.15);
	glVertex3f(-0.5031, -0.1944, -0.15);
	glVertex3f(-0.5031, 0.3667, -0.15);
	glVertex3f(-0.5484, 0.3667, -0.15);
	glEnd();
	

	//9c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.53, 0.51, 0.51);
	glVertex3f(-0.5484, -0.1944, -0.15);
	glVertex3f(-0.5484, -0.1944, 0.15);
	glVertex3f(-0.5031, -0.1944, -0.15);
	glVertex3f(-0.5031, -0.1944, 0.15);
	glVertex3f(-0.5031, 0.3667, -0.15);
	glVertex3f(-0.5031, 0.3667, 0.15);
	glVertex3f(-0.5484, 0.3667, -0.15);
	glVertex3f(-0.5484, 0.3667, 0.15);
	glVertex3f(-0.5484, -0.1944, -0.15);
	glVertex3f(-0.5484, -0.1944, 0.15);
	glEnd();
	

	//10r
	
	glBegin(GL_POLYGON);
	glColor3f(0.29, 0.29, 0.29);
	glVertex3f(-1, -0.4778, 0.201);
	glVertex3f(-0.9141, -0.4778, 0.201);
	glVertex3f(-0.9141, -0.3417, 0.201);
	glVertex3f(-1, -0.3417, 0.201);
	glEnd();
	

	//10l
	
	glBegin(GL_POLYGON);
	glColor3f(0.29, 0.29, 0.29);
	glVertex3f(-1, -0.4778, -0.201);
	glVertex3f(-0.9141, -0.4778, -0.201);
	glVertex3f(-0.9141, -0.3417, -0.201);
	glVertex3f(-1, -0.3417, -0.201);
	glEnd();
	

	//10l
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.29, 0.29, 0.29);
	glVertex3f(-1.001, -0.4778, -0.201);
	glVertex3f(-1, -0.4778, 0.201);
	glVertex3f(-0.9141, -0.4778, -0.201);
	glVertex3f(-0.9141, -0.4778, 0.201);
	glVertex3f(-0.9141, -0.3417, -0.201);
	glVertex3f(-0.9141, -0.3417, 0.201);
	glVertex3f(-1.001, -0.3417, -0.201);
	glVertex3f(-1.001, -0.3417, 0.201);
	glVertex3f(-1.001, -0.4778, -0.201);
	glVertex3f(-1.001, -0.4778, 0.201);
	glEnd();
	


	//11r
	
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(-1, -0.2361, 0.201);
	glVertex3f(-0.9594, -0.2361, 0.201);
	glVertex3f(-0.9594, -0.0778, 0.201);
	glVertex3f(-1, -0.0778, 0.201);
	glEnd();
	

	//11r
	
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(-1.001, -0.2361, 0.201);
	glVertex3f(-1.001, -0.0778, 0.201);
	glVertex3f(-1.001, -0.0778, 0.1);
	glVertex3f(-1.001, -0.2361, 0.1);
	glEnd();
	

	//11r
	
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(-1.001, -0.2361, -0.201);
	glVertex3f(-1.001, -0.0778, -0.201);
	glVertex3f(-1.001, -0.0778, -0.1);
	glVertex3f(-1.001, -0.2361, -0.1);
	glEnd();
	


	//11l
	
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(-1, -0.2361, -0.201);
	glVertex3f(-0.9594, -0.2361, -0.201);
	glVertex3f(-0.9594, -0.0778, -0.201);
	glVertex3f(-1, -0.0778, -0.201);
	glEnd();
	


	//12r
	
	glBegin(GL_POLYGON);
	glColor3f(0.84, 0.82, 0.73);
	glVertex3f(-0.7656, -0.0139, 0.201);
	glVertex3f(-0.6875, -0.0139, 0.201);
	glVertex3f(-0.6875, -0.0694, 0.201);
	glVertex3f(-0.7656, -0.0694, 0.201);
	glEnd();
	


	//12l
	
	glBegin(GL_POLYGON);
	glColor3f(0.84, 0.82, 0.73);
	glVertex3f(-0.7656, -0.0139, -0.201);
	glVertex3f(-0.6875, -0.0139, -0.201);
	glVertex3f(-0.6875, -0.0694, -0.201);
	glVertex3f(-0.7656, -0.0694, -0.201);
	glEnd();
	

	//13r
	
	glBegin(GL_POLYGON);
	glColor3f(1, 0.87, 0.88);
	glVertex3f(-0.8469, 0.3667, 0.201);
	glVertex3f(-0.6875, 0.3667, 0.201);
	glVertex3f(-0.6875, 0.1056, 0.201);
	glVertex3f(-0.9297, 0.1056, 0.201);
	glVertex3f(-0.9297, 0.1667, 0.201);
	glEnd();
	

	//13l
	
	glBegin(GL_POLYGON);
	glColor3f(1, 0.87, 0.88);
	glVertex3f(-0.8469, 0.3667, -0.201);
	glVertex3f(-0.6875, 0.3667, -0.201);
	glVertex3f(-0.6875, 0.1056, -0.201);
	glVertex3f(-0.9297, 0.1056, -0.201);
	glVertex3f(-0.9297, 0.1667, -0.201);
	glEnd();
	

	glPushMatrix();
	glScalef(0.2, 0.2, 0.2);
	glTranslatef(-3.7, -2.7, -1);
	wheel3();
	glPopMatrix();


	glPushMatrix();
	glScalef(0.2, 0.2, 0.2);
	glTranslatef(-3.7, -2.7, 1);
	glRotatef(180, 0, 1, 0);
	wheel3();
	glPopMatrix();


	glPushMatrix();
	glScalef(0.2, 0.2, 0.2);
	glTranslatef(-0.9, -2.7, -1.4);
	wheel3();
	glPopMatrix();


	glPushMatrix();
	glScalef(0.2, 0.2, 0.2);
	glTranslatef(-0.9, -2.7, 1.4);
	glRotatef(180, 0, 1, 0);
	wheel3();
	glPopMatrix();


	glPushMatrix();
	glScalef(0.2, 0.2, 0.2);
	glTranslatef(2.3, -2.7, -1.4);
	wheel3();
	glPopMatrix();


	glPushMatrix();
	glScalef(0.2, 0.2, 0.2);
	glTranslatef(2.3, -2.7, 1.4);
	glRotatef(180, 0, 1, 0);
	wheel3();
	glPopMatrix();


	glPushMatrix();
	glScalef(0.2, 0.2, 0.2);
	glTranslatef(3.7, -2.7, -1.4);
	wheel3();
	glPopMatrix();


	glPushMatrix();
	glScalef(0.2, 0.2, 0.2);
	glTranslatef(3.7, -2.7, 1.4);
	glRotatef(180, 0, 1, 0);
	wheel3();
	glPopMatrix();
	glPopMatrix();

}


void van2()
{
	//1 r
	
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(-0.9625, 0.8611, 0.4);
	glVertex3f(0.5578, 0.8611, 0.4);
	glVertex3f(0.6406, 0.7583, 0.4);
	glVertex3f(-0.9625, 0.7583, 0.4);
	glEnd();
	

	//1 l
	
	glBegin(GL_POLYGON);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(-0.9625, 0.8611, -0.4);
	glVertex3f(0.5578, 0.8611, -0.4);
	glVertex3f(0.6406, 0.7583, -0.4);
	glVertex3f(-0.9625, 0.7583, -0.4);
	glEnd();
	

	//1 c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(-0.9625, 0.8611, -0.4);
	glVertex3f(-0.9625, 0.8611, 0.4);
	glVertex3f(0.5578, 0.8611, -0.4);
	glVertex3f(0.5578, 0.8611, 0.4);
	glVertex3f(0.6406, 0.7583, -0.4);
	glVertex3f(0.6406, 0.7583, 0.4);
	glVertex3f(-0.9625, 0.7583, -0.4);
	glVertex3f(-0.9625, 0.7583, 0.4);
	glEnd();
	

	//2 r
	
	glBegin(GL_POLYGON);
	glColor3f(0.96, 0.34, 0.04);
	glVertex3f(0.6406, 0.7583, 0.4);
	glVertex3f(-0.9625, 0.7583, 0.4);
	glVertex3f(-0.9625, -0.6278, 0.4);
	glVertex3f(0.6406, -0.6278, 0.4);
	glEnd();
	

	//2 l
	
	glBegin(GL_POLYGON);
	glColor3f(0.96, 0.34, 0.04);
	glVertex3f(0.6406, 0.7583, -0.4);
	glVertex3f(-0.9625, 0.7583, -0.4);
	glVertex3f(-0.9625, -0.6278, -0.4);
	glVertex3f(0.6406, -0.6278, -0.4);
	glEnd();
	

	//2 c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.96, 0.34, 0.04);
	glVertex3f(0.6406, 0.7583, -0.4);
	glVertex3f(0.6406, 0.7583, 0.4);
	glVertex3f(-0.9625, 0.7583, -0.4);
	glVertex3f(-0.9625, 0.7583, 0.4);
	glVertex3f(-0.9625, -0.6278, -0.4);
	glVertex3f(-0.9625, -0.6278, 0.4);
	glVertex3f(0.6406, -0.6278, -0.4);
	glVertex3f(0.6406, -0.6278, 0.4);
	glVertex3f(0.6406, 0.7583, -0.4);
	glVertex3f(0.6406, 0.7583, 0.4);
	glEnd();
	


	//3r
	
	glColor3f(0.96, 0.34, 0.04);
	glBegin(GL_TRIANGLES);
	glVertex3f(0.6406, 0.7583, 0.4);
	glVertex3f(0.7672, 0.1028, 0.4);
	glVertex3f(0.6406, 0.1028, 0.4);
	glEnd();
	

	//3l
	
	glColor3f(0.96, 0.34, 0.04);
	glBegin(GL_TRIANGLES);
	glVertex3f(0.6406, 0.7583, -0.4);
	glVertex3f(0.7672, 0.1028, -0.4);
	glVertex3f(0.6406, 0.1028, -0.4);
	glEnd();
	

	//3c
	
	glColor3f(0.96, 0.34, 0.04);
	glBegin(GL_QUAD_STRIP);
	glVertex3f(0.6406, 0.7583, -0.4);
	glVertex3f(0.6406, 0.7583, 0.4);
	glVertex3f(0.7672, 0.1028, -0.4);
	glVertex3f(0.7672, 0.1028, 0.4);
	glVertex3f(0.6406, 0.1028, -0.4);
	glVertex3f(0.6406, 0.1028, 0.4);
	glVertex3f(0.6406, 0.7583, -0.4);
	glVertex3f(0.6406, 0.7583, 0.4);
	glEnd();
	

	// f windscreen
	
	glColor3f(0.66, 0.87, 0.98);
	glBegin(GL_QUAD_STRIP);
	glVertex3f(0.6675, 0.6194, -0.35);
	glVertex3f(0.6675, 0.6194, 0.35);
	glVertex3f(0.754, 0.1722, -0.35);
	glVertex3f(0.754, 0.1722, 0.35);
	glEnd();
	

	//4r
	
	glColor3f(0.96, 0.34, 0.04);
	glBegin(GL_POLYGON);
	glVertex3f(0.7672, 0.1028, 0.4);
	glVertex3f(0.9156, 0.0444, 0.4);
	glVertex3f(0.9734, -0.0861, 0.4);
	glVertex3f(0.9734, -0.6278, 0.4);
	glVertex3f(0.6406, -0.6278, 0.4);
	glVertex3f(0.6406, 0.1028, 0.4);
	glEnd();
	

	//4l
	
	glColor3f(0.96, 0.34, 0.04);
	glBegin(GL_POLYGON);
	glVertex3f(0.7672, 0.1028, -0.4);
	glVertex3f(0.9156, 0.0444, -0.4);
	glVertex3f(0.9734, -0.0861, -0.4);
	glVertex3f(0.9734, -0.6278, -0.4);
	glVertex3f(0.6406, -0.6278, -0.4);
	glVertex3f(0.6406, 0.1028, -0.4);
	glEnd();
	

	// r front light
	
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(0.974, -0.15, -0.37);
	glVertex3f(0.974, -0.3, -0.37);
	glVertex3f(0.974, -0.3, -0.2);
	glVertex3f(0.974, -0.15, -0.2);
	glEnd();
	

	// r front light
	
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(0.974, -0.15, 0.37);
	glVertex3f(0.974, -0.3, 0.37);
	glVertex3f(0.974, -0.3, 0.2);
	glVertex3f(0.974, -0.15, 0.2);
	glEnd();
	

	//4c //front 
	
	glColor3f(0.96, 0.34, 0.04);
	glBegin(GL_QUAD_STRIP);
	glVertex3f(0.7672, 0.1028, -0.4);
	glVertex3f(0.7672, 0.1028, 0.4);
	glVertex3f(0.9156, 0.0444, -0.4);
	glVertex3f(0.9156, 0.0444, 0.4);
	glVertex3f(0.9734, -0.0861, -0.4);
	glVertex3f(0.9734, -0.0861, 0.4);
	glVertex3f(0.9734, -0.6278, -0.4);
	glVertex3f(0.9734, -0.6278, 0.4);
	glVertex3f(0.6406, -0.6278, -0.4);
	glVertex3f(0.6406, -0.6278, 0.4);
	glVertex3f(0.6406, 0.1028, -0.4);
	glVertex3f(0.6406, 0.1028, 0.4);
	glEnd();
	


	//5r
	
	glBegin(GL_POLYGON);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(-0.9825, -0.6278, 0.42);
	glVertex3f(1, -0.6278, 0.42);
	glVertex3f(1, -0.5333, 0.42);
	glVertex3f(-0.9825, -0.5333, 0.42);
	glEnd();
	

	//5l
	
	glBegin(GL_POLYGON);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(-0.9825, -0.6278, -0.42);
	glVertex3f(1, -0.6278, -0.42);
	glVertex3f(1, -0.5333, -0.42);
	glVertex3f(-0.9825, -0.5333, -0.42);
	glEnd();
	

	//5c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(-0.9825, -0.6278, -0.42);
	glVertex3f(-0.9825, -0.6278, 0.42);
	glVertex3f(1, -0.6278, -0.42);
	glVertex3f(1, -0.6278, 0.42);
	glVertex3f(1, -0.5333, -0.42);
	glVertex3f(1, -0.5333, 0.42);
	glVertex3f(-0.9825, -0.5333, -0.42);
	glVertex3f(-0.9825, -0.5333, 0.42);
	glVertex3f(-0.9825, -0.6278, -0.42);
	glVertex3f(-0.9825, -0.6278, 0.42);
	glEnd();
	

	//6r
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.53, 0.84, 0.97);
	glVertex3f(0.3438, 0.6194, 0.401);
	glVertex3f(0.3438, 0.1722, 0.401);
	glVertex3f(0.6094, 0.6194, 0.401);
	glEnd();
	

	//6l
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.53, 0.84, 0.97);
	glVertex3f(0.3438, 0.6194, -0.401);
	glVertex3f(0.3438, 0.1722, -0.401);
	glVertex3f(0.6094, 0.6194, -0.401);
	glEnd();
	

	//7r
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.66, 0.87, 0.98);
	glVertex3f(0.3438, 0.1722, 0.401);
	glVertex3f(0.6094, 0.6194, 0.401);
	glVertex3f(0.6719, 0.1722, 0.401);
	glEnd();
	


	//7l
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.66, 0.87, 0.98);
	glVertex3f(0.3438, 0.1722, -0.401);
	glVertex3f(0.6094, 0.6194, -0.401);
	glVertex3f(0.6719, 0.1722, -0.401);
	glEnd();
	

	//8r
	
	glBegin(GL_POLYGON);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(0.4062, 0.0167, 0.401);
	glVertex3f(0.5062, 0.0167, 0.401);
	glVertex3f(0.5062, -0.0389, 0.401);
	glVertex3f(0.4062, -0.0389, 0.401);
	glEnd();
	

	//8l
	
	glBegin(GL_POLYGON);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(0.4062, 0.0167, -0.401);
	glVertex3f(0.5062, 0.0167, -0.401);
	glVertex3f(0.5062, -0.0389, -0.401);
	glVertex3f(0.4062, -0.0389, -0.401);
	glEnd();
	

	//9r
	
	glBegin(GL_POLYGON);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(-1, -0.3139, 0.401);
	glVertex3f(-0.9609, -0.3139, 0.401);
	glVertex3f(-0.9609, -0.4833, 0.401);
	glVertex3f(-1, -0.4833, 0.401);
	glEnd();
	

	//9l
	
	glBegin(GL_POLYGON);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(-1, -0.3139, -0.401);
	glVertex3f(-0.9609, -0.3139, -0.401);
	glVertex3f(-0.9609, -0.4833, -0.401);
	glVertex3f(-1, -0.4833, -0.401);
	glEnd();
	

	//9c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(-1, -0.3139, -0.401);
	glVertex3f(-1, -0.3139, 0.401);
	glVertex3f(-0.9609, -0.3139, -0.401);
	glVertex3f(-0.9609, -0.3139, 0.401);
	glVertex3f(-0.9609, -0.4833, -0.401);
	glVertex3f(-0.9609, -0.4833, 0.401);
	glVertex3f(-1, -0.4833, -0.401);
	glVertex3f(-1, -0.4833, 0.401);
	glVertex3f(-1, -0.3139, -0.401);
	glVertex3f(-1, -0.3139, 0.401);
	glEnd();
	

	//10r
	
	glLineWidth(10);
	glBegin(GL_LINES);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(-0.9625, -0.1778, 0.401);
	glVertex3f(0.2375, -0.1778, 0.401);
	glVertex3f(0.2375, -0.5556, 0.401);
	glVertex3f(0.2375, 0.7667, 0.401);
	glEnd();
	

	//10l
	
	glLineWidth(10);
	glBegin(GL_LINES);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(-0.9625, -0.1778, -0.401);
	glVertex3f(0.2375, -0.1778, -0.401);
	glVertex3f(0.2375, -0.5556, -0.401);
	glVertex3f(0.2375, 0.7667, -0.401);
	glVertex3f(-0.9627, -0.1778, 0.401);
	glVertex3f(-0.9627, -0.1778, -0.401);
	glEnd();
	



	glPushMatrix();
	glScalef(0.28, 0.28, 0.28);
	glTranslatef(-2.2, -2.3, -1.401);
	wheel1();
	glPopMatrix();


	glPushMatrix();
	glScalef(0.28, 0.28, 0.28);
	glTranslatef(2.2, -2.3, -1.401);
	wheel1();
	glPopMatrix();


	glPushMatrix();
	glScalef(0.28, 0.28, 0.28);
	glTranslatef(-2.2, -2.3, 1.401);
	glRotatef(180, 0, 1, 0);
	wheel1();
	glPopMatrix();


	glPushMatrix();
	glScalef(0.28, 0.28, 0.28);
	glTranslatef(2.2, -2.3, 1.401);
	glRotatef(180, 0, 1, 0);
	wheel1();
	glPopMatrix();
	glPopMatrix();
	


}

void van1()
{
	glPushMatrix();

	//1r
	
	glBegin(GL_POLYGON);
	glColor3f(0.960, 0.337, 0.039);
	glVertex3f(-0.915625, 1, 0.4);
	glVertex3f(0.31875, 1, 0.4);
	glVertex3f(0.31875, -0.66, 0.4);
	glVertex3f(-0.915625, -0.66, 0.4);
	glEnd();
	

	//1l
	
	glBegin(GL_POLYGON);
	glColor3f(0.960, 0.337, 0.039);
	glVertex3f(-0.915625, 1, -0.4);
	glVertex3f(0.31875, 1, -0.4);
	glVertex3f(0.31875, -0.66, -0.4);
	glVertex3f(-0.915625, -0.66, -0.4);
	glEnd();
	


	//1c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.960, 0.337, 0.039);
	glVertex3f(-0.915625, 1, -0.4);
	glVertex3f(-0.915625, 1, 0.4);
	glVertex3f(0.31875, 1, -0.4);
	glVertex3f(0.31875, 1, 0.4);
	glVertex3f(0.31875, -0.66, -0.4);
	glVertex3f(0.31875, -0.66, 0.4);
	glVertex3f(-0.915625, -0.66, -0.4);
	glVertex3f(-0.915625, -0.66, 0.4);
	glVertex3f(-0.915625, 1, -0.4);
	glVertex3f(-0.915625, 1, 0.4);
	glEnd();
	


	//2r
	
	glBegin(GL_POLYGON);
	glColor3f(0.960, 0.337, 0.039);
	glVertex3f(-0.915625, 1, 0.4);
	glVertex3f(0.55625, 1, 0.4);
	glVertex3f(0.55625, 0.595, 0.4);
	glVertex3f(-0.915625, 0.595, 0.4);
	glEnd();
	

	//2l
	
	glBegin(GL_POLYGON);
	glColor3f(0.960, 0.337, 0.039);
	glVertex3f(-0.915625, 1, -0.4);
	glVertex3f(0.55625, 1, -0.4);
	glVertex3f(0.55625, 0.595, -0.4);
	glVertex3f(-0.915625, 0.595, -0.4);
	glEnd();
	

	//2c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.960, 0.337, 0.039);
	glVertex3f(-0.915625, 1, -0.4);
	glVertex3f(-0.915625, 1, 0.4);
	glVertex3f(0.55625, 1, -0.4);
	glVertex3f(0.55625, 1, 0.4);
	glVertex3f(0.55625, 0.595, -0.4);
	glVertex3f(0.55625, 0.595, 0.4);
	glVertex3f(-0.915625, 0.595, -0.4);
	glVertex3f(-0.915625, 0.595, 0.4);
	glVertex3f(-0.915625, 1, -0.4);
	glVertex3f(-0.915625, 1, 0.4);
	glEnd();
	

	//3r
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.960, 0.458, 0.219);
	glVertex3f(0.31875, 0.505, 0.4);
	glVertex3f(0.59375, 0.505, 0.4);
	glVertex3f(0.692, 0, 0.4);
	glVertex3f(0.928125, -0.172, 0.4);
	glVertex3f(0.928125, -0.66, 0.4);
	glVertex3f(0.31875, -0.66, 0.4);
	glVertex3f(0.31875, 0.505, 0.4);
	glVertex3f(0.692, 0, 0.4);
	glVertex3f(0.31875, -0.66, 0.4);
	glVertex3f(0.31875, -0.66, 0.4);
	glVertex3f(0.692, 0, 0.4);
	glVertex3f(0.928125, -0.172, 0.4);
	glEnd();
	

	//3l
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.960, 0.458, 0.219);
	glVertex3f(0.31875, 0.505, -0.4);
	glVertex3f(0.59375, 0.505, -0.4);
	glVertex3f(0.692, 0, -0.4);
	glVertex3f(0.928125, -0.172, -0.4);
	glVertex3f(0.928125, -0.66, -0.4);
	glVertex3f(0.31875, -0.66, -0.4);
	glVertex3f(0.31875, 0.505, -0.4);
	glVertex3f(0.692, 0, -0.4);
	glVertex3f(0.31875, -0.66, -0.4);
	glVertex3f(0.31875, -0.66, -0.4);
	glVertex3f(0.692, 0, -0.4);
	glVertex3f(0.928125, -0.172, -0.4);
	glEnd();
	


	// f windscreen
	
	glColor3f(0.66, 0.87, 0.98);
	glBegin(GL_QUAD_STRIP);
	glVertex3f(0.6114, 0.416, -0.35);
	glVertex3f(0.6114, 0.416, 0.35);
	glVertex3f(0.693, 0, -0.35);
	glVertex3f(0.693, 0, 0.35);
	glEnd();
	

	// r front light
	
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(0.929, -0.2, -0.37);
	glVertex3f(0.929, -0.35, -0.37);
	glVertex3f(0.929, -0.35, -0.2);
	glVertex3f(0.929, -0.2, -0.2);
	glEnd();
	

	// r front light
	
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(0.929, -0.2, 0.37);
	glVertex3f(0.929, -0.35, 0.37);
	glVertex3f(0.929, -0.35, 0.2);
	glVertex3f(0.929, -0.2, 0.2);
	glEnd();
	

	//3c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.960, 0.458, 0.219);
	glVertex3f(0.31875, 0.505, -0.4);
	glVertex3f(0.31875, 0.505, 0.4);
	glVertex3f(0.59375, 0.505, -0.4);
	glVertex3f(0.59375, 0.505, 0.4);
	glVertex3f(0.692, 0, -0.4);
	glVertex3f(0.692, 0, 0.4);


	glVertex3f(0.928125, -0.172, -0.4);
	glVertex3f(0.928125, -0.172, 0.4);
	glVertex3f(0.928125, -0.66, -0.4);
	glVertex3f(0.928125, -0.66, 0.4);
	glVertex3f(0.31875, -0.66, -0.4);
	glVertex3f(0.31875, -0.66, 0.4);


	glEnd();
	

	//4r
	
	glBegin(GL_POLYGON);
	glColor3f(0.533, 0.839, 0.972);
	glVertex3f(0.38125, 0.416, 0.401);
	glVertex3f(0.56875, 0.416, 0.401);
	glVertex3f(0.38125, 0, 0.401);
	glEnd();
	

	//4l
	
	glBegin(GL_POLYGON);
	glColor3f(0.533, 0.839, 0.972);
	glVertex3f(0.38125, 0.416, -0.401);
	glVertex3f(0.56875, 0.416, -0.401);
	glVertex3f(0.38125, 0, -0.401);
	glEnd();
	

	//5r
	
	glBegin(GL_POLYGON);
	glColor3f(0.658, 0.874, 0.980);
	glVertex3f(0.646875, 0, 0.401);
	glVertex3f(0.56875, 0.416, 0.401);
	glVertex3f(0.38125, 0, 0.401);
	glEnd();
	

	//5l
	
	glBegin(GL_POLYGON);
	glColor3f(0.658, 0.874, 0.980);
	glVertex3f(0.646875, 0, -0.401);
	glVertex3f(0.56875, 0.416, -0.401);
	glVertex3f(0.38125, 0, -0.401);
	glEnd();
	

	//6r
	
	glBegin(GL_POLYGON);
	glColor3f(0.784, 0.235, 0.023);
	glVertex3f(-0.915625, -0.05, 0.401);
	glVertex3f(0.31875, -0.05, 0.401);
	glVertex3f(0.31875, -0.172, 0.401);
	glVertex3f(-0.915625, -0.172, 0.401);
	glEnd();
	

	//6l
	
	glBegin(GL_POLYGON);
	glColor3f(0.784, 0.235, 0.023);
	glVertex3f(-0.915625, -0.05, -0.401);
	glVertex3f(0.31875, -0.05, -0.401);
	glVertex3f(0.31875, -0.172, -0.401);
	glVertex3f(-0.915625, -0.172, -0.401);
	glEnd();
	

	//6c
	
	glBegin(GL_POLYGON);
	glColor3f(0.784, 0.235, 0.023);
	glVertex3f(-0.916, -0.05, -0.401);
	glVertex3f(-0.916, -0.172, -0.401);
	glVertex3f(-0.916, -0.172, 0.401);
	glVertex3f(-0.916, -0.05, 0.401);
	glEnd();
	


	//7r
	
	glBegin(GL_POLYGON);
	glColor3f(0.784, 0.235, 0.023);
	glVertex3f(-0.915625, 1, 0.401);
	glVertex3f(0.55625, 1, 0.401);
	glVertex3f(0.55625, 0.9, 0.401);
	glVertex3f(-0.915625, 0.9, 0.401);
	glEnd();
	

	//7l
	
	glBegin(GL_POLYGON);
	glColor3f(0.784, 0.235, 0.023);
	glVertex3f(-0.915625, 1, -0.401);
	glVertex3f(0.55625, 1, -0.401);
	glVertex3f(0.55625, 0.9, -0.401);
	glVertex3f(-0.915625, 0.9, -0.401);
	glEnd();
	

	//7c
	
	glBegin(GL_POLYGON);
	glColor3f(0.784, 0.235, 0.023);
	glVertex3f(-0.916, 1, -0.401);
	glVertex3f(-0.916, 0.9, -0.401);
	glVertex3f(-0.916, 0.9, 0.401);
	glVertex3f(-0.916, 1, 0.401);
	glEnd();
	

	//7c
	
	glBegin(GL_POLYGON);
	glColor3f(0.784, 0.235, 0.023);
	glVertex3f(0.5563, 1, -0.401);
	glVertex3f(0.5563, 0.9, -0.401);
	glVertex3f(0.5563, 0.9, 0.401);
	glVertex3f(0.5563, 1, 0.401);
	glEnd();
	

	//8r
	
	glBegin(GL_POLYGON);
	glColor3f(0.784, 0.235, 0.023);
	glVertex3f(0.97, -0.66, 0.401);
	glVertex3f(-0.96, -0.66, 0.401);
	glVertex3f(-0.96, -0.55, 0.401);
	glVertex3f(0.97, -0.55, 0.401);
	glEnd();
	

	//8l
	
	glBegin(GL_POLYGON);
	glColor3f(0.784, 0.235, 0.023);
	glVertex3f(0.97, -0.66, -0.401);
	glVertex3f(-0.96, -0.66, -0.401);
	glVertex3f(-0.96, -0.55, -0.401);
	glVertex3f(0.97, -0.55, -0.401);
	glEnd();
	

	//8c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.784, 0.235, 0.023);
	glVertex3f(0.97, -0.66, -0.401);
	glVertex3f(0.97, -0.66, 0.401);
	glVertex3f(-0.96, -0.66, -0.401);
	glVertex3f(-0.96, -0.66, 0.401);
	glVertex3f(-0.96, -0.55, -0.401);
	glVertex3f(-0.96, -0.55, 0.401);
	glVertex3f(0.97, -0.55, -0.401);
	glVertex3f(0.97, -0.55, 0.401);
	glVertex3f(0.97, -0.66, -0.401);
	glVertex3f(0.97, -0.66, 0.401);
	glEnd();
	



	//9r
	
	glBegin(GL_POLYGON);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(0.39, -0.1, 0.401);
	glVertex3f(0.4875, -0.1, 0.401);
	glVertex3f(0.4875, -0.152, 0.401);
	glVertex3f(0.39, -0.152, 0.401);
	glEnd();
	

	//9l
	
	glBegin(GL_POLYGON);
	glColor3f(0.78, 0.24, 0.02);
	glVertex3f(0.39, -0.1, -0.401);
	glVertex3f(0.4875, -0.1, -0.401);
	glVertex3f(0.4875, -0.152, -0.401);
	glVertex3f(0.39, -0.152, -0.401);
	glEnd();
	


	glPushMatrix();
	glScalef(0.28, 0.28, 0.28);
	glTranslatef(-2.2, -2.3, -1.401);
	wheel1();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.28, 0.28, 0.28);
	glTranslatef(2.2, -2.3, -1.401);
	wheel1();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.28, 0.28, 0.28);
	glTranslatef(-2.2, -2.3, 1.401);
	glRotatef(180, 0, 1, 0);
	wheel1();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.28, 0.28, 0.28);
	glTranslatef(2.2, -2.3, 1.401);
	glRotatef(180, 0, 1, 0);
	wheel1();
	glPopMatrix();
	glPopMatrix();
	
	



}

void sedan(double r, double g, double b)
{
	


	glPushMatrix();
	//1Right Main Subpart
	
	glBegin(GL_POLYGON);
	glColor3f(r, g, b);

	glVertex3f(-1, -0.2222, 0.4);
	glVertex3f(-0.9719, -0.1444, 0.4);
	glVertex3f(-0.9156, -0.1083, 0.4);
	glVertex3f(-0.8328, 0.0722, 0.4);
	glVertex3f(-0.4609, 0.1667, 0.4);

	glVertex3f(1, -0.1583, 0.4);
	glVertex3f(0.9812, -0.3194, 0.4);
	glVertex3f(0.9078, -0.4278, 0.4);
	glVertex3f(0.7656, -0.4444, 0.4);
	glVertex3f(0.4312, -0.4917, 0.4);
	glVertex3f(-0.5016, -0.5083, 0.4);
	glVertex3f(-0.6938, -0.3889, 0.4);
	glVertex3f(-0.8844, -0.4861, 0.4);
	glVertex3f(-0.9562, -0.475, 0.4);//
	glEnd();
	


	//1Center Main Subpart
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(r, g, b);

	glVertex3f(-1, -0.2222, -0.4);
	glVertex3f(-1, -0.2222, 0.4);
	glVertex3f(-0.9719, -0.1444, -0.4);
	glVertex3f(-0.9719, -0.1444, 0.4);
	glVertex3f(-0.9156, -0.1083, -0.4);
	glVertex3f(-0.9156, -0.1083, 0.4);
	glVertex3f(-0.8328, 0.0722, -0.4);
	glVertex3f(-0.8328, 0.0722, 0.4);
	glVertex3f(-0.4609, 0.1667, -0.4);
	glVertex3f(-0.4609, 0.1667, 0.4);

	glVertex3f(1, -0.1583, -0.4);
	glVertex3f(1, -0.1583, 0.4);
	glVertex3f(0.9812, -0.3194, -0.4);
	glVertex3f(0.9812, -0.3194, 0.4);
	glVertex3f(0.9078, -0.4278, -0.4);
	glVertex3f(0.9078, -0.4278, 0.4);
	glVertex3f(0.7656, -0.4444, -0.4);
	glVertex3f(0.7656, -0.4444, 0.4);
	glVertex3f(0.4312, -0.4917, -0.4);
	glVertex3f(0.4312, -0.4917, 0.4);
	glVertex3f(-0.5016, -0.5083, -0.4);
	glVertex3f(-0.5016, -0.5083, 0.4);
	glVertex3f(-0.6938, -0.3889, -0.4);
	glVertex3f(-0.6938, -0.3889, 0.4);
	glVertex3f(-0.8844, -0.4861, -0.4);
	glVertex3f(-0.8844, -0.4861, 0.4);
	glVertex3f(-0.9562, -0.475, -0.4);//
	glVertex3f(-0.9562, -0.475, 0.4);//
	glVertex3f(-1, -0.2222, -0.4);
	glVertex3f(-1, -0.2222, 0.4);
	glEnd();
	

	//1Left Main Subpart
	
	glBegin(GL_POLYGON);
	glColor3f(r, g, b);

	glVertex3f(-1, -0.2222, -0.4);
	glVertex3f(-0.9719, -0.1444, -0.4);
	glVertex3f(-0.9156, -0.1083, -0.4);
	glVertex3f(-0.8328, 0.0722, -0.4);
	glVertex3f(-0.4609, 0.1667, -0.4);

	glVertex3f(1, -0.1583, -0.4);
	glVertex3f(0.9812, -0.3194, -0.4);
	glVertex3f(0.9078, -0.4278, -0.4);
	glVertex3f(0.7656, -0.4444, -0.4);
	glVertex3f(0.4312, -0.4917, -0.4);
	glVertex3f(-0.5016, -0.5083, -0.4);
	glVertex3f(-0.6938, -0.3889, -0.4);
	glVertex3f(-0.8844, -0.4861, -0.4);
	glVertex3f(-0.9562, -0.475, -0.4);//
	glEnd();
	


	//2 Right Main subpart 
	
	glBegin(GL_POLYGON);
	glColor3f(r, g, b);
	glVertex3f(-0.4266, 0.1667, 0.4);//
	glVertex3f(0.9656, -0.0889, 0.4);//
	glVertex3f(-0.4609, 0.1667, 0.4);
	glVertex3f(1, -0.1583, 0.4);
	glEnd();
	

	//2 Left Main subpart 
	
	glBegin(GL_POLYGON);
	glColor3f(r, g, b);
	glVertex3f(-0.4266, 0.1667, -0.4);//
	glVertex3f(0.9656, -0.0889, -0.4);//
	glVertex3f(-0.4609, 0.1667, -0.4);
	glVertex3f(1, -0.1583, -0.4);
	glEnd();
	

	//2 Center Main subpart 
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(r, g, b);
	glVertex3f(-0.4266, 0.1667, 0.4);//
	glVertex3f(-0.4266, 0.1667, -0.4);//
	glVertex3f(0.9656, -0.0889, 0.4);//
	glVertex3f(0.9656, -0.0889, -0.4);//
	glVertex3f(-0.4609, 0.1667, 0.4);
	glVertex3f(-0.4609, 0.1667, -0.4);
	glVertex3f(1, -0.1583, 0.4);
	glVertex3f(1, -0.1583, -0.4);
	glEnd();
	


	//3 Right Main Subpart
	
	glBegin(GL_POLYGON);
	glColor3f(r, g, b);
	glVertex3f(-0.4266, 0.1667, 0.4);//
	glVertex3f(-0.0984, 0.4722, 0.4);
	glVertex3f(0.1562, 0.5167, 0.4);
	glVertex3f(0.5156, 0.4083, 0.4);
	glVertex3f(0.5938, 0.3528, 0.4);
	glVertex3f(0.7875, 0.2139, 0.4);
	glVertex3f(0.9281, 0.175, 0.4);
	glVertex3f(0.9656, -0.0889, 0.4);//
	glEnd();
	


	//3 Left Main Subpart
	
	glBegin(GL_POLYGON);
	glColor3f(r, g, b);
	glVertex3f(-0.4266, 0.1667, -0.4);//
	glVertex3f(-0.0984, 0.4722, -0.4);
	glVertex3f(0.1562, 0.5167, -0.4);
	glVertex3f(0.5156, 0.4083, -0.4);
	glVertex3f(0.5938, 0.3528, -0.4);
	glVertex3f(0.7875, 0.2139, -0.4);
	glVertex3f(0.9281, 0.175, -0.4);
	glVertex3f(0.9656, -0.0889, -0.4);//
	glEnd();
	


	//3 Center Main Subpart
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(r, g, b);
	glVertex3f(-0.4266, 0.1667, -0.4);//
	glVertex3f(-0.4266, 0.1667, 0.4);//
	glVertex3f(-0.0984, 0.4722, -0.4);
	glVertex3f(-0.0984, 0.4722, 0.4);
	glVertex3f(0.1562, 0.5167, -0.4);
	glVertex3f(0.1562, 0.5167, 0.4);
	glVertex3f(0.5156, 0.4083, -0.4);
	glVertex3f(0.5156, 0.4083, 0.4);
	glVertex3f(0.5938, 0.3528, -0.4);
	glVertex3f(0.5938, 0.3528, 0.4);
	glVertex3f(0.7875, 0.2139, -0.4);
	glVertex3f(0.7875, 0.2139, 0.4);
	glVertex3f(0.9281, 0.175, -0.4);
	glVertex3f(0.9281, 0.175, 0.4);
	glVertex3f(0.9656, -0.0889, -0.4);//
	glVertex3f(0.9656, -0.0889, 0.4);//
	glEnd();
	



	//4 Right Main subpart 
	
	glBegin(GL_TRIANGLES);
	glColor3f(r, g, b);
	glVertex3f(-1, -0.4111, 0.4);
	glVertex3f(-0.9875, -0.375, 0.4);
	glVertex3f(-0.9562, -0.475, 0.4);//
	glVertex3f(-0.9875, -0.375, 0.4);
	glVertex3f(-0.9562, -0.475, 0.4);//
	glVertex3f(-1, -0.2222, 0.4);

	glVertex3f(1, -0.1583, 0.4);
	glVertex3f(0.9656, -0.0889, 0.4);//
	glVertex3f(-0.4266, 0.1667, 0.4);
	glEnd();
	


	//4 Right Left subpart 
	
	glBegin(GL_TRIANGLES);
	glColor3f(r, g, b);
	glVertex3f(-1, -0.4111, -0.4);
	glVertex3f(-0.9875, -0.375, -0.4);
	glVertex3f(-0.9562, -0.475, -0.4);//
	glVertex3f(-0.9875, -0.375, -0.4);
	glVertex3f(-0.9562, -0.475, -0.4);//
	glVertex3f(-1, -0.2222, -0.4);

	glVertex3f(1, -0.1583, -0.4);
	glVertex3f(0.9656, -0.0889, -0.4);//
	glVertex3f(-0.4266, 0.1667, -0.4);
	glEnd();
	

	//4 Center Main subpart
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(r, g, b);
	glVertex3f(-1, -0.4111, -0.4);
	glVertex3f(-1, -0.4111, 0.4);
	glVertex3f(-0.9875, -0.375, -0.4);
	glVertex3f(-0.9875, -0.375, 0.4);
	glVertex3f(-0.9562, -0.475, -0.4);//
	glVertex3f(-0.9562, -0.475, 0.4);//
	glVertex3f(-1, -0.4111, -0.4);
	glVertex3f(-1, -0.4111, 0.4);


	glVertex3f(-0.9875, -0.375, -0.4);
	glVertex3f(-0.9875, -0.375, 0.4);
	glVertex3f(-0.9562, -0.475, -0.4);//
	glVertex3f(-0.9562, -0.475, 0.4);//
	glVertex3f(-1, -0.2222, -0.4);
	glVertex3f(-1, -0.2222, 0.4);
	glVertex3f(-0.9875, -0.375, -0.4);
	glVertex3f(-0.9875, -0.375, 0.4);

	glVertex3f(1, -0.1583, -0.4);
	glVertex3f(1, -0.1583, 0.4);
	glVertex3f(0.9656, -0.0889, -0.4);//
	glVertex3f(0.9656, -0.0889, 0.4);//
	glVertex3f(-0.4266, 0.1667, -0.4);
	glVertex3f(-0.4266, 0.1667, 0.4);
	glVertex3f(1, -0.1583, -0.4);
	glVertex3f(1, -0.1583, 0.4);
	glEnd();
	


	//5 Right Front Light
	
	glBegin(GL_POLYGON);
	glColor3f(0.77, 0.84, 0.88);
	glVertex3f(-0.9641, -0.1417, 0.401);
	glVertex3f(-0.9172, -0.1111, 0.401);
	glVertex3f(-0.8125, 0.0361, 0.401);
	glVertex3f(-0.8328, 0.0722, 0.401);
	glVertex3f(-0.9266, 0.0028, 0.401);
	glEnd();
	

	//5 Right L Front Light
	
	glBegin(GL_POLYGON);
	glColor3f(0.77, 0.84, 0.88);
	glVertex3f(-0.9641, -0.1417, 0.2);
	glVertex3f(-0.8328, 0.0722, 0.35);
	glVertex3f(-0.9266, 0.0028, 0.28);
	glEnd();
	

	//5 Right L Front Light
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.77, 0.84, 0.88);
	glVertex3f(-0.9641, -0.1417, 0.2);
	glVertex3f(-0.9641, -0.1417, 0.401);
	glVertex3f(-0.8328, 0.0722, 0.35);
	glVertex3f(-0.8328, 0.0722, 0.401);
	glVertex3f(-0.9266, 0.0028, 0.28);
	glVertex3f(-0.9266, 0.0028, 0.401);
	glVertex3f(-0.9641, -0.1417, 0.2);
	glVertex3f(-0.9641, -0.1417, 0.401);
	glEnd();
	





	//5 Left Front Light
	
	glBegin(GL_POLYGON);
	glColor3f(0.77, 0.84, 0.88);
	glVertex3f(-0.9641, -0.1417, -0.401);
	glVertex3f(-0.9172, -0.1111, -0.401);
	glVertex3f(-0.8125, 0.0361, -0.401);
	glVertex3f(-0.8328, 0.0722, -0.401);
	glVertex3f(-0.9266, 0.0028, -0.401);
	glEnd();
	


	//5 Right L Front Light
	
	glBegin(GL_POLYGON);
	glColor3f(0.77, 0.84, 0.88);
	glVertex3f(-0.9641, -0.1417, -0.2);
	glVertex3f(-0.8328, 0.0722, -0.35);
	glVertex3f(-0.9266, 0.0028, -0.28);
	glEnd();
	

	//5 Right L Front Light
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.77, 0.84, 0.88);
	glVertex3f(-0.9641, -0.1417, -0.2);
	glVertex3f(-0.9641, -0.1417, -0.401);
	glVertex3f(-0.8328, 0.0722, -0.35);
	glVertex3f(-0.8328, 0.0722, -0.401);
	glVertex3f(-0.9266, 0.0028, -0.28);
	glVertex3f(-0.9266, 0.0028, -0.401);
	glVertex3f(-0.9641, -0.1417, -0.2);
	glVertex3f(-0.9641, -0.1417, -0.401);
	glEnd();
	




	//6 Right
	
	glBegin(GL_POLYGON);
	glColor3f(0.77, 0.84, 0.88);
	glVertex3f(-0.4266, 0.1667, 0.401);
	glVertex3f(-0.3875, 0.1667, 0.401);
	glVertex3f(-0.1047, 0.4417, 0.401);
	glVertex3f(-0.1359, 0.4417, 0.401);
	glEnd();
	

	//6 LEft
	
	glBegin(GL_POLYGON);
	glColor3f(0.77, 0.84, 0.88);
	glVertex3f(-0.4266, 0.1667, -0.401);
	glVertex3f(-0.3875, 0.1667, -0.401);
	glVertex3f(-0.1047, 0.4417, -0.401);
	glVertex3f(-0.1359, 0.4417, -0.401);
	glEnd();
	

	//6 Center
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.77, 0.84, 0.88);
	glVertex3f(-0.4266, 0.1667, -0.401);
	glVertex3f(-0.4266, 0.1667, 0.401);
	glVertex3f(-0.3875, 0.1667, -0.401);
	glVertex3f(-0.3875, 0.1667, 0.401);
	glVertex3f(-0.1047, 0.4417, -0.401);
	glVertex3f(-0.1047, 0.4417, 0.401);
	glVertex3f(-0.1359, 0.4417, -0.401);
	glVertex3f(-0.1359, 0.4417, 0.401);
	glVertex3f(-0.4266, 0.1667, -0.401);
	glVertex3f(-0.4266, 0.1667, 0.401);
	glEnd();
	

	//7 Right
	
	glBegin(GL_POLYGON);
	glColor3f(0.77, 0.84, 0.88);
	glVertex3f(-0.3781, 0.1139, 0.401);
	glVertex3f(-0.0875, 0.4389, 0.401);
	glVertex3f(0.1562, 0.48, 0.401);
	glVertex3f(0.5, 0.35, 0.401);
	glVertex3f(0.5719, 0.2944, 0.401);
	glVertex3f(0.5766, 0.1778, 0.401);
	glEnd();
	

	//7 left
	
	glBegin(GL_POLYGON);
	glColor3f(0.77, 0.84, 0.88);
	glVertex3f(-0.3781, 0.1139, -0.401);
	glVertex3f(-0.0875, 0.4389, -0.401);
	glVertex3f(0.1562, 0.48, -0.401);
	glVertex3f(0.5, 0.35, -0.401);
	glVertex3f(0.5719, 0.2944, -0.401);
	glVertex3f(0.5766, 0.1778, -0.401);
	glEnd();
	



	//8 RIght
	
	glBegin(GL_POLYGON);
	glColor3f(0.73, 0.33, 0.2);
	glVertex3f(-0.9016, -0.1278, 0.401);
	glVertex3f(-0.8203, -0.1278, 0.401);
	glVertex3f(-0.8406, -0.1639, 0.401);
	glVertex3f(-0.8859, -0.1611, 0.401);
	glEnd();
	

	//8 Left
	
	glBegin(GL_POLYGON);
	glColor3f(0.73, 0.33, 0.2);
	glVertex3f(-0.9016, -0.1278, -0.401);
	glVertex3f(-0.8203, -0.1278, -0.401);
	glVertex3f(-0.8406, -0.1639, -0.401);
	glVertex3f(-0.8859, -0.1611, -0.401);
	glEnd();
	


	//9 Right BackLight
	
	glBegin(GL_POLYGON);
	glColor3f(0.73, 0.33, 0.2);
	glVertex3f(0.9562, -0.0083, 0.401);
	glVertex3f(0.9062, -0.0056, 0.401);
	glVertex3f(0.8578, 0.0778, 0.401);
	glVertex3f(0.9219, 0.1667, 0.401);
	glVertex3f(0.9328, 0.1556, 0.401);
	glEnd();
	

	//9 Right Back BackLight
	
	glBegin(GL_POLYGON);
	glColor3f(0.73, 0.33, 0.2);
	glVertex3f(0.9562, -0.0083, 0.401);
	glVertex3f(0.9328, 0.1556, 0.401);
	glVertex3f(0.9328, 0.1556, 0.25);
	glVertex3f(0.9562, -0.0083, 0.25);
	glEnd();
	


	//9 Left BackLight
	
	glBegin(GL_POLYGON);
	glColor3f(0.73, 0.33, 0.2);
	glVertex3f(0.9562, -0.0083, -0.401);
	glVertex3f(0.9062, -0.0056, -0.401);
	glVertex3f(0.8578, 0.0778, -0.401);
	glVertex3f(0.9219, 0.1667, -0.401);
	glVertex3f(0.9328, 0.1556, -0.401);
	glEnd();
	

	//9 Left Back BackLight
	
	glBegin(GL_POLYGON);
	glColor3f(0.73, 0.33, 0.2);
	glVertex3f(0.9562, -0.0083, -0.401);
	glVertex3f(0.9328, 0.1556, -0.401);
	glVertex3f(0.9328, 0.1556, -0.25);
	glVertex3f(0.9562, -0.0083, -0.25);
	glEnd();
	



	//L DOOR
	glPushMatrix();
	glTranslatef(0, 0, -0.401);
	glTranslatef(-0.4062, -0.0167, 0);
	glRotatef(sedan_door_angle, 0, 1, 0);
	glTranslatef(0.4062, 0.0167, 0);
	sedan_door_front('l',r,g,b);
	glPopMatrix();

	//L DOOR BACK
	glPushMatrix();
	glTranslatef(0, 0, -0.401);
	glTranslatef(0.1344, 0.1389, 0);
	glRotatef(sedan_door_angle, 0, 1, 0);
	glTranslatef(-0.1344, -0.1389, 0);
	sedan_door_back('l',r,g,b);
	glPopMatrix();

	//R DOOR
	glPushMatrix();
	glTranslatef(0, 0, 0.401);
	glTranslatef(-0.4062, -0.0167, 0);
	glRotatef(-sedan_door_angle, 0, 1, 0);
	glTranslatef(0.4062, 0.0167, 0);
	sedan_door_front('r',r,g,b);
	glPopMatrix();

	//L DOOR BACK
	glPushMatrix();
	glTranslatef(0, 0, 0.401);
	glTranslatef(0.1344, 0.1389, 0);
	glRotatef(-sedan_door_angle, 0, 1, 0);
	glTranslatef(-0.1344, -0.1389, 0);
	sedan_door_back('r',r,g,b);
	glPopMatrix();





	//R
	
	glBegin(GL_POLYGON);
	glColor3f(0.19, 0.24, 0.28);
	glVertex3f(0.1719, 0.1467, 0.402);
	glVertex3f(0.0984, 0.1411, 0.402);
	glVertex3f(0.1281, 0.48, 0.402);
	glVertex3f(0.1812, 0.48, 0.402);
	glEnd();
	

	//R
	
	glBegin(GL_POLYGON);
	glColor3f(0.19, 0.24, 0.28);
	glVertex3f(0.1719, 0.1467, -0.402);
	glVertex3f(0.0984, 0.1411, -0.402);
	glVertex3f(0.1281, 0.48, -0.402);
	glVertex3f(0.1812, 0.48, -0.402);
	glEnd();
	



	glPushMatrix();
	glScalef(0.26, 0.26, 0.26);
	glTranslatef(-2.7, -1.6, -1.35);
	wheel2();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.26, 0.26, 0.26);
	glTranslatef(2.5, -1.6, -1.35);
	wheel2();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.26, 0.26, 0.26);
	glTranslatef(-2.7, -1.6, 1.35);
	glRotatef(180, 0, 1, 0);
	wheel2();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.26, 0.26, 0.26);
	glTranslatef(2.5, -1.6, 1.35);
	glRotatef(180, 0, 1, 0);
	wheel2();
	glPopMatrix();
	glPopMatrix();
	
}

void car1()
{
	


	//front lights
	glPushMatrix();
	
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(-0.9313, 0.0472, -0.4);
	glVertex3f(-0.9313, 0.0472, -0.25);
	glVertex3f(-0.913, -0.15, -0.25);
	glVertex3f(-0.913, -0.15, -0.4);
	glEnd();
	

	//front lights
	
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(-0.9313, 0.0472, 0.4);
	glVertex3f(-0.9313, 0.0472, 0.25);
	glVertex3f(-0.913, -0.15, 0.25);
	glVertex3f(-0.913, -0.15, 0.4);
	glEnd();
	

	//1r
	
	glBegin(GL_POLYGON);
	glColor3f(0.88, 0.04, 0.37);
	glVertex3f(-0.9312, 0.0472, 0.4);
	glVertex3f(0.8953, -0.2972, 0.4);
	glVertex3f(0.85, -0.4056, 0.4);
	glVertex3f(-0.7641, -0.4056, 0.4);
	glVertex3f(-0.9016, -0.2722, 0.4);
	glEnd();
	

	//1r
	
	glBegin(GL_POLYGON);
	glColor3f(0.88, 0.04, 0.37);
	glVertex3f(-0.9312, 0.0472, -0.4);
	glVertex3f(0.8953, -0.2972, -0.4);
	glVertex3f(0.85, -0.4056, -0.4);
	glVertex3f(-0.7641, -0.4056, -0.4);
	glVertex3f(-0.9016, -0.2722, -0.4);
	glEnd();
	


	//1c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.88, 0.04, 0.37);
	glVertex3f(-0.9312, 0.0472, -0.4);
	glVertex3f(-0.9312, 0.0472, 0.4);
	glVertex3f(0.8953, -0.2972, -0.4);
	glVertex3f(0.8953, -0.2972, 0.4);
	glVertex3f(0.85, -0.4056, -0.4);
	glVertex3f(0.85, -0.4056, 0.4);
	glVertex3f(-0.7641, -0.4056, -0.4);
	glVertex3f(-0.7641, -0.4056, 0.4);
	glVertex3f(-0.9016, -0.2722, -0.4);
	glVertex3f(-0.9016, -0.2722, 0.4);
	glVertex3f(-0.9312, 0.0472, -0.4);
	glVertex3f(-0.9312, 0.0472, 0.4);
	glEnd();
	


	//back screen
	
	glBegin(GL_POLYGON);
	glColor3f(1, 0.87, 0.92);
	glVertex3f(0.628, 0.56, -0.35);
	glVertex3f(0.628, 0.56, 0.35);
	glVertex3f(0.868, 0.2, 0.35);
	glVertex3f(0.868, 0.2, -0.35);
	glEnd();
	

	//2r
	
	glBegin(GL_POLYGON);
	glColor3f(0.88, 0.04, 0.37);
	glVertex3f(-0.3734, 0.2083, 0.4);//
	glVertex3f(-0.1656, 0.5694, 0.4);
	glVertex3f(-0.0094, 0.5944, 0.4);
	glVertex3f(0.3344, 0.5944, 0.4);
	glVertex3f(0.6219, 0.5694, 0.4);
	glVertex3f(0.9094, 0.1361, 0.4);
	glVertex3f(0.9094, -0.1444, 0.4);//
	glEnd();
	

	//2l
	
	glBegin(GL_POLYGON);
	glColor3f(0.88, 0.04, 0.37);
	glVertex3f(-0.3734, 0.2083, -0.4);//
	glVertex3f(-0.1656, 0.5694, -0.4);
	glVertex3f(-0.0094, 0.5944, -0.4);
	glVertex3f(0.3344, 0.5944, -0.4);
	glVertex3f(0.6219, 0.5694, -0.4);
	glVertex3f(0.9094, 0.1361, -0.4);
	glVertex3f(0.9094, -0.1444, -0.4);//
	glEnd();
	

	//2c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.88, 0.04, 0.37);
	glVertex3f(-0.3734, 0.2083, -0.4);//
	glVertex3f(-0.3734, 0.2083, 0.4);//
	glVertex3f(-0.1656, 0.5694, -0.4);
	glVertex3f(-0.1656, 0.5694, 0.4);
	glVertex3f(-0.0094, 0.5944, -0.4);
	glVertex3f(-0.0094, 0.5944, 0.4);
	glVertex3f(0.3344, 0.5944, -0.4);
	glVertex3f(0.3344, 0.5944, 0.4);
	glVertex3f(0.6219, 0.5694, -0.4);
	glVertex3f(0.6219, 0.5694, 0.4);
	glVertex3f(0.9094, 0.1361, -0.4);
	glVertex3f(0.9094, 0.1361, 0.4);
	glVertex3f(0.9094, -0.1444, -0.4);//
	glVertex3f(0.9094, -0.1444, 0.4);//
	glVertex3f(-0.3734, 0.2083, -0.4);//
	glVertex3f(-0.3734, 0.2083, 0.4);//
	glEnd();
	

	//3r
	
	glBegin(GL_POLYGON);
	glColor3f(0.88, 0.04, 0.37);
	glVertex3f(-0.9312, 0.0472, 0.4);
	glVertex3f(-0.3734, 0.2083, 0.4);//
	glVertex3f(0.9094, -0.1444, 0.4);//
	glVertex3f(0.8953, -0.2972, 0.4);
	glEnd();
	

	//3l
	
	glBegin(GL_POLYGON);
	glColor3f(0.88, 0.04, 0.37);
	glVertex3f(-0.9312, 0.0472, -0.4);
	glVertex3f(-0.3734, 0.2083, -0.4);//
	glVertex3f(0.9094, -0.1444, -0.4);//
	glVertex3f(0.8953, -0.2972, -0.4);
	glEnd();
	

	//3c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.88, 0.04, 0.37);
	glVertex3f(-0.9312, 0.0472, -0.4);
	glVertex3f(-0.9312, 0.0472, 0.4);
	glVertex3f(-0.3734, 0.2083, -0.4);//
	glVertex3f(-0.3734, 0.2083, 0.4);//
	glVertex3f(0.9094, -0.1444, -0.4);//
	glVertex3f(0.9094, -0.1444, 0.4);//
	glVertex3f(0.8953, -0.2972, -0.4);
	glVertex3f(0.8953, -0.2972, 0.4);
	glVertex3f(-0.9312, 0.0472, -0.4);
	glVertex3f(-0.9312, 0.0472, 0.4);
	glEnd();
	

	//4r
	
	glBegin(GL_POLYGON);
	glColor3f(1, 0.87, 0.92);
	glVertex3f(-0.3469, 0.2028, 0.401);
	glVertex3f(-0.1438, 0.5361, 0.401);
	glVertex3f(-0.1656, 0.5694, 0.401);
	glVertex3f(-0.3734, 0.2083, 0.401);//
	glEnd();
	


	//4r
	
	glBegin(GL_POLYGON);
	glColor3f(1, 0.87, 0.92);
	glVertex3f(-0.3469, 0.2028, -0.401);
	glVertex3f(-0.1438, 0.5361, -0.401);
	glVertex3f(-0.1656, 0.5694, -0.401);
	glVertex3f(-0.3734, 0.2083, -0.401);//
	glEnd();
	

	//4c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(1, 0.87, 0.92);
	glVertex3f(-0.347, 0.2028, -0.401);
	glVertex3f(-0.347, 0.2028, 0.401);
	glVertex3f(-0.1439, 0.5361, -0.401);
	glVertex3f(-0.1439, 0.5361, 0.401);
	glVertex3f(-0.1657, 0.5694, -0.401);
	glVertex3f(-0.1657, 0.5694, 0.401);
	glVertex3f(-0.3735, 0.2083, -0.401);//
	glVertex3f(-0.3735, 0.2083, 0.401);//
	glVertex3f(-0.347, 0.2028, -0.401);
	glVertex3f(-0.347, 0.2028, 0.401);
	glEnd();
	

	//5r
	
	glBegin(GL_POLYGON);
	glColor3f(1, 0.87, 0.92);
	glVertex3f(-0.1047, 0.4667, 0.401);
	glVertex3f(0.1609, 0.4667, 0.401);
	glVertex3f(0.1609, 0.1472, 0.401);
	glVertex3f(-0.2375, 0.1472, 0.401);
	glVertex3f(-0.2641, 0.2083, 0.401);
	glEnd();
	


	//5l
	
	glBegin(GL_POLYGON);
	glColor3f(1, 0.87, 0.92);
	glVertex3f(-0.1047, 0.4667, -0.401);
	glVertex3f(0.1609, 0.4667, -0.401);
	glVertex3f(0.1609, 0.1472, -0.401);
	glVertex3f(-0.2375, 0.1472, -0.401);
	glVertex3f(-0.2641, 0.2083, -0.401);
	glEnd();
	

	//6r
	
	glBegin(GL_POLYGON);
	glColor3f(1, 0.87, 0.92);
	glVertex3f(0.2453, 0.4667, 0.401);
	glVertex3f(0.4656, 0.4667, 0.401);
	glVertex3f(0.5891, 0.25, 0.401);
	glVertex3f(0.5578, 0.1472, 0.401);
	glVertex3f(0.2453, 0.1472, 0.401);
	glEnd();
	

	//6l
	
	glBegin(GL_POLYGON);
	glColor3f(1, 0.87, 0.92);
	glVertex3f(0.2453, 0.4667, -0.401);
	glVertex3f(0.4656, 0.4667, -0.401);
	glVertex3f(0.5891, 0.25, -0.401);
	glVertex3f(0.5578, 0.1472, -0.401);
	glVertex3f(0.2453, 0.1472, -0.401);
	glEnd();
	

	//7r
	
	glBegin(GL_POLYGON);
	glColor3f(0.2, 0.2, 0.2);
	glVertex3f(0.9094, 0.1361, 0.401);
	glVertex3f(0.9094, -0.1444, 0.401);
	glVertex3f(0.87, -0.1444, 0.401);
	glVertex3f(0.87, 0.1361, 0.401);
	glEnd();
	

	//back light
	
	glBegin(GL_POLYGON);
	glColor3f(0.2, 0.2, 0.2);
	glVertex3f(0.9095, 0.1361, 0.301);
	glVertex3f(0.9095, 0.1361, 0.401);
	glVertex3f(0.9095, -0.1444, 0.401);
	glVertex3f(0.9095, -0.1444, 0.301);
	glEnd();
	

	//back light
	
	glBegin(GL_POLYGON);
	glColor3f(0.2, 0.2, 0.2);
	glVertex3f(0.9095, 0.1361, -0.301);
	glVertex3f(0.9095, 0.1361, -0.401);
	glVertex3f(0.9095, -0.1444, -0.401);
	glVertex3f(0.9095, -0.1444, -0.301);
	glEnd();
	

	//7l
	
	glBegin(GL_POLYGON);
	glColor3f(0.2, 0.2, 0.2);
	glVertex3f(0.9094, 0.1361, -0.401);
	glVertex3f(0.9094, -0.1444, -0.401);
	glVertex3f(0.87, -0.1444, -0.401);
	glVertex3f(0.87, 0.1361, -0.401);
	glEnd();
	

	//8r
	
	glLineWidth(1);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);
	glVertex3f(-0.9312, 0.0472, 0.401);
	glVertex3f(-0.325, 0.1722, 0.401);
	glVertex3f(-0.1234, 0.5222, 0.401);
	glVertex3f(0.6078, 0.5306, 0.401);
	glVertex3f(0.9094, 0.1361, 0.401);
	glEnd();
	

	//8l
	
	glLineWidth(1);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);
	glVertex3f(-0.9312, 0.0472, -0.401);
	glVertex3f(-0.325, 0.1722, -0.401);
	glVertex3f(-0.1234, 0.5222, -0.401);
	glVertex3f(0.6078, 0.5306, -0.401);
	glVertex3f(0.9094, 0.1361, -0.401);
	glEnd();
	

	//9r
	
	glLineWidth(1);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);
	glVertex3f(-0.35, 0.1667, 0.401);
	glVertex3f(-0.3031, -0.3694, 0.401);
	glVertex3f(0.2375, -0.3694, 0.401);
	glVertex3f(0.2375, 0.0972, 0.401);
	glVertex3f(0.2062, 0.1389, 0.401);
	glVertex3f(0.2062, 0.5278, 0.401);
	glEnd();
	

	//9l
	
	glLineWidth(1);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);
	glVertex3f(-0.35, 0.1667, -0.401);
	glVertex3f(-0.3031, -0.3694, -0.401);
	glVertex3f(0.2375, -0.3694, -0.401);
	glVertex3f(0.2375, 0.0972, -0.401);
	glVertex3f(0.2062, 0.1389, -0.401);
	glVertex3f(0.2062, 0.5278, -0.401);
	glEnd();
	


	glPushMatrix();
	glScalef(0.3, 0.3, 0.25);
	glTranslatef(-1.7, -1.3, -1.5);
	wheel2();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.3, 0.3, 0.25);
	glTranslatef(1.85, -1.3, -1.5);
	wheel2();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.3, 0.3, 0.25);
	glTranslatef(-1.7, -1.3, 1.5);
	glRotatef(180, 0, 1, 0);
	wheel2();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.3, 0.3, 0.25);
	glTranslatef(1.85, -1.3, 1.5);
	glRotatef(180, 0, 1, 0);
	wheel2();
	glPopMatrix();
	glPopMatrix();


	

}


void lambo()
{

	
	glPushMatrix(); 
	
	//1r
	
	glBegin(GL_POLYGON);
	glColor3f(0.83, 0.16, 0);
	glVertex3f(-0.925, -0.2556, 0.4);
	glVertex3f(-0.9859, -0.2333, 0.4);
	glVertex3f(-0.9547, -0.1444, 0.4);
	glVertex3f(-1, -0.0306, 0.4);
	glVertex3f(-0.7859, 0.2056, 0.4);
	glVertex3f(-0.5969, 0.2833, 0.4);
	glVertex3f(-0.5531, 0.2861, 0.4);
	glVertex3f(-0.1406, 0.5333, 0.4);
	glVertex3f(-0.0312, 0.5528, 0.4);
	glVertex3f(0.1047, 0.5528, 0.4);
	glVertex3f(0.3281, 0.5306, 0.4);
	glVertex3f(0.9812, 0.3556, 0.4);
	glVertex3f(0.9656, 0.3417, 0.4);
	glVertex3f(0.9516, 0.2583, 0.4);
	glVertex3f(0.9453, 0.2333, 0.4);
	glVertex3f(0.9438, 0.1472, 0.4);
	glVertex3f(0.9516, 0.1139, 0.4);
	glVertex3f(0.9922, 0.1111, 0.4);
	glVertex3f(1, 0.0806, 0.4);
	glVertex3f(0.9188, -0.1222, 0.4);
	glVertex3f(0.7422, -0.1833, 0.4);
	glVertex3f(0.5547, -0.1472, 0.4);
	glVertex3f(0.4734, -0.2278, 0.4);
	glVertex3f(-0.4125, -0.25, 0.4);
	glVertex3f(-0.6203, -0.1778, 0.4);
	glVertex3f(-0.7188, -0.2611, 0.4);
	glEnd();
	

	//1l
	
	glBegin(GL_POLYGON);
	glColor3f(0.83, 0.16, 0);
	glVertex3f(-0.925, -0.2556, -0.4);
	glVertex3f(-0.9859, -0.2333, -0.4);
	glVertex3f(-0.9547, -0.1444, -0.4);
	glVertex3f(-1, -0.0306, -0.4);
	glVertex3f(-0.7859, 0.2056, -0.4);
	glVertex3f(-0.5969, 0.2833, -0.4);
	glVertex3f(-0.5531, 0.2861, -0.4);
	glVertex3f(-0.1406, 0.5333, -0.4);
	glVertex3f(-0.0312, 0.5528, -0.4);
	glVertex3f(0.1047, 0.5528, -0.4);
	glVertex3f(0.3281, 0.5306, -0.4);
	glVertex3f(0.9812, 0.3556, -0.4);
	glVertex3f(0.9656, 0.3417, -0.4);
	glVertex3f(0.9516, 0.2583, -0.4);
	glVertex3f(0.9453, 0.2333, -0.4);
	glVertex3f(0.9438, 0.1472, -0.4);
	glVertex3f(0.9516, 0.1139, -0.4);
	glVertex3f(0.9922, 0.1111, -0.4);
	glVertex3f(1, 0.0806, -0.4);
	glVertex3f(0.9188, -0.1222, -0.4);
	glVertex3f(0.7422, -0.1833, -0.4);
	glVertex3f(0.5547, -0.1472, -0.4);
	glVertex3f(0.4734, -0.2278, -0.4);
	glVertex3f(-0.4125, -0.25, -0.4);
	glVertex3f(-0.6203, -0.1778, -0.4);
	glVertex3f(-0.7188, -0.2611, -0.4);
	glEnd();
	


	//1c
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.83, 0.16, 0);
	glVertex3f(-0.925, -0.2556, -0.4);
	glVertex3f(-0.925, -0.2556, 0.4);
	glVertex3f(-0.9859, -0.2333, -0.4);
	glVertex3f(-0.9859, -0.2333, 0.4);
	glVertex3f(-0.9547, -0.1444, -0.4);
	glVertex3f(-0.9547, -0.1444, 0.4);
	glVertex3f(-1, -0.0306, -0.4);
	glVertex3f(-1, -0.0306, 0.4);
	glVertex3f(-0.7859, 0.2056, -0.4);
	glVertex3f(-0.7859, 0.2056, 0.4);
	glVertex3f(-0.5969, 0.2833, -0.4);
	glVertex3f(-0.5969, 0.2833, 0.4);
	glVertex3f(-0.5531, 0.2861, -0.4);
	glVertex3f(-0.5531, 0.2861, 0.4);
	glVertex3f(-0.1406, 0.5333, -0.4);
	glVertex3f(-0.1406, 0.5333, 0.4);
	glVertex3f(-0.0312, 0.5528, -0.4);
	glVertex3f(-0.0312, 0.5528, 0.4);
	glVertex3f(0.1047, 0.5528, -0.4);
	glVertex3f(0.1047, 0.5528, 0.4);
	glVertex3f(0.3281, 0.5306, -0.4);
	glVertex3f(0.3281, 0.5306, 0.4);
	glVertex3f(0.9812, 0.3556, -0.4);
	glVertex3f(0.9812, 0.3556, 0.4);
	glVertex3f(0.9656, 0.3417, -0.4);
	glVertex3f(0.9656, 0.3417, 0.4);
	glVertex3f(0.9516, 0.2583, -0.4);
	glVertex3f(0.9516, 0.2583, 0.4);
	glVertex3f(0.9453, 0.2333, -0.4);
	glVertex3f(0.9453, 0.2333, 0.4);
	glVertex3f(0.9438, 0.1472, -0.4);
	glVertex3f(0.9438, 0.1472, 0.4);
	glVertex3f(0.9516, 0.1139, -0.4);
	glVertex3f(0.9516, 0.1139, 0.4);
	glVertex3f(0.9922, 0.1111, -0.4);
	glVertex3f(0.9922, 0.1111, 0.4);
	glVertex3f(1, 0.0806, -0.4);
	glVertex3f(1, 0.0806, 0.4);
	glVertex3f(0.9188, -0.1222, -0.4);
	glVertex3f(0.9188, -0.1222, 0.4);
	glVertex3f(0.7422, -0.1833, -0.4);
	glVertex3f(0.7422, -0.1833, 0.4);
	glVertex3f(0.5547, -0.1472, -0.4);
	glVertex3f(0.5547, -0.1472, 0.4);
	glVertex3f(0.4734, -0.2278, -0.4);
	glVertex3f(0.4734, -0.2278, 0.4);
	glVertex3f(-0.4125, -0.25, -0.4);
	glVertex3f(-0.4125, -0.25, 0.4);
	glVertex3f(-0.6203, -0.1778, -0.4);
	glVertex3f(-0.6203, -0.1778, 0.4);
	glVertex3f(-0.7188, -0.2611, -0.4);
	glVertex3f(-0.7188, -0.2611, 0.4);
	glVertex3f(-0.925, -0.2556, -0.4);
	glVertex3f(-0.925, -0.2556, 0.4);
	glEnd();
	

	//2r
	
	glBegin(GL_POLYGON);
	glColor3f(0.129, 0.074, 0.066);
	glVertex3f(-0.9547, -0.0583, 0.401);
	glVertex3f(-0.9219, -0.0333, 0.401);
	glVertex3f(-0.875, -0.1694, 0.401);
	glVertex3f(-0.9, -0.2028, 0.401);
	glVertex3f(-0.9406, -0.1972, 0.401);
	glVertex3f(-0.9328, -0.1167, 0.401);
	glEnd();
	

	//2l
	
	glBegin(GL_POLYGON);
	glColor3f(0.129, 0.074, 0.066);
	glVertex3f(-0.9547, -0.0583, -0.401);
	glVertex3f(-0.9219, -0.0333, -0.401);
	glVertex3f(-0.875, -0.1694, -0.401);
	glVertex3f(-0.9, -0.2028, -0.401);
	glVertex3f(-0.9406, -0.1972, -0.401);
	glVertex3f(-0.9328, -0.1167, -0.401);
	glEnd();
	


	//3r
	
	glBegin(GL_POLYGON);
	glColor3f(0.129, 0.074, 0.066);
	glVertex3f(0.2844, 0.2722, 0.401);
	glVertex3f(0.3844, 0.2389, 0.401);
	glVertex3f(0.3016, 0.2306, 0.401);
	glEnd();
	

	//3l
	
	glBegin(GL_POLYGON);
	glColor3f(0.129, 0.074, 0.066);
	glVertex3f(0.2844, 0.2722, -0.401);
	glVertex3f(0.3844, 0.2389, -0.401);
	glVertex3f(0.3016, 0.2306, -0.401);
	glEnd();
	

	//4r
	
	glLineWidth(1);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);
	glVertex3f(-0.3422, 0.2278, 0.401);
	glVertex3f(-0.4078, 0.1472, 0.401);
	glVertex3f(-0.3781, -0.1472, 0.401);
	glVertex3f(0.0938, -0.0944, 0.401);
	glVertex3f(0.1672, 0.2694, 0.401);
	glVertex3f(0.1797, 0.2972, 0.401);
	glVertex3f(0.1438, 0.3472, 0.401);
	glEnd();
	

	//4r door 
	glPushMatrix();
	glTranslatef(0, 0, -0.402);
	glTranslatef(-0.4078, 0.1472, 0);
	glRotated(ldoor_angle_z, 0, 0, 1);
	glRotated(ldoor_angle_y, 0, 1, 0);
	glTranslatef(0.4078, -0.1472, 0);
	lambo_door();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 0, 0.402);
	glTranslatef(-0.4078, 0.1472, 0);
	glRotated(ldoor_angle_z, 0, 0, 1);
	glRotated(-ldoor_angle_y, 0, 1, 0);
	glTranslatef(0.4078, -0.1472, 0);
	lambo_door();
	glPopMatrix();

	//4l
	
	glLineWidth(1);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);
	glVertex3f(-0.3422, 0.2278, -0.401);
	glVertex3f(-0.4078, 0.1472, -0.401);
	glVertex3f(-0.3781, -0.1472, -0.401);
	glVertex3f(0.0938, -0.0944, -0.401);
	glVertex3f(0.1672, 0.2694, -0.401);
	glVertex3f(0.1797, 0.2972, -0.401);
	glVertex3f(0.1438, 0.3472, -0.401);


	glEnd();
	

	//5r
	
	glBegin(GL_POLYGON);
	glColor3f(0.77, 0.84, 0.88);
	glVertex3f(-0.4922, 0.2694, 0.401);
	glVertex3f(-0.3109, 0.4028, 0.401);
	glVertex3f(-0.1844, 0.4778, 0.401);
	glVertex3f(-0.0844, 0.5111, 0.401);
	glVertex3f(0.0938, 0.5111, 0.401);
	glVertex3f(0.2625, 0.4972, 0.401);
	glVertex3f(0.4094, 0.3889, 0.401);
	glVertex3f(0.3656, 0.4, 0.401);
	glVertex3f(-0.3156, 0.225, 0.401);
	glEnd();
	

	//5l
	
	glBegin(GL_POLYGON);
	glColor3f(0.77, 0.84, 0.88);
	glVertex3f(-0.4922, 0.2694, -0.401);
	glVertex3f(-0.3109, 0.4028, -0.401);
	glVertex3f(-0.1844, 0.4778, -0.401);
	glVertex3f(-0.0844, 0.5111, -0.401);
	glVertex3f(0.0938, 0.5111, -0.401);
	glVertex3f(0.2625, 0.4972, -0.401);
	glVertex3f(0.4094, 0.3889, -0.401);
	glVertex3f(0.3656, 0.4, -0.401);
	glVertex3f(-0.3156, 0.225, -0.401);
	glEnd();
	


	//6r
	
	glBegin(GL_POLYGON);
	glColor3f(0.129, 0.074, 0.066);
	glVertex3f(0.2531, -0.0333, 0.401);
	glVertex3f(0.1938, -0.0583, 0.401);
	glVertex3f(0.2297, 0, 0.401);
	glVertex3f(0.3016, 0.2306, 0.401);
	glVertex3f(0.3844, 0.2389, 0.401);
	glEnd();
	

	//6l
	
	glBegin(GL_POLYGON);
	glColor3f(0.129, 0.074, 0.066);
	glVertex3f(0.2531, -0.0333, -0.401);
	glVertex3f(0.1938, -0.0583, -0.401);
	glVertex3f(0.2297, 0, -0.401);
	glVertex3f(0.3016, 0.2306, -0.401);
	glVertex3f(0.3844, 0.2389, -0.401);
	glEnd();
	


	//7r
	
	glBegin(GL_POLYGON);
	//glColor3f(0.850, 0.933, 0.066);
	glColor3f(0.129, 0.074, 0.066);
	glVertex3f(0.975, 0.3444, 0.401);
	glVertex3f(0.9062, 0.3139, 0.401);
	glVertex3f(0.8969, 0.2556, 0.401);
	glVertex3f(0.9547, 0.2556, 0.401);
	glEnd();
	

	//7r
	
	glBegin(GL_QUAD_STRIP);
	//glColor3f(0.850, 0.933, 0.066);
	glColor3f(0.129, 0.074, 0.066);
	glVertex3f(0.975, 0.3444, 0.401);
	glVertex3f(0.975, 0.3444, -0.401);
	glVertex3f(0.9062, 0.3139, 0.401);
	glVertex3f(0.9062, 0.3139, -0.401);
	glVertex3f(0.8969, 0.2556, 0.401);
	glVertex3f(0.8969, 0.2556, -0.401);
	glVertex3f(0.9547, 0.2556, 0.401);
	glVertex3f(0.9547, 0.2556, -0.401);
	glVertex3f(0.975, 0.3444, 0.401);
	glVertex3f(0.975, 0.3444, -0.401);
	glEnd();
	

	//7r
	
	glBegin(GL_POLYGON);
	//glColor3f(0.850, 0.933, 0.066);
	glColor3f(0.129, 0.074, 0.066);
	glVertex3f(0.975, 0.3444, -0.401);
	glVertex3f(0.9062, 0.3139, -0.401);
	glVertex3f(0.8969, 0.2556, -0.401);
	glVertex3f(0.9547, 0.2556, -0.401);
	glEnd();
	


	//8r front light
	
	glBegin(GL_POLYGON);
	glColor3f(0.129, 0.074, 0.066);
	//glColor3f(1, 0, 0);
	glVertex3f(-0.9266, 0.0444, 0.401);
	glVertex3f(-0.9047, 0.05, 0.401);
	glVertex3f(-0.7906, 0.1667, 0.401);
	glVertex3f(-0.8875, 0.1111, 0.401);
	glEnd();
	

	//8r front light
	
	glBegin(GL_POLYGON);
	glColor3f(0.129, 0.074, 0.066);
	//glColor3f(1, 0, 0);
	glVertex3f(-0.9266, 0.0444, 0.3);
	glVertex3f(-0.9047, 0.05, 0.3);
	glVertex3f(-0.7906, 0.1667, 0.38);
	glVertex3f(-0.8875, 0.1111, 0.3);
	glEnd();
	

	//8r front light
	
	glBegin(GL_POLYGON);
	glColor3f(0.129, 0.074, 0.066);
	//glColor3f(1, 0, 0);
	glVertex3f(-0.9266, 0.0444, -0.3);
	glVertex3f(-0.9047, 0.05, -0.3);
	glVertex3f(-0.7906, 0.1667, -0.38);
	glVertex3f(-0.8875, 0.1111, -0.3);
	glEnd();
	

	//8r front light
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.129, 0.074, 0.066);
	//glColor3f(1, 0, 0);
	glVertex3f(-0.9266, 0.0444, 0.3);
	glVertex3f(-0.9266, 0.0444, 0.401);
	glVertex3f(-0.9047, 0.05, 0.3);
	glVertex3f(-0.9047, 0.05, 0.401);
	glVertex3f(-0.7906, 0.1667, 0.38);
	glVertex3f(-0.7906, 0.1667, 0.401);
	glVertex3f(-0.8875, 0.1111, 0.3);
	glVertex3f(-0.8875, 0.1111, 0.401);
	glVertex3f(-0.9266, 0.0444, 0.3);
	glVertex3f(-0.9266, 0.0444, 0.401);
	glEnd();
	

	//8r front light
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.129, 0.074, 0.066);
	//glColor3f(1, 0, 0);
	glVertex3f(-0.9266, 0.0444, -0.3);
	glVertex3f(-0.9266, 0.0444, -0.401);
	glVertex3f(-0.9047, 0.05, -0.3);
	glVertex3f(-0.9047, 0.05, -0.401);
	glVertex3f(-0.7906, 0.1667, -0.38);
	glVertex3f(-0.7906, 0.1667, -0.401);
	glVertex3f(-0.8875, 0.1111, -0.3);
	glVertex3f(-0.8875, 0.1111, -0.401);
	glVertex3f(-0.9266, 0.0444, -0.3);
	glVertex3f(-0.9266, 0.0444, -0.401);
	glEnd();
	

	//8l
	
	glBegin(GL_POLYGON);
	glColor3f(0.129, 0.074, 0.066);
	//glColor3f(1, 0, 0);
	glVertex3f(-0.9266, 0.0444, -0.401);
	glVertex3f(-0.9047, 0.05, -0.401);
	glVertex3f(-0.7906, 0.1667, -0.401);
	glVertex3f(-0.8875, 0.1111, -0.401);
	glEnd();
	

	//9r back
	
	glBegin(GL_POLYGON);
	glColor3f(0.2, 0.17, 0.17);
	glVertex3f(0.8906, 0.2333, 0.401);
	glVertex3f(0.8703, 0.1167, 0.401);
	glVertex3f(0.9125, 0.0806, 0.401);
	glVertex3f(0.9531, 0.0889, 0.401);
	glVertex3f(0.9484, 0.2333, 0.401);
	glEnd();
	


	//9c  back
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.2, 0.17, 0.17);
	glVertex3f(0.8906, 0.2333, 0.2);
	glVertex3f(0.8906, 0.2333, 0.401);
	glVertex3f(0.8703, 0.1167, 0.2);
	glVertex3f(0.8703, 0.1167, 0.401);
	glVertex3f(0.9125, 0.0806, 0.2);
	glVertex3f(0.9125, 0.0806, 0.402);
	glVertex3f(0.9531, 0.0889, 0.2);
	glVertex3f(0.9531, 0.0889, 0.402);
	glVertex3f(0.9484, 0.2333, 0.2);
	glVertex3f(0.9484, 0.2333, 0.402);
	glEnd();
	

	//9c  back
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.2, 0.17, 0.17);
	glVertex3f(0.8906, 0.2333, -0.2);
	glVertex3f(0.8906, 0.2333, -0.401);
	glVertex3f(0.8703, 0.1167, -0.2);
	glVertex3f(0.8703, 0.1167, -0.401);
	glVertex3f(0.9125, 0.0806, -0.2);
	glVertex3f(0.9125, 0.0806, -0.402);
	glVertex3f(0.9531, 0.0889, -0.2);
	glVertex3f(0.9531, 0.0889, -0.402);
	glVertex3f(0.9484, 0.2333, -0.2);
	glVertex3f(0.9484, 0.2333, -0.402);
	glEnd();
	

	//9l
	
	glBegin(GL_POLYGON);
	glColor3f(0.2, 0.17, 0.17);
	glVertex3f(0.8906, 0.2333, -0.401);
	glVertex3f(0.8703, 0.1167, -0.401);
	glVertex3f(0.9125, 0.0806, -0.401);
	glVertex3f(0.9531, 0.0889, -0.401);
	glVertex3f(0.9484, 0.2333, -0.401);
	glEnd();
	

	//windscreen
	
	glBegin(GL_POLYGON);
	glColor3f(0.77, 0.84, 0.88);
	glVertex3f(-0.5533, 0.2861, -0.37);
	glVertex3f(-0.5533, 0.2861, 0.37);
	glVertex3f(-0.1967, 0.5, 0.37);
	glVertex3f(-0.1967, 0.5, -0.37);

	glEnd();
	


	glPushMatrix();
	glScalef(0.26, 0.26, 0.4);
	glTranslatef(-2.3, -0.35, -0.802);
	wheel2();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.26, 0.26, 0.4);
	glTranslatef(2.4, -0.25, -0.802);
	wheel2();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.26, 0.26, 0.4);
	glTranslatef(-2.3, -0.35, 0.802);
	glRotatef(180, 0, 1, 0);
	wheel2();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.26, 0.26, 0.4);
	glTranslatef(2.4, -0.25, 0.802);
	glRotatef(180, 0, 1, 0);
	wheel2();
	glPopMatrix();
	glPopMatrix();

	

}


void suv2()
{
	//1 Right Side
	glPushMatrix();
	
	glBegin(GL_POLYGON);
	glColor3f(1, 0.94, 0.95);
	glVertex3f(-1, -0.2778, 0.45);
	glVertex3f(-0.9828, 0.325, 0.45);
	glVertex3f(-0.6781, 0.7972, 0.45);
	glVertex3f(-0.0234, 0.7972, 0.45);
	glVertex3f(0.1328, 0.75, 0.45);
	glVertex3f(0.4953, 0.3389, 0.45);
	glVertex3f(0.8719, 0.3056, 0.45);
	glVertex3f(0.9547, 0.1417, 0.45);
	glVertex3f(1, -0.1528, 0.45);
	glVertex3f(1, -0.4722, 0.45);
	glVertex3f(-0.8578, -0.4722, 0.45);
	glEnd();
	

	
	glBegin(GL_POLYGON);
	glColor3f(0.09, 0.09, 0.09);
	glVertex3f(0.151, 0.73138, 0.4);
	glVertex3f(0.151, 0.73138, -0.4);
	glVertex3f(0.49531, 0.33891, -0.4);
	glVertex3f(0.49531, 0.33891, 0.4);
	glEnd();
	


	//1 Left Side
	
	glBegin(GL_POLYGON);
	glColor3f(1, 0.94, 0.95);
	glVertex3f(-1, -0.2778, -0.45);
	glVertex3f(-0.9828, 0.325, -0.45);
	glVertex3f(-0.6781, 0.7972, -0.45);
	glVertex3f(-0.0234, 0.7972, -0.45);
	glVertex3f(0.1328, 0.75, -0.45);
	glVertex3f(0.4953, 0.3389, -0.45);
	glVertex3f(0.8719, 0.3056, -0.45);
	glVertex3f(0.9547, 0.1417, -0.45);
	glVertex3f(1, -0.1528, -0.45);
	glVertex3f(1, -0.4722, -0.45);
	glVertex3f(-0.8578, -0.4722, -0.45);
	glEnd();
	

	//1 Center Strip
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(1, 0.94, 0.95);
	glVertex3f(-1, -0.2778, -0.45);
	glVertex3f(-1, -0.2778, 0.45);
	glVertex3f(-0.9828, 0.325, -0.45);
	glVertex3f(-0.9828, 0.325, 0.45);
	glVertex3f(-0.6781, 0.7972, -0.45);
	glVertex3f(-0.6781, 0.7972, 0.45);
	glVertex3f(-0.0234, 0.7972, -0.45);
	glVertex3f(-0.0234, 0.7972, 0.45);
	glVertex3f(0.1328, 0.75, -0.45);
	glVertex3f(0.1328, 0.75, 0.45);
	glVertex3f(0.4953, 0.3389, -0.45);
	glVertex3f(0.4953, 0.3389, 0.45);
	glVertex3f(0.8719, 0.3056, -0.45);
	glVertex3f(0.8719, 0.3056, 0.45);
	glVertex3f(0.9547, 0.1417, -0.45);
	glVertex3f(0.9547, 0.1417, 0.45);
	glVertex3f(1, -0.1528, -0.45);
	glVertex3f(1, -0.1528, 0.45);
	glVertex3f(1, -0.4722, -0.45);
	glVertex3f(1, -0.4722, 0.45);
	glVertex3f(-0.8578, -0.4722, -0.45);
	glVertex3f(-0.8578, -0.4722, 0.45);
	glVertex3f(-1, -0.2778, -0.45);
	glVertex3f(-1, -0.2778, 0.45);
	glEnd();
	



	//2 Right
	
	glBegin(GL_POLYGON);
	glColor3f(0.09, 0.09, 0.09);
	glVertex3f(-0.6422, 0.35, 0.451);
	glVertex3f(-0.3094, 0.35, 0.451);
	glVertex3f(-0.3094, 0.5889, 0.451);
	glVertex3f(-0.4953, 0.5889, 0.451);
	glEnd();
	

	//2 Left
	
	glBegin(GL_POLYGON);
	glColor3f(0.09, 0.09, 0.09);
	glVertex3f(-0.6422, 0.35, -0.451);
	glVertex3f(-0.3094, 0.35, -0.451);
	glVertex3f(-0.3094, 0.5889, -0.451);
	glVertex3f(-0.4953, 0.5889, -0.451);
	glEnd();
	


	//3 Right
	
	glBegin(GL_POLYGON);
	glColor3f(0.09, 0.09, 0.09);
	glVertex3f(-0.1906, 0.5889, 0.451);
	glVertex3f(0.0859, 0.5889, 0.451);
	glVertex3f(0.3203, 0.35, 0.451);
	glVertex3f(-0.1906, 0.35, 0.451);
	glEnd();
	

	//3 Left
	
	glBegin(GL_POLYGON);
	glColor3f(0.09, 0.09, 0.09);
	glVertex3f(-0.1906, 0.5889, -0.451);
	glVertex3f(0.0859, 0.5889, -0.451);
	glVertex3f(0.3203, 0.35, -0.451);
	glVertex3f(-0.1906, 0.35, -0.451);
	glEnd();
	

	//4 Right //Back Lights
	
	glBegin(GL_POLYGON);
	glColor3f(0.866, 0, 0);
	glVertex3f(-0.9922, 0.0056, 0.451);
	glVertex3f(-0.875, 0.0056, 0.451);
	glVertex3f(-0.875, 0.1889, 0.451);
	glVertex3f(-0.9859, 0.1889, 0.451);
	glEnd();
	



	//4 Left
	
	glBegin(GL_POLYGON);
	glColor3f(0.866, 0, 0);
	glVertex3f(-0.9922, 0.0056, -0.451);
	glVertex3f(-0.875, 0.0056, -0.451);
	glVertex3f(-0.875, 0.1889, -0.451);
	glVertex3f(-0.9859, 0.1889, -0.451);
	glEnd();
	

	
	glBegin(GL_POLYGON);
	glColor3f(0.866, 0, 0);
	glVertex3f(-0.9922, 0.0056, -0.451);
	glVertex3f(-0.9922, 0.0056, -0.251);
	glVertex3f(-0.99, 0.1889, -0.251);
	glVertex3f(-0.99, 0.1889, -0.451);
	glEnd();
	


	
	glBegin(GL_POLYGON);
	glColor3f(0.866, 0, 0);
	glVertex3f(-0.9922, 0.0056, 0.451);
	glVertex3f(-0.9922, 0.0056, 0.251);
	glVertex3f(-0.99, 0.1889, 0.251);
	glVertex3f(-0.99, 0.1889, 0.451);


	glEnd();
	



	//5 Right // Front Light SubRight
	
	glBegin(GL_POLYGON);
	glColor3f(0.921, 0.847, 0.058);
	glVertex3f(0.9875, 0.0056, 0.451);
	glVertex3f(0.8328, 0.0056, 0.451);
	glVertex3f(0.8984, -0.1556, 0.451);
	glVertex3f(1, -0.1556, 0.451);
	glEnd();
	


	//5 Right // Front Light SubLeft
	
	glBegin(GL_POLYGON);
	glColor3f(0.921, 0.847, 0.058);
	glVertex3f(0.9875, 0.0056, 0.25);
	glVertex3f(0.8328, 0.0056, 0.25);
	glVertex3f(0.8984, -0.1556, 0.25);
	glVertex3f(1, -0.1556, 0.25);
	glEnd();
	

	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.921, 0.847, 0.058);
	glVertex3f(0.9875, 0.0056, 0.25);
	glVertex3f(0.9875, 0.0056, 0.451);
	glVertex3f(0.8328, 0.0056, 0.25);
	glVertex3f(0.8328, 0.0056, 0.451);
	glVertex3f(0.8984, -0.1556, 0.25);
	glVertex3f(0.8984, -0.1556, 0.451);
	glVertex3f(1, -0.1556, 0.25);
	glVertex3f(1, -0.1556, 0.451);
	glVertex3f(0.9875, 0.0056, 0.25);
	glVertex3f(0.9875, 0.0056, 0.451);
	glEnd();
	






	//5 Left // Front Light SubRight
	
	glBegin(GL_POLYGON);
	glColor3f(0.921, 0.847, 0.058);
	glVertex3f(0.9875, 0.0056, -0.25);
	glVertex3f(0.8328, 0.0056, -0.25);
	glVertex3f(0.8984, -0.1556, -0.25);
	glVertex3f(1, -0.1556, -0.25);
	glEnd();
	

	//5 Left  SubLeft
	
	glBegin(GL_POLYGON);
	glColor3f(0.921, 0.847, 0.058);
	glVertex3f(0.9875, 0.0056, -0.451);
	glVertex3f(0.8328, 0.0056, -0.451);
	glVertex3f(0.8984, -0.1556, -0.451);
	glVertex3f(1, -0.1556, -0.451);
	glEnd();
	

	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.921, 0.847, 0.058);
	glVertex3f(0.9875, 0.0056, -0.25);
	glVertex3f(0.9875, 0.0056, -0.451);
	glVertex3f(0.8328, 0.0056, -0.25);
	glVertex3f(0.8328, 0.0056, -0.451);
	glVertex3f(0.8984, -0.1556, -0.25);
	glVertex3f(0.8984, -0.1556, -0.451);
	glVertex3f(1, -0.1556, -0.25);
	glVertex3f(1, -0.1556, -0.451);
	glVertex3f(0.9875, 0.0056, -0.25);
	glVertex3f(0.9875, 0.0056, -0.451);
	glEnd();
	



	//6 Right
	
	glBegin(GL_POLYGON);
	glColor3f(0.086, 0.094, 0.086);
	glVertex3f(-0.1672, 0.0778, 0.451);
	glVertex3f(-0.0875, 0.0778, 0.451);
	glVertex3f(-0.0875, 0.0361, 0.451);
	glVertex3f(-0.1672, 0.0361, 0.451);
	glEnd();
	

	//6 Left
	
	glBegin(GL_POLYGON);
	glColor3f(0.086, 0.094, 0.086);
	glVertex3f(-0.1672, 0.0778, -0.451);
	glVertex3f(-0.0875, 0.0778, -0.451);
	glVertex3f(-0.0875, 0.0361, -0.451);
	glVertex3f(-0.1672, 0.0361, -0.451);
	glEnd();
	

	glPushMatrix();
	glScalef(0.35, 0.35, 0.3);
	glTranslatef(-1.7, -1.3, -1.5);
	wheel2();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.35, 0.35, 0.3);
	glTranslatef(-1.7, -1.3, 1.5);
	glRotatef(180, 0, 1, 0);
	wheel2();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.35, 0.35, 0.3);
	glTranslatef(1.85, -1.3, -1.5);
	wheel2();
	glPopMatrix();


	glPushMatrix();
	glScalef(0.35, 0.35, 0.3);
	glTranslatef(1.85, -1.3, 1.5);
	glRotatef(180, 0, 1, 0);
	wheel2();
	glPopMatrix();
	glPopMatrix();
	

}