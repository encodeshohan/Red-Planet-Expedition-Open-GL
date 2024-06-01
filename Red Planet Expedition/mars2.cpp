#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>


bool Is_rover_moving = true;

float rover_move = 0.0f;
float mars2_sky_planet_move_angle = 0.0;


//   MD. SHOHANUR RAHMAN SHOHAN

void mars2_circle(float radius, float xc, float yc, float r, float g, float b)
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

// ID: O_041
void mars2_sky()
{
    glBegin(GL_POLYGON);
	glColor3ub(149, 67, 69);
	glVertex2f(10,40);
	glVertex2f(140,40);
	glVertex2f(140,90);
	glVertex2f(10,90);
    glEnd();
}

// ID: O_042
void mars2_left_mountain()
{
    // from left
    glBegin(GL_POLYGON);
	glColor3ub(108, 7, 46);
	glVertex2f(10,38);
	glVertex2f(10,40);
	glVertex2f(15,45);
	glVertex2f(16,40);
	glVertex2f(16,38);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(108, 7, 46);
	glVertex2f(16,38);
	glVertex2f(16,40);
	glVertex2f(17,42);
	glVertex2f(20,39.5);
	glVertex2f(20,38);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(108, 7, 46);
	glVertex2f(20,39.5);
	glVertex2f(20,38);
	glVertex2f(26,38);
	glVertex2f(21.5,40);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(248, 147, 103);
	glVertex2f(15,45);
	glVertex2f(19.4926433041894, 42.4816657336396);
	glVertex2f(19.5,44.5);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(128, 14, 47);
	glVertex2f(19.5,44.5);
	glVertex2f(22.2,41.2);
	glVertex2f(24.5492574430979, 44.2968605527349);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(128, 14, 47);
	glVertex2f(19.5,44.5);
	glVertex2f(24.5492574430979, 44.2968605527349);
	glVertex2f(24.5, 49.2);
	glVertex2f(22.8, 49.2);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(128, 14, 47);
	glVertex2f(19.5,44.5);
	glVertex2f(22.8, 49.2);
	glVertex2f(23, 52.2);
	glVertex2f(21, 52.2);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(254, 150, 98);
	glVertex2f(21,52.2);
	glVertex2f(23.4,54);
	glVertex2f(26.3,52.2);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(254, 150, 98);
	glVertex2f(23,52.2);
	glVertex2f(26.3,52.2);
	glVertex2f(26.6,49.2);
	glVertex2f(22.8,49.2);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(254, 150, 98);
	glVertex2f(26.6,49.2);
	glVertex2f(25,45);
	glVertex2f(24.5492574430979, 44.2968605527349);
	glVertex2f(24.5, 49.2);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(254, 150, 98);
	glVertex2f(25,45);
	glVertex2f(24.5492574430979, 44.2968605527349);
	glVertex2f(26,38);
	glVertex2f(30,38);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(254, 150, 98);
	glVertex2f(24.5492574430979, 44.2968605527349);
	glVertex2f(26,38);
	glVertex2f(21.5,40);
	glVertex2f(22.2,41.2);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(254, 150, 98);
	glVertex2f(21.5,40);
	glVertex2f(22.2,41.2);
	glVertex2f(19.5, 44.5);
	glVertex2f(19.4926433041894, 42.4816657336396);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(254, 150, 98);
	glVertex2f(21.5,40);
	glVertex2f(19.4926433041894, 42.4816657336396);
	glVertex2f(20,39.5);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(254, 150, 98);
	glVertex2f(17,42);
	glVertex2f(19.4926433041894, 42.4816657336396);
	glVertex2f(20,39.5);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(254, 150, 98);
	glVertex2f(17,42);
	glVertex2f(19.4926433041894, 42.4816657336396);
	glVertex2f(15,45);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(254, 150, 98);
	glVertex2f(17,42);
	glVertex2f(16,40);
	glVertex2f(15,45);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(168, 22, 49);
	glVertex2f(30,38);
	glVertex2f(34,38);
	glVertex2f(31.6,40);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(168, 22, 49);
	glVertex2f(30,38);
	glVertex2f(31.6,40);
	glVertex2f(29.5,42);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(168, 22, 49);
	glVertex2f(30,38);
	glVertex2f(29.5,42);
	glVertex2f(27.2,46.8);
	glVertex2f(25,45);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(168, 22, 49);
	glVertex2f(27.2,46.8);
	glVertex2f(25,45);
	glVertex2f(26.6,49.2);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(212, 37, 56);
	glVertex2f(26.6,49.2);
	glVertex2f(28.2,49.75);
	glVertex2f(28.9,59.4);
	glVertex2f(26.3,52.2);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(212, 37, 56);
	glVertex2f(28.2,49.75);
	glVertex2f(28.9,59.4);
	glVertex2f(30.8,52.6);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(212, 37, 56);
	glVertex2f(31.6,57);
	glVertex2f(28.9,59.4);
	glVertex2f(30.8,52.6);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(212, 37, 56);
	glVertex2f(30.5,46.1);
	glVertex2f(32.2,53.6);
	glVertex2f(30.8,52.6);
	glVertex2f(28.2,49.75);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(232, 101, 76);
	glVertex2f(26.6,49.2);
	glVertex2f(28.2,49.75);
	glVertex2f(30.5,46.1);
	glVertex2f(27.2,46.8);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(232, 101, 76);
	glVertex2f(30.5,46.1);
	glVertex2f(27.2,46.8);
	glVertex2f(29.5,42);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(232, 101, 76);
	glVertex2f(30.5,46.1);
	glVertex2f(29.5,42);
	glVertex2f(31.6,40);
	glVertex2f(35.5,41);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(232, 101, 76);
	glVertex2f(31.6,40);
	glVertex2f(35.5,41);
	glVertex2f(36,38);
	glVertex2f(34,38);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(232, 101, 76);
	glVertex2f(35.5,41);
	glVertex2f(35.8,43);
	glVertex2f(32.2,53.6);
	glVertex2f(30.5,46.1);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(232, 101, 76);
	glVertex2f(35.8,43);
	glVertex2f(32.2,53.6);
	glVertex2f(35.7,44.9);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(232, 101, 76);
	glVertex2f(32.2,53.6);
	glVertex2f(35.7,44.9);
	glVertex2f(35.9,47.1);
	glVertex2f(35.75,50.25);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(232, 101, 76);
	glVertex2f(28.9,59.4);
	glVertex2f(32.8,58);
	glVertex2f(31.6,57);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(232, 101, 76);
	glVertex2f(32.8,58);
	glVertex2f(31.6,57);
	glVertex2f(30.8,52.6);
	glVertex2f(32.2,53.6);
	glVertex2f(33.5,55);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(232, 101, 76);
	glVertex2f(32.2,53.6);
	glVertex2f(33.5,55);
	glVertex2f(38.1,52.8);
	glVertex2f(37.5,51);
	glVertex2f(35.75,50.25);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(232, 101, 76);
	glVertex2f(38.1,52.8);
	glVertex2f(37.5,51);
	glVertex2f(40.4,48.6);
	glVertex2f(42.4,47.4);
	glVertex2f(41.9,48.3);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(232, 101, 76);
	glVertex2f(42.4,47.4);
	glVertex2f(43.6,47);
	glVertex2f(41.2106026801524, 41.6110709108559);
	glVertex2f(40.5, 44.2);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(232, 101, 76);
	glVertex2f(41.9,48.3);
	glVertex2f(48.85,45.7);
	glVertex2f(48.6277116156674, 45.3247941677826);
	glVertex2f(45.6,45.1);
	glVertex2f(43.6,47);
	glVertex2f(42.4,47.4);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(232, 101, 76);
	glVertex2f(48.85,45.7);
	glVertex2f(48.6277116156674, 45.3247941677826);
	glVertex2f(50,40);
	glVertex2f(57.5,40);
	glVertex2f(51.6,41);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(224, 86, 66);
	glVertex2f(48.6277116156674, 45.3247941677826);
	glVertex2f(50,40);
	glVertex2f(44.6,38.6);
	glVertex2f(45.6,45.1);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(158, 23, 47);
	glVertex2f(50,40);
	glVertex2f(57.5,40);
	glVertex2f(60,38);
	glVertex2f(44.6,38);
	glVertex2f(44.6,38.6);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(158, 23, 47);
	glVertex2f(44.6,38);
	glVertex2f(44.6,38.6);
	glVertex2f(45.6,45.1);
	glVertex2f(43.6,47);
	glVertex2f(41.2106026801524, 41.6110709108559);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(158, 23, 47);
	glVertex2f(44.6,38);
	glVertex2f(44.6,38.6);
	glVertex2f(41.2106026801524, 41.6110709108559);
	glVertex2f(35.5,41);
	glVertex2f(36,38);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(158, 23, 47);
	glVertex2f(41.2106026801524, 41.6110709108559);
	glVertex2f(35.5,41);
	glVertex2f(35.8,43);
	glVertex2f(35.7,44.9);
	glVertex2f(40.5,44.2);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(158, 23, 47);
	glVertex2f(35.7,44.9);
	glVertex2f(40.5,44.2);
	glVertex2f(42.4,47.4);
	glVertex2f(40.4,48.6);
	glVertex2f(35.9,47.1);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(158, 23, 47);
	glVertex2f(40.4,48.6);
	glVertex2f(35.9,47.1);
	glVertex2f(35.75,50.25);
	glVertex2f(37.5,51);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(145, 18, 51);
	glVertex2f(33,46.5);
	glVertex2f(33.6,44.6);
	glVertex2f(33.6,47.6);
    glEnd();
}

