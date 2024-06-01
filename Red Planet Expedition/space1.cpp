#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>


bool space1_Is_rocket_move = true;

float space1_rocket_position = -25.0f;


//   MD. SHOHANUR RAHMAN SHOHAN

void space1_circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
}



// ID: O_018
void space1_sky()
{
    glBegin(GL_POLYGON);
	glColor3ub(227, 243, 255);
	glVertex2f(10,10);
	glVertex2f(140,10);
	glVertex2f(140,90);
	glVertex2f(10,90);
	glEnd();
}






// ID: O_019
void space1_left_rocket()
{
    // bottom to top
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.0f, space1_rocket_position, 0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(79.6,36.6);
	glVertex2f(83.4,36.6);
	glVertex2f(83,37);
	glVertex2f(80,37);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2f(83,37);
	glVertex2f(80,37);
	glVertex2f(80,42);
	glVertex2f(83,42);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(191, 128, 64);
	glVertex2f(80,42);
	glVertex2f(83,42);
	glVertex2f(83,45);
	glVertex2f(80,45);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2f(80,45);
	glVertex2f(83,45);
	glVertex2f(83,50);
	glVertex2f(80,50);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);  //red
	glVertex2f(80,50);
	glVertex2f(83,50);
	glVertex2f(82.8,50.6);
	glVertex2f(80.2,50.6);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);  //red
	glVertex2f(82.8,50.6);
	glVertex2f(80.2,50.6);
	glVertex2f(80.4,51.2);
	glVertex2f(82.6,51.2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);  //red
	glVertex2f(80.4,51.2);
	glVertex2f(82.6,51.2);
	glVertex2f(82.2,51.8);
	glVertex2f(80.8,51.8);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);  //red
	glVertex2f(82.2,51.8);
	glVertex2f(80.8,51.8);
	glVertex2f(81.5,52.5);
	glEnd();

	//flag
	glBegin(GL_POLYGON);
	glColor3ub(0,106,78);  //green
	glVertex2f(80.6,47.4);
	glVertex2f(82.4,47.4);
	glVertex2f(82.4,48.4);
	glVertex2f(80.6,48.4);
	glEnd();

	space1_circle(0.3197628561594, 81.5, 47.9, 244,42,65);
	glPopMatrix();
}

// ID: O_020
void space1_right_rocket()
{
    //bottom to top
    glPushMatrix();
    glTranslatef(0.0f, space1_rocket_position, 0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(89.6,36.6);
	glVertex2f(93.4,36.6);
	glVertex2f(93,37);
	glVertex2f(90,37);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2f(90,37);
	glVertex2f(93,37);
	glVertex2f(93,42);
	glVertex2f(90,42);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(191, 128, 64);
	glVertex2f(90,42);
	glVertex2f(93,42);
	glVertex2f(93,45);
	glVertex2f(90,45);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2f(93,45);
	glVertex2f(90,45);
	glVertex2f(90,50);
	glVertex2f(93,50);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);  //red
	glVertex2f(90,50);
	glVertex2f(93,50);
	glVertex2f(92.8,50.6);
	glVertex2f(90.2,50.6);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);  //red
	glVertex2f(92.8,50.6);
	glVertex2f(90.2,50.6);
	glVertex2f(90.4,51.2);
	glVertex2f(92.6,51.2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);  //red
	glVertex2f(90.4,51.2);
	glVertex2f(92.6,51.2);
	glVertex2f(92.2,51.8);
	glVertex2f(90.8,51.8);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);  //red
	glVertex2f(92.2,51.8);
	glVertex2f(90.8,51.8);
	glVertex2f(91.5,52.5);
	glEnd();

	//flag
	glBegin(GL_POLYGON);
	glColor3ub(0,106,78);  //green
	glVertex2f(90.6,47.4);
	glVertex2f(92.4,47.4);
	glVertex2f(92.4,48.4);
	glVertex2f(90.6,48.4);
	glEnd();

	space1_circle(0.3197628561594, 91.5, 47.9, 244,42,65);
	glPopMatrix();
}


// ID: O_021
void space1_middle_rocket()
{
    // bottom to top
    glPushMatrix();
    glTranslatef(0.0f, space1_rocket_position, 0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(83.2,36.2);
	glVertex2f(89.8,36.2);
	glVertex2f(89.4,36.6);
	glVertex2f(83.6,36.6);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(191, 128, 64);
	glVertex2f(89.4,36.6);
	glVertex2f(83.6,36.6);
	glVertex2f(83.6,51.8);
	glVertex2f(89.4,51.8);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);
	glVertex2f(83.6,51.8);
	glVertex2f(89.4,51.8);
	glVertex2f(88.8,54.5);
	glVertex2f(84.2,54.6);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);
	glVertex2f(88.8,54.5);
	glVertex2f(84.2,54.6);
	glVertex2f(85.2,56.2);
	glVertex2f(87.8,56.2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);
	glVertex2f(85.2,56.2);
	glVertex2f(87.8,56.2);
	glVertex2f(86.5,57.5);
	glEnd();
	glPopMatrix();
}

