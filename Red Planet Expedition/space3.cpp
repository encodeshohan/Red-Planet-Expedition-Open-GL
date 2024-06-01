#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>

bool space3_main_rocket_rotate = false;

bool space3_sky_move = true;

bool space3_Is_main_rocket_Y_move = true;

bool space3_Is_main_rocket_X_move = false;

float asteroid_position = 0.0f;

float space3_sky_position = 0.0f;

float space3_main_rocket_Y_position = -25.0f;

float space3_main_rocket_X_position = -20.0f;

float main_rocket_angle = 0.0f;


//   MD. SHOHANUR RAHMAN SHOHAN

void space3_circle(float radius, float xc, float yc, float r, float g, float b)
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

// ID: O_029
void space3_sky()
{
    glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex2f(10,10);
	glVertex2f(140,10);
	glVertex2f(140,90);
	glVertex2f(10,90);
	glEnd();
}

// ID: O_030
void space3_stars(){
    // red 1
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(space3_sky_position, 0.0, 0.0);
    space3_circle(0.3, 150, 13, 255,0,0);
    space3_circle(0.3, 150, 15, 255,0,0);
    space3_circle(0.3, 150, 18, 255,0,0);
    space3_circle(0.3, 150, 23, 255,0,0);
    space3_circle(0.3, 150, 28, 255,0,0);
    space3_circle(0.3, 150, 33, 255,0,0);
    space3_circle(0.3, 150, 38, 255,0,0);
    space3_circle(0.3, 150, 43, 255,0,0);
    space3_circle(0.3, 150, 48, 255,0,0);
    space3_circle(0.3, 150, 53, 255,0,0);
    space3_circle(0.3, 150, 58, 255,0,0);
    space3_circle(0.3, 150, 63, 255,0,0);
    space3_circle(0.3, 150, 68, 255,0,0);
    space3_circle(0.3, 150, 73, 255,0,0);
    space3_circle(0.3, 150, 78, 255,0,0);
    space3_circle(0.3, 150, 83, 255,0,0);
    space3_circle(0.3, 150, 88, 255,0,0);

    // yellow
    space3_circle(0.3, 170, 20, 255,255,0);
    space3_circle(0.3, 170, 15, 255,255,0);
    space3_circle(0.3, 170, 25, 255,255,0);
    space3_circle(0.3, 170, 30, 255,255,0);
    space3_circle(0.3, 170, 35, 255,255,0);
    space3_circle(0.3, 170, 40, 255,255,0);
    space3_circle(0.3, 170, 45, 255,255,0);
    space3_circle(0.3, 170, 50, 255,255,0);
    space3_circle(0.3, 170, 55, 255,255,0);
    space3_circle(0.3, 170, 60, 255,255,0);
    space3_circle(0.3, 170, 65, 255,255,0);
    space3_circle(0.3, 170, 70, 255,255,0);
    space3_circle(0.3, 170, 75, 255,255,0);
    space3_circle(0.3, 170, 80, 255,255,0);
    space3_circle(0.3, 170, 85, 255,255,0);

    //red
    space3_circle(0.3, 190, 13, 255,0,0);
    space3_circle(0.3, 190, 15, 255,0,0);
    space3_circle(0.3, 190, 18, 255,0,0);
    space3_circle(0.3, 190, 23, 255,0,0);
    space3_circle(0.3, 190, 28, 255,0,0);
    space3_circle(0.3, 190, 33, 255,0,0);
    space3_circle(0.3, 190, 38, 255,0,0);
    space3_circle(0.3, 190, 43, 255,0,0);
    space3_circle(0.3, 190, 48, 255,0,0);
    space3_circle(0.3, 190, 53, 255,0,0);
    space3_circle(0.3, 190, 58, 255,0,0);
    space3_circle(0.3, 190, 63, 255,0,0);
    space3_circle(0.3, 190, 68, 255,0,0);
    space3_circle(0.3, 190, 73, 255,0,0);
    space3_circle(0.3, 190, 78, 255,0,0);
    space3_circle(0.3, 190, 83, 255,0,0);
    space3_circle(0.3, 190, 88, 255,0,0);

     // yellow
    space3_circle(0.3, 210, 20, 255,255,0);
    space3_circle(0.3, 210, 15, 255,255,0);
    space3_circle(0.3, 210, 25, 255,255,0);
    space3_circle(0.3, 210, 30, 255,255,0);
    space3_circle(0.3, 210, 35, 255,255,0);
    space3_circle(0.3, 210, 40, 255,255,0);
    space3_circle(0.3, 210, 45, 255,255,0);
    space3_circle(0.3, 210, 50, 255,255,0);
    space3_circle(0.3, 210, 55, 255,255,0);
    space3_circle(0.3, 210, 60, 255,255,0);
    space3_circle(0.3, 210, 65, 255,255,0);
    space3_circle(0.3, 210, 70, 255,255,0);
    space3_circle(0.3, 210, 75, 255,255,0);
    space3_circle(0.3, 210, 80, 255,255,0);
    space3_circle(0.3, 210, 85, 255,255,0);

    //red
    space3_circle(0.3, 230, 13, 255,0,0);
    space3_circle(0.3, 230, 15, 255,0,0);
    space3_circle(0.3, 230, 18, 255,0,0);
    space3_circle(0.3, 230, 23, 255,0,0);
    space3_circle(0.3, 230, 28, 255,0,0);
    space3_circle(0.3, 230, 33, 255,0,0);
    space3_circle(0.3, 230, 38, 255,0,0);
    space3_circle(0.3, 230, 43, 255,0,0);
    space3_circle(0.3, 230, 48, 255,0,0);
    space3_circle(0.3, 230, 53, 255,0,0);
    space3_circle(0.3, 230, 58, 255,0,0);
    space3_circle(0.3, 230, 63, 255,0,0);
    space3_circle(0.3, 230, 68, 255,0,0);
    space3_circle(0.3, 230, 73, 255,0,0);
    space3_circle(0.3, 230, 78, 255,0,0);
    space3_circle(0.3, 230, 83, 255,0,0);
    space3_circle(0.3, 230, 88, 255,0,0);

    // yellow
    space3_circle(0.3, 250, 20, 255,255,0);
    space3_circle(0.3, 250, 15, 255,255,0);
    space3_circle(0.3, 250, 25, 255,255,0);
    space3_circle(0.3, 250, 30, 255,255,0);
    space3_circle(0.3, 250, 35, 255,255,0);
    space3_circle(0.3, 250, 40, 255,255,0);
    space3_circle(0.3, 250, 45, 255,255,0);
    space3_circle(0.3, 250, 50, 255,255,0);
    space3_circle(0.3, 250, 55, 255,255,0);
    space3_circle(0.3, 250, 60, 255,255,0);
    space3_circle(0.3, 250, 65, 255,255,0);
    space3_circle(0.3, 250, 70, 255,255,0);
    space3_circle(0.3, 250, 75, 255,255,0);
    space3_circle(0.3, 250, 80, 255,255,0);
    space3_circle(0.3, 250, 85, 255,255,0);

    //red
    space3_circle(0.3, 270, 13, 255,0,0);
    space3_circle(0.3, 270, 15, 255,0,0);
    space3_circle(0.3, 270, 18, 255,0,0);
    space3_circle(0.3, 270, 23, 255,0,0);
    space3_circle(0.3, 270, 28, 255,0,0);
    space3_circle(0.3, 270, 33, 255,0,0);
    space3_circle(0.3, 270, 38, 255,0,0);
    space3_circle(0.3, 270, 43, 255,0,0);
    space3_circle(0.3, 270, 48, 255,0,0);
    space3_circle(0.3, 270, 53, 255,0,0);
    space3_circle(0.3, 270, 58, 255,0,0);
    space3_circle(0.3, 270, 63, 255,0,0);
    space3_circle(0.3, 270, 68, 255,0,0);
    space3_circle(0.3, 270, 73, 255,0,0);
    space3_circle(0.3, 270, 78, 255,0,0);
    space3_circle(0.3, 270, 83, 255,0,0);
    space3_circle(0.3, 270, 88, 255,0,0);

    // yellow
    space3_circle(0.3, 290, 20, 255,255,0);
    space3_circle(0.3, 290, 15, 255,255,0);
    space3_circle(0.3, 290, 25, 255,255,0);
    space3_circle(0.3, 290, 30, 255,255,0);
    space3_circle(0.3, 290, 35, 255,255,0);
    space3_circle(0.3, 290, 40, 255,255,0);
    space3_circle(0.3, 290, 45, 255,255,0);
    space3_circle(0.3, 290, 50, 255,255,0);
    space3_circle(0.3, 290, 55, 255,255,0);
    space3_circle(0.3, 290, 60, 255,255,0);
    space3_circle(0.3, 290, 65, 255,255,0);
    space3_circle(0.3, 290, 70, 255,255,0);
    space3_circle(0.3, 290, 75, 255,255,0);
    space3_circle(0.3, 290, 80, 255,255,0);
    space3_circle(0.3, 290, 85, 255,255,0);

    glPopMatrix();
}


