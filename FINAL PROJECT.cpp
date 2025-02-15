///////////////FAHMIDA NASIM//////////
//////////////ID:22-46264-1///////////


#include <GL/gl.h>
#include<stdio.h>
#include<math.h>
#include <GL/glut.h>
#include <vector>


float move1=0.0f;
float move2=0.0f;
float move3=0.0f;
float move4=0.0f;
float move5=0.0f;
float speed = 0.5f;
GLfloat pos = 0.0f;
GLfloat speed1 = 0.7f;
GLfloat pos1 = 0.0f;
GLfloat speed2= 0.7f;
int currentscene=1;
int rainstatus=0;
float wx=0;
float wy=0;
int x=0;
int y=0;


GLfloat pos3 = 0.0f;
GLfloat speed3 = 0.9f;
GLfloat pos4 = 0.0f;
GLfloat speed4 = 0.7f;

void rain()
{
    glColor3ub(255,255,255);
    glBegin(GL_POINTS);
    for(int i=1;i<=1000;i++)
    {
     x=rand(), y=rand();
    x%=1000; y%=1000;

        glBegin(GL_LINES);
        glColor3ub(255,255,255);
        glVertex2d(x,y);
        glVertex2d(x+5,y+5);
        glEnd();
    }

    for(int i=1;i<=1000;i+=5){
  x=rand(),y=rand();
       x%=1000; y%=1000;

        glBegin(GL_LINES);
      glColor3ub(255,255,255);
        glVertex2d(x,y);
        glVertex2d(x+5,y+5);
        glEnd();

    }

}
void moverain(int x)
{ if(rainstatus ==1){
        wx -= 0.01;
        wy -= 0.01;
    glPushMatrix();
    glTranslatef(wx, wy, 0);
if (x==1){
    rain();
}
    glPopMatrix();

    //glFlush();
}
}

using namespace std;
struct RGB
{
    int red;
    int green;
    int blue;
};

unsigned long long lastFrameTime1 = 0;
RGB skyTop1 = {147, 236, 244};
RGB skyBottom1 = {243, 240, 189};

float birdX1 = 0, birdY1=200, birdWingY1 = -1, birdDirection1=1;

void polygon1(vector<pair<float, float>> coord, RGB rgb = {255, 255, 255}, float Tx = 0, float Ty = 0, float s = 1)
{
    glColor3ub(rgb.red, rgb.green, rgb.blue);
    glBegin(GL_POLYGON);
    for (int i = 0; i < coord.size(); i++)
        glVertex2d(Tx + s * coord[i].first, Ty + s * coord[i].second);
    glEnd();
}

void bird1(float Tx, float Ty, float direction, float birdWingY, RGB rgb = {0,0,0}, float s = 1)
{
    polygon1({
        {28.65 * direction, 2.99},
        {31.98 * direction, 1.74},
        {31.6 * direction, 0.23},
        {31.93 * direction, -1.29},
        {30.43 * direction, -0.38},
        {28.77 * direction, -1.12},
        {24.29 * direction, -4.59},
        {16.47 * direction, -5.28},
        {10.7 * direction, -4.96},
        {2.95 * direction, -10.29},
        {8.55 * direction, -3.22},
        {0.18 * direction, 1.29},
        {9.57 * direction, -0.31},
        {11.02 * direction, 0.27},
        {22.82 * direction, 1.86},
        {28.65 * direction, 2.99}
    }, rgb, Tx, Ty, s);

    polygon1({
        {22.82 * direction, birdWingY * 1.86},
        {23.38 * direction, birdWingY * 8.57},
        {9.98 * direction, birdWingY * 25.45},
        {11.02 * direction, birdWingY * 0.27}
    }, rgb, Tx, Ty, s);
}

void birdAnimation1()
{
    birdX1 += 7*birdDirection1;
    birdWingY1 += 0.5;
    if (birdWingY1 > 1) birdWingY1 = -1;
    if(birdX1>750)
    {
        birdX1=0.0;
    }
}

void animation1()
{
    float frameTime = 3000 / 60.0, currentTime = GetTickCount();
    if (currentTime - lastFrameTime1 >= frameTime)
    {
        lastFrameTime1 = currentTime;
        birdAnimation1();
    }
    glutPostRedisplay();
}
void building1()
{
    ///1st house

glColor3ub(193, 168, 101);
    glBegin(GL_POLYGON);
    glVertex2f(60,40);
    glVertex2f(60,60);
    glVertex2f(88,60);
     glVertex2f(88,42);
    glEnd();

glColor3ub(199, 179, 126);
    glBegin(GL_POLYGON);
    glVertex2f(60,40);
     glVertex2f(60,60);
    glVertex2f(52,76);
    glVertex2f(44,59.5);
     glVertex2f(44,43);
    glEnd();

glColor3ub(159, 74, 2);// chal
    glBegin(GL_POLYGON);
    glVertex2f(60,60);
    glVertex2f(90,60);
    glVertex2f(81.5,80);
     glVertex2f(50,80);
    glEnd();

    ///upper part below part

    glColor3ub(213, 158, 14);
    glBegin(GL_POLYGON);
    glVertex2f(44,43);
    glVertex2f(42,42);
     glVertex2f(60,38);
    glVertex2f(60,40);


    glEnd();

    glColor3ub(213, 158, 14);
    glBegin(GL_POLYGON);
      glVertex2f(60,40);
     glVertex2f(60,38);
    glVertex2f(88.6,40.5);
     glVertex2f(88,42);
    glEnd();

glColor3ub(159, 74, 2);
    glBegin(GL_POLYGON);
    glVertex2f(40,60);
    glVertex2f(44,59.5);
    glVertex2f(52,76);
     glVertex2f(50,80);
    glEnd();

    ///door
    ///main
    glColor3ub(175, 96, 26);
    glBegin(GL_POLYGON);
    glVertex2f(70,50);
    glVertex2f(70,40.7);
    glVertex2f(75,41);
     glVertex2f(75,50);
    glEnd();
    glColor3ub(175, 96, 26);
    glBegin(GL_POLYGON);
    glVertex2f(48.2,50);
    glVertex2f(53.776,50);
    glVertex2f(53.854,41.167);
     glVertex2f(48.051,42.269);
    glEnd();

    ///window
    glColor3ub(146, 43, 33);
    glBegin(GL_POLYGON);
    glVertex2f(62,58);
    glVertex2f(66,58);
    glVertex2f(66,54);
     glVertex2f(62,54);
    glEnd();

    glColor3ub(146, 43, 33);
    glBegin(GL_POLYGON);
    glVertex2f(80,58);
    glVertex2f(84,58);
    glVertex2f(84,54);
     glVertex2f(80,54);
    glEnd();

    glColor3ub(146, 43, 33);
    glBegin(GL_POLYGON);
    glVertex2f(50,60);
    glVertex2f(55,60);
    glVertex2f(55,55);
     glVertex2f(50,55);
    glEnd();


    ///house 2
    glColor3ub(99, 103, 108);
    glBegin(GL_POLYGON);
    glVertex2f(90,80);
    glVertex2f(130,80);
    glVertex2f(120,60);
     glVertex2f(90,60);
     glVertex2f(84.56,72.32);
    glEnd();
    glColor3ub(99, 103, 108);
    glBegin(GL_POLYGON);
    glVertex2f(130,80);
    glVertex2f(140,60);
    glVertex2f(135.90,59.53);
     glVertex2f(128.35,76.71);
    glEnd();
    ///wall
    glColor3ub(99, 149, 200);
    glBegin(GL_POLYGON);
    glVertex2f(135.90,59.53);
    glVertex2f(136.04,45.85);
    glVertex2f(119.99,42.22);
     glVertex2f(120,60);
 glVertex2f(128.35,76.71);
    glEnd();
     glColor3ub(58, 111, 164);
    glBegin(GL_POLYGON);
    glVertex2f(120,60);
    glVertex2f(119.99,42.22);
    glVertex2f(87.98,45.85);
     glVertex2f(87.91,60);

    glEnd();

    ///door
    glColor3ub(2, 46, 90);
    glBegin(GL_POLYGON);
    glVertex2f(125,52);
    glVertex2f(130,52);
    glVertex2f(130.02,44.5);
     glVertex2f(125.01,43.35);
    glEnd();

    glColor3ub(2, 46, 90);
    glBegin(GL_POLYGON);
    glVertex2f(100,52);
    glVertex2f(105,52);
    glVertex2f(104.92,43.92);
     glVertex2f(100,44.49);
    glEnd();

    ///windows
    glColor3ub(1, 1, 1);
glRecti(90,55,95,50);
glColor3ub(1, 1, 1);
glRecti(110,55,115,50);
glColor3ub(1, 1, 1);
glRecti(125,65,130,60);

///lower part
glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(87.98,45.85);
    glVertex2f(87.98,44.53);
    glVertex2f(120,40);
     glVertex2f(119.99,42.22);
    glEnd();
glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(120,40);
     glVertex2f(119.99,42.22);
    glVertex2f(136.04,45.85);
     glVertex2f(138.28,44.85);
    glEnd();

}
void ground1()
{
    ///ground1
glColor3ub(33, 183, 58);
    glBegin(GL_POLYGON);
    glVertex2f(-20,68);
     glColor3ub(255,215,0);
    glVertex2f(230,70);
    glColor3ub(33, 183, 58);
    glVertex2f(205,60);
     glVertex2f(230,60);
       glVertex2f(210,50);
     glVertex2f(240,50);
       glVertex2f(190.28,37.52);
       glColor3ub(255,215,0);
     glVertex2f(237.28,29.96);
     glColor3ub(33, 183, 58);
       glVertex2f(-20,30);

    glEnd();

    ///par
       glColor3ub(204, 152, 23);
glRecti(-20,30,237.29,27.79);

glColor3ub(204, 152, 23);
    glBegin(GL_POLYGON);
    glVertex2f(230,70);
    glVertex2f(230.53,68.17);
    glVertex2f(210.75,60);
     glVertex2f(205,60);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);///lines1
    glColor3ub(1,1,1);
    glVertex2f(-30, 27);
    glVertex2f(238, 27);
    glEnd();

glColor3ub(204, 152, 23);
    glBegin(GL_POLYGON);
    glVertex2f(230,60);
    glVertex2f(230.33,57.83);
    glVertex2f(214.32,50);
     glVertex2f(210,50);
    glEnd();

glColor3ub(204, 152, 23);
    glBegin(GL_POLYGON);
    glVertex2f(240,50);
    glVertex2f(240.18,47.29);
    glVertex2f(196.13,36.58);
     glVertex2f(190.28,37.52);
    glEnd();

    ///ground2

    glColor3ub(90, 220, 11 );
    glBegin(GL_POLYGON);
    glVertex2f(360,96);
    glVertex2f(287.42,96.21);
    glVertex2f(329.39,86.89);
     glVertex2f(271.87,79.76);
     glVertex2f(323,77.46);
    glVertex2f(290.97,71.25);
    glVertex2f(325,69.4);
     glVertex2f(281.54,57.45);
     glVertex2f(360,56.97);
    glEnd();


    ///par

    glColor3ub(204, 152, 23);
    glBegin(GL_POLYGON);
    glVertex2f(287.42,96.21);
    glVertex2f(286.28,93.94);
    glVertex2f(319.93,85.72);
     glVertex2f(329.39,86.89);
    glEnd();

    glColor3ub(204, 152, 23);
    glBegin(GL_POLYGON);
    glVertex2f(271.87,79.76);
    glVertex2f(271.72,76.94);
    glVertex2f(311.77,75.28);
     glVertex2f(322.95,77.46);
    glEnd();

    glColor3ub(204, 152, 23);
    glBegin(GL_POLYGON);
    glVertex2f(290.97,71.25);
    glVertex2f(290.93,68.37);
    glVertex2f(314.87,66.61);
     glVertex2f(325.02,69.40);
    glEnd();

    glColor3ub(204, 152, 23);
    glBegin(GL_POLYGON);
    glVertex2f(281.54,57.44);
    glVertex2f(281.63,54.3);
    glVertex2f(360.11,53.91);
     glVertex2f(360,56.97);
    glEnd();
}

void fench()
{
    ///fench
    glLineWidth(4);
glBegin(GL_LINES);
glColor3ub( 238, 208, 21 );
glVertex2f(-20,65);
glVertex2f(192,65);
glVertex2f(-20,60.5);
glVertex2f(192,60.5);
glVertex2f(-20,56);
glVertex2f(192,56);
glVertex2f(-10,54);
glVertex2f(-10,67);
glVertex2f(-16,54);
glVertex2f(-16,67);
glVertex2f(-4,54);
glVertex2f(-4,67);
glVertex2f(2,54);
glVertex2f(2,67);
glVertex2f(8,54);
glVertex2f(8,67);
glVertex2f(14,54);
glVertex2f(14,67);
glVertex2f(20,54);
glVertex2f(20,67);
glVertex2f(26,54);
glVertex2f(26,67);
glVertex2f(32,54);
glVertex2f(32,67);
glVertex2f(38,54);
glVertex2f(38,67);
glVertex2f(44,54);
glVertex2f(44,67);
glVertex2f(50,54);
glVertex2f(50,67);
glVertex2f(56,54);
glVertex2f(56,67);
glVertex2f(62,67);
glVertex2f(62,54);
glVertex2f(68,54);
glVertex2f(68,67);
glVertex2f(74,54);
glVertex2f(74,67);
glVertex2f(80,54);
glVertex2f(80,67);
glVertex2f(86,54);
glVertex2f(86,67);
glVertex2f(92,54);
glVertex2f(92,67);
glVertex2f(98,54);
glVertex2f(98,67);
glVertex2f(104,54);
glVertex2f(104,67);
glVertex2f(110,54);
glVertex2f(110,67);
glVertex2f(117,54);
glVertex2f(117,67);
glVertex2f(124,54);
glVertex2f(124,67);
glVertex2f(135,54);
glVertex2f(135,67);
glVertex2f(141,54);
glVertex2f(141,67);
glVertex2f(147,54);
glVertex2f(147,67);
glVertex2f(153,54);
glVertex2f(153,67);
glVertex2f(160,54);
glVertex2f(160,67);
glVertex2f(166,54);
glVertex2f(166,67);
glVertex2f(172,54);
glVertex2f(172,67);
glVertex2f(178,54);
glVertex2f(178,67);
glVertex2f(184,54);
glVertex2f(184,67);
glVertex2f(190,54);
glVertex2f(190,67);

glEnd();
}

