#include<GL/glut.h>
#include<stdio.h>
#include<string.h>
#include <math.h>
int slide=0;
float angle = 1.0f;
float radius = 3.50f;
float speed = 0.01f;

float anglev=3.0f;
float radiusv = 4.0f;
float speedv = 0.01f;

float angleE=4.0f;
float radiusE = 4.5f;
float speedE = 0.01f;

float angleM=3.2f;
float radiusM = 5.2f;
float speedM = 0.003f;

float angleJ=4.5f;
float radiusJ = 6.5f;
float speedJ = 0.01f;

float angleS=6.0f;
float radiusS = 7.8f;
float speedS = 0.005f;

float angleU=5.5f;
float radiusU = 8.5f;
float speedU = 0.01f;

float angleN=8.0f;
float radiusN = 10.0f;
float speedN = 0.01f;

float angleSUN = 0.0f;
float radiusSUN = 0.0f;
float speedSUN = 0.0000f;
void output(char *s)
{
	int k;
	for(k=0;k<strlen(s);k++)
	glutStrokeCharacter(GLUT_STROKE_ROMAN,s[k]);
}

int blink_interval = 500; // blink interval in milliseconds
int blink_state = 0; // 0 for off, 1 for on
int last_blink_time = 0; // the last time the blink state changed

void update() {
    int current_time = glutGet(GLUT_ELAPSED_TIME);
    if (current_time - last_blink_time > blink_interval) {
        // toggle the blink state
        blink_state = !blink_state;
        last_blink_time = current_time;
    }
    glutPostRedisplay();
}
void drawCircle(float radius, int numSegments) {
	int i;
    glBegin(GL_LINE_LOOP);
    for(i = 0; i < numSegments; i++) {
        float theta = 2.0f * 3.1415926f * i / numSegments;
        float x = radius * cosf(theta);
        float y = radius * sinf(theta);
        glVertex2f(x, y);
    }
    glEnd();
}