// ID: O_031
void space3_main_rocket()
{
    //left wing
    glPushMatrix();
    glTranslatef(space3_main_rocket_X_position , space3_main_rocket_Y_position, 0.0f);
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

	space3_circle(0.7715903122594, 86.5,48,176,184,186);
    glPopMatrix();
}

// ID: A_013
void space3_main_rocket_update(int value)
{
    if (space3_Is_main_rocket_Y_move)
    {
        space3_main_rocket_Y_position += 0.2;
        if (space3_main_rocket_Y_position > -1.0f)
        {
            space3_Is_main_rocket_Y_move = false; // Stop upward movement
            /*glPushMatrix();
            glRotatef(-90, 0.0f, 0.0f,1.0f);
            space3_main_rocket();
            glPopMatrix*/

                }
            }
    glutPostRedisplay();
    glutTimerFunc(20, space3_main_rocket_update, 0);
}

// ID: A_014
void rotate_rocket(int value) {

    //main_rocket_angle-=2.0f;
    if(main_rocket_angle > -92.0)
    {
        main_rocket_angle-=0.3f;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, rotate_rocket, 0); //Notify GLUT to call update again in 25 milliseconds
}

// ID: A_015
void space3_sky_update(int value) {

if (space3_sky_move){
     space3_sky_position -= 0.3;
if(space3_sky_position < -180)
{
space3_sky_position = -130.0;
}
}
 glutPostRedisplay();
    glutTimerFunc(30, space3_sky_update, 0);
}