void sky1()
{
glColor3ub(135, 206, 235 );
glRecti(-20,220,360,100);


///sun
 glBegin(GL_POLYGON);
  float x1 =241.24;
  float y1= 151.74;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(253, 184, 19);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r =20.38 ;
       float x = r * cos(a) + x1;
       float y = r * sin(a) + y1;
       glVertex2f(x, y);
  }
  glEnd();

}
void tree1()
{
    ///talgach
    glColor3ub(199, 91, 0 );
    glBegin(GL_POLYGON);
    glVertex2f(92,80.28);
    glVertex2f(90,80);
    glVertex2f(84.56,72.32);
     glVertex2f(81.40,79.5);
     glVertex2f(76,79.44);
    glVertex2f(76.2,129.15);
    glVertex2f(80.39,121.90);
     glVertex2f(85.38,132.8);
     glVertex2f(89.22,122.94);
    glVertex2f(92.77,127.15);
    glEnd();

    glColor3ub(64, 170, 3 );
    glBegin(GL_POLYGON);
         glVertex2f(67.68,152.06);
      glVertex2f(57.63,143.92);
    glVertex2f(52.62,135.29);
    glVertex2f(52.63,123.07);
    glVertex2f(61.31,132.95);
    glVertex2f(66.85,122.42);
     glVertex2f(73.82,133.34);
     glVertex2f(80.35,122);
    glVertex2f(85.38,132.80);
    glVertex2f(89.21,122.92);
     glVertex2f(95.68,130.56);
     glVertex2f(100.14,122.42);
    glVertex2f(105.99,130.33);
    glVertex2f(112.49,124.06);
    glVertex2f(109.12,138.62);
     glVertex2f(104.20,146);
    glVertex2f(95.91,152.51);
    glVertex2f(81.12,152.74);
     glVertex2f(67.68,152.06);
    glEnd();


    ///

glColor3ub(6, 124, 4  ); //tyy
    glBegin(GL_POLYGON);
    glVertex2f(67.68,152.06);
    glVertex2f(65.84,150.59);
    glVertex2f(58.33,172.07);
    glVertex2f(65.83,166.17);
     glVertex2f(66.77,175.42);
     glVertex2f(71.59,167.25);
    glVertex2f(74.27,175.82);
    glVertex2f(78.02,168.05);
     glVertex2f(82.18,175.28);
     glVertex2f(84.86,168.32);
    glVertex2f(89.01,174.35);
    glVertex2f(91.16,167.78);
     glVertex2f(96.65,173.78);
     glVertex2f(97.32,165.64);
    glVertex2f(104.22,172.08);
    glVertex2f(97.3,151.42);
     glVertex2f(95.91,152.51);
     glVertex2f(81.12,152.74);
    glEnd();

      glLineWidth(1.5);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
     glVertex2f(65.95,151.48);
      glVertex2f(96.93,151.69);
      glEnd();

    ///3rd part
    glColor3ub(54, 146, 2);
    glBegin(GL_POLYGON);
    glVertex2f(60.92,164.64);
    glVertex2f(54.91,162.81);
    glVertex2f(50.76,160.79);
     glVertex2f(42.92,154.06);
     glVertex2f(42,139.39);
    glVertex2f(45.98,145.91);
    glVertex2f(47.14,139.94);
     glVertex2f(50.66,146.42);
     glVertex2f(52.44,139.46);
    glVertex2f(55.57,146.33);
    glVertex2f(56.77,142.51);
    glVertex2f(65.84,150.59);
    glEnd();

    ///
    glColor3ub(54, 146, 2);
    glBegin(GL_POLYGON);
    glVertex2f(101.83,164.93);
    glVertex2f(107.29,162.73);
    glVertex2f(111.24,159.94);
     glVertex2f(118.16,154.71);
        glVertex2f(122.15,140.50);
    glVertex2f(116.49,148.28);
    glVertex2f(115.93,139.63);
     glVertex2f(111.79,147.15);
        glVertex2f(111.74,139.36);
    glVertex2f(108.49,146.12);
    glVertex2f(108.63,139.40);
     glVertex2f(104.2,146);
        glVertex2f(97.3,151.42);

    glEnd();

    ///treee 2
    glColor3ub(203, 123, 7 );
    glBegin(GL_POLYGON);

       glVertex2f(16.87,66.62);
    glVertex2f(19.79,65.92);
    glVertex2f(24.91,78.23);
     glVertex2f(26.36,77.45);
       glVertex2f(20,60);
   glVertex2f(25,40);
    glVertex2f(5,40);
    glVertex2f(10,60);
     glVertex2f(4,84.5);
       glVertex2f(6.7,85.17);
    glVertex2f(10.77,67.69);
     glVertex2f(11.41,82.44);
       glVertex2f(13.33,81.41);
    glVertex2f(13.67,61.68);
    glVertex2f(16.57,80.61);
     glVertex2f(18.41,79.65);
    glEnd();

 glBegin(GL_POLYGON);
  float x1 =0;
  float y1= 80;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(25, 111, 61);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r =15.75 ;
       float x = r * cos(a) + x1;
       float y = r * sin(a) + y1;
       glVertex2f(x, y);
  }
  glEnd();

 glBegin(GL_POLYGON);
  float x2 =26.66;
  float y2= 82.23;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(25, 111, 61);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 13.24;
       float x = r * cos(a) + x2;
       float y = r * sin(a) + y2;
       glVertex2f(x, y);
  }
  glEnd();
 glBegin(GL_POLYGON);
  float x3 =2.59;
  float y3= 107.22;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(25, 111, 61);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 26.30;
       float x = r * cos(a) + x3;
       float y = r * sin(a) + y3;
       glVertex2f(x, y);
  }
  glEnd();

 glBegin(GL_POLYGON);
  float x4=46.2;
  float y4= 101.12;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(25, 111, 61);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 20.55;
       float x = r * cos(a) + x4;
       float y = r * sin(a) + y4;
       glVertex2f(x, y);
  }
  glEnd();
   glBegin(GL_POLYGON);
  float x5 =26.13;
  float y5= 126.03;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(25, 111, 61);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 20.28;
       float x = r * cos(a) + x5;
       float y = r * sin(a) + y5;
       glVertex2f(x, y);
  }
  glEnd();

}
void cloud1()
{///1 cloud

    glPushMatrix();
    glTranslatef(pos1, 0.0f, 0.0f);
    glBegin(GL_QUADS);

 glBegin(GL_POLYGON);
  float x1 =163.58;
  float y1= 169.61;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(229, 231, 233);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r =14.61 ;
       float x = r * cos(a) + x1;
       float y = r * sin(a) + y1;
       glVertex2f(x, y);
  }
  glEnd();

   glBegin(GL_POLYGON);
  float x2 =147.48;
  float y2= 169.61;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(229, 231, 233);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r =12.17 ;
       float x = r * cos(a) + x2;
       float y = r * sin(a) + y2;
       glVertex2f(x, y);
  }
  glEnd();

   glBegin(GL_POLYGON);
  float x3 =180.76;
  float y3= 169.61;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(229, 231, 233);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 12.54;
       float x = r * cos(a) + x3;
       float y = r * sin(a) + y3;
       glVertex2f(x, y);
  }
  glEnd();

   glBegin(GL_POLYGON);
  float x4 =142.32;
  float y4= 129.98;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(229, 231, 233);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r =11.81;
       float x = r * cos(a) + x4;
       float y = r * sin(a) + y4;
       glVertex2f(x, y);
  }
  glEnd();

   glBegin(GL_POLYGON);
  float x5 =128.10;
  float y5= 129.98;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(229, 231, 233);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r =9.12 ;
       float x = r * cos(a) + x5;
       float y = r * sin(a) + y5;
       glVertex2f(x, y);
  }
  glEnd();

   glBegin(GL_POLYGON);
  float x6 =156.47;
  float y6= 129.98;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(229, 231, 233);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r =9.29 ;
       float x = r * cos(a) + x6;
       float y = r * sin(a) + y6;
       glVertex2f(x, y);
  }
  glEnd();


   glBegin(GL_POLYGON);
  float x7 =320.5;
  float y7= 166.5;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(229, 231, 233);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 15.45;
       float x = r * cos(a) + x7;
       float y = r * sin(a) + y7;
       glVertex2f(x, y);
  }
  glEnd();

   glBegin(GL_POLYGON);
  float x8 =300.23;
  float y8= 166.5;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(229, 231, 233);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r =11.78;
       float x = r * cos(a) + x8;
       float y = r * sin(a) + y8;
       glVertex2f(x, y);
  }
  glEnd();

   glBegin(GL_POLYGON);
  float x9 =339.55;
  float y9= 166.5;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(229, 231, 233);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 11.78;
       float x = r * cos(a) + x9;
       float y = r * sin(a) + y9;
       glVertex2f(x, y);
  }
  glEnd();

  glPopMatrix();


}

void ship1()
{
     glColor3ub( 186, 74, 0);
    glBegin(GL_POLYGON);

    glVertex2f(328,62);
    glVertex2f(332.1313534157654, 57.2644208717135);
    glVertex2f(349.9583827104713, 57.2453504041154);
    glVertex2f(353.35625476984484, 61.947609181165625);
    glVertex2f(338, 62);
     glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(326, 68);
    glVertex2f(326.05, 57.17);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(326.01, 66);
    glVertex2f(331.12, 61.99);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(303.91, 65.32);
    glVertex2f(304.03, 57.31);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(303.95, 62.97);
    glVertex2f(307.2968172580754, 60.9914724704888);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(320.99, 85.32);
    glVertex2f(320.92, 77.55);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(320.95, 82.89);
    glVertex2f(324.47, 81.21);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(341, 82);
    glVertex2f(341.13, 69.89);
    glEnd();

     glLineWidth(1.5);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(341.03, 79.04);
    glVertex2f(345.47, 75.73);
    glEnd();


    glColor3ub(205, 97, 85);
    glBegin(GL_POLYGON);

    glVertex2f(338.6018092369239, 66.0020335233017);
    glVertex2f(346, 66);
    glVertex2f(347.311522995073, 62.0566746185131);
    glVertex2f(337.0021219240654, 62.0566746185132);
     glVertex2f(338.6018092369239, 66.0020335233017);
    glEnd();

    glColor3ub(146, 43, 33);
    glBegin(GL_POLYGON);

    glVertex2f(305, 60.8659610237336);
    glVertex2f(307.09, 57.29);
    glVertex2f(318.02,57.227);
    glVertex2f(320, 60.8659610237336);
    glEnd();

    glColor3ub(244, 208, 63);
    glBegin(GL_POLYGON);

    glVertex2f(310,64);
    glVertex2f(310,60.85);
    glVertex2f(316,60.86);
    glVertex2f(316,64);
    glEnd();

    glColor3ub(160, 64, 0);
    glBegin(GL_POLYGON);

    glVertex2f(319.3650399853303, 80.4069124788732);
    glVertex2f(322.0670408678813, 78.0570722762907);
    glVertex2f(335.4203996077835, 77.9893881929135);
    glVertex2f(337.5995347752191, 80.4106494900648);
    glEnd();

    glColor3ub(100, 30, 22);
    glBegin(GL_POLYGON);

    glVertex2f(326,82);
    glVertex2f(322.89, 80.40);
    glVertex2f(334.02, 80.44);
    glVertex2f(334, 82.011);
    glEnd();

    glColor3ub(110, 44, 0);
    glBegin(GL_POLYGON);

    glVertex2f(338.8957589474431, 75.7361088374383);
    glVertex2f(343.0998308229355, 70.949934702261);
    glVertex2f(355.8005223085132, 70.9827918674836);
    glVertex2f(359.5927281806367, 75.7361088374383);
    glEnd();

    glColor3ub(185, 119, 14);
    glBegin(GL_POLYGON);

    glVertex2f(347, 78);
    glVertex2f(347,75.73);
    glVertex2f(355.99,75.73);
    glVertex2f(356,78);
    glEnd();

     glColor3ub(20, 90, 50);
    glBegin(GL_POLYGON);

    glVertex2f(335, 90);
    glVertex2f(340,85);
    glVertex2f(355,85);
    glVertex2f(360,90);
    glEnd();

     glColor3ub(1,1,1);
    glBegin(GL_POLYGON);

    glVertex2f(344.9266936576346, 92.6069172698719);
    glVertex2f(356.368795988211, 81.6496497838095);
    glVertex2f(355,80);
    glVertex2f(344.9266936576346, 92.6069172698719);
    glEnd();


    ///boat 2
glPushMatrix();
    glTranslatef(move4, 0.0f, 0.0f);
     glColor3ub(186, 74, 0);
    glBegin(GL_POLYGON);

    glVertex2f(32.4446755873676, 88.0587286997448);
    glVertex2f(40, 80);
    glVertex2f(80, 80);
    glVertex2f(86.1710355574715, 88.0587286997448);
    glVertex2f(32.4446755873676, 88.0587286997448);
    glEnd();

    glColor3ub(229, 7, 7);
    glBegin(GL_POLYGON);

    glVertex2f(46.40,88.05);
    glVertex2f(65.1891313164227, 105.3082603462747);
    glVertex2f(70.0598792615438, 102.1591068681698);
    glVertex2f(74.3470985496854, 96.5125253667136);
    glVertex2f(75.8110270870996, 92.643571374975);
    glVertex2f(76.64,88.05);
    glEnd();

    glColor3ub(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex2f(37.78,95.15);
    glVertex2f(54.64,74.38);
    glVertex2f(57.95,75.88);
    glEnd();


     glLineWidth(.1);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(65.1891313164227, 105.3082603462747);
    glVertex2f(36.51,88.05);
    glEnd();
     glPopMatrix();
}
void ship11()
{
       ///boat1
    glPushMatrix();
    glTranslatef(pos, 0.0f, 0.0f);
     glColor3ub(148, 49, 38);
    glBegin(GL_POLYGON);

    glVertex2f(250,10);
    glVertex2f(259.2866177888681, 2.5774610763992);
    glVertex2f(318.8494161373138, 2.5774610763992);
    glVertex2f(327.715869577056, 9.9876465746869);
    glEnd();

      glColor3ub(190, 176, 1);
    glBegin(GL_POLYGON);

    glVertex2f(283.04,18.05);
    glVertex2f(301.6559878908625, 44.1077995763369);
    glVertex2f(310.2662181098848, 37.4274485443355);
    glVertex2f(317.243473632196, 26.8873391382888);
    glVertex2f(319.7671617998406, 17.0894909580201);
    glVertex2f(319.99,9.98);
    glVertex2f(313.0783841962233, 10.1390306387561);
    glVertex2f(312, 14);
    glVertex2f(307.8966685677336, 17.9828924364028);

    glEnd();


    glColor3ub(203, 101, 10);
    glBegin(GL_POLYGON);

    glVertex2f(277.30,18.06);
    glVertex2f(281.83,17.19);
     glVertex2f(284.67,14.76);
     glVertex2f(286.2157099167166, 10);
      glVertex2f(313.0783841962233, 10.1390306387561);
      glVertex2f(312, 14);
    glVertex2f(307.8966685677336, 17.9828924364028);

    glEnd();


     glColor3ub(1,1,1);
    glBegin(GL_POLYGON);

    glVertex2f(270,10);
    glVertex2f(270.62,13.11);
    glVertex2f(272.77,16.10);
    glVertex2f(277.30,18.06);
    glVertex2f(281.83,17.19);
    glVertex2f(284.67,14.76);
    glVertex2f(286.21,10);
    glEnd();

    glLineWidth(.1);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(301.6559878908625, 44.1077995763369);
    glVertex2f(257.41,9.99);
    glEnd();
glPopMatrix();
}
 void river1()
 {

     glColor3ub(30,144,255);
    glBegin(GL_POLYGON);

    glVertex2f(-40,100);
    glVertex2f(360, 100);
    glVertex2f(360, 0);
    glVertex2f(-40,0);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);///lines1
    glColor3ub(1,1,1);
    glVertex2f(-40,100);
    glVertex2f(360, 100);
    glEnd();

 }
