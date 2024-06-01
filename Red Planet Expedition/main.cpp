#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
#include "mars2.cpp"
#include "mars.cpp"
#include "space3.cpp"
#include "space2.cpp"
#include "space1.cpp"


bool Is_patrol_boat_move = true;
bool Is_stand_moving = false;
bool Is_rocket_move = false;

float rocket_position = 0.0f;

float left_stand_position = 0.0f;
float right_stand_position = 0.0f;
float antena_angle = 0.0f;
float drone_angle = 180.0f;
float drone_move = 0.0f;
float speed = 0.02f;
float patrol_boat_move = 0.0f;

//   MD. SHOHANUR RAHMAN SHOHAN

void circle(float radius, float xc, float yc, float r, float g, float b)
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



// ID: O_001
void sea()
{
    glBegin(GL_POLYGON);
	//glColor3ub(26, 117, 255);
	glColor3ub(127,205,255);
	glVertex2f(10,10);
	glVertex2f(140,10);
	glVertex2f(140,20);
	glVertex2f(10,20);
	glEnd();
}

// ID: O_002
void sea_dam()
{
    glBegin(GL_POLYGON);
	glColor3ub(130, 151, 168);
	glVertex2f(10,20);
	glVertex2f(140,20);
	glVertex2f(140,30);
	glVertex2f(10,30);
	glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(10,20);
	glVertex2f(140,20);
	glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(10,30);
	glVertex2f(140,30);
	glEnd();

	glBegin(GL_POLYGON);      // Pillar From Left 01
	glColor3ub(46,46,51);
	glVertex2f(10,30);
	glVertex2f(20,20);
	glVertex2f(19,20);
	glVertex2f(9,30);
	glEnd();

	glBegin(GL_POLYGON);      // Pillar From Left 02
	glColor3ub(46,46,51);
	glVertex2f(35,30);
	glVertex2f(45,20);
	glVertex2f(44,20);
	glVertex2f(34,30);
	glEnd();

	glBegin(GL_POLYGON);      // Pillar From Left 03
	glColor3ub(46,46,51);
	glVertex2f(55,30);
	glVertex2f(65,20);
	glVertex2f(64,20);
	glVertex2f(54,30);
	glEnd();

	glBegin(GL_POLYGON);      // Pillar From Left 04
	glColor3ub(46,46,51);
	glVertex2f(75,30);
	glVertex2f(85,20);
	glVertex2f(84,20);
	glVertex2f(74,30);
	glEnd();

	glBegin(GL_POLYGON);      // Pillar From Left 05
	glColor3ub(46,46,51);
	glVertex2f(95,30);
	glVertex2f(105,20);
	glVertex2f(104,20);
	glVertex2f(94,30);
	glEnd();

	glBegin(GL_POLYGON);      // Pillar From Left 06
	glColor3ub(46,46,51);
	glVertex2f(115,30);
	glVertex2f(125,20);
	glVertex2f(124,20);
	glVertex2f(114,30);
	glEnd();

	glBegin(GL_POLYGON);      // Pillar From Left 07
	glColor3ub(46,46,51);
	glVertex2f(135,30);
	glVertex2f(140,25);
	glVertex2f(140,24);
	glVertex2f(134,30);
	glEnd();
}

