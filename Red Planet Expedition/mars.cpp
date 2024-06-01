#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>


float mars_main_rocket_move = 52.0;
bool keepMoving = true;
float mars_sky_planet_move_angle = 0.0;


//   MD. SHOHANUR RAHMAN SHOHAN

void mars_circle(float radius, float xc, float yc, float r, float g, float b)
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

// ID: O_032
void mars_sky()
{
    glBegin(GL_POLYGON);
	glColor3ub(149, 67, 69);
	glVertex2f(10,40);
	glVertex2f(140,40);
	glVertex2f(140,90);
	glVertex2f(10,90);
    glEnd();
}

// ID: O_033
void left_mountain()
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

// ID: O_034
void right_mountain()
{
    // start form right
    glBegin(GL_POLYGON);
	glColor3ub(140, 6, 71);
	glVertex2f(140,41);
	glVertex2f(137.4319306440011, 41.4289746230995);
	glVertex2f(137.8168517065777, 39.2064486962996);
	glVertex2f(140,39.0049565916307);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(82, 1, 42);
	glVertex2f(137.8168517065777, 39.2064486962996);
	glVertex2f(140,39.0049565916307);
	glVertex2f(138.342425525976,36.0052263417827);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(132, 0, 70);
	glVertex2f(140,35);
	glVertex2f(140,39.0049565916307);
	glVertex2f(138.342425525976,36.0052263417827);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(82, 1, 42);
	glVertex2f(140,35);
	glVertex2f(138.342425525976,36.0052263417827);
	glVertex2f(139,32);
	glVertex2f(140,28.5);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(82, 1, 42);
	glVertex2f(136.9956073983367, 29.9876095145665);
	glVertex2f(137,28.5);
	glVertex2f(140,28.5);
	glVertex2f(139,32);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(82, 1, 42);
	glVertex2f(136.8,45.4);
	glVertex2f(131.1573991414172, 43.0742739631396);
	glVertex2f(131.2749248440702, 38.5201529853369);
	glVertex2f(139, 32);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(219, 17, 91);
	glVertex2f(136.8,45.4);
	glVertex2f(131.1573991414172, 43.0742739631396);
	glVertex2f(133.5,45.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(175, 23, 51);
	glVertex2f(131.1573991414172, 43.0742739631396);
	glVertex2f(133.5,45.5);
	glVertex2f(132.4, 48.2);
	glVertex2f(131.0810034015527, 46.0346088828904);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102, 6, 44);
	glVertex2f(132.4, 48.2);
	glVertex2f(131.0810034015527, 46.0346088828904);
	glVertex2f(129.7931160052809, 46.711615709433);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102, 6, 44);
	glVertex2f(128.6085050094545, 46.0346088828904);
	glVertex2f(131.0810034015527, 46.0346088828904);
	glVertex2f(129.7931160052809, 46.711615709433);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102, 6, 44);
	glVertex2f(129,31);
	glVertex2f(139,32);
	glVertex2f(131.2749248440702, 38.5201529853369);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102, 6, 44);
	glVertex2f(129,31);
	glVertex2f(131.2749248440702, 38.5201529853369);
	glVertex2f(131.1573991414172, 43.0742739631396);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102, 6, 44);
	glVertex2f(129,31);
	glVertex2f(131.1573991414172, 43.0742739631396);
	glVertex2f(131.0810034015527, 46.0346088828904);
	glVertex2f(128.6085050094545, 46.0346088828904);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(153, 13, 53);
	glVertex2f(128.6085050094545, 46.0346088828904);
	glVertex2f(129, 31);
	glVertex2f(127, 40);
	glVertex2f(126, 40.5);
	glVertex2f(125.9905655354681, 44.7741195065266);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(129, 10, 42);
	glVertex2f(125.9905655354681, 44.7741195065266);
	glVertex2f(128.6085050094545, 46.0346088828904);
	glVertex2f(127, 49.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(129, 10, 42);
	glVertex2f(128.6085050094545, 46.0346088828904);
    glVertex2f(129.7931160052809, 46.711615709433);
	glVertex2f(129.2, 49.2);
	glVertex2f(127, 49.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(203, 26, 48);
    glVertex2f(129.7931160052809, 46.711615709433);
	glVertex2f(129.2, 49.2);
	glVertex2f(131, 50.8);
	glVertex2f(131, 48.4);
	glVertex2f(132.4, 48.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(112, 0, 56);
    glVertex2f(126,28.5);
    glVertex2f(126,30);
    glVertex2f(136.9956073983367, 29.9876095145665);
    glVertex2f(137,28.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(130, 0, 70);
    glVertex2f(126,30);
    glVertex2f(136.9956073983367, 29.9876095145665);
    glVertex2f(139,32);
    glVertex2f(129,31);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(85, 0, 42);
    glVertex2f(126,30);
    glVertex2f(129,31);
    glVertex2f(127,40);
    glVertex2f(125.4,38.4);
    glVertex2f(125.6,34.2);
    glVertex2f(123.6,33);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(85, 0, 42);
    glVertex2f(126,28.5);
    glVertex2f(126,30);
    glVertex2f(126.6,33);
    glVertex2f(119.8,33);
    glVertex2f(116.8,30.6);
    glVertex2f(116.8,28.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(85, 0, 42);
    glVertex2f(116.8,28.5);
    glVertex2f(113,28.5);
    glVertex2f(112.5,30.5);
    glVertex2f(116.8,30.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(85, 0, 42);
    glVertex2f(113,28.5);
    glVertex2f(100.5,28.5);
    glVertex2f(104.5,32);
    glVertex2f(109.5,31.5);
    glVertex2f(111.5,31);
    glVertex2f(112.5,30.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(112, 0, 58);
    glVertex2f(116.8,30.6);
    glVertex2f(112.5,30.5);
    glVertex2f(111.5,31);
    glVertex2f(113.2,32.6);
    glVertex2f(121.2879705544185, 34.6902044956161);
    glVertex2f(119.8,30.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(159, 2, 87);
    glVertex2f(111.5,31);
    glVertex2f(109.5,31.5);
    glVertex2f(112.4,33.6);
    glVertex2f(121.2879705544185, 34.6902044956161);
    glVertex2f(113.2,32.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(112, 0, 58);
    glVertex2f(121.2879705544185, 34.6902044956161);
    glVertex2f(125.6,34.2);
    glVertex2f(123.6,33);
    glVertex2f(119.8,33);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(112, 0, 58);
    glVertex2f(121.2879705544185, 34.6902044956161);
    glVertex2f(125.6,34.2);
    glVertex2f(125.4,38.4);
    glVertex2f(122.2,38.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(199, 13, 80);
    glVertex2f(122.2,38.6);
    glVertex2f(125.4,38.4);
    glVertex2f(127,40);
    glVertex2f(126,40.5);
    glVertex2f(125.2,39.2);
    glVertex2f(122.4,40);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(75, 2, 39);
    glVertex2f(126,40.5);
    glVertex2f(125.2,39.2);
    glVertex2f(124.15,39.5);
    glVertex2f(125.9905655354681, 44.7741195065266);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(157, 16, 53);
    glVertex2f(124.15,39.5);
    glVertex2f(122.4,40);
    glVertex2f(123.6150278646286, 45.4043641947085);
    glVertex2f(125.9905655354681, 44.7741195065266);
    glEnd();
}

//ID : O_035
void back_mountain()
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
}

// ID: O_036
void mars_land()
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

// ID: O_037
void left_bulk()
{
    glBegin(GL_POLYGON);
    glColor3ub(123, 3, 57);
    glVertex2f(41.5,27);
    glVertex2f(43.4,32.2);
    glVertex2f(45.25,31.6);
    glVertex2f(45.48,29.73);
    glVertex2f(43,27);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 3, 57);
    glVertex2f(45.48,29.73);
    glVertex2f(43,27);
    glVertex2f(44.2,26.4);
    glVertex2f(46.1,29.28);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 3, 57);
    glVertex2f(44.5,25);
    glVertex2f(44.2,26.4);
    glVertex2f(46.1,29.28);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(188, 61, 68);
    glVertex2f(44.5,25);
    glVertex2f(41.5,27);
    glVertex2f(43,27);
    glVertex2f(44.2,26.4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(191, 22, 52);
    glVertex2f(46.1,29.28);
    glVertex2f(47.4530099018547, 29.8544595792822);
    glVertex2f(48.5353413831611, 29.2729334196956);
    glVertex2f(47.2474421049938, 28.7443934762336);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(191, 22, 52);
    glVertex2f(46.1,29.28);
    glVertex2f(47.2474421049938, 28.7443934762336);
    glVertex2f(47.3, 25.4);
    glVertex2f(44.5, 25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(101, 7, 41);
    glVertex2f(47.2474421049938, 28.7443934762336);
    glVertex2f(47.3, 25.4);
    glVertex2f(49.14, 26.48);
    glVertex2f(48.85, 27.65);
    glVertex2f(48.5353413831611, 29.2729334196956);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(223,63,65);
    glVertex2f(46.1, 29.28);
    glVertex2f(47.4530099018547, 29.8544595792822);
    glVertex2f(48.06, 30.38);
    glVertex2f(47.0829878675052, 30.7178443260977);
    glVertex2f(45.48, 29.73);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(173, 32, 51);
    glVertex2f(45.48, 29.73);
    glVertex2f(47.0829878675052, 30.7178443260977);
    glVertex2f(46.7, 32.5);
    glVertex2f(45.25, 31.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(239, 95, 90);
    glVertex2f(46.7, 32.5);
    glVertex2f(45.25, 31.6);
    glVertex2f(43.4, 32.2);
    glVertex2f(45.3, 33.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(160, 21, 45);
    glVertex2f(48.5353413831611, 29.2729334196956);
    glVertex2f(48.85, 27.65);
    glVertex2f(50,28);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(160, 21, 45);
    glVertex2f(48.5353413831611, 29.2729334196956);
    glVertex2f(50,28);
    glVertex2f(51.25,28.25);
    glVertex2f(49.6,30.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(160, 21, 45);
    glVertex2f(48.5353413831611, 29.2729334196956);
    glVertex2f(47.4530099018547, 29.8544595792822);
    glVertex2f(48.06, 30.38);
    glVertex2f(49.6,30.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(184, 60, 65);
    glVertex2f(49.14,26.48);
    glVertex2f(51.25, 28.25);
    glVertex2f(50, 28);
    glVertex2f(48.85,27.65);
    glEnd();
}

//ID: O_038
void right_bulk()
{
    glBegin(GL_POLYGON);
    glColor3ub(85, 0, 42);
    glVertex2f(116.8,16.2);
    glVertex2f(119.2,15.4);
    glVertex2f(119.05,18.35);
    glVertex2f(117.4,18.8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(85, 0, 42);
    glVertex2f(119.2,15.4);
    glVertex2f(119.05,18.35);
    glVertex2f(120.5,18.6);
    glVertex2f(120.7,17.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(85, 0, 42);
    glVertex2f(119.2,15.4);
    glVertex2f(120.7,17.1);
    glVertex2f(121.25,18);
    glVertex2f(121.5,16.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(236, 69, 106);
    glVertex2f(119.05,18.35);
    glVertex2f(120.5,18.6);
    glVertex2f(121.04,20.1);
    glVertex2f(119.6,20.2);
    glVertex2f(119.1,19.6);
    glVertex2f(118.4,19.2);
    glVertex2f(117.4,18.8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(236, 69, 106);
    glVertex2f(120.5,18.6);
    glVertex2f(121.04,20.1);
    glVertex2f(121.25,18);
    glVertex2f(120.7,17.1);
    glEnd();
}

// ID: O_039
void mars_sky_planet()
{
    glMatrixMode(GL_MODELVIEW);
    mars_circle(4.9223980924563,128.1719945576675, 67.2521874499887, 123, 40, 74);
    glPushMatrix();
    glTranslatef(128.17, 67.25, 0.0);
	glRotatef(mars_sky_planet_move_angle, 0.0f, 0.0f,1.0f);
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

// ID: O_040
void mars_main_rocket()
{
    //left wing
    glPushMatrix();
    glTranslatef(0.0f, mars_main_rocket_move, 0.0f);
    //glTranslatef(0.0f, 0.0f, 0.0f);

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

	mars_circle(0.7715903122594, 86.5,48,176,184,186);
	glPopMatrix();

}


// ID: A_017
void mars_main_rocket_update(int value) {
    if (keepMoving) {
        mars_main_rocket_move -= 0.3f;
        if (mars_main_rocket_move < 0) {
            keepMoving = false;
        }
    }
    glutPostRedisplay();
    glutTimerFunc(30, mars_main_rocket_update, 0);
}

// ID: A_018
void mars_sky_planet_update(int value) {

    mars_sky_planet_move_angle+=0.5f;
    if(mars_sky_planet_move_angle > 360.0)
    {
        mars_sky_planet_move_angle-=360;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, mars_sky_planet_update, 0); //Notify GLUT to call update again in 25 milliseconds
}

// ID: A_019
void mars_Keypress(unsigned char key, int x, int y)
{
	switch (key) {
        case 'n':
            glutDisplayFunc(mars2_display);
            init_mars2();

    glutPostRedisplay();
    }
}


void mars_display() {
    glClear(GL_COLOR_BUFFER_BIT);
    mars_sky();
    mars_sky_planet();
    back_mountain();
    mars_land();
    left_mountain();
    right_mountain();
    mars_main_rocket();
    left_bulk();
    right_bulk();
    glutSwapBuffers();
	glFlush();  // Render now
}

void init_mars()
{
    glutTimerFunc(20, mars_main_rocket_update, 0); //Add a timer
	glutTimerFunc(20, mars_sky_planet_update, 0); //Add a timer
	glutKeyboardFunc(mars_Keypress);
}

/* Main function: GLUT runs as a console application starting at main()  */
/*int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(1920, 1080);// Set the window's initial width & height
	//glutInitWindowSize(1918, 1017);// Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test");
	//gluOrtho2D(-0.1,0.7,-0.1,0.3); // Create a window with the given title
	//glutInitWindowSize(320, 320);// Set the window's initial width & height
	glutDisplayFunc(mars_display);// Register display callback handler for window re-paint
	gluOrtho2D(10,140,10,90);
	glutTimerFunc(20, mars_main_rocket_update, 0); //Add a timer
	glutTimerFunc(20, mars_sky_planet_update, 0); //Add a timer
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
*/