/// ///////////////////////////////
 ///city
 ///CITY



struct RGB1
{
    int red;
    int green;
    int blue;
};

unsigned long long lastFrameTime = 0;
RGB skyTop = {147, 236, 244};
RGB skyBottom = {243, 240, 189};

float birdX = 0, birdY=600, birdWingY = -1, birdDirection=1;

void polygon(vector<pair<float, float>> coord, RGB rgb = {255, 255, 255}, float Tx = 0, float Ty = 0, float s = 1)
{
    glColor3ub(rgb.red, rgb.green, rgb.blue);
    glBegin(GL_POLYGON);
    for (int i = 0; i < coord.size(); i++)
        glVertex2d(Tx + s * coord[i].first, Ty + s * coord[i].second);
    glEnd();
}

void bird(float Tx, float Ty, float direction, float birdWingY, RGB rgb = {0,0,0}, float s = 1)
{
    polygon({
        {28.65 * direction, 2.99},
        {31.98 * direction, 1.74},
        {31.6 * direction, 0.23},
        {31.93 * direction, -1.29},
        {30.43 * direction, -0.38},
        {28.77 * direction, -1.12},
        {24.29 * direction, -4.59},
        {16.47 * direction, -5.28},
        {10.7 * direction, -4.96},
        {2.95 * direction, -10.29},
        {8.55 * direction, -3.22},
        {0.18 * direction, 1.29},
        {9.57 * direction, -0.31},
        {11.02 * direction, 0.27},
        {22.82 * direction, 1.86},
        {28.65 * direction, 2.99}
    }, rgb, Tx, Ty, s);

    polygon({
        {22.82 * direction, birdWingY * 1.86},
        {23.38 * direction, birdWingY * 8.57},
        {9.98 * direction, birdWingY * 25.45},
        {11.02 * direction, birdWingY * 0.27}
    }, rgb, Tx, Ty, s);
}

void birdAnimation()
{
    birdX += 7*birdDirection;
    birdWingY += 0.5;
    if (birdWingY > 1) birdWingY = -1;
    if(birdX>750)
    {
        birdX=0.0;
    }
}

void animation()
{
    float frameTime = 3000 / 60.0, currentTime = GetTickCount();
    if (currentTime - lastFrameTime >= frameTime)
    {
        lastFrameTime = currentTime;
        birdAnimation();
    }
    glutPostRedisplay();
}

void buil1()

{



    glColor3ub(136, 78, 160 );

    glBegin(GL_POLYGON);

    glVertex2f(95, 180);

    glVertex2f(95, 400);

    glVertex2f(150, 400);

    glVertex2f(150, 180);

    glEnd();



    glLineWidth(1.5);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(95, 180);

    glVertex2f(95, 400);

    glVertex2f(150, 400);

    glVertex2f(150, 180);

    glEnd();



    glLineWidth(1.5);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(95, 180);

    glVertex2f(150, 180);

    glEnd();



    glLineWidth(1.5);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

     glVertex2f(95, 400);

    glVertex2f(150, 400);

    glEnd();



    glColor3ub(187, 143, 206);
    glBegin(GL_POLYGON);

    glVertex2f(110, 180);

    glVertex2f(135, 180);

    glVertex2f(135, 230);

    glVertex2f(110,230);

    glVertex2f(110, 180);

    glEnd();



    glLineWidth(1.5);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(110, 180);

    glVertex2f(135, 180);

    glVertex2f(135, 230);

    glVertex2f(110,230);

    glVertex2f(110, 180);

    glEnd();



    glLineWidth(1.5);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(110, 180);

    glVertex2f(110,230);

    glEnd();



     glLineWidth(1.5);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(135, 180);

    glVertex2f(135, 230);

    glEnd();





    glColor3ub(232, 218, 239);

    glBegin(GL_POLYGON);

    glVertex2f(100, 250);

    glVertex2f(100,270);

    glVertex2f(115,270);

    glVertex2f(115.1292205993167, 249.8355428409805);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(100, 250);

    glVertex2f(100,270);

    glVertex2f(115,270);

    glVertex2f(115.1292205993167, 249.8355428409805);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(100, 250);

    glVertex2f(115.1292205993167, 249.8355428409805);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(100,270);

    glVertex2f(115,270);

    glEnd();



     glColor3ub(232, 218, 239);

    glBegin(GL_POLYGON);

    glVertex2f(127.9538738043822, 250.0221354789139);

    glVertex2f(143.9557602518358, 249.9519517664251);

    glVertex2f(144.0259439643247, 269.9543098257423);

    glVertex2f(128, 270);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(127.9538738043822, 250.0221354789139);

    glVertex2f(143.9557602518358, 249.9519517664251);

    glVertex2f(144.0259439643247, 269.9543098257423);

    glVertex2f(128, 270);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(127.9538738043822, 250.0221354789139);

    glVertex2f(128, 270);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(143.9557602518358, 249.9519517664251);

    glVertex2f(144.0259439643247, 269.9543098257423);

    glEnd();



     glColor3ub(232, 218, 239);

    glBegin(GL_POLYGON);

    glVertex2f(100,280);

    glVertex2f(115,280);

    glVertex2f(115.0953493806942, 300.0580739770991);

    glVertex2f(100,300);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

     glVertex2f(100,280);

    glVertex2f(115,280);

    glVertex2f(115.0953493806942, 300.0580739770991);

    glVertex2f(100,300);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(100,280);

    glVertex2f(100,300);

    glEnd();

    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(115,280);

    glVertex2f(115.0953493806942, 300.0580739770991);

    glEnd();



     glColor3ub(232, 218, 239);

    glBegin(GL_POLYGON);

    glVertex2f(128.0231446873945, 280.075821492021);

    glVertex2f(143.9208994436586, 279.9119271130904);

    glVertex2f(143.9665400567093, 299.9714881338979);

    glVertex2f(127.9717143797515, 299.9714881338979);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(128.0231446873945, 280.075821492021);

    glVertex2f(143.9208994436586, 279.9119271130904);

    glVertex2f(143.9665400567093, 299.9714881338979);

    glVertex2f(127.9717143797515, 299.9714881338979);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(128.0231446873945, 280.075821492021);

    glVertex2f(127.9717143797515, 299.9714881338979);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

     glVertex2f(143.9208994436586, 279.9119271130904);

    glVertex2f(143.9665400567093, 299.9714881338979);

    glEnd();



   glColor3ub(232, 218, 239);
    glBegin(GL_POLYGON);

    glVertex2f(100,310);

    glVertex2f(115, 310);

    glVertex2f(115, 330);

    glVertex2f(100, 330);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(100,310);

    glVertex2f(115, 310);

    glVertex2f(115, 330);

    glVertex2f(100, 330);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(100,310);

    glVertex2f(100, 330);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(115, 310);

    glVertex2f(115, 330);

    glEnd();



  glColor3ub(232, 218, 239);
    glBegin(GL_POLYGON);

    glVertex2f(128.0402601239792, 310.1124012669486);

    glVertex2f(144.081056013881, 309.9478802834624);

    glVertex2f(144, 330);

    glVertex2f(128.0851911274517, 330.0531443954878);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(128.0402601239792, 310.1124012669486);

    glVertex2f(144.081056013881, 309.9478802834624);

    glVertex2f(144, 330);

    glVertex2f(128.0851911274517, 330.0531443954878);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(128.0402601239792, 310.1124012669486);

    glVertex2f(128.0851911274517, 330.0531443954878);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(144.081056013881, 309.9478802834624);

    glVertex2f(144, 330);

    glEnd();


 glColor3ub(232, 218, 239);

    glBegin(GL_POLYGON);

    glVertex2f(100,340);

    glVertex2f(115,340);

    glVertex2f(115, 360);

    glVertex2f(100,360);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(100,340);

    glVertex2f(115,340);

    glVertex2f(115, 360);

    glVertex2f(100,360);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(100,340);

    glVertex2f(100,360);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(115,340);

    glVertex2f(115, 360);

    glEnd();



     glColor3ub(232, 218, 239);

    glBegin(GL_POLYGON);

    glVertex2f(128.0304627004426, 340.0812430055494);

    glVertex2f(144, 340);

    glVertex2f(143.9682390389781, 359.9115823892981);

    glVertex2f(128.0953288526272, 359.9115823892981);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(128.0304627004426, 340.0812430055494);

    glVertex2f(144, 340);

    glVertex2f(143.9682390389781, 359.9115823892981);

    glVertex2f(128.0953288526272, 359.9115823892981);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(128.0304627004426, 340.0812430055494);

    glVertex2f(128.0953288526272, 359.9115823892981);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(144, 340);

    glVertex2f(143.9682390389781, 359.9115823892981);

    glEnd();



     glColor3ub(232, 218, 239);

    glBegin(GL_POLYGON);

    glVertex2f(100,370);

    glVertex2f(116.0353770362673, 369.8836199144383);

    glVertex2f(116, 390);

    glVertex2f(100, 390);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(100,370);

    glVertex2f(116.0353770362673, 369.8836199144383);

    glVertex2f(116, 390);

    glVertex2f(100, 390);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(100,370);

    glVertex2f(100, 390);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(116.0353770362673, 369.8836199144383);

    glVertex2f(116, 390);

    glEnd();



     glColor3ub(232, 218, 239);
    glBegin(GL_POLYGON);

    glVertex2f(128.0729895389285, 370.0215889687379);

    glVertex2f(144, 370);

    glVertex2f(144, 390);

    glVertex2f(128, 390);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(128.0729895389285, 370.0215889687379);

    glVertex2f(144, 370);

    glVertex2f(144, 390);

    glVertex2f(128, 390);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(128.0729895389285, 370.0215889687379);

    glVertex2f(128, 390);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

     glVertex2f(144, 370);

    glVertex2f(144, 390);

    glEnd();



}



void buil2()

{



    glColor3ub(9, 126, 126);

    glBegin(GL_POLYGON);

    glVertex2f(150, 180);

    glVertex2f(240, 180);

    glVertex2f(240, 340);

    glVertex2f(149.9661158523671, 340.4891545706261);

    glVertex2f(150, 180);

    glEnd();



    glLineWidth(2);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

   glVertex2f(150, 180);

    glVertex2f(240, 180);

    glVertex2f(240, 340);

    glVertex2f(149.9661158523671, 340.4891545706261);

    glEnd();



    glLineWidth(2);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

   glVertex2f(150, 180);

   glVertex2f(149.9661158523671, 340.4891545706261);

   glEnd();



    glLineWidth(2);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(240, 180);

    glVertex2f(240, 340);

    glEnd();



    glColor3ub(159, 226, 191);

    glBegin(GL_POLYGON);

    glVertex2f(209.8184760969489, 340.1148348643002);

    glVertex2f(240, 340);

    glVertex2f(240, 380);

    glVertex2f(210, 380);

    glVertex2f(209.8184760969489, 340.1148348643002);

    glEnd();



    glLineWidth(2);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(209.8184760969489, 340.1148348643002);

    glVertex2f(240, 340);

    glVertex2f(240, 380);

    glVertex2f(210, 380);

    glVertex2f(209.8184760969489, 340.1148348643002);

    glEnd();



    glLineWidth(2);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(209.8184760969489, 340.1148348643002);

    glVertex2f(210, 380);

       glEnd();



    glLineWidth(2);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(240, 340);

    glVertex2f(240, 380);

    glEnd();



    glColor3ub( 95, 196, 196);

    glBegin(GL_POLYGON);

    glVertex2f(180,180);

    glVertex2f(210, 180);

    glVertex2f(210, 210);

    glVertex2f(180, 210);

    glVertex2f(180,180);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(180,180);

    glVertex2f(210, 180);

    glVertex2f(210, 210);

    glVertex2f(180, 210);

    glVertex2f(180,180);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(180,180);

    glVertex2f(180,210);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(210, 180);

    glVertex2f(210, 210);

    glEnd();





    glColor3ub( 132, 176, 176);

    glBegin(GL_POLYGON);

    glVertex2f(156.6042396808212, 220.1620863799464);

    glVertex2f(180, 220);

    glVertex2f(180, 240);

    glVertex2f(156.6042396808212, 239.8043055431601);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(156.6042396808212, 220.1620863799464);

    glVertex2f(180, 220);

    glVertex2f(180, 240);

    glVertex2f(156.6042396808212, 239.8043055431601);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(156.6042396808212, 220.1620863799464);

    glVertex2f(156.6042396808212, 239.8043055431601);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(180, 220);

    glVertex2f(180, 240);

    glEnd();



    glColor3ub( 132, 176, 176);

    glBegin(GL_POLYGON);

    glVertex2f(204.0545444009446, 219.9413872882249);

    glVertex2f(230, 220);

    glVertex2f(230, 240);

    glVertex2f(204.0694021350863, 240.0220330880533);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(204.0545444009446, 219.9413872882249);

    glVertex2f(230, 220);

    glVertex2f(230, 240);

    glVertex2f(204.0694021350863, 240.0220330880533);

    glEnd();



      glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(204.0545444009446, 219.9413872882249);

    glVertex2f(204.0694021350863, 240.0220330880533);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(230, 220);

    glVertex2f(230, 240);

    glEnd();



    glColor3ub( 132, 176, 176);

    glBegin(GL_POLYGON);

    glVertex2f(156.8237092359748, 249.9770816616228);

    glVertex2f(180, 250);

    glVertex2f(180, 270);

    glVertex2f(156.8237092359749, 269.9403085148193);

    glEnd();



    glLineWidth(2);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(156.8237092359748, 249.9770816616228);

    glVertex2f(180, 250);

    glVertex2f(180, 270);

    glVertex2f(156.8237092359749, 269.9403085148193);

    glEnd();



    glLineWidth(2);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(156.8237092359748, 249.9770816616228);

    glVertex2f(156.8237092359749, 269.9403085148193);

    glEnd();



    glLineWidth(2);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(180, 250);

    glVertex2f(180, 270);

    glEnd();



    glColor3ub( 132, 176, 176);

    glBegin(GL_POLYGON);

    glVertex2f(204, 250);

    glVertex2f(230, 250);

    glVertex2f(230, 270);

    glVertex2f(204, 270);

    glEnd();



     glLineWidth(2);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(204, 250);

    glVertex2f(230, 250);

    glVertex2f(230, 270);

    glVertex2f(204, 270);

    glEnd();



     glLineWidth(2);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(204, 250);

     glVertex2f(204, 270);

    glEnd();



    glLineWidth(2);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);

    glVertex2f(230, 250);

    glVertex2f(230, 270);

    glEnd();



    glColor3ub( 132, 176, 176);

    glBegin(GL_POLYGON);

    glVertex2f(156.8237092359748, 249.9770816616228);

    glVertex2f(180, 250);

    glVertex2f(180, 270);

    glVertex2f(156.8237092359749, 269.9403085148193);

    glEnd();



    glColor3ub( 132, 176, 176);

    glBegin(GL_POLYGON);

    glVertex2f(204, 250);

    glVertex2f(230, 250);

    glVertex2f(230, 270);

    glVertex2f(204, 270);

    glEnd();



    glColor3ub( 132, 176, 176);

    glBegin(GL_POLYGON);

    glVertex2f(156.8871914273931, 279.9883389919396);

    glVertex2f(180, 280);

    glVertex2f(180, 300);

    glVertex2f(157.062980907708, 300.0417379134722);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(156.8871914273931, 279.9883389919396);

    glVertex2f(180, 280);

    glVertex2f(180, 300);

    glVertex2f(157.062980907708, 300.0417379134722);

    glEnd();





     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(156.8871914273931, 279.9883389919396);

    glVertex2f(157.062980907708, 300.0417379134722);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(180, 280);

    glVertex2f(180, 300);

    glEnd();



    glColor3ub( 132, 176, 176);

    glBegin(GL_POLYGON);

    glVertex2f(204, 280);

    glVertex2f(230, 280);

    glVertex2f(230, 300);

    glVertex2f(204, 300);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(204, 280);

    glVertex2f(230, 280);

    glVertex2f(230, 300);

    glVertex2f(204, 300);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(204, 280);

    glVertex2f(204, 300);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(230, 280);

    glVertex2f(230, 300);

    glEnd();



    glColor3ub( 132, 176, 176);

    glBegin(GL_POLYGON);

    glVertex2f(157.062980907708, 310.0629672056268);

    glVertex2f(180, 310);

    glVertex2f(180, 330);

    glVertex2f(157.062980907708, 329.9777668180612);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(157.062980907708, 310.0629672056268);

    glVertex2f(180, 310);

    glVertex2f(180, 330);

    glVertex2f(157.062980907708, 329.9777668180612);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(157.062980907708, 310.0629672056268);

    glVertex2f(157.062980907708, 329.9777668180612);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(180, 310);

    glVertex2f(180, 330);

    glEnd();



    glColor3ub( 132, 176, 176);

    glBegin(GL_POLYGON);

    glVertex2f(204, 310);

    glVertex2f(230, 310);

    glVertex2f(230, 330);

    glVertex2f(204, 330);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(204, 310);

    glVertex2f(230, 310);

    glVertex2f(230, 330);

    glVertex2f(204, 330);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(204, 310);

    glVertex2f(204, 330);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);

    glVertex2f(230, 310);

    glVertex2f(230, 330);

    glEnd();

}