// ID: O_003
void left_tree()
{
    glBegin(GL_POLYGON);       // START leaf(bottom to up)
	glColor3ub(12, 174, 91);
	glVertex2f(15.2,31.7);
	glVertex2f(14.2,32.2);
	glVertex2f(16.8,32.2);
	glVertex2f(15.6,31.7);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(12, 174, 91);
	glVertex2f(14.2,32.2);
	glVertex2f(16.8,32.2);
	glVertex2f(17.4,33);
	glVertex2f(13.2,33.6);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(12, 174, 91);
	glVertex2f(17.4,33);
	glVertex2f(13.2,33.6);
	glVertex2f(13,34.8);
	glVertex2f(17.8,34.2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(12, 174, 91);
	glVertex2f(13,34.8);
	glVertex2f(17.8,34.2);
	glVertex2f(17.8,35.4);
	glVertex2f(13,35.8);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(12, 174, 91);
	glVertex2f(17.8,35.4);
	glVertex2f(13,35.8);
	glVertex2f(13.2,37);
	glVertex2f(17.6,36.8);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(12, 174, 91);
	glVertex2f(13.2,37);
	glVertex2f(17.6,36.8);
	glVertex2f(17.2,37.8);
	glVertex2f(13.6,37.6);
	glEnd();

	glBegin(GL_POLYGON);     //  END leaf(bottom to up)
	glColor3ub(12, 174, 91);
	glVertex2f(17.2,37.8);
	glVertex2f(13.6,37.6);
	glVertex2f(14.4,38.4);
	glVertex2f(15.4,38.6);
	glVertex2f(16.4,38.4);
	glEnd();

    glBegin(GL_POLYGON);       // trunk
	glColor3ub(166, 123, 81);
	glVertex2f(15.2,30);
	glVertex2f(15.6,30);
	glVertex2f(15.6,35.2);
	glVertex2f(15.5,35.3);
	glVertex2f(15.3,35.3);
	glVertex2f(15.2,35.2);
	glEnd();

	glBegin(GL_POLYGON);       // left upper branch
	glColor3ub(166, 123, 81);
	glVertex2f(15.2,34.15);
	glVertex2f(15.2,34.55);
	glVertex2f(14.85,34.8);
	glVertex2f(14.65,34.6);
	glEnd();

	glBegin(GL_POLYGON);       // left lower branch
	glColor3ub(166, 123, 81);
	glVertex2f(15.2,32.4);
	glVertex2f(14,33.4);
	glVertex2f(14.2,33.75);
	glVertex2f(15.2,32.9);
	glEnd();

	glBegin(GL_POLYGON);       //  right branch
	glColor3ub(166, 123, 81);
	glVertex2f(15.6,33.25);
	glVertex2f(16.55,34);
	glVertex2f(16.4,34.3);
	glVertex2f(15.6,33.75);
	glEnd();
}

// ID: O_004
void right_tree()
{
    glBegin(GL_POLYGON);       // START leaf(bottom to up)
	glColor3ub(12, 174, 91);
	glVertex2f(136,32.5);
	glVertex2f(134.4,33.2);
	glVertex2f(138.2,33.2);
	glVertex2f(136.5,32.5);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(12, 174, 91);
	glVertex2f(134.4,33.2);
	glVertex2f(138.2,33.2);
	glVertex2f(138.8,34.2);
	glVertex2f(133.2,35);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(12, 174, 91);
	glVertex2f(138.8,34.2);
	glVertex2f(133.2,35);
	glVertex2f(133,36.6);
	glVertex2f(139.6,35.6);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(12, 174, 91);
	glVertex2f(133,36.6);
	glVertex2f(139.6,35.6);
	glVertex2f(139.6,37.4);
	glVertex2f(133,38);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(12, 174, 91);
	glVertex2f(139.6,37.4);
	glVertex2f(133,38);
	glVertex2f(133.2,39.6);
	glVertex2f(139.4,39.4);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(12, 174, 91);
	glVertex2f(133.2,39.6);
	glVertex2f(139.4,39.4);
	glVertex2f(138.8,40.8);
	glVertex2f(134,40.6);
	glEnd();

	glBegin(GL_POLYGON);      //  END leaf(bottom to up)
	glColor3ub(12, 174, 91);
	glVertex2f(138.8,40.8);
	glVertex2f(134,40.6);
	glVertex2f(135.2,41.6);
	glVertex2f(136.4,42);
	glVertex2f(137.6,41.6);
	glEnd();

	glBegin(GL_POLYGON);       // trunk
	glColor3ub(166, 123, 81);
	glVertex2f(136,37);
	glVertex2f(136.1,37.1);
	glVertex2f(136.4,37.1);
	glVertex2f(136.5,37);
	glVertex2f(136.5,37);
	glVertex2f(136.5,30);
	glVertex2f(136,30);
	glEnd();

	glBegin(GL_POLYGON);       // left upper branch
	glColor3ub(166, 123, 81);
	glVertex2f(135.2,36.3);
	glVertex2f(135.5,36.7);
	glVertex2f(136.,36.3);
	glVertex2f(136.,35.7);
	glEnd();

	glBegin(GL_POLYGON);       // left lower branch
	glColor3ub(166, 123, 81);
	glVertex2f(136,33.6);
	glVertex2f(134.5,34.8);
	glVertex2f(134.8,35.2);
	glVertex2f(136,34.2);
	glEnd();

	glBegin(GL_POLYGON);       // right branch
	glColor3ub(166, 123, 81);
	glVertex2f(136.5,35);
	glVertex2f(137.5,36);
	glVertex2f(137.9,35.5);
	glVertex2f(136.5,34.3);
	glEnd();
}

// ID: O_005
void left_building()
{
    // start from left side
    glBegin(GL_POLYGON);
	glColor3ub(126, 128, 127);
	glVertex2f(20,30);
	glVertex2f(20,36);
	glVertex2f(21.5,36.5);
	glVertex2f(21.5,30);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(217, 217, 217);
	glVertex2f(21.5,30);
	glVertex2f(21.5,41);
	glVertex2f(27.5,42);
	glVertex2f(27.5,30);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2f(22.2,30);
	glVertex2f(26.8,30);
	glVertex2f(26.7,40.5);
	glVertex2f(22.4,39.8);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(217, 217, 217);
	glVertex2f(23,30);
	glVertex2f(26.2,30);
	glVertex2f(26.2,36.2);
	glVertex2f(23,35.8);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(126, 128, 127);
	glVertex2f(27.5,30);
	glVertex2f(29.5,30);
	glVertex2f(29.5,37.5);
	glVertex2f(27.5,37);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(126, 128, 127);
	glVertex2f(29.5,30);
	glVertex2f(29.5,37.5);
	glVertex2f(39,36);
	glVertex2f(39,30);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(217, 217, 217);
	glVertex2f(30.5,30);
	glVertex2f(30.5,33.5);
	glVertex2f(35.2,33.8);
	glVertex2f(35.2,30);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(217, 217, 217);
	glVertex2f(35.2,33.8);
	glVertex2f(35.2,30);
	glVertex2f(44,30);
	glVertex2f(44,32.5);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(126, 128, 127);
	glVertex2f(38.4,30);
	glVertex2f(38.4,32.4);
	glVertex2f(44,31.6);
	glVertex2f(44,30);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(186, 194, 200);
	glVertex2f(27.5,42);
	glVertex2f(39,40);
	glVertex2f(39,36);
	glVertex2f(29.5,37.5);
	glVertex2f(27.5,37);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(184, 184, 148);
	glVertex2f(28,41.9);
	glVertex2f(39,40);
	glVertex2f(39,56.5);
	glVertex2f(28,54);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(126, 128, 127);
	glVertex2f(28.8,43.2);
	glVertex2f(28.8,53.2);
	glVertex2f(31.4,53.6);
	glVertex2f(31.5,42.9);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(245, 245, 240);
	glVertex2f(33.1,41.0262);
	glVertex2f(33.1,52.2);
	glVertex2f(38,53);
	glVertex2f(38,40.174);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(126, 128, 127);
	glVertex2f(34,40.87);
	glVertex2f(34,51.2);
	glVertex2f(37.2,51.6);
	glVertex2f(37.2,40.31305);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(126, 128, 127);
	glVertex2f(39,56.609);
	glVertex2f(44.025951347083, 57.76369475332);
	glVertex2f(44.0023267808791, 32.4892747909385);
	glVertex2f(39, 33.243416);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(184, 184, 148);
	glVertex2f(44.025951347083,57.76369475332);
	glVertex2f(45.9693252922199,56.7748696997639);
	glVertex2f(46,34.401);
	glVertex2f(44.0038347357567,34.1025397513586);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(122, 102, 82);
	glVertex2f(44.0038347357567,34.1025397513586);
	glVertex2f(56.2,36);
	glVertex2f(56.2,30);
	glVertex2f(44,30);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(122, 102, 82);
	glVertex2f(56.2,36);
	glVertex2f(56.2,30);
	glVertex2f(62,30);
	glVertex2f(61.6,31.6);
	glVertex2f(63,34);
	glVertex2f(62,36);
	glVertex2f(56.2,36);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(184, 184, 148);
	glVertex2f(45.9693252922199,56.7748696997639);
	glVertex2f(52.72,53.34);
	glVertex2f(52.6412870062556, 35.3927812923685);
	glVertex2f(46, 34.401);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(126, 128, 127);
	glVertex2f(45.9693252922199,56.7748696997639);
	glVertex2f(47, 57.1);
	glVertex2f(47, 34.5502);
	glVertex2f(46, 34.401);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(126, 128, 127);
	glVertex2f(47, 57.1);
	glVertex2f(48.7,56.4);
	glVertex2f(48.7,34.805);
	glVertex2f(47,34.5502);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(126, 128, 127);
	glVertex2f(49.4963200733257,54.980287110829);
	glVertex2f(50.6, 55.3);
	glVertex2f(50.6, 35.08786);
	glVertex2f(49.5, 34.923544);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(126, 128, 127);
	glVertex2f(50.6, 55.3);
	glVertex2f(50.6, 35.08786);
	glVertex2f(52,35.297);
	glVertex2f(52.2, 54.6);
	glEnd();
}

// ID: O_006
void earth_sky()
{
    glBegin(GL_POLYGON);
	glColor3ub(227, 243, 255);
	glVertex2f(10,30);
	glVertex2f(140,30);
	glVertex2f(140,90);
	glVertex2f(10,90);
	glEnd();
}

// ID: O_007
void right_building()
{
    glBegin(GL_POLYGON);
	glColor3ub(158,51,51);
	glVertex2f(112,30);
	glVertex2f(124,30);
	glVertex2f(124,40);
	glVertex2f(112,40);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(158,51,51);
	glVertex2f(124,30);
	glVertex2f(132,30);
	glVertex2f(132,48);
	glVertex2f(124,48);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0, 44, 96);
	glVertex2f(126,30);
	glVertex2f(130,30);
	glVertex2f(130,36);
	glVertex2f(126,36);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(200, 207, 208);
	glVertex2f(113,32);
	glVertex2f(114,32);
	glVertex2f(114,38);
	glVertex2f(113,38);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(200, 207, 208);
	glVertex2f(115,32);
	glVertex2f(116,32);
	glVertex2f(116,38);
	glVertex2f(115,38);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(200, 207, 208);
	glVertex2f(117,32);
	glVertex2f(118,32);
	glVertex2f(118,38);
	glVertex2f(117,38);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(200, 207, 208);
	glVertex2f(119,32);
	glVertex2f(120,32);
	glVertex2f(120,38);
	glVertex2f(119,38);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(200, 207, 208);
	glVertex2f(121,32);
	glVertex2f(123,32);
	glVertex2f(123,33);
	glVertex2f(121,33);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(200, 207, 208);
	glVertex2f(121,34);
	glVertex2f(123,34);
	glVertex2f(123,36);
	glVertex2f(121,36);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(200, 207, 208);
	glVertex2f(121,37);
	glVertex2f(123,37);
	glVertex2f(123,38);
	glVertex2f(121,38);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(200, 207, 208);
	glVertex2f(126,38);
	glVertex2f(130,38);
	glVertex2f(130,39);
	glVertex2f(126,39);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(200, 207, 208);
	glVertex2f(126,41);
	glVertex2f(130,41);
	glVertex2f(130,42);
	glVertex2f(126,42);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(200, 207, 208);
	glVertex2f(126,44);
	glVertex2f(130,44);
	glVertex2f(130,45);
	glVertex2f(126,45);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(200, 207, 208);
	glVertex2f(126,47);
	glVertex2f(130,47);
	glVertex2f(130,47.5);
	glVertex2f(126,47.5);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(93,93,93);
	glVertex2f(123.5,47.5);
	glVertex2f(132.5,47.5);
	glVertex2f(132.5,48);
	glVertex2f(123.5,48);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(93,93,93);
	glVertex2f(111.5,40);
	glVertex2f(124,40);
	glVertex2f(124,41);
	glVertex2f(111.5,41);
	glEnd();
}