// ID: O_023
void space1_main_rocket()
{
    //left wing
    glPushMatrix();
    glTranslatef(0.0f, space1_rocket_position, 0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);
	glVertex2f(82.4,41.2);
	glVertex2f(82.8,38.2);
	glVertex2f(83.3,38.9);
    glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);
	glVertex2f(83.3,38.9);
	glVertex2f(82.4,41.2);
	glVertex2f(82.7,43.2);
	glVertex2f(84.2,40);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);
	glVertex2f(82.7,43.2);
	glVertex2f(84.2,40);
	glVertex2f(85.046903998996, 40.5273226982626);
	glVertex2f(83.3,44.5);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);
	glVertex2f(83.3,44.5);
	glVertex2f(85.046903998996, 40.5273226982626);
	glVertex2f(84.4,43);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);
	glVertex2f(83.3,44.5);
	glVertex2f(84.4,43);
	glVertex2f(84,45.5);
	glEnd();

	//right wing
    glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);
	glVertex2f(89.7,38.8);
	glVertex2f(90.2,38.2);
	glVertex2f(90.6,41.2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);
	glVertex2f(89.7,38.8);
	glVertex2f(90.6,41.2);
	glVertex2f(90.3,43.2);
	glVertex2f(88.8,40);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);
	glVertex2f(90.3,43.2);
	glVertex2f(88.8,40);
	glVertex2f(88,40.5);
	glVertex2f(89.7,44.45);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);
	glVertex2f(89.7,44.45);
	glVertex2f(89,45.5);
	glVertex2f(88.6,43);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);
	glVertex2f(88.8,40);
	glVertex2f(88,40.5);
	glVertex2f(88.6,43);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 51, 51);
	glVertex2f(88,40.5);
	glVertex2f(89.7,44.45);
	glVertex2f(88.6,43);
	glEnd();

	// body
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2f(85.4,39.4);
	glVertex2f(87.6,39.4);
	glVertex2f(88.6,43);
	glVertex2f(84.4,43);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2f(88.6,43);
	glVertex2f(84.4,43);
	glVertex2f(84,45.5);
	glVertex2f(89,45.5);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2f(84,45.5);
	glVertex2f(89,45.5);
	glVertex2f(88.8,47.4);
	glVertex2f(84.2,47.4);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2f(88.8,47.4);
	glVertex2f(84.2,47.4);
	glVertex2f(84.8,49.6);
	glVertex2f(88.2,49.6);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2f(84.8,49.6);
	glVertex2f(88.2,49.6);
	glVertex2f(87.8,50.6);
	glVertex2f(85.2,50.6);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2f(87.8,50.6);
	glVertex2f(85.2,50.6);
	glVertex2f(85.6,51.6);
	glVertex2f(87.4,51.6);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 0);
	glVertex2f(85.6,51.6);
	glVertex2f(87.4,51.6);
	glVertex2f(86.5,52.9);
	glEnd();

	// door
	glBegin(GL_POLYGON);
	glColor3ub(61, 61, 92);
	glVertex2f(85.5,42);
	glVertex2f(87.5,42);
	glVertex2f(87.5,45);
	glVertex2f(85.5,45);
	glEnd();

	space1_circle(0.7715903122594, 86.5,48,176,184,186);
    glPopMatrix();
}



//ID: A_008
void space1_rocket_update(int value){
    if (space1_Is_rocket_move) {
            space1_rocket_position +=0.2;
        if(space1_rocket_position > 30){
            space1_Is_rocket_move = false;
        }
        /*else{
            glutDisplayFunc(mars);
            init_mars();
        */
    }
    glutPostRedisplay();
    glutTimerFunc(10, space1_rocket_update, 0);
}

void space1_display() {
    space1_sky();
    space1_left_rocket();
    space1_right_rocket();
    space1_middle_rocket();
    space1_main_rocket();
    glutSwapBuffers();
    if(space1_rocket_position>30){
        glutDisplayFunc(space2_display);
            init_space2();
    }
	glFlush();  // Render now
}

void init_space1()
{
    glutTimerFunc(20, space1_rocket_update, 0); //Add a timer
}

/* Main function: GLUT runs as a console application starting at main()  */
/*int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(1920, 1080);// Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test");
	//gluOrtho2D(-0.1,0.7,-0.1,0.3); // Create a window with the given title
	//glutInitWindowSize(320, 320);// Set the window's initial width & height
	glutDisplayFunc(space1_display);// Register display callback handler for window re-paint
	gluOrtho2D(10,140,10,90);
	glutTimerFunc(20, space1_rocket_update, 0); //Add a timer
	//glutKeyboardFunc(stand_Keypress);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}*/