void buil3()

{



    glColor3ub(229, 152, 102);

    glBegin(GL_POLYGON);

    glVertex2f(250, 180);

    glVertex2f(350, 180);

    glVertex2f(350, 400);

    glVertex2f(250, 400);

    glVertex2f(250, 180);

    glEnd();



    glLineWidth(2);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(250, 180);

    glVertex2f(350, 180);

    glVertex2f(350, 400);

    glVertex2f(250, 400);

    glEnd();



    glLineWidth(2);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(250, 180);

    glVertex2f(250, 400);

    glEnd();



    glLineWidth(2);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(350, 180);

    glVertex2f(350, 400);

    glEnd();



    glColor3ub(211, 84, 0);

    glBegin(GL_POLYGON);

    glVertex2f(280,180);

    glVertex2f(320,180);

    glVertex2f(320, 220);

    glVertex2f(280, 220);

    glEnd();



    glLineWidth(1.5);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(280,180);

    glVertex2f(320,180);

    glVertex2f(320, 220);

    glVertex2f(280, 220);

    glEnd();



    glLineWidth(1.5);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(280,180);

    glVertex2f(280, 220);

    glEnd();



    glLineWidth(1.5);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(320,180);

    glVertex2f(320, 220);

    glEnd();



    glColor3ub(235, 152, 78);

    glBegin(GL_POLYGON);

    glVertex2f(260, 280);

    glVertex2f(300, 280);

    glVertex2f(300, 300);

    glVertex2f(260, 300);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(260, 280);

    glVertex2f(300, 280);

    glVertex2f(300, 300);

    glVertex2f(260, 300);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(260, 280);

    glVertex2f(260, 300);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(300, 280);

    glVertex2f(300, 300);

    glEnd();



    glColor3ub(250, 215, 160);

    glBegin(GL_POLYGON);

    glVertex2f(300, 280);

    glVertex2f(340, 280);

    glVertex2f(340, 300);

    glVertex2f(300, 300);

    glEnd();





     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(300, 280);

    glVertex2f(340, 280);

    glVertex2f(340, 300);

    glVertex2f(300, 300);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(300, 280);

    glVertex2f(300, 300);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(340, 280);

    glVertex2f(340, 300);

    glEnd();



    glColor3ub(250, 215, 160);

    glBegin(GL_POLYGON);

    glVertex2f(260, 320);

    glVertex2f(300, 320);

    glVertex2f(300, 340);

    glVertex2f(260, 340);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(260, 320);

    glVertex2f(300, 320);

    glVertex2f(300, 340);

    glVertex2f(260, 340);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(260, 320);

    glVertex2f(260, 340);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(300, 320);

    glVertex2f(300, 340);

    glEnd();



    glColor3ub(235, 152, 78);

    glBegin(GL_POLYGON);

    glVertex2f(300, 320);

    glVertex2f(340, 320);

    glVertex2f(340, 340);

    glVertex2f(300, 340);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(300, 320);

    glVertex2f(340, 320);

    glVertex2f(340, 340);

    glVertex2f(300, 340);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(300, 320);

    glVertex2f(300, 340);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(340, 320);

    glVertex2f(340, 340);

    glEnd();



    glColor3ub(235, 152, 78);

    glBegin(GL_POLYGON);

    glVertex2f(260, 360);

    glVertex2f(300, 360);

    glVertex2f(300, 380);

    glVertex2f(260, 380);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(260, 360);

    glVertex2f(300, 360);

    glVertex2f(300, 380);

    glVertex2f(260, 380);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(260, 360);

    glVertex2f(260, 380);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(300, 360);

    glVertex2f(300, 380);

    glEnd();



    glColor3ub(250, 215, 160);

    glBegin(GL_POLYGON);

    glVertex2f(300, 360);

    glVertex2f(340, 360);

    glVertex2f(340, 380);

    glVertex2f(300, 380);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(300, 360);

    glVertex2f(340, 360);

    glVertex2f(340, 380);

    glVertex2f(300, 380);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(300, 360);

    glVertex2f(300, 380);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(340, 360);

    glVertex2f(340, 380);

    glEnd();

}



void buil4()

{

  glColor3ub(20, 52, 164);

    glBegin(GL_POLYGON);

    glVertex2f(350, 180);

    glVertex2f(460, 180);

    glVertex2f(460, 200);

    glVertex2f(350.0256082550327, 199.9800870976858);

    glEnd();



    glLineWidth(1.5);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(350, 180);

    glVertex2f(460, 180);

    glVertex2f(460, 200);

    glVertex2f(350.0256082550327, 199.9800870976858);

    glEnd();



    glLineWidth(1.5);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(350, 180);

    glVertex2f(350.0256082550327, 199.9800870976858);

    glEnd();



    glLineWidth(1.5);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(460, 180);

    glVertex2f(460, 200);

    glEnd();



    glColor3ub(64, 181, 173);

    glBegin(GL_POLYGON);

    glVertex2f(354.437,200);

    glVertex2f(456.019, 200);

    glVertex2f(455.887,380.368);

    glVertex2f(354.14, 380.284);

    glEnd();



     glLineWidth(1.5);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(354.437,200);

    glVertex2f(456.019, 200);

    glVertex2f(455.887,380.368);

    glVertex2f(354.14, 380.284);

    glEnd();



    glLineWidth(1.5);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(354.437,200);

    glVertex2f(354.14, 380.284);

    glEnd();



    glLineWidth(1.5);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(456.019, 200);

    glVertex2f(455.887,380.368);

    glEnd();



    glColor3ub(20, 52, 164);

    glBegin(GL_POLYGON);

    glVertex2f(354.14, 380.284);

    glVertex2f(455.887,380.368);

    glVertex2f(440,400);

    glVertex2f(370,400);

    glEnd();



    glLineWidth(1.5);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(354.14, 380.284);

    glVertex2f(455.887,380.368);

    glVertex2f(440,400);

    glVertex2f(370,400);

    glEnd();



     glLineWidth(1.5);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(354.14, 380.284);

    glVertex2f(370,400);

    glEnd();



     glLineWidth(1.5);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(455.887,380.368);

    glVertex2f(440,400);

    glEnd();



    glColor3ub(115, 147, 179);

    glBegin(GL_POLYGON);

    glVertex2f(368.8228890084603, 368.2885989402066);

    glVertex2f(443.7906811797685, 368.2154808929749);

    glVertex2f(443.91102181917955, 328.2415947744908);

    glVertex2f(368.82288900846027, 328.49188855052654);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(368.8228890084603, 368.2885989402066);

    glVertex2f(443.7906811797685, 368.2154808929749);

    glVertex2f(443.91102181917955, 328.2415947744908);

    glVertex2f(368.82288900846027, 328.49188855052654);

    glEnd();





     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(368.8228890084603, 368.2885989402066);

    glVertex2f(368.82288900846027, 328.49188855052654);

    glEnd();





     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(443.7906811797685, 368.2154808929749);

    glVertex2f(443.91102181917955, 328.2415947744908);

    glEnd();



    glColor3ub(182, 208, 226);

    glBegin(GL_POLYGON);

    glVertex2f(380, 340);

    glVertex2f(400, 340);

    glVertex2f(400, 360);

    glVertex2f(380, 360);

    glEnd();





     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(380, 340);

    glVertex2f(400, 340);

    glVertex2f(400, 360);

    glVertex2f(380, 360);

    glEnd();





     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(380, 340);

    glVertex2f(380, 360);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(400, 340);

    glVertex2f(400, 360);

    glEnd();



    glColor3ub(182, 208, 226);

    glBegin(GL_POLYGON);

    glVertex2f(415.8781189031778, 340.0054022481698);

    glVertex2f(436.1519147620719, 340.2556960242055);

    glVertex2f(436.1519147620719, 360.0289043310277);

    glVertex2f(415.6278251271419, 359.778610554992);

    glEnd();





     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

   glVertex2f(415.8781189031778, 340.0054022481698);

    glVertex2f(436.1519147620719, 340.2556960242055);

    glVertex2f(436.1519147620719, 360.0289043310277);

    glVertex2f(415.6278251271419, 359.778610554992);

    glEnd();



      glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

   glVertex2f(415.8781189031778, 340.0054022481698);

    glVertex2f(415.6278251271419, 359.778610554992);

    glEnd();



      glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(436.1519147620719, 340.2556960242055);

    glVertex2f(436.1519147620719, 360.0289043310277);

    glEnd();



    glColor3ub(115, 147, 179);

    glBegin(GL_POLYGON);

    glVertex2f(368.0720076803532, 280.1851897756318);

    glVertex2f(444.110305509963, 280.25335328823);

    glVertex2f(444.2549423510362, 315.8340161922381);

    glVertex2f(367.8217139043175, 315.7269059727046);

    glEnd();



      glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

   glVertex2f(368.0720076803532, 280.1851897756318);

    glVertex2f(444.110305509963, 280.25335328823);

    glVertex2f(444.2549423510362, 315.8340161922381);

    glVertex2f(367.8217139043175, 315.7269059727046);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

   glVertex2f(368.0720076803532, 280.1851897756318);

    glVertex2f(367.8217139043175, 315.7269059727046);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(444.110305509963, 280.25335328823);

    glVertex2f(444.2549423510362, 315.8340161922381);

    glEnd();



    glColor3ub(182, 208, 226);

    glBegin(GL_POLYGON);

    glVertex2f(380.1454572282847, 288.2741606517918);

    glVertex2f(400.0168678338659, 288.2741606517918);

    glVertex2f(399.8818109325508, 307.8285121298797);

    glVertex2f(379.9574569740642, 307.6820095272437);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(380.1454572282847, 288.2741606517918);

    glVertex2f(400.0168678338659, 288.2741606517918);

    glVertex2f(399.8818109325508, 307.8285121298797);

    glVertex2f(379.9574569740642, 307.6820095272437);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(380.1454572282847, 288.2741606517918);

    glVertex2f(379.9574569740642, 307.6820095272437);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(400.0168678338659, 288.2741606517918);

    glVertex2f(399.8818109325508, 307.8285121298797);

    glEnd();



    glColor3ub(182, 208, 226);

    glBegin(GL_POLYGON);

    glVertex2f(416.1700756050801, 288.334447467648);

    glVertex2f(436.0668141614519, 288.3003939774849);

    glVertex2f(435.827846860248, 307.6609079713238);

    glVertex2f(416.2467625959364, 307.5074542574691);

    glEnd();



     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(416.1700756050801, 288.334447467648);

    glVertex2f(436.0668141614519, 288.3003939774849);

    glVertex2f(435.827846860248, 307.6609079713238);

    glVertex2f(416.2467625959364, 307.5074542574691);

    glEnd();





     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(416.1700756050801, 288.334447467648);

    glVertex2f(416.2467625959364, 307.5074542574691);

    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(436.0668141614519, 288.3003939774849);

    glVertex2f(435.827846860248, 307.6609079713238);

    glEnd();





    glColor3ub(182, 208, 226);

    glBegin(GL_POLYGON);

    glVertex2f(387.9284336133121, 200.5555631721265);

    glVertex2f(428.098,200);

    glVertex2f(428.1883722770751, 259.9995985838557);

    glVertex2f(387.919470388423, 259.912401464995);

    glEnd();





     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

     glVertex2f(387.9284336133121, 200.5555631721265);

    glVertex2f(428.098,200);

    glVertex2f(428.1883722770751, 259.9995985838557);

    glVertex2f(387.919470388423, 259.912401464995);

    glEnd();





     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

     glVertex2f(387.9284336133121, 200.5555631721265);

    glVertex2f(387.919470388423, 259.912401464995);

    glEnd();





     glLineWidth(1);

    glBegin(GL_LINES);///lines5

    glColor3ub(0,0,0);

    glVertex2f(428.098,200);

    glVertex2f(428.1883722770751, 259.9995985838557);

    glEnd();

}



void road1()