// ID: O_008
void patrol_boat()
{
    glPushMatrix();
    glTranslatef(patrol_boat_move, 0.0f, 0.0f);
    glBegin(GL_POLYGON);    // bottom to top
	glColor3ub(20, 20, 82);
	glVertex2f(22,12);
	glVertex2f(38.8,12);
	glVertex2f(40.8,13);
	glVertex2f(21.416366667,13);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(204, 204, 0);
	glVertex2f(21.416366667,13);
	glVertex2f(21.3,13.2);
	glVertex2f(21.6,13.5);
	glVertex2f(41.4,13.5);
	glVertex2f(40.8,13);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(20, 20, 82);
	glVertex2f(21.6,13.5);
	glVertex2f(22.81,14.7);
	glVertex2f(35.1,14.7);
	glVertex2f(35.1,13.5);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(20, 20, 82);
	glVertex2f(35.1,13.5);
	glVertex2f(41.4,13.5);
	glVertex2f(42,14);
	glVertex2f(35.1,14);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(20, 20, 82);
	glVertex2f(35.1,14);
	glVertex2f(35.1,14.7);
	glVertex2f(36.4,15.5);
	glVertex2f(37.94,15.58);
	glVertex2f(37.94,14);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(20, 20, 82);
	glVertex2f(37.94,14);
	glVertex2f(42,14);
	glVertex2f(43.1,15.1);
	glVertex2f(42.7,15.8);
	glVertex2f(37.94,15.58);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,0,0);  //red
	glVertex2f(24.4,14.7);
	glVertex2f(27.2,14.7);
	glVertex2f(26.8,15.1);
	glVertex2f(24.8,15.1);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);  //white
	glVertex2f(28.15,14.7);
	glVertex2f(33.3,14.7);
	glVertex2f(33.3,17.4);
	glVertex2f(29.6,17.4);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);  //white
	glVertex2f(33.3,14.7);
	glVertex2f(35.1,14.7);
	glVertex2f(36.4,15.5);
	glVertex2f(36.4,15.85);
	glVertex2f(33.3,15.85);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);  //white
	glVertex2f(36.4,15.5);
	glVertex2f(37.94,15.58);
	glVertex2f(37.6,15.85);
	glVertex2f(36.4,15.85);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);  //white
	glVertex2f(33.3,17);
	glVertex2f(36,17);
	glVertex2f(35.7,17.4);
	glVertex2f(33.3,17.4);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(176,184,186);
	glVertex2f(31.4,15.85);
	glVertex2f(31.4,16.5);
	glVertex2f(31.8,17);
	glVertex2f(36,17);
	glVertex2f(37.6,15.85);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(176,184,186);
	glVertex2f(31.4,15.85);
	glVertex2f(29.6,15.85);
	glVertex2f(30.2,16.5);
	glVertex2f(31.4,16.5);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,0,0);  //red
	glVertex2f(29.6,17.4);
	glVertex2f(33.3,17.4);
	glVertex2f(32.8,18.1);
	glVertex2f(28.8,18.1);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,0);  // white
	glVertex2f(29.8,18.1);
	glVertex2f(29.5,18.7);
	glVertex2f(29.9,18.9);
	glVertex2f(30.4,18.1);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,0);
	glVertex2f(29.5,18.7);
	glVertex2f(29.9,18.9);
	glVertex2f(29.7,19.5);
	glEnd();

	//upper circle
	circle(0.1652227490883, 29.8, 16.8, 176,184,186);
	circle(0.1652227490883, 30.2, 16.8, 176,184,186);
	circle(0.1652227490883, 30.6, 16.8, 176,184,186);

	//lower circle
	circle(0.22360679775, 38.9, 14.7, 176,184,186);
	circle(0.22360679775, 39.5, 14.7, 176,184,186);
	circle(0.22360679775, 40.1, 14.7, 176,184,186);
	circle(0.22360679775, 40.7, 14.7, 176,184,186);
	glPopMatrix();
}