//ID : O_043
void mars2_back_mountain()
{
    glBegin(GL_POLYGON);
    glColor3ub(195, 77, 95);
    glVertex2f(57.5,40);
    glVertex2f(51.6,41);
    glVertex2f(51,42);
    glVertex2f(53.8,43.6);
    glVertex2f(57.5,42.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(195, 77, 95);
    glVertex2f(57.5,40);
    glVertex2f(57.5,42.5);
    glVertex2f(59.84,42.72);
    glVertex2f(60.5,42.16);
    glVertex2f(60.5,40);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(195, 77, 95);
    glVertex2f(60.5,42.16);
    glVertex2f(60.5,40);
    glVertex2f(72.3,40);
    glVertex2f(72.3,41.2);
    glVertex2f(65.36,41.88);
    glVertex2f(64.86,42.58);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(195, 77, 95);
    glVertex2f(72.3,40);
    glVertex2f(72.3,41.2);
    glVertex2f(79.2,43);
    glVertex2f(82,44);
    glVertex2f(82,40);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(195, 77, 95);
    glVertex2f(82,44);
    glVertex2f(82,40);
    glVertex2f(88.8,40);
    glVertex2f(88.8,42);
    glVertex2f(86.4,43);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(195, 77, 95);
    glVertex2f(88.8,40);
    glVertex2f(88.8,42);
    glVertex2f(92,42.6);
    glVertex2f(94.6,42.8);
    glVertex2f(98,42);
    glVertex2f(98,40);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(195, 77, 95);
    glVertex2f(98,42);
    glVertex2f(98,40);
    glVertex2f(104.6,40);
    glVertex2f(104.6,44.2);
    glVertex2f(102.2,43.2);
    glVertex2f(100.4,42.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(195, 77, 95);
    glVertex2f(104.6,40);
    glVertex2f(104.6,44.2);
    glVertex2f(107,46);
    glVertex2f(109,46.2);
    glVertex2f(110.5,45.5);
    glVertex2f(112,44);
    glVertex2f(112,40);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(195, 77, 95);
    glVertex2f(112,44);
    glVertex2f(112,40);
    glVertex2f(118,40);
    glVertex2f(118,42.8);
    glVertex2f(116,42.4);
    glVertex2f(114.4,42.8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(195, 77, 95);
    glVertex2f(118,40);
    glVertex2f(118,42.8);
    glVertex2f(119.8,42);
    glVertex2f(121.3,41.7);
    glVertex2f(122.8,42);
    glVertex2f(122.8,40);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(195, 77, 95);
    glVertex2f(138,40);
    glVertex2f(140,40);
    glVertex2f(140,42);
    glVertex2f(138,43);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(195, 77, 95);
    glVertex2f(116,40);
    glVertex2f(119,40);
    glVertex2f(119,43);
    glVertex2f(116,42.4);
    glEnd();
}

// ID: O_044
void mars2_land()
{
    glBegin(GL_POLYGON);
    glColor3ub(178, 49, 54);
    glVertex2f(10,38);
    glVertex2f(60,38);
    glVertex2f(10,23);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(190, 70, 69);
    glVertex2f(140,40);
    glVertex2f(140,10);
    glVertex2f(10,10);
    glVertex2f(10,23);
    glVertex2f(60,38);
    glVertex2f(57.5,40);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(143,6,48);
    glVertex2f(10,10);
    glVertex2f(104.2,10);
    glVertex2f(107.4,12.8);
    glVertex2f(63.2,17.2);
    glVertex2f(10,17.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(143,6,48);
    glVertex2f(10,17.2);
    glVertex2f(63.2,17.2);
    glVertex2f(96.7,19.7);
    glVertex2f(10,20.8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(182, 50, 60);
    glVertex2f(15,31);
    glVertex2f(32.65,31.55);
    glVertex2f(38.55,29.7);
    glVertex2f(25,30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(182, 50, 60);
    glVertex2f(32.65,31.55);
    glVertex2f(38.55,29.7);
    glVertex2f(55,30);
    glVertex2f(54.55,31.55);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(182, 50, 60);
    glVertex2f(55,30);
    glVertex2f(78.8,30.6);
    glVertex2f(72,31);
    glVertex2f(54.55,31.55);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(224, 111, 93);
    glVertex2f(63,36.5);
    glVertex2f(70.8,36.55);
    glVertex2f(71.5,35.5);
    glVertex2f(66.4,35.8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(224, 111, 93);
    glVertex2f(70.8,36.55);
    glVertex2f(71.5,35.5);
    glVertex2f(75.25,35.45);
    glVertex2f(75.86,36.48);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(224, 111, 93);
    glVertex2f(75.25,35.45);
    glVertex2f(75.86,36.48);
    glVertex2f(81.95,36.35);
    glVertex2f(82.2,35.68);
    glVertex2f(79.8,35.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(224, 111, 93);
    glVertex2f(81.95,36.35);
    glVertex2f(82.2,35.68);
    glVertex2f(85.4,36.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(195, 73, 60);
    glVertex2f(113,28.5);
    glVertex2f(140,28.5);
    glVertex2f(140,23);
    glVertex2f(100,22);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(195, 73, 60);
    glVertex2f(113,28.5);
    glVertex2f(100,22);
    glVertex2f(83,23);
    glVertex2f(62,23);
    glVertex2f(58.5,24);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(190, 41, 79);
    glVertex2f(86.2789653250889, 17.5785779596379);
    glVertex2f(88.6185194545384, 17.9621114234821);
    glVertex2f(95.5221218037336, 18.3072915409418);
    glVertex2f(104.1516247402275, 18.5374116192483);
    glVertex2f(112.0524140954175, 18.3839982337107);
    glVertex2f(115.6190750168294, 18.2007261360016);
    glVertex2f(127.4972865767869, 18.1059531714274);
    glVertex2f(134.5968884996615, 17.7412189001466);
    glVertex2f(138.6804963965341, 17.7268613131309);
    glVertex2f(138.5225414555772, 17.2214055020689);
    glVertex2f(135.2054876954827, 17.063450561112);
    glVertex2f(122.4111374779753, 16.6843587028155);
    glVertex2f(108.1004198272819, 16.7159496910069);
    glVertex2f(103.0393776950794, 16.849864378334);
    glVertex2f(95.0235283007361, 17.1566911494093);
    glVertex2f(88.9253462256137, 17.2717511885625);
    glEnd();
}

// ID: O_045
void mars2_sky_planet()
{
    glMatrixMode(GL_MODELVIEW);
    mars2_circle(4.9223980924563,128.1719945576675, 67.2521874499887, 123, 40, 74);
    glPushMatrix();
    glTranslatef(128.17, 67.25, 0.0);
	glRotatef(mars2_sky_planet_move_angle, 0.0f, 0.0f,1.0f);
    glTranslatef(-128.17, -67.25, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(118, 29, 79);
    glVertex2f(126.3,64.1);
    glVertex2f(126.7,63.9);
    glVertex2f(127.1,63.6);
    glVertex2f(127.7,63.5);
    glVertex2f(128.4,63.6);
    glVertex2f(128.7,63.8);
    glVertex2f(128.9,64.3);
    glVertex2f(128.4,64.6);
    glVertex2f(127.6,64.7);
    glVertex2f(127,64.8);
    glVertex2f(126.4,64.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(118, 29, 79);
    glVertex2f(125.4,66.7);
    glVertex2f(125.8,67);
    glVertex2f(126.5,66.9);
    glVertex2f(126.8,66.6);
    glVertex2f(126.8,66);
    glVertex2f(126.4,65.8);
    glVertex2f(125.8,65.6);
    glVertex2f(125.5,66.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(118, 29, 79);
    glVertex2f(124.6, 67.8);
    glVertex2f(124.4, 68.2);
    glVertex2f(124.8, 68.8);
    glVertex2f(125.3, 68.9);
    glVertex2f(125.8, 69.1);
    glVertex2f(126.45, 69.3);
    glVertex2f(127.2, 69);
    glVertex2f(127.8, 68.7);
    glVertex2f(126.9, 68.2);
    glVertex2f(125.5,68.5);
    glVertex2f(125.1575685329682, 68.0316598863976);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(118, 29, 79);
    glVertex2f(130.85,69.3);
    glVertex2f(131.3, 68.8);
    glVertex2f(131.55, 68.8);
    glVertex2f(131.85, 69.05);
    glVertex2f(131.8, 69.6);
    glVertex2f(131.6, 69.9);
    glVertex2f(131, 70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(118, 29, 79);
    glVertex2f(130,65.5);
    glVertex2f(130.6,65.6);
    glVertex2f(130.76,66.18);
    glVertex2f(130.65,66.55);
    glVertex2f(130.22,66.72);
    glVertex2f(129.7,66.3);
    glVertex2f(129.75,66.85);
    glEnd();
    glPopMatrix();
}

// ID: O_046
void mars2_building()
{
    // bottom to top
    glBegin(GL_POLYGON);
    glColor3ub(85, 64, 88);
    glVertex2f(120,33.4);
    glVertex2f(137,33.4);
    glVertex2f(137,33.5);
    glVertex2f(120,33.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(89, 147, 147);
    glVertex2f(137,33.5);
    glVertex2f(120,33.5);
    glVertex2f(121.5,34.5);
    glVertex2f(135.5,34.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(71, 20, 51);
    glVertex2f(121.5,34.5);
    glVertex2f(126.5,34.5);
    glVertex2f(126.5,37.5);
    glVertex2f(118,40);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(71, 20, 51);
    glVertex2f(130.5,34.5);
    glVertex2f(135.5,34.5);
    glVertex2f(138.5,40);
    glVertex2f(130.5,37.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(225, 155, 156);
    glVertex2f(126.5,34.5);
    glVertex2f(130.5,34.5);
    glVertex2f(130.5,37.5);
    glVertex2f(126.5,37.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102, 155, 174);
    glVertex2f(130.5,37.5);
    glVertex2f(126.5,37.5);
    glVertex2f(118,40);
    glVertex2f(117,43);
    glVertex2f(119.5,44);
    glVertex2f(137.5,44);
    glVertex2f(139.5,43);
    glVertex2f(138.5,40);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(189, 252, 196);
    glVertex2f(120.6,44);
    glVertex2f(136.4,44);
    glVertex2f(137,44.8);
    glVertex2f(120,44.8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102, 155, 174);
    glVertex2f(120,44.8);
    glVertex2f(137,44.8);
    glVertex2f(137,46);
    glVertex2f(120,46);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(70, 20, 51);
    glVertex2f(120,46);
    glVertex2f(137,46);
    glVertex2f(134,47);
    glVertex2f(123,47);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(70, 20, 51);
    glVertex2f(127.5,47);
    glVertex2f(129.5,47);
    glVertex2f(130,49);
    glVertex2f(127,49);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3ub(70, 20, 51);
    glVertex2f(128.5,47);
    glVertex2f(128.5,51);
    glEnd();

    mars2_circle(0.35, 128.5, 51.5, 200, 0, 0);

    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3ub(70, 20, 51);
    glVertex2f(130.5,47);
    glVertex2f(130.5,48.5);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3ub(221, 255, 180);
    glVertex2f(130.5,48.5);
    glVertex2f(130.5,49);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3ub(70, 20, 51);
    glVertex2f(130.5,48.7);
    glVertex2f(130.5,49);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3ub(70, 20, 51);
    glVertex2f(131.5,47);
    glVertex2f(131.5,49.5);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3ub(221, 255, 180);
    glVertex2f(131.5,49.5);
    glVertex2f(131.5,50.5);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3ub(70, 20, 51);
    glVertex2f(131.5,50.5);
    glVertex2f(131.5,51.5);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3ub(221, 255, 180);
    glVertex2f(125,47);
    glVertex2f(125,50.5);
    glEnd();
}

//ID: O_047
void rover()
{
    glPushMatrix();
    glTranslatef(rover_move, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(199, 204, 209);
    glVertex2f(22,19);
    glVertex2f(34,19);
    glVertex2f(37,22);
    glVertex2f(20,22);
    glEnd();


    //
    glBegin(GL_POLYGON);
    glColor3ub(255,225,255);
    glVertex2f(22.4,27);
    glVertex2f(23,27);
    glVertex2f(23,28.4);
    glVertex2f(22.4,27.6);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(23,27);
    glVertex2f(23,29);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(24,27);
    glVertex2f(24,28.5);
    glEnd();

    mars2_circle(0.3, 24, 28.5, 255, 255, 0);

    glBegin(GL_POLYGON);
    glColor3ub(255,225,255);
    glVertex2f(26.5,27);
    glVertex2f(27,27);
    glVertex2f(27,27.5);
    glVertex2f(26.5,27.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,225,255);
    glVertex2f(27,27.5);
    glVertex2f(26.5,27.5);
    glVertex2f(24.5,28);
    glVertex2f(29,28);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(30,27);
    glVertex2f(30,28);
    glEnd();

    mars2_circle(0.3, 30, 28, 255, 255, 0);
    //

    glBegin(GL_POLYGON);
    glColor3ub(255, 51, 51);
    glVertex2f(37,22);
    glVertex2f(20,22);
    glVertex2f(20,27);
    glVertex2f(31,27);
    glVertex2f(37,24);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(219,225,227);
    glVertex2f(37,24);
    glVertex2f(28,24);
    glVertex2f(28,26);
    glVertex2f(33,26);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(219,225,227);
    glVertex2f(22,24);
    glVertex2f(23,24);
    glVertex2f(23,26);
    glVertex2f(22,26);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(219,225,227);
    glVertex2f(24,24);
    glVertex2f(25,24);
    glVertex2f(25,26);
    glVertex2f(24,26);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(219,225,227);
    glVertex2f(26,24);
    glVertex2f(27,24);
    glVertex2f(27,26);
    glVertex2f(26,26);
    glEnd();

    // wheel
    // start from left
    mars2_circle(2.2360679774998, 22,18, 0,0,0);
    mars2_circle(1.4142135623731, 22,18, 176,184,186);

    mars2_circle(2.2360679774998, 28,18, 0,0,0);
    mars2_circle(1.4142135623731, 28,18, 176,184,186);

    mars2_circle(2.2360679774998, 34,18, 0,0,0);
    mars2_circle(1.4142135623731, 34,18, 176,184,186);

    glPopMatrix();
}

// ID: A_020
void mars2_sky_planet_update(int value) {

    mars2_sky_planet_move_angle+=0.5f;
    if(mars2_sky_planet_move_angle > 360.0)
    {
        mars2_sky_planet_move_angle-=360;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, mars2_sky_planet_update, 0); //Notify GLUT to call update again in 25 milliseconds
}

// ID: A_021
void rover_update(int value) {

if (Is_rover_moving){
     rover_move += 0.15;
if(rover_move > 120)
{
rover_move = -33.0;
}
}
glutPostRedisplay();
glutTimerFunc(20, rover_update, 0);
}


void mars2_display() {
    glClear(GL_COLOR_BUFFER_BIT);
    mars2_sky();
    mars2_sky_planet();
    mars2_back_mountain();
    mars2_land();
    mars2_left_mountain();
    mars2_building();
    rover();
    glutSwapBuffers();
	glFlush();  // Render now
}

void init_mars2()
{
    glutTimerFunc(20, mars2_sky_planet_update, 0); //Add a timer
	glutTimerFunc(20, rover_update, 0); //Add a timer
}

/* Main function: GLUT runs as a console application starting at main()  */
/*int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(1920, 1080);// Set the window's initial width & height
	//glutInitWindowSize(1918, 1017);// Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test");
	//gluOrtho2D(-0.1,0.7,-0.1,0.3); // Create a window with the given title
	//glutInitWindowSize(320, 320);// Set the window's initial width & height
	glutDisplayFunc(display);// Register display callback handler for window re-paint
	gluOrtho2D(10,140,10,90);
	glutTimerFunc(20, mars2_sky_planet_update, 0); //Add a timer
	glutTimerFunc(20, rover_update, 0); //Add a timer
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
*/