{

    glColor3ub(105, 105, 105);

    glBegin(GL_POLYGON);

    glColor3ub(1, 1, 1);
    glVertex2f(220,150);

    glVertex2f(220,50);

    glColor3ub(105, 105, 105);

    glVertex2f(260,50);

    glVertex2f(260,150);

    glVertex2f(570,150);

    glVertex2f(570,180);

    glVertex2f(0,180);

    glVertex2f(0,150);

    glEnd();

    glLineWidth(5);

    glBegin(GL_LINES);///lines1

    glColor3ub(255,255,255);

    glVertex2f(0,170);

    glVertex2f(50, 170);

    glEnd();



    glLineWidth(5);

    glBegin(GL_LINES);///lines1

    glColor3ub(255,255,255);

    glVertex2f(70,170);

    glVertex2f(120, 170);

    glEnd();



    glLineWidth(5);

    glBegin(GL_LINES);///lines1

    glColor3ub(255,255,255);

    glVertex2f(140,170);

    glVertex2f(190, 170);

    glEnd();



    glLineWidth(5);

    glBegin(GL_LINES);///lines1

    glColor3ub(255,255,255);

    glVertex2f(70,170);

    glVertex2f(120, 170);

    glEnd();



    glLineWidth(5);

    glBegin(GL_LINES);///lines1

    glColor3ub(255,255,255);

    glVertex2f(220,170);

    glVertex2f(280, 170);

    glEnd();



    glLineWidth(5);

    glBegin(GL_LINES);///lines1

    glColor3ub(255,255,255);

    glVertex2f(310,170);

    glVertex2f(380, 170);

    glEnd();



    glLineWidth(5);

    glBegin(GL_LINES);///lines1

    glColor3ub(255,255,255);

    glVertex2f(410,170);

    glVertex2f(470, 170);

    glEnd();



     glLineWidth(7);

    glBegin(GL_LINES);///lines1

    glColor3ub(255,255,255);

    glVertex2f(240,145);

    glVertex2f(240, 75);

    glEnd();



    glLineWidth(1.5);

    glBegin(GL_LINES);///lines1

    glColor3ub(255, 255, 255);

    glVertex2f(0,150);

    glVertex2f(220, 150);

    glEnd();



    glLineWidth(1.5);

    glBegin(GL_LINES);///lines1

    glColor3ub(255,255,255);

    glVertex2f(220,150);

    glVertex2f(220, 50);

    glEnd();



    glLineWidth(1.5);

    glBegin(GL_LINES);///lines1

    glColor3ub(255,255,255);

    glVertex2f(260,50);

    glVertex2f(260, 150);

    glEnd();



    glLineWidth(1.5);

    glBegin(GL_LINES);///lines1

    glColor3ub(255,255,255);

    glVertex2f(260,150);

    glVertex2f(560, 150);

    glEnd();

}



// Front Road

void road()

{

    glColor3ub(0, 128, 0);

    glBegin(GL_POLYGON);

    glVertex2f(0, 0);

    glVertex2f(500, 0);

    glVertex2f(500, 75);

    glVertex2f(0, 75);

    glEnd();

    // car road

    glColor3ub(255, 255, 255);

    glBegin(GL_POLYGON);

    glVertex2f(0, 0);

    glVertex2f(500, 0);

    glVertex2f(500, 55);

    glVertex2f(0, 55);

    glEnd();

    glColor3ub(105, 105, 105);

    glBegin(GL_POLYGON);

    glVertex2f(0, 0);

    glVertex2f(500, 0);

    glVertex2f(500, 50);

    glVertex2f(0, 50);

    glEnd();

    glColor3ub(255, 255, 255);

    glBegin(GL_POLYGON);

    glVertex2f(15, 20);

    glVertex2f(50, 20);

    glVertex2f(50, 30);

    glVertex2f(15, 30);

    glEnd();

    glColor3ub(255, 255, 255);

    glBegin(GL_POLYGON);

    glVertex2f(65, 20);

    glVertex2f(100, 20);

    glVertex2f(100, 30);

    glVertex2f(65, 30);

    glEnd();



    glColor3ub(255, 255, 255);

    glBegin(GL_POLYGON);

    glVertex2f(115, 20);

    glVertex2f(150, 20);

    glVertex2f(150, 30);

    glVertex2f(115, 30);

    glEnd();



    glColor3ub(255, 255, 255);

    glBegin(GL_POLYGON);

    glVertex2f(165, 20);

    glVertex2f(200, 20);

    glVertex2f(200, 30);

    glVertex2f(165, 30);

    glEnd();



    glColor3ub(255, 255, 255);

    glBegin(GL_POLYGON);

    glVertex2f(215, 20);

    glVertex2f(250, 20);

    glVertex2f(250, 30);

    glVertex2f(215, 30);

    glEnd();



    glColor3ub(255, 255, 255);

    glBegin(GL_POLYGON);

    glVertex2f(265, 20);

    glVertex2f(300, 20);

    glVertex2f(300, 30);

    glVertex2f(265, 30);

    glEnd();



    glColor3ub(255, 255, 255);

    glBegin(GL_POLYGON);

    glVertex2f(315, 20);

    glVertex2f(350, 20);

    glVertex2f(350, 30);

    glVertex2f(315, 30);

    glEnd();



    glColor3ub(255, 255, 255);

    glBegin(GL_POLYGON);

    glVertex2f(365, 20);

    glVertex2f(400, 20);

    glVertex2f(400, 30);

    glVertex2f(365, 30);

    glEnd();



    glColor3ub(255, 255, 255);

    glBegin(GL_POLYGON);

    glVertex2f(415, 20);

    glVertex2f(450, 20);

    glVertex2f(450, 30);

    glVertex2f(415, 30);

    glEnd();



    glColor3ub(255, 255, 255);

    glBegin(GL_POLYGON);

    glVertex2f(465, 20);

    glVertex2f(500, 20);

    glVertex2f(500, 30);

    glVertex2f(465, 30);

    glEnd();



}

float  tx = 10, bx = 10, rx = 10, sx = 10, hx = 0;



void circle(float rx, float ry, float cx, float cy)

{

    glBegin(GL_POLYGON);

    glVertex2f(cx, cy);

    for (int i = 0; i <= 360; i++)

    {

        float angle = i * 3.1416 / 180;

        float x = rx * cos(angle);

        float y = ry * sin(angle);

        glVertex2f((x + cx), (y + cy));

    }

    glEnd();

}



void Bushes()

{

    // 1st Bushes

    glColor3ub(154, 205, 50);

    circle(20, 30, 20, 180);

    circle(20, 30, 40, 210);

    circle(20, 30, 60, 180);



    // 2nd Bushes

    glColor3ub(154, 205, 50);

    circle(20, 30, 430, 180);

    circle(20, 30, 450, 210);

    circle(20, 30, 470, 180);



    // 3rd Bushes

    glColor3ub(0, 128, 0);

    circle(20, 30, 490, 180);

    circle(20, 30, 510, 210);

}



void sun()

{

    glBegin(GL_POLYGON);

 glBegin(GL_POLYGON);
  float x22 = 305;
  float y22= 452;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(255, 234, 0);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 30;
       float x = r * cos(a) + x22;
       float y = r * sin(a) + y22;
       glVertex2f(x, y);
  }
  glEnd();

  glBegin(GL_POLYGON);


}



void round(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)

{

    glBegin(GL_POLYGON);

    glVertex2f(cx, cy);

    for (int i = 0; i <= 360; i++)

    {

        float angle = i * 3.1416 / 180;

        float x = rx * cos(angle);

        float y = ry * sin(angle);

        glVertex2f((x + cx), (y + cy));

    }

    glEnd();

}






void tree()