// ID: O_009
void rocket_platform()
{
    glBegin(GL_POLYGON);
	//glColor3ub(46, 46, 31);
	glColor3ub(25, 25, 77);
	glVertex2f(70,35);
	glVertex2f(103,35);
	glVertex2f(103,30);
	glVertex2f(70,30);
	glEnd();
}

// ID: O_010
void left_stand()
{
    glPushMatrix();
    glTranslatef(left_stand_position,0.0f, 0.0f);
    glLineWidth(3);
    glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(74,35);
	glVertex2f(74,39);
	glEnd();

	//glLineWidth(3);
    glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(78,35);
	glVertex2f(78,39);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(74,39);
	glVertex2f(74,43);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(78,39);
	glVertex2f(78,43);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,0);  //yellow
	glVertex2f(74,43);
	glVertex2f(74,47);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,0);  //yellow
	glVertex2f(78,43);
	glVertex2f(78,47);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(74,47);
	glVertex2f(74,51);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(78,47);
	glVertex2f(78,51);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(74,51);
	glVertex2f(74,55);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(78,51);
	glVertex2f(78,55);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,0);  //yellow
	glVertex2f(74,56);
	glVertex2f(74,55);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,0);  //yellow
	glVertex2f(78,56);
	glVertex2f(78,55);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,0);  //yellow
	glVertex2f(74,56);
	glVertex2f(78,56);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(78,51);
	glVertex2f(74,55);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(74,51);
	glVertex2f(78,55);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,0);  //yellow
	glVertex2f(78.1,55);
	glVertex2f(73.9,55);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(74,51);
	glVertex2f(78,51);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(74,51);
	glVertex2f(78,47);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(78,51);
	glVertex2f(74,47);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(255,255,0);  //yellow
	glVertex2f(78,43);
	glVertex2f(74,47);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(255,255,0);  //yellow
	glVertex2f(78,47);
	glVertex2f(74,43);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,0); //yellow
	glVertex2f(78.1,47);
	glVertex2f(73.9,47);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(78,39);
	glVertex2f(74,43);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(78,43);
	glVertex2f(74,39);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,0);  //yellow
	glVertex2f(78.1,43);
	glVertex2f(73.9,43);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(78.1,39);
	glVertex2f(73.9,39);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(78,35);
	glVertex2f(74,39);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(78,39);
	glVertex2f(74,35);
	glEnd();
	glPopMatrix();
}