//ID: A_016
void space3_Keypress(unsigned char key, int x, int y)
{
	switch (key) {
        case 'm':
            glutDisplayFunc(mars_display);
            init_mars();

    glutPostRedisplay();
    }
}


void space3_display() {
    glClear(GL_COLOR_BUFFER_BIT);
    space3_sky();
    space3_stars();
    if(space3_Is_main_rocket_Y_move == false)
        {
                glPushMatrix();
                glTranslatef(74, 15.2+35,0);
                glRotatef(main_rocket_angle, 0,0,1);
                glTranslatef(-74, -15.2-35,0);
                space3_main_rocket();
                glPopMatrix();
        }
        if(space3_Is_main_rocket_Y_move == true)
        {
            space3_main_rocket();
        }
    //space3_main_rocket();
    glutSwapBuffers();
	glFlush();  // Render now
}



void init_space3(){
    glutTimerFunc(20, space3_main_rocket_update, 0); //Add a timer
	glutTimerFunc(20, space3_sky_update, 0); //Add a timer
	glutTimerFunc(20, rotate_rocket, 0); //Add a timer
	glutKeyboardFunc(space3_Keypress);
}


/* Main function: GLUT runs as a console application starting at main()  */
/*int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(1920, 1080);// Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test");
	//gluOrtho2D(-0.1,0.7,-0.1,0.3); // Create a window with the given title
	//glutInitWindowSize(320, 320);// Set the window's initial width & height
	glutDisplayFunc(space3_display);// Register display callback handler for window re-paint
	gluOrtho2D(10,140,10,90);
	glutTimerFunc(20, space3_main_rocket_update, 0); //Add a timer
	glutTimerFunc(20, space3_sky_update, 0); //Add a timer
	glutTimerFunc(20, rotate_rocket, 0); //Add a timer
	//glutKeyboardFunc(stand_Keypress);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
*/