{

    // back tree

    glColor3ub(139, 69, 19);

    glBegin(GL_POLYGON);

    glVertex2f(30, 180);

    glVertex2f(40, 180);

    glVertex2f(40, 320);

    glVertex2f(30, 320);

    glEnd();

     glLineWidth(1);

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);
    glVertex2f(30, 180);
    glVertex2f(40, 180);
    glVertex2f(40, 320);
    glVertex2f(30, 320);
    glEnd();

    glBegin(GL_LINES);///lines1

    glColor3ub(0,0,0);
    glVertex2f(30, 180);
    glVertex2f(30, 320);
    glEnd();

    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(40, 180);
    glVertex2f(40, 320);
    glEnd();

    glColor3ub(34, 139, 34);
    glBegin(GL_POLYGON);
    glVertex2f(20, 335);
    glVertex2f(0, 310);
    glVertex2f(70, 310);
    glVertex2f(50, 335);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(20, 335);
    glVertex2f(0, 310);
    glVertex2f(70, 310);
    glVertex2f(50, 335);
    glEnd();

    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(20, 335);
    glVertex2f(50, 335);
    glEnd();

    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(0, 310);
    glVertex2f(70, 310);
    glEnd();

    glColor3ub(34, 139, 34);
    glBegin(GL_POLYGON);
    glVertex2f(20, 360);
    glVertex2f(0, 335);
    glVertex2f(73, 335);
    glVertex2f(50, 360);
    glEnd();

    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(20, 360);
    glVertex2f(0, 335);
    glVertex2f(73, 335);
    glVertex2f(50, 360);
    glEnd();

    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(20, 360);
    glVertex2f(50, 360);
    glEnd();

    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(0, 335);
    glVertex2f(73, 335);
    glEnd();

    glColor3ub(34, 139, 34);
    glBegin(GL_POLYGON);
    glVertex2f(0, 360);
    glVertex2f(70, 360);
    glVertex2f(35, 399);
    glEnd();

    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(0, 360);
    glVertex2f(70, 360);
    glVertex2f(35, 399);
    glEnd();

    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(0, 360);
    glVertex2f(35, 399);
    glEnd();

    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(70, 360);
    glVertex2f(35, 399);
    glEnd();

    glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);
    glVertex2f(48, 180);
    glVertex2f(52, 180);
    glVertex2f(52, 230);
    glVertex2f(48,230);
    glEnd();

    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(48, 180);
    glVertex2f(52, 180);
    glVertex2f(52, 230);
    glVertex2f(48,230);
    glEnd();

    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(48, 180);
    glVertex2f(48,230);
    glEnd();

    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(52, 180);
    glVertex2f(52, 230);
    glEnd();

    glColor3ub(34, 139, 34);
    glBegin(GL_POLYGON);
    glVertex2f(45, 240);
    glVertex2f(40, 230);
    glVertex2f(60, 230);
    glVertex2f(55,240);
    glEnd();

     glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(45, 240);
    glVertex2f(40, 230);
    glVertex2f(60, 230);
    glVertex2f(55,240);
    glEnd();

    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(45, 240);
    glVertex2f(55,240);
    glEnd();

    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(40, 230);
    glVertex2f(60, 230);
    glEnd();

    glColor3ub(34, 139, 34);
    glBegin(GL_POLYGON);
    glVertex2f(45, 250);
    glVertex2f(40, 240);
    glVertex2f(60 ,240);
    glVertex2f(55,250);
    glEnd();

    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(45, 250);
    glVertex2f(40, 240);
    glVertex2f(60 ,240);
    glVertex2f(55,250);
    glEnd();

     glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(45, 250);
    glVertex2f(55,250);
    glEnd();

    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(40, 240);
    glVertex2f(60 ,240);
    glEnd();

    glColor3ub(34, 139, 34);
    glBegin(GL_POLYGON);
    glVertex2f(50, 265);
    glVertex2f(40, 250);
    glVertex2f(60 ,250);
    glEnd();

    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(50, 265);
    glVertex2f(40, 250);
    glVertex2f(60 ,250);
    glEnd();

    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(50, 265);
    glVertex2f(60 ,250);
    glEnd();

    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(40, 250);
    glVertex2f(60 ,250);
    glEnd();

    glColor3ub(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(82, 180);
    glVertex2f(86, 180);
    glVertex2f(86 ,340);
    glVertex2f(82,340);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2f(72, 363);
    glVertex2f(77, 340);
    glVertex2f(90 ,340);
    glVertex2f(95,363);
    glEnd();

    glColor3ub(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(83, 377);
    glVertex2f(72, 363);
    glVertex2f(95 ,363);
    glEnd();

    glColor3ub(139, 69, 19);///
    glBegin(GL_POLYGON);
    glVertex2f(66, 180);
    glVertex2f(74, 180);
    glVertex2f(74 ,270);
    glVertex2f(66,270);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(66, 180);
    glVertex2f(74, 180);
    glVertex2f(74 ,270);
    glVertex2f(66,270);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(66, 180);
    glVertex2f(66,270);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(74, 180);
    glVertex2f(74 ,270);
    glEnd();

    glColor3ub(34, 139, 34);
    glBegin(GL_POLYGON);
    glVertex2f(60, 280);
    glVertex2f(50, 270);
    glVertex2f(90 ,270);
    glVertex2f(80,280);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(60, 280);
    glVertex2f(50, 270);
    glVertex2f(90 ,270);
    glVertex2f(80,280);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(60, 280);
    glVertex2f(80,280);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(50, 270);
    glVertex2f(90 ,270);
    glEnd();

    glColor3ub(34, 139, 34);
    glBegin(GL_POLYGON);
    glVertex2f(60, 290);
    glVertex2f(50, 280);
    glVertex2f(90 ,280);
    glVertex2f(80,290);
    glEnd();

     glLineWidth(1);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(60, 290);
    glVertex2f(50, 280);
    glVertex2f(90 ,280);
    glVertex2f(80,290);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(60, 290);
    glVertex2f(80,290);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(50, 280);
    glVertex2f(90 ,280);
    glEnd();

    glColor3ub(34, 139, 34);
    glBegin(GL_POLYGON);
    glVertex2f(70, 310);
    glVertex2f(50, 290);
    glVertex2f(90 ,290);
    glEnd();

    glLineWidth(0.9);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(70, 310);
    glVertex2f(50, 290);
    glVertex2f(90 ,290);
    glEnd();

    glLineWidth(0.9);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(50, 290);
    glVertex2f(90 ,290);
    glEnd();

    glLineWidth(0.9);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(70, 310);
    glVertex2f(90 ,290);
    glEnd();

    glColor3ub(139, 69, 19);///
    glBegin(GL_POLYGON);
    glVertex2f(12, 180);
    glVertex2f(20, 180);
    glVertex2f(20 ,260);
    glVertex2f(12,260);
    glEnd();

    glLineWidth(0.9);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(12, 180);
    glVertex2f(20, 180);
    glVertex2f(20 ,260);
    glVertex2f(12,260);
    glEnd();

    glLineWidth(0.9);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(12, 180);
    glVertex2f(12,260);
    glEnd();

    glLineWidth(0.9);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(20, 180);
    glVertex2f(20 ,260);
    glEnd();

    glColor3ub(34, 139, 34);
    glBegin(GL_POLYGON);
    glVertex2f(10, 270);
    glVertex2f(0, 260);
    glVertex2f(30 ,260);
    glVertex2f(20,270);
    glEnd();

    glLineWidth(0.9);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(10, 270);
    glVertex2f(0, 260);
    glVertex2f(30 ,260);
    glVertex2f(20,270);
    glEnd();

    glLineWidth(0.9);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(10, 270);
    glVertex2f(20,270);
    glEnd();

    glLineWidth(0.9);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(0, 260);
    glVertex2f(30 ,260);
    glEnd();

    glColor3ub(34, 139, 34);
    glBegin(GL_POLYGON);
    glVertex2f(10, 280);
    glVertex2f(0, 270);
    glVertex2f(30 ,270);
    glVertex2f(20,280);
    glEnd();

    glLineWidth(0.9);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(10, 280);
    glVertex2f(0, 270);
    glVertex2f(30 ,270);
    glVertex2f(20,280);
    glEnd();

    glLineWidth(0.9);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(10, 280);
    glVertex2f(20,280);
    glEnd();

    glLineWidth(0.9);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(0, 270);
    glVertex2f(30 ,270);
    glEnd();

    glColor3ub(34, 139, 34);
    glBegin(GL_POLYGON);
    glVertex2f(15, 297);
    glVertex2f(0, 280);
    glVertex2f(30 ,280);
    glEnd();

    glLineWidth(0.9);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(15, 297);
    glVertex2f(0, 280);
    glVertex2f(30 ,280);
    glEnd();

    glLineWidth(0.9);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(15, 297);
    glVertex2f(30 ,280);
    glEnd();

    glLineWidth(0.9);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(0, 280);
    glVertex2f(30 ,280);
    glEnd();
}



void clouds()
{
    glPushMatrix();
   glTranslatef(pos4, 0.0f, 0.0f);
   glBegin(GL_QUADS);

    // 1st cloud
    glColor3ub(255, 255, 255);
    round(20, 30, 90 , 460);
    round(15, 20, 110 , 460);
    round(15, 20, 70 , 460);

    // 2nd cloud

    round(20, 30, 185 , 420);
    round(15, 20, 205 , 420);
    round(15, 20, 165 , 420);
    glPopMatrix();

}

void car() {

    glPushMatrix();
    glTranslatef(tx, 0, 0);
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(410, 40);
    glVertex2f(490, 40);
    glVertex2f(485, 70);
    glVertex2f(410, 70);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(420, 70);
    glVertex2f(475, 70);
    glVertex2f(465, 100);
    glVertex2f(430, 100);
    glEnd();

    // car window
    glColor3ub(220, 220, 220);
    glBegin(GL_POLYGON);
    glVertex2f(425, 70);
    glVertex2f(445, 70);
    glVertex2f(445, 90);
    glVertex2f(430, 90);
    glEnd();

    // car window
    glColor3ub(220, 220, 220);
    glBegin(GL_POLYGON);
    glVertex2f(450, 70);
    glVertex2f(470, 70);
    glVertex2f(465, 90);
    glVertex2f(450, 90);
    glEnd();

    // car wheel
    glColor3ub(0, 0, 0);
    circle(10, 14, 435, 40);
    circle(10, 14, 465, 40);

    glColor3ub(245, 245, 245);
    circle(6, 10, 435, 40);
    circle(6, 10, 465, 40);

   glPopMatrix();
    tx += .3;
    if (tx > 0)
    tx = -500;
    glutPostRedisplay();
}

void truck()
{
    glPushMatrix();
    glTranslatef(bx, 0, 0);
    glColor3ub(212, 172, 13 );
    glBegin(GL_POLYGON);
    glVertex2f(440, 40);
    glVertex2f(495, 40);
    glVertex2f(495, 110);
    glVertex2f(440, 110);
    glEnd();

    glColor3ub(220, 20, 60);
    glBegin(GL_POLYGON);
    glVertex2f(495, 40);
    glVertex2f(525, 40);
    glVertex2f(525, 70);
    glVertex2f(495, 70);
    glEnd();

    glColor3ub(220, 20, 60);
    glBegin(GL_POLYGON);
    glVertex2f(495, 70);
    glVertex2f(515, 70);
    glVertex2f(505, 90);
    glVertex2f(495, 90);
    glEnd();

    // window

    glColor3ub(220, 220, 220);
    glBegin(GL_POLYGON);
    glVertex2f(495, 70);
    glVertex2f(510, 70);
    glVertex2f(505, 85);
    glVertex2f(495, 85);
    glEnd();

    // wheels
    glColor3ub(0, 0, 0);
    circle(10, 14, 460, 40);
    circle(10, 14, 510, 40);
    glColor3ub(245, 245, 245);
    circle(6, 10, 460, 40);
    circle(6, 10, 510, 40);


glPopMatrix();
    bx += .25;
    if (bx > 0)
        bx = -500;
    glutPostRedisplay();

}

void building_car()
{
glPushMatrix();
    glTranslatef(pos3, 0, 0);
     glColor3ub(185, 37, 4);
    glBegin(GL_POLYGON);
    glVertex2f(76, 183);
    glVertex2f(76, 165);
    glVertex2f(136, 165);
    glVertex2f(136, 183);
    glEnd();

    glColor3ub(185, 37, 4);
    glBegin(GL_POLYGON);
    glVertex2f(95, 200);
    glVertex2f(83, 183);
    glVertex2f(130, 183);
    glVertex2f(119, 200);
    glEnd();

///wheels
 glBegin(GL_POLYGON);
  float x1 =88;
  float y1= 165;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(0,0,0);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 9.38;
       float x = r * cos(a) + x1;
       float y = r * sin(a) + y1;
       glVertex2f(x, y);
  }
  glEnd();

 glBegin(GL_POLYGON);
  float x2 = 88;
  float y2= 165;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(255,255,255);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 6.13;
       float x = r * cos(a) + x2;
       float y = r * sin(a) + y2;
       glVertex2f(x, y);
  }
  glEnd();

   glBegin(GL_POLYGON);
  float x3 = 124;
  float y3= 165;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(0,0,0);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 9.38;
       float x = r * cos(a) + x3;
       float y = r * sin(a) + y3;
       glVertex2f(x, y);
  }
  glEnd();
 glBegin(GL_POLYGON);
  float x6 =124;
  float y6= 165;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(255,255,255);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 6.13;
       float x = r * cos(a) + x6;
       float y = r * sin(a) + y6;
       glVertex2f(x, y);
  }
  glEnd();
  ///windows
  glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(94,195);
    glVertex2f(90,182);
    glVertex2f(104,182);
    glVertex2f(104,195);
    glEnd();
      glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(107,195);
    glVertex2f(107,182);
    glVertex2f(122,182);
    glVertex2f(118,195);
    glEnd();
    glPopMatrix();
}
void little_tree()
{
    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(5, 60);
    glVertex2f(0, 80);
    glVertex2f(7, 70);
    glVertex2f(7, 85);
    glVertex2f(12,70);
    glVertex2f(15,83);
    glVertex2f(17,70);
    glVertex2f(22,83);
    glVertex2f(21,70);
    glVertex2f(30,80);
    glVertex2f(24,60);
    glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(40, 60);
    glVertex2f(33, 80);
    glVertex2f(41, 71);
    glVertex2f(41, 82);
    glVertex2f(45,70);
    glVertex2f(46,83);
    glVertex2f(49,70);
    glVertex2f(53,82);
    glVertex2f(53,70);
    glVertex2f(60,80);
    glVertex2f(54,60);
    glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(75, 60);
    glVertex2f(68, 80);
    glVertex2f(76, 71);
    glVertex2f(76, 82);
    glVertex2f(80,70);
    glVertex2f(81,83);
    glVertex2f(84,70);
    glVertex2f(88,82);
    glVertex2f(88,70);
    glVertex2f(95,80);
    glVertex2f(89,60);
    glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(110, 60);
    glVertex2f(103, 80);
    glVertex2f(111, 71);
    glVertex2f(111, 82);
    glVertex2f(115,70);
    glVertex2f(116,83);
    glVertex2f(119,70);
    glVertex2f(123,82);
    glVertex2f(123,70);
    glVertex2f(130,80);
    glVertex2f(124,60);
    glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(145, 60);
    glVertex2f(138, 80);
    glVertex2f(146, 71);
    glVertex2f(146, 82);
    glVertex2f(150,70);
    glVertex2f(151,83);
    glVertex2f(154,70);
    glVertex2f(158,82);
    glVertex2f(158,70);
    glVertex2f(165,80);
    glVertex2f(159,60);
    glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(180, 60);
    glVertex2f(173, 80);
    glVertex2f(181, 71);
    glVertex2f(181, 82);
    glVertex2f(185,70);
    glVertex2f(186,83);
    glVertex2f(189,70);
    glVertex2f(193,82);
    glVertex2f(193,70);
    glVertex2f(200,80);
    glVertex2f(194,60);
    glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(285, 60);
    glVertex2f(278, 80);
    glVertex2f(286, 71);
    glVertex2f(286, 82);
    glVertex2f(290,70);
    glVertex2f(291,83);
    glVertex2f(294,70);
    glVertex2f(298,82);
    glVertex2f(298,70);
    glVertex2f(305,80);
    glVertex2f(299,60);
    glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(320, 60);
    glVertex2f(313, 80);
    glVertex2f(321, 71);
    glVertex2f(321, 82);
    glVertex2f(325,70);
    glVertex2f(326,83);
    glVertex2f(329,70);
    glVertex2f(333,82);
    glVertex2f(333,70);
    glVertex2f(340,80);
    glVertex2f(334,60);
    glEnd();

     glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(355, 60);
    glVertex2f(348, 80);
    glVertex2f(356, 71);
    glVertex2f(356, 82);
    glVertex2f(360,70);
    glVertex2f(361,83);
    glVertex2f(364,70);
    glVertex2f(368,82);
    glVertex2f(368,70);
    glVertex2f(375,80);
    glVertex2f(369,60);
    glEnd();

     glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(390, 60);
    glVertex2f(383, 80);
    glVertex2f(391, 71);
    glVertex2f(391, 82);
    glVertex2f(395,70);
    glVertex2f(396,83);
    glVertex2f(399,70);
    glVertex2f(403,82);
    glVertex2f(403,70);
    glVertex2f(410,80);
    glVertex2f(404,60);
    glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(425, 60);
    glVertex2f(418, 80);
    glVertex2f(426, 71);
    glVertex2f(426, 82);
    glVertex2f(430,70);
    glVertex2f(431,83);
    glVertex2f(434,70);
    glVertex2f(438,82);
    glVertex2f(438,70);
    glVertex2f(445,80);
    glVertex2f(439,60);
    glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(460, 60);
    glVertex2f(453, 80);
    glVertex2f(461, 71);
    glVertex2f(461, 82);
    glVertex2f(465,70);
    glVertex2f(466,83);
    glVertex2f(469,70);
    glVertex2f(473,82);
    glVertex2f(473,70);
    glVertex2f(480,80);
    glVertex2f(474,60);
    glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(495, 60);
    glVertex2f(488, 80);
    glVertex2f(496, 71);
    glVertex2f(496, 82);
    glVertex2f(500,70);
    glVertex2f(501,83);
    glVertex2f(504,70);
    glVertex2f(508,82);
    glVertex2f(508,70);
    glVertex2f(515,80);
    glVertex2f(509,60);
    glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(20, 125);
    glVertex2f(15, 120);
    glVertex2f(50, 120);
    glVertex2f(45, 125);
    glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(30, 60);
    glVertex2f(35, 60);
    glVertex2f(35, 120);
    glVertex2f(30, 120);
    glEnd();

  glBegin(GL_POLYGON);
  float x2 = 33;
  float y2= 135;
  for (int i = 0; i < 300; i++)

  {
       glColor3ub(255, 255, 255);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 10.25;
       float x = r * cos(a) + x2;
       float y = r * sin(a) + y2;
       glVertex2f(x, y);

  }
  glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(90, 125);
    glVertex2f(85, 120);
    glVertex2f(120, 120);
    glVertex2f(115, 125);
    glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(100, 60);
    glVertex2f(105, 60);
    glVertex2f(105, 120);
    glVertex2f(100, 120);
    glEnd();

 glBegin(GL_POLYGON);
 glBegin(GL_POLYGON);
  float x3 = 103;
  float y3= 135;
  for (int i = 0; i < 300; i++)
  {
        glColor3ub(255, 255, 255);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 10.25;
       float x = r * cos(a) + x3;
       float y = r * sin(a) + y3;
       glVertex2f(x, y);
  }
  glEnd();


  glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(170, 60);
    glVertex2f(175, 60);
    glVertex2f(175, 120);
    glVertex2f(170, 120);
    glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(160, 125);
    glVertex2f(155, 120);
    glVertex2f(190, 120);
    glVertex2f(185, 125);
    glEnd();

    glBegin(GL_POLYGON);
  float x4 = 173;
  float y4= 135;
  for (int i = 0; i < 300; i++)
  {
        glColor3ub(255, 255, 255);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 10.25;
       float x = r * cos(a) + x4;
       float y = r * sin(a) + y4;
       glVertex2f(x, y);
  }
  glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(310, 60);
    glVertex2f(315, 60);
    glVertex2f(315, 120);
    glVertex2f(310, 120);
    glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(300, 125);
    glVertex2f(295, 120);
    glVertex2f(330, 120);
    glVertex2f(325, 125);
    glEnd();

  glBegin(GL_POLYGON);
  float x5 = 313;
  float y5= 135;
  for (int i = 0; i < 300; i++)
  {
         glColor3ub(255, 255, 255);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 10.25;
       float x = r * cos(a) + x5;
       float y = r * sin(a) + y5;
       glVertex2f(x, y);
  }
  glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(380, 60);
    glVertex2f(385, 60);
    glVertex2f(385, 120);
    glVertex2f(380, 120);
    glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(370, 125);
    glVertex2f(365, 120);
    glVertex2f(400, 120);
    glVertex2f(395, 125);
    glEnd();

  glBegin(GL_POLYGON);
  float x6 = 383;
  float y6= 135;
  for (int i = 0; i < 300; i++)
  {
        glColor3ub(255, 255, 255);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 10.25;
       float x = r * cos(a) + x6;
       float y = r * sin(a) + y6;
       glVertex2f(x, y);
  }
  glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(450, 60);
    glVertex2f(455, 60);
    glVertex2f(455, 120);
    glVertex2f(450, 120);
    glEnd();

    glColor3ub(2, 48, 32);
    glBegin(GL_POLYGON);
    glVertex2f(440, 125);
    glVertex2f(435, 120);
    glVertex2f(470, 120);
    glVertex2f(465, 125);
    glEnd();

  glBegin(GL_POLYGON);
  float x7 = 453;
  float y7= 135;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(255, 255, 255);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 10.25;
       float x = r * cos(a) + x7;
       float y = r * sin(a) + y7;
       glVertex2f(x, y);
  }
  glEnd();

     glColor3ub(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(470, 180);
    glVertex2f(475, 180);
    glVertex2f(475, 280);
    glVertex2f(470, 280);
    glEnd();

    glColor3ub(26, 35, 126);
    glBegin(GL_POLYGON);
    glVertex2f(465, 290);
    glVertex2f(456, 280);
    glVertex2f(490, 280);
    glVertex2f(482, 290);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2f(465, 305);
    glVertex2f(465, 290);
    glVertex2f(482, 290);
    glVertex2f(482, 305);
    glEnd();

    glColor3ub( 183, 28, 28);
    glBegin(GL_POLYGON);
    glVertex2f(473, 314);
    glVertex2f(465, 305);
    glVertex2f(482, 305);
    glEnd();

}