// ID: O_011
void right_stand()
{
    glPushMatrix();
    glTranslatef(right_stand_position,0.0f, 0.0f);
    glLineWidth(3);
    glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(95,35);
	glVertex2f(95,43);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(99,35);
	glVertex2f(99,43);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(95,47);
	glVertex2f(95,55);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(99,47);
	glVertex2f(99,55);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,0);  // yellow
	glVertex2f(95,55);
	glVertex2f(95,56);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,0);  // yellow
	glVertex2f(99,55);
	glVertex2f(99,56);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,0);  // yellow
	glVertex2f(94.9,56);
	glVertex2f(99.1,56);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(99,51);
	glVertex2f(95,55);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(95,51);
	glVertex2f(99,55);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,0);  // yellow
	glVertex2f(94.9,55);
	glVertex2f(99.1,55);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(95,51);
	glVertex2f(99,51);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(95,51);
	glVertex2f(99,47);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(95,47);
	glVertex2f(99,51);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,0);  // yellow
	glVertex2f(95,47);
	glVertex2f(95,43);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,0);  // yellow
	glVertex2f(99,43);
	glVertex2f(99,47);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(95,43);
	glVertex2f(99,39);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(95,39);
	glVertex2f(99,43);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(95,39);
	glVertex2f(99,35);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(95,35);
	glVertex2f(99,39);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(95,39);
	glVertex2f(99,39);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,0);  // yellow
	glVertex2f(94.9,43);
	glVertex2f(99.1,43);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,0);  // yellow
	glVertex2f(94.9,47);
	glVertex2f(99.1,47);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,0);  // yellow
	glVertex2f(95,43);
	glVertex2f(99,47);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,0);  // yellow
	glVertex2f(95,47);
	glVertex2f(99,43);
	glEnd();
	glPopMatrix();
}

