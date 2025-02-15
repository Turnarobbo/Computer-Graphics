#include <GL/gl.h>
#include<stdio.h>
#include<math.h>
#include <GL/glut.h>

void building()
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
void ground()
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

void sky()
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
void tree()
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
void cloud()
{///1
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

  glBegin(GL_POLYGON);
  float x10 =23.78;
  float y10= 172.75;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(229, 231, 233);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 8.42;
       float x = r * cos(a) + x10;
       float y = r * sin(a) + y10;
       glVertex2f(x, y);
  }
  glEnd();

  glBegin(GL_POLYGON);
  float x11 =13.78;
  float y11= 171.82;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(229, 231, 233);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 7.500;
       float x = r * cos(a) + x11;
       float y = r * sin(a) + y11;
       glVertex2f(x, y);
  }
  glEnd();

  glBegin(GL_POLYGON);
  float x12 =34.26;
  float y12= 171.19;
  for (int i = 0; i < 300; i++)
  {
       glColor3ub(229, 231, 233);
       float pi = 3.1416;
       float a = (i * 2 * pi) / 300;
       float r = 7.55;
       float x = r * cos(a) + x12;
       float y = r * sin(a) + y12;
       glVertex2f(x, y);
  }
  glEnd();

  glPopMatrix();

}

void ship()
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

     glColor3ub(186, 74, 0);
    glBegin(GL_POLYGON);

    glVertex2f(152.4446755873676, 88.0587286997448);
    glVertex2f(160, 80);
    glVertex2f(200, 80);
    glVertex2f(206.1710355574715, 88.0587286997448);
    glVertex2f(152.4446755873676, 88.0587286997448);
    glEnd();

    glColor3ub(229, 7, 7);
    glBegin(GL_POLYGON);

    glVertex2f(166.40,88.05);
    glVertex2f(185.1891313164227, 105.3082603462747);
    glVertex2f(190.0598792615438, 102.1591068681698);
    glVertex2f(194.3470985496854, 96.5125253667136);
    glVertex2f(195.8110270870996, 92.643571374975);
    glVertex2f(196.64,88.05);
    glEnd();

    glColor3ub(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex2f(157.78,95.15);
    glVertex2f(174.64,74.38);
    glVertex2f(177.95,75.88);
    glEnd();


     glLineWidth(.1);
    glBegin(GL_LINES);///lines1
    glColor3ub(0,0,0);
    glVertex2f(185.1891313164227, 105.3082603462747);
    glVertex2f(156.51,88.05);
    glEnd();
}
 void river()
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



void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    river();
    sky();
    cloud();
    ship();
ground();
fench();
building();
tree();
  ship();
   glFlush();

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900, 500);
    glutInitWindowPosition(100, 200);
    glutCreateWindow("Village");
    glClearColor(1, 1, 1, 1);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-20, 360, 0, 200);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