///





void night()
{

   ///sky

glColor3ub(1, 1, 1 );
glRecti(-20,220,360,100);


///sun

 glBegin(GL_POLYGON);
  float x11 =241.24;
  float y11= 151.74;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(246, 241, 213);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r =20.38 ;
       float x = r * cos(a) + x11;
       float y = r * sin(a) + y11;
       glVertex2f(x, y);
  }
  glEnd();



 /// river
    glColor3ub(8, 69, 136);
    glBegin(GL_POLYGON);

    glVertex2f(-40,100);
    glVertex2f(360, 100);
    glVertex2f(360, 0);
    glVertex2f(-40,0);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);///lines1
    glColor3ub(1,1,1);
    glVertex2f(-40,100);
    glVertex2f(360, 100);
    glEnd();
  glEnd();
    ///ground2

    glColor3ub(25, 111, 61 );
    glBegin(GL_POLYGON);
    glVertex2f(360,96);
    glVertex2f(287.42,96.21);
    glVertex2f(329.39,86.89);
     glVertex2f(271.87,79.76);
      glColor3ub(33, 183, 58);
     glVertex2f(323,77.46);
    glVertex2f(290.97,71.25);
    glColor3ub(25, 111, 61 );
    glVertex2f(325,69.4);
     glVertex2f(281.54,57.45);
     glVertex2f(360,56.97);
    glEnd();


    ///par

    glColor3ub(162, 59, 4 );
    glBegin(GL_POLYGON);
    glVertex2f(287.42,96.21);
    glVertex2f(286.28,93.94);
    glVertex2f(319.93,85.72);
     glVertex2f(329.39,86.89);
    glEnd();

    glColor3ub(162, 59, 4 );
    glBegin(GL_POLYGON);
    glVertex2f(271.87,79.76);
    glVertex2f(271.72,76.94);
    glVertex2f(311.77,75.28);
     glVertex2f(322.95,77.46);
    glEnd();

    glColor3ub(162, 59, 4 );
    glBegin(GL_POLYGON);
    glVertex2f(290.97,71.25);
    glVertex2f(290.93,68.37);
    glVertex2f(314.87,66.61);
     glVertex2f(325.02,69.40);
    glEnd();

    glColor3ub(162, 59, 4 );
    glBegin(GL_POLYGON);
    glVertex2f(281.54,57.44);
    glVertex2f(281.63,54.3);
    glVertex2f(360.11,53.91);
     glVertex2f(360,56.97);
    glEnd();

glColor3ub( 186, 74, 0);
    glBegin(GL_POLYGON);

    glVertex2f(328,62);
    glVertex2f(332.1313534157654, 57.2644208717135);
    glVertex2f(349.9583827104713, 57.2453504041154);
    glVertex2f(353.35625476984484, 61.947609181165625);
    glVertex2f(338, 62);
     glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(326, 68);
    glVertex2f(326.05, 57.17);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(326.01, 66);
    glVertex2f(331.12, 61.99);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(303.91, 65.32);
    glVertex2f(304.03, 57.31);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(303.95, 62.97);
    glVertex2f(307.2968172580754, 60.9914724704888);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(320.99, 85.32);
    glVertex2f(320.92, 77.55);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(320.95, 82.89);
    glVertex2f(324.47, 81.21);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(341, 82);
    glVertex2f(341.13, 69.89);
    glEnd();

     glLineWidth(1.5);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(341.03, 79.04);
    glVertex2f(345.47, 75.73);
    glEnd();


    glColor3ub(205, 97, 85);
    glBegin(GL_POLYGON);

    glVertex2f(338.6018092369239, 66.0020335233017);
    glVertex2f(346, 66);
    glVertex2f(347.311522995073, 62.0566746185131);
    glVertex2f(337.0021219240654, 62.0566746185132);
     glVertex2f(338.6018092369239, 66.0020335233017);
    glEnd();

    glColor3ub(146, 43, 33);
    glBegin(GL_POLYGON);

    glVertex2f(305, 60.8659610237336);
    glVertex2f(307.09, 57.29);
    glVertex2f(318.02,57.227);
    glVertex2f(320, 60.8659610237336);
    glEnd();

    glColor3ub(244, 208, 63);
    glBegin(GL_POLYGON);

    glVertex2f(310,64);
    glVertex2f(310,60.85);
    glVertex2f(316,60.86);
    glVertex2f(316,64);
    glEnd();

    glColor3ub(160, 64, 0);
    glBegin(GL_POLYGON);

    glVertex2f(319.3650399853303, 80.4069124788732);
    glVertex2f(322.0670408678813, 78.0570722762907);
    glVertex2f(335.4203996077835, 77.9893881929135);
    glVertex2f(337.5995347752191, 80.4106494900648);
    glEnd();

    glColor3ub(100, 30, 22);
    glBegin(GL_POLYGON);

    glVertex2f(326,82);
    glVertex2f(322.89, 80.40);
    glVertex2f(334.02, 80.44);
    glVertex2f(334, 82.011);
    glEnd();

    glColor3ub(110, 44, 0);
    glBegin(GL_POLYGON);

    glVertex2f(338.8957589474431, 75.7361088374383);
    glVertex2f(343.0998308229355, 70.949934702261);
    glVertex2f(355.8005223085132, 70.9827918674836);
    glVertex2f(359.5927281806367, 75.7361088374383);
    glEnd();

    glColor3ub(185, 119, 14);
    glBegin(GL_POLYGON);

    glVertex2f(347, 78);
    glVertex2f(347,75.73);
    glVertex2f(355.99,75.73);
    glVertex2f(356,78);
    glEnd();

    glPushMatrix();
    glTranslatef(move4, 0.0f, 0.0f);
     glColor3ub(27, 38, 49);
    glBegin(GL_POLYGON);

    glVertex2f(32.4446755873676, 88.0587286997448);
    glVertex2f(40, 80);
    glVertex2f(80, 80);
    glVertex2f(86.1710355574715, 88.0587286997448);
    glVertex2f(32.4446755873676, 88.0587286997448);
    glEnd();

    glColor3ub(151, 154, 154);
    glBegin(GL_POLYGON);

    glVertex2f(46.40,88.05);
    glVertex2f(65.1891313164227, 105.3082603462747);
    glVertex2f(70.0598792615438, 102.1591068681698);
    glVertex2f(74.3470985496854, 96.5125253667136);
    glVertex2f(75.8110270870996, 92.643571374975);
    glVertex2f(76.64,88.05);
    glEnd();

    glColor3ub(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex2f(37.78,95.15);
    glVertex2f(54.64,74.38);
    glVertex2f(57.95,75.88);
    glEnd();


     glLineWidth(.1);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(65.1891313164227, 105.3082603462747);
    glVertex2f(36.51,88.05);
    glEnd();
     glPopMatrix();

///ground1
glColor3ub(25, 111, 61);
    glBegin(GL_POLYGON);
    glVertex2f(-20,68);
     glColor3ub(25, 111, 61);
    glVertex2f(230,70);
    glColor3ub(33, 183, 58);
    glVertex2f(205,60);
     glVertex2f(230,60);
       glVertex2f(210,50);
     glVertex2f(240,50);
       glVertex2f(190.28,37.52);
       glColor3ub(25, 111, 61);
     glVertex2f(237.28,29.96);
     glColor3ub(33, 183, 58);
       glVertex2f(-20,30);

    glEnd();

    ///par
       glColor3ub(156, 100, 12);
glRecti(-20,30,237.29,27.79);

glColor3ub(156, 100, 12);
    glBegin(GL_POLYGON);
    glVertex2f(230,70);
    glVertex2f(230.53,68.17);
    glVertex2f(210.75,60);
     glVertex2f(205,60);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);///lines1
    glColor3ub(1,1,1);
    glVertex2f(-30, 27);
    glVertex2f(238, 27);
    glEnd();

glColor3ub(156, 100, 12);
    glBegin(GL_POLYGON);
    glVertex2f(230,60);
    glVertex2f(230.33,57.83);
    glVertex2f(214.32,50);
     glVertex2f(210,50);
    glEnd();

glColor3ub(156, 100, 12);
    glBegin(GL_POLYGON);
    glVertex2f(240,50);
    glVertex2f(240.18,47.29);
    glVertex2f(196.13,36.58);
     glVertex2f(190.28,37.52);
    glEnd();

     ///fench
    glLineWidth(4);
glBegin(GL_LINES);
glColor3ub( 126, 81, 9 );
glVertex2f(-20,65);
glVertex2f(192,65);
glVertex2f(-20,60.5);
glVertex2f(192,60.5);
glVertex2f(-20,56);
glVertex2f(192,56);
glVertex2f(-10,54);
glVertex2f(-10,67);
glVertex2f(-16,54);
glVertex2f(-16,67);
glVertex2f(-4,54);
glVertex2f(-4,67);
glVertex2f(2,54);
glVertex2f(2,67);
glVertex2f(8,54);
glVertex2f(8,67);
glVertex2f(14,54);
glVertex2f(14,67);
glVertex2f(20,54);
glVertex2f(20,67);
glVertex2f(26,54);
glVertex2f(26,67);
glVertex2f(32,54);
glVertex2f(32,67);
glVertex2f(38,54);
glVertex2f(38,67);
glVertex2f(44,54);
glVertex2f(44,67);
glVertex2f(50,54);
glVertex2f(50,67);
glVertex2f(56,54);
glVertex2f(56,67);
glVertex2f(62,67);
glVertex2f(62,54);
glVertex2f(68,54);
glVertex2f(68,67);
glVertex2f(74,54);
glVertex2f(74,67);
glVertex2f(80,54);
glVertex2f(80,67);
glVertex2f(86,54);
glVertex2f(86,67);
glVertex2f(92,54);
glVertex2f(92,67);
glVertex2f(98,54);
glVertex2f(98,67);
glVertex2f(104,54);
glVertex2f(104,67);
glVertex2f(110,54);
glVertex2f(110,67);
glVertex2f(117,54);
glVertex2f(117,67);
glVertex2f(124,54);
glVertex2f(124,67);
glVertex2f(135,54);
glVertex2f(135,67);
glVertex2f(141,54);
glVertex2f(141,67);
glVertex2f(147,54);
glVertex2f(147,67);
glVertex2f(153,54);
glVertex2f(153,67);
glVertex2f(160,54);
glVertex2f(160,67);
glVertex2f(166,54);
glVertex2f(166,67);
glVertex2f(172,54);
glVertex2f(172,67);
glVertex2f(178,54);
glVertex2f(178,67);
glVertex2f(184,54);
glVertex2f(184,67);
glVertex2f(190,54);
glVertex2f(190,67);

glEnd();

   ///1 cloud

    glPushMatrix();
    glTranslatef(pos1, 0.0f, 0.0f);
    glBegin(GL_QUADS);

 glBegin(GL_POLYGON);
  float x1 =163.58;
  float y1= 169.61;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(179, 182, 183);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r =14.61 ;
       float x = r * cos(a) + x1;
       float y = r * sin(a) + y1;
       glVertex2f(x, y);
  }
  glEnd();

   glBegin(GL_POLYGON);
  float x2 =147.48;
  float y2= 169.61;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(179, 182, 183);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r =12.17 ;
       float x = r * cos(a) + x2;
       float y = r * sin(a) + y2;
       glVertex2f(x, y);
  }
  glEnd();

   glBegin(GL_POLYGON);
  float x3 =180.76;
  float y3= 169.61;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(179, 182, 183);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 12.54;
       float x = r * cos(a) + x3;
       float y = r * sin(a) + y3;
       glVertex2f(x, y);
  }
  glEnd();

   glBegin(GL_POLYGON);
  float x4 =142.32;
  float y4= 129.98;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(179, 182, 183);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r =11.81;
       float x = r * cos(a) + x4;
       float y = r * sin(a) + y4;
       glVertex2f(x, y);
  }
  glEnd();

   glBegin(GL_POLYGON);
  float x5 =128.10;
  float y5= 129.98;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(179, 182, 183);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r =9.12 ;
       float x = r * cos(a) + x5;
       float y = r * sin(a) + y5;
       glVertex2f(x, y);
  }
  glEnd();

   glBegin(GL_POLYGON);
  float x6 =156.47;
  float y6= 129.98;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(179, 182, 183);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r =9.29 ;
       float x = r * cos(a) + x6;
       float y = r * sin(a) + y6;
       glVertex2f(x, y);
  }
  glEnd();


   glBegin(GL_POLYGON);
  float x7 =320.5;
  float y7= 166.5;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(179, 182, 183);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 15.45;
       float x = r * cos(a) + x7;
       float y = r * sin(a) + y7;
       glVertex2f(x, y);
  }
  glEnd();

   glBegin(GL_POLYGON);
  float x8 =300.23;
  float y8= 166.5;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(179, 182, 183);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r =11.78;
       float x = r * cos(a) + x8;
       float y = r * sin(a) + y8;
       glVertex2f(x, y);
  }
  glEnd();

   glBegin(GL_POLYGON);
  float x9 =339.55;
  float y9= 166.5;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(179, 182, 183);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 11.78;
       float x = r * cos(a) + x9;
       float y = r * sin(a) + y9;
       glVertex2f(x, y);
  }
  glEnd();

  glPopMatrix();


    ///talgach
    glColor3ub(160, 64, 0 );
    glBegin(GL_POLYGON);
    glVertex2f(92,80.28);
    glVertex2f(90,80);
    glVertex2f(84.56,72.32);
     glVertex2f(81.40,79.5);
     glVertex2f(76,79.44);
    glVertex2f(76.2,129.15);
    glVertex2f(80.39,121.90);
     glVertex2f(85.38,132.8);
     glVertex2f(89.22,122.94);
    glVertex2f(92.77,127.15);
    glEnd();

    glColor3ub(6, 124, 4 );
    glBegin(GL_POLYGON);
         glVertex2f(67.68,152.06);
      glVertex2f(57.63,143.92);
    glVertex2f(52.62,135.29);
    glVertex2f(52.63,123.07);
    glVertex2f(61.31,132.95);
    glVertex2f(66.85,122.42);
     glVertex2f(73.82,133.34);
     glVertex2f(80.35,122);
    glVertex2f(85.38,132.80);
    glVertex2f(89.21,122.92);
     glVertex2f(95.68,130.56);
     glVertex2f(100.14,122.42);
    glVertex2f(105.99,130.33);
    glVertex2f(112.49,124.06);
    glVertex2f(109.12,138.62);
     glVertex2f(104.20,146);
    glVertex2f(95.91,152.51);
    glVertex2f(81.12,152.74);
     glVertex2f(67.68,152.06);
    glEnd();