// ID: O_012
void left_rocket()
{
    // bottom to top
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.0f, rocket_position, 0.0f);
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

	circle(0.3197628561594, 81.5, 47.9, 244,42,65);
	glPopMatrix();
}

// ID: O_013
void right_rocket()
{
    //bottom to top
    glPushMatrix();
    glTranslatef(0.0f, rocket_position, 0.0f);
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

	circle(0.3197628561594, 91.5, 47.9, 244,42,65);
	glPopMatrix();
}


// ID: O_014
void middle_rocket()
{
    // bottom to top
    glPushMatrix();
    glTranslatef(0.0f, rocket_position, 0.0f);
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

// ID: O_015
void main_rocket()
{
    //left wing
    glPushMatrix();
    glTranslatef(0.0f, rocket_position, 0.0f);
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

	circle(0.7715903122594, 86.5,48,176,184,186);
    glPopMatrix();
}

// ID: O_016
void antena()
{
    glLineWidth(4);
    glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(125,48);
	glVertex2f(128,54);
	glEnd();

	glLineWidth(4);
    glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(128,54);
	glVertex2f(131,48);
	glEnd();

	glLineWidth(4);
    glBegin(GL_LINES);
	glColor3ub(255,0,0);
	glVertex2f(128,54);
	glVertex2f(128,48);
	glEnd();

	circle(0.6153324058904, 128, 54, 0,0,0);

	glPushMatrix();
	glTranslatef(128.0,54.0,0.0);
	glRotatef(antena_angle, 0.0f, 0.0f,1.0f);
    glTranslatef(-128.0,-54.0,0.0);
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2f(127,58);
	glVertex2f(131.62,53.42);
	glVertex2f(130.2,52.7);
	glVertex2f(128,54);
	glVertex2f(126.5,56);
	glEnd();
	glPopMatrix();
}

// ID: O_017
void drone()
{
    glPushMatrix();
    glScalef(0.5f, 0.5f, 0.0f);
    glTranslatef(drone_move-10, 90.0f, 0.0f);

    //glTranslatef(drone_move-20, 5.0f, 0.0f);  // with out glScalef
    //body start
    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(30,77);
	glVertex2f(34,77);
	glVertex2f(34,80);
	glVertex2f(30,80);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(30.4,80);
	glVertex2f(33.6,80);
	glVertex2f(33.6,80.4);
	glVertex2f(30.4,80.4);
	glEnd();
    // body end

    // camera portion start
    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(31,77);
	glVertex2f(33,77);
	glVertex2f(33,75);
	glVertex2f(31,75);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(33,75);
	glVertex2f(31,75);
	glVertex2f(31.2,74.6);
	glVertex2f(32.8,74.6);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(31.2,74.6);
	glVertex2f(32.8,74.6);
	glVertex2f(32.6,74.4);
	glVertex2f(31.4,74.4);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(32.6,74.4);
	glVertex2f(31.4,74.4);
	glVertex2f(31.6,74.2);
	glVertex2f(32.4,74.2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(31.6,74.2);
	glVertex2f(32.4,74.2);
	glVertex2f(32,74);
	glEnd();
    circle(0.6969942831084, 32, 75.2, 255,255,255);
    // camera portion end

    //left stand
    glLineWidth(4);
    glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(31,77);
	glVertex2f(29,74);
	glEnd();
	circle(0.5226896589181, 29,74, 0, 0, 0);

	//right stand
    glLineWidth(4);
    glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(33,77);
	glVertex2f(35,74);
	glEnd();
	circle(0.5226896589181, 35,74, 0, 0, 0);

	//left hand
	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(30,79.5);
	glVertex2f(30,78);
	glVertex2f(24.5,78);
	glVertex2f(24.5,79);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(24.5,78);
	glVertex2f(24.5,79);
	glVertex2f(22.6,78.8);
	glVertex2f(22.6,78.2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(22.6,78.8);
	glVertex2f(22.6,78.2);
	glVertex2f(22.2,78.4);
	glVertex2f(22.2,78.6);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(22.2,78.6);
	glVertex2f(22.2,79.6);
	glVertex2f(22.6,79.6);
	glVertex2f(22.6,78.8);
	glEnd();

	circle(0.2,22.4,79.6, 0,0,0);

	//right hand
	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(34,79.5);
	glVertex2f(34,78);
	glVertex2f(39.5,78);
	glVertex2f(39.5,79);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(39.5,78);
	glVertex2f(39.5,79);
	glVertex2f(41,78.8);
	glVertex2f(41,78.2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(41,78.8);
	glVertex2f(41,78.2);
	glVertex2f(41.4,78.4);
	glVertex2f(41.4,78.6);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(41,78.8);
	glVertex2f(41,79.6);
	glVertex2f(41.4,79.6);
	glVertex2f(41.4,78.6);
	glEnd();
	circle(0.2,41.2,79.6, 0,0,0);

	// left propeller
    glPushMatrix();
    glTranslatef(22.4,79.8,0.0);
    glRotatef(drone_angle, 0.0f, 0.0f,.0f);
    glTranslatef(-22.4,-79.8,0.0);
    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(20.4,79.8);
	glVertex2f(22.4,79.8);
	glVertex2f(21.2,80);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(22.4,79.8);
	glVertex2f(24.4,79.8);
	glVertex2f(23.6,80);
	glEnd();
    glPopMatrix();

	// right propeller
	glPushMatrix();
    glTranslatef(41.2,79.8,0.0);
    glRotatef(drone_angle, 0.0f, 0.0f,.0f);
    glTranslatef(-41.2,-79.8,0.0);
	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(39.2,79.8);
	glVertex2f(41.2,79.8);
	glVertex2f(40,80);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(41.2,79.8);
	glVertex2f(43.2,79.8);
	glVertex2f(42.4,80);
	glEnd();
	glPopMatrix();
	glPopMatrix();
    glPopMatrix();
}


// ID: A_001
void antena_update(int value) {

    antena_angle+=2.0f;
    if(antena_angle > 360.0)
    {
        antena_angle-=360;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, antena_update, 0); //Notify GLUT to call update again in 25 milliseconds
}

// ID: A_002
void patrol_boat_update(int value) {

if (Is_patrol_boat_move){
     patrol_boat_move += 0.15;
if(patrol_boat_move > 120)
{
patrol_boat_move = -33.0;
}
}

/* patrol_boat_move += 0.15;
if(patrol_boat_move > 120)
{
patrol_boat_move = -33.0;
}*/
glutPostRedisplay();
glutTimerFunc(20, patrol_boat_update, 0);
}

// ID: A_003
void drone_update(int value) {

    drone_angle+=5.0f;
    if(drone_angle > 360.0)
    {
        drone_angle-=360;
    }



	// Check if the object has reached the right boundary
    if (drone_move > 120.0f) {  // without Scalef set it 50.0f
        drone_move = 120.0f; // Set to the exact boundary value
        speed = -speed; // Reverse direction
    }
    // Check if the object has reached the left boundary
    else if (drone_move < 10.0f) {
        drone_move = 10.0f; // Set to the exact boundary value
        speed = -speed; // Reverse direction
    }

    // Update the position
    drone_move += speed;

    glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(5, drone_update, 0); //Notify GLUT to call update again in 25 milliseconds

}

// ID: A_004
void left_stand_update(int value) {
    if (Is_stand_moving) {
        /*left_stand_position -= 0.3f;
        if (left_stand_position < -3.3) {
            Is_stand_moving = false;
        }*/

        if(left_stand_position > -3.3){
            left_stand_position -= 0.3f;
        }
    }
    glutPostRedisplay();
    glutTimerFunc(90, left_stand_update, 0);
}

// ID: A_005
void right_stand_update(int value) {
    if (Is_stand_moving) {
        /*right_stand_position += 0.3f;
        if (right_stand_position > 3.3) {
            Is_stand_moving = false;
        }*/

        if(right_stand_position < 3.3){
            right_stand_position += 0.3f;
        }
    }
    glutPostRedisplay();
    glutTimerFunc(90, right_stand_update, 0);
}

//ID: A_006
void rocket_update(int value){
    if (Is_rocket_move) {
            //left_rocket_position +=0.2;
        if(rocket_position < 30){
            rocket_position += 0.2;
        }
        /*else{
            glutDisplayFunc(space1_display);
            init_space1();}*/

    }
    glutPostRedisplay();
    glutTimerFunc(8, rocket_update, 0);


}

// ID: A_007
void stand_Keypress(unsigned char key, int x, int y)
{
	switch (key) {
        case 'a':
            Is_stand_moving = true;
            Is_rocket_move = true;
        break;
        case 'b':
            Is_patrol_boat_move = false;
            break;
            case 'c':
            Is_patrol_boat_move = true;
            //break;
       /*case 'm':
            glutDisplayFunc(mars);
            mars();*/
    glutPostRedisplay();
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    sea();
    patrol_boat();
    earth_sky();
    left_tree();
    right_tree();
    antena();
    //wind_sensor();
    right_building();
    left_building();
    left_stand();
    right_stand();
    left_rocket();
    right_rocket();
    middle_rocket();
    main_rocket();
    rocket_platform();
    sea_dam();
    drone();
    if(rocket_position>30){
        glutDisplayFunc(space1_display);
            init_space1();
    }
    glutSwapBuffers();
	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(1920, 1080);// Set the window's initial width & height
	glutCreateWindow("Red Planet Expedition");
	//gluOrtho2D(-0.1,0.7,-0.1,0.3); // Create a window with the given title
	//glutInitWindowSize(320, 320);// Set the window's initial width & height
	glutDisplayFunc(display);// Register display callback handler for window re-paint
	gluOrtho2D(10,140,10,90);

	glutTimerFunc(20, antena_update, 0); //Add a timer
	glutTimerFunc(20, patrol_boat_update, 0); //Add a timer
	glutTimerFunc(20, drone_update, 0); //Add a timer
	glutTimerFunc(20, left_stand_update, 0); //Add a timer
	glutTimerFunc(20, right_stand_update, 0); //Add a timer
	glutTimerFunc(20, rocket_update, 0); //Add a timer
	glutKeyboardFunc(stand_Keypress);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