void drawSphere(float x, float y, float radius, int numSegments) {
int i;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for ( i = 0; i <= numSegments; i++) {
        float theta = 2.0f * 3.1415926f * i / numSegments;
        float dx = radius * cosf(theta);
        float dy = radius * sinf(theta);
        glVertex2f(x + dx, y + dy);
    }
    glEnd();
}



 void first()
 {
 	glClearColor(0.196078,0.6,0.8,1.0);
 	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,1.0);
	glPushMatrix();
	glTranslatef(-9.5,9.0,0.0);
	glScalef(0.005,0.005,0.0);
	output("MANGALORE INSTITUTE OF TECHNOLOGY & ENGINEERING");
	glPopMatrix();
	glColor3f(1.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(-7.8,6.7,0.0);
	glScalef(0.004,0.005,0.0);
	output("DEPARTMENT OF COMPUTER SCIENCE & ENGINEERING");
	glPopMatrix();
	glPopMatrix();
	glColor3f(0.0,0.0,0.0);
	glPushMatrix();////
	glTranslatef(-6.5,4.5,0.0);
	glScalef(0.004,0.005,0.0);
	output("COMPUTER GRAPHICS MINI PROJECT  ON");
	glPopMatrix();
	glColor3f(1.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(-2.2,2.2,0.0);
	glScalef(0.004,0.004,0.0);
	output("SOLAR SYSTEM");
	glPopMatrix();
	glColor3f(0.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(-9.5,-2.2,0.0);
	glScalef(0.004,0.005,0.0);
	output("VIKHYATH SHENOY\n");
	glPopMatrix();
	glColor3f(0.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(-8.9,-3.2,0.0);
	glScalef(0.004,0.005,0.0);
	output("4MT20CS111");
	glPopMatrix();
	glColor3f(0.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(5.5,-2.2,0.0);
	glScalef(0.004,0.005,0.0);
	output("PRASHANTH D\n");
	glPopMatrix();
	glColor3f(0.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(5.7,-3.2,0.0);
	glScalef(0.004,0.005,0.0);
	output("4MT20CS117");
	glPopMatrix();
	glColor3f(0.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(-3.8,-7.5,0.0);
	glScalef(0.004,0.005,0.0);
	output("UNDER THE GUIDANCE OF");
	glPopMatrix();
	glColor3f(0.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(-2.8,-8.8,0.0);
	glScalef(0.004,0.005,0.0);
	output("MS SUNITHA N V");
	glPopMatrix();
	glutSwapBuffers();
}
void second() {
	glClearColor(0.0,0.0,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
 // draw first point
    glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glVertex2f(-8.0f, -5.0f);
    glEnd();

    // draw second point
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
    glPointSize(4.0f);
    glBegin(GL_POINTS);
    glVertex2f(-10.0f, -4.0f);
    glEnd();

    // draw third point
    glColor4f(1.0f, 1.0f, 1.0f,1.0f);
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glVertex2f(3.0f, 7.0f);
    glEnd();
    
    glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.0f,8.7f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-10.0f,7.5f);
	glEnd();
	
	glPointSize(4);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-6.0f,2.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.0f,5.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.0f,2.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.0f,6.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.0f,8.5f);
	glEnd();
	

	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.0f,8.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-7.0f,8.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.0f,2.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-6.5f,7.8f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-5.0f,8.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.0f,7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.5f,8.2f);
	glEnd();
	
	glPointSize(4);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-5.9f,6.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.2f,9.7f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.5f,8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-4.8,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.3f,2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.6f,1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.0f,1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.4f,1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-4.7f,2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.9f,1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.8f,1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.7f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.5f,8.8f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.3f,7.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-3.1f,2.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.9f,2.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.8f,3.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.6f,1.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.5f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.4f,0.0f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-2.3f,0.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.4f,0.6f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.3f,5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.2f,3.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-2.1f,0.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.9f,0.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.7f,0.1f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.6f,0.4f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.4f,3.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.5f,5.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-1.2f,8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.1f,5.8f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.9f,1.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.7f,2.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.8f,1.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.6f,3.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.5f,3.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.4f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.3f,3.4f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.2f,4.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.1f,2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.1f,-4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.4f,-8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f,-9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.8f,-7.8f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.0f,-2.35f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.2f,-5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.4f,-2.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.6f,-7.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-1.8f,-4.56f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.0f,-5.8f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.2f,-3.7f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.4f,-5.59f);
	glEnd();
	
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.6f,-8.92f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.8f,-5.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-3.0f,-10.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.1f,-6.53f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.3f,-5.85f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.5f,-8.45f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.7f,-2.05f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.8f,-8.99f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.9f,-5.19f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.1f,-5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.2f,-9.58f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.3f,-6.6f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.4f,-2.85f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.6f,-7.25f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.7f,-6.75f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.8f,-9.57f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-4.9f,-3.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-5.1f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.2f,-10.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.3f,-5.58f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.4f,-8.16f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.5f,-10.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.7f,-6.4f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.8f,-10.0f);
	glEnd();
	
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.9f,-8.26f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);		
	glVertex2f(-6.1f,-5.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-6.3f,-2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-6.5f,-2.0f);
	glEnd();
	
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-6.6f,-3.25f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-6.8f,-5.58f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-6.9f,-7.53f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.1f,-0.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.3f,-2.52f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.5f,-3.25f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.7f,-3.22f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.8f,-8.9f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.0f,-10.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.3f,-9.7f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.4f,-2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.5f,-4.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.6f,-3.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.7f,-2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.8f,-6.3f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-9.0f,-2.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.1f,-1.4f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.3f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.5f,-6.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.7f,-5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.8f,-8.7f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.9f,-8.8f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
   glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(0.1f,2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(0.3f,5.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(0.5f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(0.8f,2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.2f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.5f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.7f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.9f,6.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.1f,6.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.3f,5.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(2.5f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.7f,2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.9f,3.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.1f,3.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.3f,5.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(3.5f,6.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.7f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.9f,5.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(4.1f,3.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.4f,5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.6f,8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.8f,6.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(5.0f,5.6f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.2f,8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.4f,5.9f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.5f,9.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.8f,9.35f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.0f,1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.2f,3.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.4f,7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.6f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.8f,0.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.2f,7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.4f,5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.5f,9.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(7.7f,8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.9f,0.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.1f,0.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.3f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.6f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.9f,8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(9.2f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(9.4f,3.5f);
	glEnd();
	
	glPointSize(4);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(9.6f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(10.0f,5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(0.5f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(0.9f,-4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.2f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.5f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.7f,-3.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.0f,-8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.2f,-3.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(2.5f,-9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.8f,-3.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.0f,-8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.2f,-2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.5f,-9.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
   glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(3.8f,-2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.0f,-3.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(4.2f,-9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.5f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.8f,-6.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.0f,-1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.3f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.6f,-9.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(5.8f,-2.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(6.0f,-0.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.3f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.5f,-9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.8f,-4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.0f,-1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.2f,-5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.5f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.7f,-9.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(8.1f,-6.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.3f,-2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.5f,-9.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(8.7f,-6.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.9f,-3.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(9.2f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(9.4f,-1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(9.7f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(10.0f,-7.5f);
	glEnd();
   
   
   
    glDisable(GL_BLEND);
   
   glutSwapBuffers();
     
}
void third() {
	
float angle = -1.5f;
float radius = 3.50f;
float speed = 0.02f;

float anglev=4.3f;
float radiusv = 4.0f;
float speedv = 0.01f;

float angleE=9.4f;
float radiusE = 4.5f;
float speedE = 0.01f;

float angleM=9.2f;
float radiusM = 5.2f;
float speedM = 0.003f;

float angleJ=9.0f;
float radiusJ = 6.5f;
float speedJ = 0.01f;

float angleS=9.0f;
float radiusS = 7.8f;
float speedS = 0.005f;

float angleU=8.8f;
float radiusU = 8.5f;
float speedU = 0.01f;

float angleN=2.3f;
float radiusN = 10.0f;
float speedN = 0.01f;

float angleSUN = 0.0f;
float radiusSUN = 0.0f;
float speedSUN = 0.0000f;
	//sun
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); 
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
 // draw first point
    glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glVertex2f(-8.0f, -5.0f);
    glEnd();

    // draw second point
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
    glPointSize(4.0f);
    glBegin(GL_POINTS);
    glVertex2f(-10.0f, -4.0f);
    glEnd();

    // draw third point
    glColor4f(1.0f, 1.0f, 1.0f,1.0f);
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glVertex2f(3.0f, 7.0f);
    glEnd();
    
    glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.0f,8.7f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-10.0f,7.5f);
	glEnd();
	
	glPointSize(4);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-6.0f,2.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.0f,5.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.0f,2.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.0f,6.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.0f,8.5f);
	glEnd();
	

	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.0f,8.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-7.0f,8.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.0f,2.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-6.5f,7.8f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-5.0f,8.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.0f,7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.5f,8.2f);
	glEnd();
	
	glPointSize(4);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-5.9f,6.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.2f,9.7f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.5f,8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-4.8,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.3f,2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.6f,1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.0f,1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.4f,1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-4.7f,2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.9f,1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.8f,1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.7f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.5f,8.8f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.3f,7.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-3.1f,2.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.9f,2.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.8f,3.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.6f,1.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.5f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.4f,0.0f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-2.3f,0.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.4f,0.6f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.3f,5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.2f,3.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-2.1f,0.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.9f,0.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.7f,0.1f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.6f,0.4f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.4f,3.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.5f,5.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-1.2f,8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.1f,5.8f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.9f,1.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.7f,2.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.8f,1.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.6f,3.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.5f,3.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.4f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.3f,3.4f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.2f,4.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.1f,2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.1f,-4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.4f,-8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f,-9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.8f,-7.8f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.0f,-2.35f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.2f,-5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.4f,-2.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.6f,-7.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-1.8f,-4.56f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.0f,-5.8f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.2f,-3.7f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.4f,-5.59f);
	glEnd();
	
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.6f,-8.92f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.8f,-5.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-3.0f,-10.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.1f,-6.53f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.3f,-5.85f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.5f,-8.45f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.7f,-2.05f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.8f,-8.99f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.9f,-5.19f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.1f,-5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.2f,-9.58f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.3f,-6.6f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.4f,-2.85f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.6f,-7.25f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.7f,-6.75f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.8f,-9.57f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-4.9f,-3.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-5.1f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.2f,-10.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.3f,-5.58f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.4f,-8.16f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.5f,-10.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.7f,-6.4f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.8f,-10.0f);
	glEnd();
	
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.9f,-8.26f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);		
	glVertex2f(-6.1f,-5.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-6.3f,-2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-6.5f,-2.0f);
	glEnd();
	
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-6.6f,-3.25f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-6.8f,-5.58f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-6.9f,-7.53f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.1f,-0.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.3f,-2.52f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.5f,-3.25f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.7f,-3.22f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.8f,-8.9f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.0f,-10.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.3f,-9.7f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.4f,-2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.5f,-4.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.6f,-3.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.7f,-2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.8f,-6.3f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-9.0f,-2.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.1f,-1.4f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.3f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.5f,-6.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.7f,-5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.8f,-8.7f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.9f,-8.8f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
   glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(0.1f,2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(0.3f,5.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(0.5f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(0.8f,2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.2f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.5f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.7f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.9f,6.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.1f,6.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.3f,5.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(2.5f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.7f,2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.9f,3.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.1f,3.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.3f,5.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(3.5f,6.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.7f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.9f,5.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(4.1f,3.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.4f,5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.6f,8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.8f,6.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(5.0f,5.6f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.2f,8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.4f,5.9f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.5f,9.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.8f,9.35f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.0f,1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.2f,3.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.4f,7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.6f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.8f,0.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.2f,7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.4f,5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.5f,9.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(7.7f,8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.9f,0.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.1f,0.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.3f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.6f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.9f,8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(9.2f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(9.4f,3.5f);
	glEnd();
	
	glPointSize(4);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(9.6f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(10.0f,5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(0.5f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(0.9f,-4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.2f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.5f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.7f,-3.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.0f,-8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.2f,-3.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(2.5f,-9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.8f,-3.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.0f,-8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.2f,-2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.5f,-9.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
   glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(3.8f,-2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.0f,-3.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(4.2f,-9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.5f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.8f,-6.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.0f,-1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.3f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.6f,-9.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(5.8f,-2.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(6.0f,-0.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.3f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.5f,-9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.8f,-4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.0f,-1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.2f,-5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.5f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.7f,-9.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(8.1f,-6.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.3f,-2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.5f,-9.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(8.7f,-6.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.9f,-3.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(9.2f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(9.4f,-1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(9.7f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(10.0f,-7.5f);
	glEnd();
	
	
	
	//sun
   
   // glColor3f(1.0f, 1.0f, 1.0f);  
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);  
    glPushMatrix();
    float Sx = radiusSUN * cosf(angleSUN);
    float Sy = radiusSUN * sinf(angleSUN);
    glColor3f(1.0,0.5,0.1);
    drawSphere(Sx, Sy, 3.0f, 50);
	//glColor3f(1.0,1.0,0.0);  
    glPopMatrix();
   glFlush();

    angleSUN += speedSUN;  
    if (angleSUN >= 2.0f * 3.1415926f)
        angleSUN -= 2.0f * 3.1415926f;
   glutPostRedisplay();
int k;
//text
glColor3f(1.0,1.0,1.0);
char str[]="SUN";
glPushMatrix();
glRasterPos3f(-0.5,0.0,0.0);
for(k=0;k<strlen(str);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[k]);
glPopMatrix();
glFlush();
//mercury
  // glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(1.0f, 1.0f, 1.0f);  
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);  
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f); 
	glColor3f(0.5,0.4,0.4); 
    drawCircle(radius, 100);  
    float x = radius * cosf(angle);
    float y = radius * sinf(angle);
    
    drawSphere(x, y, 0.2f, 30);
	//glColor3f(1.0,1.0,0.0);  
    glPopMatrix();
   glFlush();

    angle += speed;  
    if (angle >= 2.0f * 3.1415926f)
        angle -= 2.0f * 3.1415926f;
   glutPostRedisplay();
   
   //venus
   //glClear(GL_COLOR_BUFFER_BIT);
    //glColor3f(1.0f, 1.0f, 1.0f); 
   glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);  
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f); 
	 glColor3f(0.9,0.7,0.5); 
    drawCircle(radiusv, 200);  
    float xv = radiusv * cosf(anglev);
    float yv = radiusv * sinf(anglev);
   glColor3f(0.9,0.7,0.5);
    drawSphere(xv, yv, 0.3f, 30);
//	glColor3f(1.0,1.0,0.0);  
    glPopMatrix();
    
    anglev += speedv;  
    if (anglev >= 2.0f * 3.1415926f)
        anglev -= 2.0f * 3.1415926f;
   glutPostRedisplay();
   glFlush();
   //earth
  //glClear(GL_COLOR_BUFFER_BIT);
    //glColor3f(1.0f, 1.0f, 1.0f); 
   glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);  
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f); 
	glColor3f(0.0,0.0,1.0); 
    drawCircle(radiusE, 100); 
    float xE = radiusE * cosf(angleE);
    float yE = radiusE * sinf(angleE);
    drawSphere(xE, yE, 0.5f, 30);
//	glColor3f(1.0,1.0,0.0);  
    glPopMatrix();

    angleE += speedE;  
    if (angleE >= 2.0f * 3.1415926f)
        angleE -= 2.0f * 3.1415926f;
   glutPostRedisplay();
   glFlush();
   //mars
   //glClear(GL_COLOR_BUFFER_BIT);
    //glColor3f(1.0f, 1.0f, 1.0f); 
   glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);  
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);  
    glColor3f(1.0,0.0,0.1);
    drawCircle(radiusM, 100); 
    float xM = radiusM * cosf(angleM);
    float yM = radiusM * sinf(angleM);
   
    drawSphere(xM, yM, 0.5f, 30);
//	glColor3f(1.0,1.0,0.0);  
    glPopMatrix();

    angleM += speedE;  
    if (angleM >= 2.0f * 3.1415926f)
        angleM -= 2.0f * 3.1415926f;
   glutPostRedisplay();
  glFlush();
   
   //Jupiter
   
  // glClear(GL_COLOR_BUFFER_BIT);
    //glColor3f(1.0f, 1.0f, 1.0f); 
   glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);  
    glPushMatrix();
     glTranslatef(0.0f, 0.0f, 0.0f); 
     glColor3f(0.6,0.5,0.5);
      drawCircle(radiusJ, 100); 
    float xJ = radiusJ * cosf(angleJ);
    float yJ = radiusJ * sinf(angleJ);
    drawSphere(xJ, yJ, 0.8f, 30);
//	glColor3f(1.0,1.0,0.0);  
    glPopMatrix();

    angleJ += speedJ;  
    if (angleJ >= 2.0f * 3.1415926f)
        angleJ -= 2.0f * 3.1415926f;
   glutPostRedisplay();
   glFlush();
   
   //Saturn
   
   //glClear(GL_COLOR_BUFFER_BIT);
    //glColor3f(1.0f, 1.0f, 1.0f); 
   glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);  
    glPushMatrix();
     glTranslatef(0.0f, 0.0f, 0.0f); 
     glColor3f(0.9, 1, 0.2);
      drawCircle(radiusS, 100); 
    float xS = radiusS * cosf(angleS);
    float yS = radiusS * sinf(angleS);
    drawSphere(xS, yS, 0.5f, 30);
//	glColor3f(1.0,1.0,0.0);  
    glPopMatrix();

    angleS += speedS;  
    if (angleS >= 2.0f * 3.1415926f)
        angleS -= 2.0f * 3.1415926f;
   glutPostRedisplay();
  glFlush();
   //uranus
   
//	glClear(GL_COLOR_BUFFER_BIT);
  //  glColor3f(1.0f, 1.0f, 0.0f); 
   glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);  
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f); 
     glColor3f(0.4,0.8,1.0);
      drawCircle(radiusU, 100); 
    float xU = radiusU * cosf(angleU);
    float yU = radiusU * sinf(angleU);
    drawSphere(xU, yU, 0.5f, 30); 
    glPopMatrix();

    angleU += speedU;  
    if (angleU >= 2.0f * 3.1415926f)
        angleU -= 2.0f * 3.1415926f;
   glutPostRedisplay();
  glFlush();
   
   //neptune
   
   //glClear(GL_COLOR_BUFFER_BIT);
   // glColor3f(1.0f, 1.0f, 0.0f); 
   glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);  
    glPushMatrix();
     glTranslatef(0.0f, 0.0f, 0.0f); 
     glColor3f(0.5,0,1.0);
      drawCircle(radiusN, 100); 
    float xN = radiusN * cosf(angleN);
    float yN = radiusN * sinf(angleN);
    drawSphere(xN, yN, 0.5f, 30); 
    glPopMatrix();

    angleN += speedN;  
    if (angleN >= 2.0f * 3.1415926f)
        angleN -= 2.0f * 3.1415926f;
   glutPostRedisplay();
   
   
   //text
   
  glColor3f(0.5,0.4,0.4);
   glPushMatrix();
   glTranslatef(-0.8,-3.3,0.0);
   glScalef(0.002,0.004,0.0);
   output("Mercury");
   glPopMatrix();
   
	glColor3f(0.9,0.7,0.5);
   glPushMatrix();
   glTranslatef(-2.4,-3.3,0.0);
   glScalef(0.002,0.004,0.0);
   output("Venus");
   glPopMatrix();
   
	glColor3f(0.0,0.0,1.0);
   glPushMatrix();
   glTranslatef(-4.4,-1.3,0.0);
   glScalef(0.002,0.004,0.0);
   output("Earth");
   glPopMatrix();
   
  glColor3f(1.0,0.0,0.1);
   glPushMatrix();
   glTranslatef(-5.3,-0.3,0.0);
   glScalef(0.002,0.004,0.0);
   output("Mars");
   glPopMatrix();
   
    glColor3f(0.6,0.5,0.5);
   glPushMatrix();
   glTranslatef(-6.8,0.7,0.0);
   glScalef(0.002,0.004,0.0);
   output("Jupiter");
   glPopMatrix();
   
     glColor3f(0.9, 1, 0.2);
   glPushMatrix();
   glTranslatef(-7.6,2.3,0.0);
   glScalef(0.002,0.004,0.0);
   output("Saturn");
   glPopMatrix();
   
    glColor3f(0.4,0.8,1.0);
   glPushMatrix();
   glTranslatef(-8.2,3.3,0.0);
   glScalef(0.002,0.004,0.0);
   output("Uranus");
   glPopMatrix();
   
   glColor3f(0.5,0,1.0);
   glPushMatrix();
   glTranslatef(-8.8,5.3,0.0);
   glScalef(0.002,0.004,0.0);
   output("Neptune");
   glPopMatrix();
   
   
   
    glDisable(GL_BLEND);
   
   glutSwapBuffers();    
}
void fourth() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    // draw first point
    glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glVertex2f(-8.0f, -5.0f);
    glEnd();

    // draw second point
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
    glPointSize(4.0f);
    glBegin(GL_POINTS);
    glVertex2f(-10.0f, -4.0f);
    glEnd();

    // draw third point
    glColor4f(1.0f, 1.0f, 1.0f,1.0f);
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glVertex2f(3.0f, 7.0f);
    glEnd();
    
    glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.0f,8.7f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-10.0f,7.5f);
	glEnd();
	
	glPointSize(4);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-6.0f,2.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.0f,5.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.0f,2.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.0f,6.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.0f,8.5f);
	glEnd();
	

	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.0f,8.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-7.0f,8.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.0f,2.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-6.5f,7.8f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-5.0f,8.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.0f,7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.5f,8.2f);
	glEnd();
	
	glPointSize(4);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-5.9f,6.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.2f,9.7f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.5f,8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-4.8,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.3f,2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.6f,1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.0f,1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.4f,1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-4.7f,2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.9f,1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.8f,1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.7f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.5f,8.8f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.3f,7.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-3.1f,2.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.9f,2.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.8f,3.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.6f,1.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.5f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.4f,0.0f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-2.3f,0.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.4f,0.6f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.3f,5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.2f,3.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-2.1f,0.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.9f,0.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.7f,0.1f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.6f,0.4f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.4f,3.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.5f,5.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-1.2f,8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.1f,5.8f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.9f,1.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.7f,2.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.8f,1.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.6f,3.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.5f,3.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.4f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.3f,3.4f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.2f,4.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.1f,2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.1f,-4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.4f,-8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f,-9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-0.8f,-7.8f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.0f,-2.35f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.2f,-5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.4f,-2.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-1.6f,-7.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-1.8f,-4.56f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.0f,-5.8f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.2f,-3.7f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.4f,-5.59f);
	glEnd();
	
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.6f,-8.92f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-2.8f,-5.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-3.0f,-10.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.1f,-6.53f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.3f,-5.85f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.5f,-8.45f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.7f,-2.05f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.8f,-8.99f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-3.9f,-5.19f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.1f,-5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.2f,-9.58f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.3f,-6.6f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.4f,-2.85f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.6f,-7.25f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.7f,-6.75f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-4.8f,-9.57f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-4.9f,-3.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-5.1f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.2f,-10.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.3f,-5.58f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.4f,-8.16f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.5f,-10.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.7f,-6.4f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.8f,-10.0f);
	glEnd();
	
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-5.9f,-8.26f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);		
	glVertex2f(-6.1f,-5.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-6.3f,-2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-6.5f,-2.0f);
	glEnd();
	
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-6.6f,-3.25f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-6.8f,-5.58f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-6.9f,-7.53f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.1f,-0.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.3f,-2.52f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.5f,-3.25f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.7f,-3.22f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-7.8f,-8.9f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.0f,-10.0f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.3f,-9.7f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.4f,-2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.5f,-4.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.6f,-3.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.7f,-2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-8.8f,-6.3f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(-9.0f,-2.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.1f,-1.4f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.3f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.5f,-6.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.7f,-5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.8f,-8.7f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(-9.9f,-8.8f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
   glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(0.1f,2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(0.3f,5.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(0.5f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(0.8f,2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.2f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.5f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.7f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.9f,6.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.1f,6.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.3f,5.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(2.5f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.7f,2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.9f,3.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.1f,3.2f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.3f,5.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(3.5f,6.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.7f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.9f,5.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(4.1f,3.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.4f,5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.6f,8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.8f,6.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(5.0f,5.6f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.2f,8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.4f,5.9f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.5f,9.3f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.8f,9.35f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.0f,1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.2f,3.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.4f,7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.6f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.8f,0.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.2f,7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.4f,5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.5f,9.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(7.7f,8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.9f,0.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.1f,0.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.3f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.6f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.9f,8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(9.2f,4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(9.4f,3.5f);
	glEnd();
	
	glPointSize(4);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(9.6f,9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(10.0f,5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(0.5f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(0.9f,-4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.2f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.5f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(1.7f,-3.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.0f,-8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.2f,-3.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(2.5f,-9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(2.8f,-3.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.0f,-8.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.2f,-2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(3.5f,-9.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
   glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(3.8f,-2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.0f,-3.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(4.2f,-9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.5f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(4.8f,-6.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.0f,-1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.3f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(5.6f,-9.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(5.8f,-2.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(6.0f,-0.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.3f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.5f,-9.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(6.8f,-4.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.0f,-1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.2f,-5.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.5f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(7.7f,-9.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(8.1f,-6.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.3f,-2.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.5f,-9.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(8.7f,-6.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(8.9f,-3.5f);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(9.2f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(9.4f,-1.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, blink_state ? 1.0f : 0.0f);
	glVertex2f(9.7f,-7.5f);
	glEnd();
	
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glVertex2f(10.0f,-7.5f);
	glEnd();
	
	
	
	
	
	
	//sun
   
   // glColor3f(1.0f, 1.0f, 1.0f);  
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);  
    glPushMatrix();
    float Sx = radiusSUN * cosf(angleSUN);
    float Sy = radiusSUN * sinf(angleSUN);
    glColor3f(1.0,0.5,0.1);
    drawSphere(Sx, Sy, 3.0f, 50);
	//glColor3f(1.0,1.0,0.0);  
    glPopMatrix();
   glFlush();

    angleSUN += speedSUN;  
    if (angleSUN >= 2.0f * 3.1415926f)
        angleSUN -= 2.0f * 3.1415926f;
   glutPostRedisplay();
int k;
//text
glColor3f(1.0,1.0,1.0);
char str[]="SUN";
glPushMatrix();
glRasterPos3f(-0.5,0.0,0.0);
for(k=0;k<strlen(str);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[k]);
glPopMatrix();
glFlush();
//mercury
  // glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(1.0f, 1.0f, 1.0f);  
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);  
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f); 
	glColor3f(0.5,0.4,0.4); 
    drawCircle(radius, 100);  
    float x = radius * cosf(angle);
    float y = radius * sinf(angle);
    
    drawSphere(x, y, 0.2f, 30);
	//glColor3f(1.0,1.0,0.0);  
    glPopMatrix();
   glFlush();

    angle += speed;  
    if (angle >= 2.0f * 3.1415926f)
        angle -= 2.0f * 3.1415926f;
   glutPostRedisplay();
   
   //venus
   //glClear(GL_COLOR_BUFFER_BIT);
    //glColor3f(1.0f, 1.0f, 1.0f); 
   glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);  
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f); 
	 glColor3f(0.9,0.7,0.5); 
    drawCircle(radiusv, 200);  
    float xv = radiusv * cosf(anglev);
    float yv = radiusv * sinf(anglev);
   glColor3f(0.9,0.7,0.5);
    drawSphere(xv, yv, 0.3f, 30);
//	glColor3f(1.0,1.0,0.0);  
    glPopMatrix();
    
    anglev += speedv;  
    if (anglev >= 2.0f * 3.1415926f)
        anglev -= 2.0f * 3.1415926f;
   glutPostRedisplay();
   glFlush();
   //earth
  //glClear(GL_COLOR_BUFFER_BIT);
    //glColor3f(1.0f, 1.0f, 1.0f); 
   glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);  
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f); 
	glColor3f(0.0,0.0,1.0); 
    drawCircle(radiusE, 100); 
    float xE = radiusE * cosf(angleE);
    float yE = radiusE * sinf(angleE);
    drawSphere(xE, yE, 0.5f, 30);
//	glColor3f(1.0,1.0,0.0);  
    glPopMatrix();

    angleE += speedE;  
    if (angleE >= 2.0f * 3.1415926f)
        angleE -= 2.0f * 3.1415926f;
   glutPostRedisplay();
   glFlush();
   //mars
   //glClear(GL_COLOR_BUFFER_BIT);
    //glColor3f(1.0f, 1.0f, 1.0f); 
   glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);  
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);  
    glColor3f(1.0,0.0,0.1);
    drawCircle(radiusM, 100); 
    float xM = radiusM * cosf(angleM);
    float yM = radiusM * sinf(angleM);
   
    drawSphere(xM, yM, 0.5f, 30);
//	glColor3f(1.0,1.0,0.0);  
    glPopMatrix();

    angleM += speedE;  
    if (angleM >= 2.0f * 3.1415926f)
        angleM -= 2.0f * 3.1415926f;
   glutPostRedisplay();
  glFlush();
   
   //Jupiter
   
  // glClear(GL_COLOR_BUFFER_BIT);
    //glColor3f(1.0f, 1.0f, 1.0f); 
   glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);  
    glPushMatrix();
     glTranslatef(0.0f, 0.0f, 0.0f); 
     glColor3f(0.6,0.5,0.5);
      drawCircle(radiusJ, 100); 
    float xJ = radiusJ * cosf(angleJ);
    float yJ = radiusJ * sinf(angleJ);
    drawSphere(xJ, yJ, 0.8f, 30);
//	glColor3f(1.0,1.0,0.0);  
    glPopMatrix();

    angleJ += speedJ;  
    if (angleJ >= 2.0f * 3.1415926f)
        angleJ -= 2.0f * 3.1415926f;
   glutPostRedisplay();
   glFlush();
   
   //Saturn
   
   //glClear(GL_COLOR_BUFFER_BIT);
    //glColor3f(1.0f, 1.0f, 1.0f); 
   glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);  
    glPushMatrix();
     glTranslatef(0.0f, 0.0f, 0.0f); 
     glColor3f(0.9, 1, 0.2);
      drawCircle(radiusS, 100); 
    float xS = radiusS * cosf(angleS);
    float yS = radiusS * sinf(angleS);
    drawSphere(xS, yS, 0.5f, 30);
//	glColor3f(1.0,1.0,0.0);  
    glPopMatrix();

    angleS += speedS;  
    if (angleS >= 2.0f * 3.1415926f)
        angleS -= 2.0f * 3.1415926f;
   glutPostRedisplay();
  glFlush();
   //uranus
   
//	glClear(GL_COLOR_BUFFER_BIT);
  //  glColor3f(1.0f, 1.0f, 0.0f); 
   glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);  
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f); 
     glColor3f(0.4,0.8,1.0);
      drawCircle(radiusU, 100); 
    float xU = radiusU * cosf(angleU);
    float yU = radiusU * sinf(angleU);
    drawSphere(xU, yU, 0.5f, 30); 
    glPopMatrix();

    angleU += speedU;  
    if (angleU >= 2.0f * 3.1415926f)
        angleU -= 2.0f * 3.1415926f;
   glutPostRedisplay();
  glFlush();
   
   //neptune
   
   //glClear(GL_COLOR_BUFFER_BIT);
   // glColor3f(1.0f, 1.0f, 0.0f); 
   glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);  
    glPushMatrix();
     glTranslatef(0.0f, 0.0f, 0.0f); 
     glColor3f(0.5,0,1.0);
      drawCircle(radiusN, 100); 
    float xN = radiusN * cosf(angleN);
    float yN = radiusN * sinf(angleN);
    drawSphere(xN, yN, 0.5f, 30); 
    glPopMatrix();

    angleN += speedN;  
    if (angleN >= 2.0f * 3.1415926f)
        angleN -= 2.0f * 3.1415926f;
   glutPostRedisplay();
   
   
   //text
   
  glColor3f(0.5,0.4,0.4);
   glPushMatrix();
   glTranslatef(-0.8,-3.3,0.0);
   glScalef(0.002,0.004,0.0);
   output("Mercury");
   glPopMatrix();
   
	glColor3f(0.9,0.7,0.5);
   glPushMatrix();
   glTranslatef(-2.4,-3.3,0.0);
   glScalef(0.002,0.004,0.0);
   output("Venus");
   glPopMatrix();
   
	glColor3f(0.0,0.0,1.0);
   glPushMatrix();
   glTranslatef(-4.4,-1.3,0.0);
   glScalef(0.002,0.004,0.0);
   output("Earth");
   glPopMatrix();
   
  glColor3f(1.0,0.0,0.1);
   glPushMatrix();
   glTranslatef(-5.3,-0.3,0.0);
   glScalef(0.002,0.004,0.0);
   output("Mars");
   glPopMatrix();
   
    glColor3f(0.6,0.5,0.5);
   glPushMatrix();
   glTranslatef(-6.8,0.7,0.0);
   glScalef(0.002,0.004,0.0);
   output("Jupiter");
   glPopMatrix();
   
     glColor3f(0.9, 1, 0.2);
   glPushMatrix();
   glTranslatef(-7.6,2.3,0.0);
   glScalef(0.002,0.004,0.0);
   output("Saturn");
   glPopMatrix();
   
    glColor3f(0.4,0.8,1.0);
   glPushMatrix();
   glTranslatef(-8.2,3.3,0.0);
   glScalef(0.002,0.004,0.0);
   output("Uranus");
   glPopMatrix();
   
   glColor3f(0.5,0,1.0);
   glPushMatrix();
   glTranslatef(-8.8,5.3,0.0);
   glScalef(0.002,0.004,0.0);
   output("Neptune");
   glPopMatrix();
   glDisable(GL_BLEND);
   
   glutSwapBuffers();
  // glFlush();
     
}
 
void fifth()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(-5.7,0.0,0.0);
	glScalef(0.016,0.016,0.0);
	output("THANK YOU");
	glPopMatrix();
	glutSwapBuffers();
}
void display1()
{
	
if(slide==0)
{
first();
glutPostRedisplay();
}
if(slide==1)
{
second();
glutPostRedisplay();
}
if(slide==2)
{
third();
glutPostRedisplay();
}
if(slide==3)
{
fourth();
glutPostRedisplay();
}
if(slide==4)
{
fifth();
glutPostRedisplay();
}
}
void key(unsigned char key,int x,int y)
{
if(key=='A'||key=='a')
{
slide=0;
glutPostRedisplay();
}
if(key=='B'||key=='b')
{
slide=1;
glutPostRedisplay();
}
if(key=='C'||key=='c')
{
slide=2;
glutPostRedisplay();
}
if(key=='D'||key=='d')
{

slide=3;
glutPostRedisplay();
}
if(key=='E'||key=='e')
{
slide=4;
glutPostRedisplay();
} 
}
int main(int argc, char **argv)
 { 
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
 glutInitWindowSize(1200,800); 
 glutInitWindowPosition(0,0); 
 glutCreateWindow("The Solar System");
// glMatrixMode(GL_PROJECTION);
// glLoadIdentity();  
 glClearColor(0.0,0.0,0.0,1.0);
 gluOrtho2D(-10.0,10.0,-10.0,10.0);
 glutDisplayFunc(display1);
 glutIdleFunc(update);
 glutKeyboardFunc(key); 
 glutFullScreen();
 glutMainLoop(); 
 return 0;
}