glColor3ub(6, 124, 4 ); //tyy
    glBegin(GL_POLYGON);
    glVertex2f(67.68,152.06);
    glVertex2f(65.84,150.59);
    glVertex2f(58.33,172.07);
    glVertex2f(65.83,166.17);
     glVertex2f(66.77,175.42);
     glVertex2f(71.59,167.25);
    glVertex2f(74.27,175.82);
    glVertex2f(78.02,168.05);
     glVertex2f(82.18,175.28);
     glVertex2f(84.86,168.32);
    glVertex2f(89.01,174.35);
    glVertex2f(91.16,167.78);
     glVertex2f(96.65,173.78);
     glVertex2f(97.32,165.64);
    glVertex2f(104.22,172.08);
    glVertex2f(97.3,151.42);
     glVertex2f(95.91,152.51);
     glVertex2f(81.12,152.74);
    glEnd();

      glLineWidth(1.5);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
     glVertex2f(65.95,151.48);
      glVertex2f(96.93,151.69);
      glEnd();

    ///3rd part
    glColor3ub(54, 146, 2);
    glBegin(GL_POLYGON);
    glVertex2f(60.92,164.64);
    glVertex2f(54.91,162.81);
    glVertex2f(50.76,160.79);
     glVertex2f(42.92,154.06);
     glVertex2f(42,139.39);
    glVertex2f(45.98,145.91);
    glVertex2f(47.14,139.94);
     glVertex2f(50.66,146.42);
     glVertex2f(52.44,139.46);
    glVertex2f(55.57,146.33);
    glVertex2f(56.77,142.51);
    glVertex2f(65.84,150.59);
    glEnd();

    ///
    glColor3ub(54, 146, 2);
    glBegin(GL_POLYGON);
    glVertex2f(101.83,164.93);
    glVertex2f(107.29,162.73);
    glVertex2f(111.24,159.94);
     glVertex2f(118.16,154.71);
        glVertex2f(122.15,140.50);
    glVertex2f(116.49,148.28);
    glVertex2f(115.93,139.63);
     glVertex2f(111.79,147.15);
        glVertex2f(111.74,139.36);
    glVertex2f(108.49,146.12);
    glVertex2f(108.63,139.40);
     glVertex2f(104.2,146);
        glVertex2f(97.3,151.42);

    glEnd();


    ///treee 2
    glColor3ub(160, 64, 0 );
    glBegin(GL_POLYGON);

       glVertex2f(16.87,66.62);
    glVertex2f(19.79,65.92);
    glVertex2f(24.91,78.23);
     glVertex2f(26.36,77.45);
       glVertex2f(20,60);
   glVertex2f(25,40);
    glVertex2f(5,40);
    glVertex2f(10,60);
     glVertex2f(4,84.5);
       glVertex2f(6.7,85.17);
    glVertex2f(10.77,67.69);
     glVertex2f(11.41,82.44);
       glVertex2f(13.33,81.41);
    glVertex2f(13.67,61.68);
    glVertex2f(16.57,80.61);
     glVertex2f(18.41,79.65);
    glEnd();

 glBegin(GL_POLYGON);
  float x22 =0;
  float y22= 80;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(24, 106, 59);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r =15.75 ;
       float x = r * cos(a) + x22;
       float y = r * sin(a) + y22;
       glVertex2f(x, y);
  }
  glEnd();

 glBegin(GL_POLYGON);
  float x33 =26.66;
  float y33= 82.23;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(24, 106, 59 );
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 13.24;
       float x = r * cos(a) + x33;
       float y = r * sin(a) + y33;
       glVertex2f(x, y);
  }
  glEnd();
 glBegin(GL_POLYGON);
  float x44=2.59;
  float y44= 107.22;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(24, 106, 59);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 26.30;
       float x = r * cos(a) + x44;
       float y = r * sin(a) + y44;
       glVertex2f(x, y);
  }
  glEnd();

 glBegin(GL_POLYGON);
  float x55=46.2;
  float y55= 101.12;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(24, 106, 59);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 20.55;
       float x = r * cos(a) + x55;
       float y = r * sin(a) + y55;
       glVertex2f(x, y);
  }
  glEnd();
   glBegin(GL_POLYGON);
  float x66=26.13;
  float y66= 126.03;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(24, 106, 59);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 20.28;
       float x = r * cos(a) + x66;
       float y = r * sin(a) + y66;
       glVertex2f(x, y);
  }
  glEnd();

   ///1st house

glColor3ub(193, 168, 101);
    glBegin(GL_POLYGON);
    glVertex2f(60,40);
    glVertex2f(60,60);
    glVertex2f(88,60);
     glVertex2f(88,42);
    glEnd();

glColor3ub(199, 179, 126);
    glBegin(GL_POLYGON);
    glVertex2f(60,40);
     glVertex2f(60,60);
    glVertex2f(52,76);
    glVertex2f(44,59.5);
     glVertex2f(44,43);
    glEnd();

glColor3ub(159, 74, 2);// chal
    glBegin(GL_POLYGON);
    glVertex2f(60,60);
    glVertex2f(90,60);
    glVertex2f(81.5,80);
     glVertex2f(50,80);
    glEnd();

    ///upper part below part

    glColor3ub(213, 158, 14);
    glBegin(GL_POLYGON);
    glVertex2f(44,43);
    glVertex2f(42,42);
     glVertex2f(60,38);
    glVertex2f(60,40);


    glEnd();

    glColor3ub(213, 158, 14);
    glBegin(GL_POLYGON);
      glVertex2f(60,40);
     glVertex2f(60,38);
    glVertex2f(88.6,40.5);
     glVertex2f(88,42);
    glEnd();

glColor3ub(159, 74, 2);
    glBegin(GL_POLYGON);
    glVertex2f(40,60);
    glVertex2f(44,59.5);
    glVertex2f(52,76);
     glVertex2f(50,80);
    glEnd();

    ///door
    ///main
    glColor3ub(175, 96, 26);
    glBegin(GL_POLYGON);
    glVertex2f(70,50);
    glVertex2f(70,40.7);
    glVertex2f(75,41);
     glVertex2f(75,50);
    glEnd();
    glColor3ub(175, 96, 26);
    glBegin(GL_POLYGON);
    glVertex2f(48.2,50);
    glVertex2f(53.776,50);
    glVertex2f(53.854,41.167);
     glVertex2f(48.051,42.269);
    glEnd();

    ///window
    glColor3ub(146, 43, 33);
    glBegin(GL_POLYGON);
    glVertex2f(62,58);
    glVertex2f(66,58);
    glVertex2f(66,54);
     glVertex2f(62,54);
    glEnd();

    glColor3ub(146, 43, 33);
    glBegin(GL_POLYGON);
    glVertex2f(80,58);
    glVertex2f(84,58);
    glVertex2f(84,54);
     glVertex2f(80,54);
    glEnd();

    glColor3ub(146, 43, 33);
    glBegin(GL_POLYGON);
    glVertex2f(50,60);
    glVertex2f(55,60);
    glVertex2f(55,55);
     glVertex2f(50,55);
    glEnd();


    ///house 2
    glColor3ub(99, 103, 108);
    glBegin(GL_POLYGON);
    glVertex2f(90,80);
    glVertex2f(130,80);
    glVertex2f(120,60);
     glVertex2f(90,60);
     glVertex2f(84.56,72.32);
    glEnd();
    glColor3ub(99, 103, 108);
    glBegin(GL_POLYGON);
    glVertex2f(130,80);
    glVertex2f(140,60);
    glVertex2f(135.90,59.53);
     glVertex2f(128.35,76.71);
    glEnd();
    ///wall
    glColor3ub(99, 149, 200);
    glBegin(GL_POLYGON);
    glVertex2f(135.90,59.53);
    glVertex2f(136.04,45.85);
    glVertex2f(119.99,42.22);
     glVertex2f(120,60);
 glVertex2f(128.35,76.71);
    glEnd();
     glColor3ub(58, 111, 164);
    glBegin(GL_POLYGON);
    glVertex2f(120,60);
    glVertex2f(119.99,42.22);
    glVertex2f(87.98,45.85);
     glVertex2f(87.91,60);

    glEnd();

    ///door
    glColor3ub(2, 46, 90);
    glBegin(GL_POLYGON);
    glVertex2f(125,52);
    glVertex2f(130,52);
    glVertex2f(130.02,44.5);
     glVertex2f(125.01,43.35);
    glEnd();

    glColor3ub(2, 46, 90);
    glBegin(GL_POLYGON);
    glVertex2f(100,52);
    glVertex2f(105,52);
    glVertex2f(104.92,43.92);
     glVertex2f(100,44.49);
    glEnd();

    ///windows
    glColor3ub(1, 1, 1);
glRecti(90,55,95,50);
glColor3ub(1, 1, 1);
glRecti(110,55,115,50);
glColor3ub(1, 1, 1);
glRecti(125,65,130,60);

///lower part
glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(87.98,45.85);
    glVertex2f(87.98,44.53);
    glVertex2f(120,40);
     glVertex2f(119.99,42.22);
    glEnd();
glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(120,40);
     glVertex2f(119.99,42.22);
    glVertex2f(136.04,45.85);
     glVertex2f(138.28,44.85);
     glEnd();
}




void city()
{glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 500, 0, 500);

    //Sky Color
    glColor3ub(30, 144, 255);
    glBegin(GL_POLYGON);
    glVertex2f(0, 0);
    glVertex2f(500, 0);
    glVertex2f(500, 500);
    glVertex2f(0, 500);
    glEnd();

    Bushes();

    //Ground Color
    glColor3ub(50, 205, 50);
    glBegin(GL_POLYGON);
    glVertex2f(0, 0);
    glVertex2f(500, 0);
    glVertex2f(500, 180);
    glVertex2f(0, 180);
    glEnd();

    road();
    sun();
    tree();
    little_tree();
    road1();
    truck();
    car();
    clouds();
    buil1();
    buil2();
    buil3();
    buil4();
    building_car();


    bird(birdX-20, birdY-120, birdDirection, birdWingY,{0,0,0},0.7);
    bird(birdX-1, birdY-170, birdDirection, -birdWingY,{0,0,0},0.7);
    bird(birdX-15, birdY-133, birdDirection, birdWingY,{0,0,0},0.8);
    bird(birdX-18, birdY-145, birdDirection, birdWingY,{0,0,0},0.6);
    bird(birdX-8, birdY-160, birdDirection, birdWingY,{0,0,0},0.5);
glutIdleFunc(animation);
    glFlush();
    glutSwapBuffers();

}
void village()
{ glMatrixMode(GL_PROJECTION);
glLoadIdentity();
    gluOrtho2D(-20, 360, 0, 200);
   river1();
    sky1();
    cloud1();
ground1();
ship1();
fench();
building1();
bird1(birdX1-20, birdY1-10, birdDirection1, birdWingY1,{0,0,0},0.4);
    bird1(birdX1-1, birdY1-20, birdDirection1, -birdWingY1,{0,0,0},0.4);
    bird1(birdX1-15, birdY1-30, birdDirection1, birdWingY1,{0,0,0},0.4);
    bird1(birdX1-18, birdY1-45, birdDirection1, birdWingY1,{0,0,0},0.4);
    bird1(birdX1-8, birdY1-50, birdDirection1, birdWingY1,{0,0,0},0.3);
    tree1();
     ship11();
     glutIdleFunc(animation1);
}

 void Rain()
 {
     glColor3ub(83, 86, 88);
    glBegin(GL_POLYGON);
    glVertex2f(0, 0);
    glVertex2f(500, 0);
    glVertex2f(500, 500);
    glVertex2f(0, 500);
    glEnd();

    Bushes();

    //Ground Color
    glColor3ub(50, 205, 50);
    glBegin(GL_POLYGON);
    glVertex2f(0, 0);
    glVertex2f(500, 0);
    glVertex2f(500, 180);
    glVertex2f(0, 180);
    glEnd();

    road();
    tree();
    little_tree();
    road1();
    truck();
    car();
    /// cloud

    ///1 cloud

   glPushMatrix();
   glTranslatef(pos4, 0.0f, 0.0f);
   glBegin(GL_QUADS);

    // 1st cloud
    glColor3ub(177, 181, 185);
    round(20, 30, 90 , 460);
    round(15, 20, 110 , 460);
    round(15, 20, 70 , 460);

    // 2nd cloud

    round(20, 30, 185 , 420);
    round(15, 20, 205 , 420);
    round(15, 20, 165 , 420);
    glPopMatrix();


    buil1();
    buil2();
    buil3();
    buil4();
    building_car();
      rain();
    moverain(1);
 }


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

if(currentscene==1)
{
    village();
}
else if(currentscene==2)
{
    city();
}
else if(currentscene==3)
{
    night();
}

else if(currentscene==4)
{
   Rain();
}

    glutSwapBuffers();
}
void update(int value)
{///car
 if(pos3 > 425 )
        pos3 = -280;

    pos3 += speed3;

 ///cloud
 if(pos4 > 500)
        pos4 = -300;

    pos4 += speed4;



///boat up
move4 += speed;

    if (move4 > 186)
    {
        speed = -0.5f;
    }
    else if (move4 < -150)
    {
        speed = 0.5f;
    }
///boat down
 if(pos > 115 )
        pos = -355;

    pos += speed1;
///cloud
if(pos1 >225)
        pos1 = -340;

    pos1+= speed2;
glutPostRedisplay();
glutTimerFunc(20, update, 0);


}
void handleMouse(int button, int state, int x, int y)
 /// boat down
 {
	if (button == GLUT_LEFT_BUTTON)
	{	speed1 += 0.1f;
			}
if (button == GLUT_RIGHT_BUTTON)
	{speed1 -= 0.1f;   }

/// car
	if (button == GLUT_LEFT_BUTTON)
	{	speed3 += 0.1f;
			}
if (button == GLUT_RIGHT_BUTTON)
	{speed3 -= 0.1f;   }
glutPostRedisplay();

}
void handleKeypress(unsigned char key, int x, int y) {
    switch (key)
    {///boat down
        case 'r':
    speed1 = 0.0f;
    break;
case 't':
    speed1 = 0.7f;
    break;
    ///cloud village
case 's':
        speed2=0.0f;
        break;
    case 'w':
        speed2=0.6f;
        break;
        case 'a':
         speed2 -= 0.1f;
        break;
    case 'd':
         speed2 += 0.1f;
         break;

         /// CAR
    case 'k':
    speed3 = 0.0f;
    break;
case 'l':
    speed3 = 0.9f;
    break;

    ///cloud city
  case 'h':
        speed4=0.0f;
        break;
    case 'y':
        speed4=0.6f;
        break;
        case 'g':
         speed4 -= 0.1f;
        break;
    case 'j':
         speed4 += 0.1f;
         break;

    /// Scene transition
  case 'v':
   currentscene=1;
    break;
  case 'c':
    currentscene=2;
    break;
    case 'n':
    currentscene=3;
    break;
     case 'm':
    currentscene=1;
    break;

    case 'p':
    currentscene=4;
    break;

    }

     glutPostRedisplay();

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900, 500);
    glutInitWindowPosition(100, 200);
    glutCreateWindow("VILLAGE");
    glClearColor(1, 1, 1, 1);
    glutDisplayFunc(display);
    glutMouseFunc(handleMouse);
       glutKeyboardFunc(handleKeypress);
    glutTimerFunc(20, update, 0);
    glutIdleFunc(animation);
    glutMainLoop();
    return 0;
}

