/* 5 objek ada didalam rumah berupa kursi,kasur,bingkai foto,pot dan kulkas tetapi ketika menggunakan fungsi keyboard "5" objek didalam akan ikut terpotong*/
#include<windows.h>
#include <gl/glut.h>

void init(void);
void tampil(void);
void mouse(int button, int state, int x, int y);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
void mouseMotion(int x, int y);

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(200,100);
    glutCreateWindow("Aditya Indra Cahya - 672016220");
    init();
	glutDisplayFunc(tampil);
	glutReshapeFunc(ukuran);
	
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);

    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    is_depth =1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(11.0);
    glLineWidth(9.0f);

}

void tampil(void)
{
	if (is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
    glClear(GL_COLOR_BUFFER_BIT);
    
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glRotatef(xrot,1.0f,0.0f,0.0f);
    glRotatef(yrot,0.0f,1.0f,0.0f);


	glBegin(GL_QUADS);
	glColor3f(1.0,2.6,0.5);
	glVertex3f(-15.0,-15.0,15.0);
	glVertex3f(-15.0, 15.0, 15.0);
	glVertex3f(15.0, 15.0, 15.0);
    glVertex3f(15.0,-15.0,15.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex3f(-14.0,-14.0,14.0);
	glVertex3f(-12.0,-14.0,14.0);
	glVertex3f(-12.0,-11.0,14.0);
    glVertex3f(-13.0,-11.0,14.0);
    glVertex3f(-13.0,-8.0,14.0);
    glVertex3f(-14.0,-8.0,14.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex3f(-14.0,-14.0,12.0);
	glVertex3f(-12.0,-14.0,12.0);
	glVertex3f(-12.0,-11.0,12.0);
    glVertex3f(-13.0,-11.0,12.0);
    glVertex3f(-13.0,-8.0,12.0);
    glVertex3f(-14.0,-8.0,12.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex3f(-14.0,-14.0,14.0);
	glVertex3f(-14.0,-8.0,14.0);
	glVertex3f(-14.0,-8.0,12.0);
	glVertex3f(-14.0,-14.0,12.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex3f(-14.0,-8.0,14.0);
	glVertex3f(-13.0,-8.0,14.0);
	glVertex3f(-13.0,-8.0,12.0);
	glVertex3f(-14.0,-8.0,12.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex3f(-14.0,-11.0,14.0);
	glVertex3f(-12.0,-11.0,14.0);
	glVertex3f(-12.0,-11.0,12.0);
	glVertex3f(-14.0,-11.0,12.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1,1,0);
	glVertex3f(4.0,-14.0,13.0);
	glVertex3f(8.0,-14.0,13.0);
	glVertex3f(8.0,-14.0,9.0);
	glVertex3f(4.0,-14.0,9.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,1,1);
	glVertex3f(4.0,-14.0,13.0);
	glVertex3f(8.0,-14.0,13.0);
	glVertex3f(9.0,-11.0,14.0);
	glVertex3f(3.0,-11.0,14.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,1,1);
	glVertex3f(4.0,-14.0,9.0);
	glVertex3f(8.0,-14.0,9.0);
	glVertex3f(9.0,-11.0,8.0);
	glVertex3f(3.0,-11.0,8.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1,0,1);
	glVertex3f(4.0,-14.0,13.0);
	glVertex3f(4.0,-14.0,9.0);
	glVertex3f(3.0,-11.0,8.0);
	glVertex3f(3.0,-11.0,14.0);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1,0,1);
	glVertex3f(8.0,-14.0,13.0);
	glVertex3f(8.0,-14.0,9.0);
	glVertex3f(9.0,-11.0,8.0);
	glVertex3f(9.0,-11.0,14.0);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1,0,1);
	glVertex3f(8.0,-14.0,13.0);
	glVertex3f(8.0,-14.0,9.0);
	glVertex3f(9.0,-11.0,8.0);
	glVertex3f(9.0,-11.0,14.0);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1,0,1);
	glVertex3f(-14.7,-6.0,3.0);
	glVertex3f(-14.7,-6.0,-3.0);
	glVertex3f(-14.7,2.0,-3.0);
	glVertex3f(-14.7,2.0,3.0);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0,1,1);
	glVertex3f(-14.5,-5.0,2.0);
	glVertex3f(-14.5,-5.0,-2.0);
	glVertex3f(-14.5,1.0,-2.0);
	glVertex3f(-14.5,1.0,2.0);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0,1,1);
	glVertex3f(-3.0,-15.0,0.0);
	glVertex3f(-3.0,-15.0,-6.0);
	glVertex3f(3.0,-15.0,-6.0);
	glVertex3f(3.0,-15.0,0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,1,1);
	glVertex3f(-3.0,-3.0,0.0);
	glVertex3f(-3.0,-3.0,-6.0);
	glVertex3f(3.0,-3.0,-6.0);
	glVertex3f(3.0,-3.0,0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1,0,1);
	glVertex3f(-3.0,-15.0,0.0);
	glVertex3f(-3.0,-15.0,-6.0);
	glVertex3f(-3.0,-3.0,-6.0);
	glVertex3f(-3.0,-3.0,0.0);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1,0,1);
	glVertex3f(3.0,-15.0,0.0);
	glVertex3f(3.0,-15.0,-6.0);
	glVertex3f(3.0,-3.0,-6.0);
	glVertex3f(3.0,-3.0,0.0);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1,1,0);
	glVertex3f(-3.0,-15.0,0.0);
	glVertex3f(3.0,-15.0,0.0);
	glVertex3f(3.0,-3.0,0.0);
	glVertex3f(-3.0,-3.0,0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1,1,0);
	glVertex3f(-3.0,-15.0,-6.0);
	glVertex3f(3.0,-15.0,-6.0);
	glVertex3f(3.0,-3.0,-6.0);
	glVertex3f(-3.0,-3.0,-6.0);
	glEnd();
	
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3b(1,1,1);
	glVertex3f(-3.0,-6.0,0.1);
	glVertex3f(3.0,-6.0,0.1);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex3f(4.0,-13.0,5.0);
    glVertex3f(4.0,-13.0,-5.0);
    glVertex3f(10.0,-13.0,-5.0);
    glVertex3f(10.0,-13.0,5.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1,1,0);
    glVertex3f(4.0,-13.0,5.0);
    glVertex3f(4.0,-15.0,5.0);
    glVertex3f(10.0,-15.0,5.0);
    glVertex3f(10.0,-13.0,5.0);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1,1,0);
    glVertex3f(4.0,-13.0,-5.0);
    glVertex3f(4.0,-15.0,-5.0);
    glVertex3f(10.0,-15.0,-5.0);
    glVertex3f(10.0,-13.0,-5.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.5,0.5,0.0);
	glVertex3f(-5,-15.0,15.5);
	glVertex3f(-5, 0, 15.5);
	glVertex3f(5, 0, 15.5);
    glVertex3f(5,-15.0,15.5);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.4,0.6,0);
	glVertex3f(-2,10.0,15.5);
	glVertex3f(-2,2, 15.5);
	glVertex3f(-10,2, 15.5);
    glVertex3f(-10,10,15.5);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.4,0.33,3.0);
	glVertex3f(-15.0,-15.0, -15.0);
	glVertex3f(-15.0, 15.0, -15.0);
	glVertex3f(15.0, 15.0, -15.0);
    glVertex3f(15.0,-15.0, -15.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.4,0.33,3.0);
	glVertex3f(15.0, 15.0, 15.0);
    glVertex3f(15.0,-15.0,15.0);
	glVertex3f(15.0,-15.0,-15.0);
	glVertex3f(15.0,15.0,-15.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0,2.6,0.5);
	glVertex3f(-15, 15.0, 15.0);
	glVertex3f(-15,-15.0,15.0);
	glVertex3f(-15,-15.0,-15.0);
	glVertex3f(-15,15.0,-15.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(8.5,0.5,0.0);
	glVertex3f(0, 25.0,15.0);
	glVertex3f(15,15.0,15.0);
	glVertex3f(15,15.0,-15.0);
	glVertex3f(0,25.0,-15.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(8.5,0.5,0.0);
	glVertex3f(-15, 15.0, 15);
	glVertex3f(-15,15.0,-15);
	glVertex3f(0,25,-15);
	glVertex3f(0,25,15);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(2.5,0.0,0.0);
	glVertex3f(0, 25.0,15);
	glVertex3f(15,15.0,15);
	glVertex3f(-15,15,15);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(2.5,0.0,0.0);
	glVertex3f(0, 25.0,-15);
	glVertex3f(15,15.0,-15);
	glVertex3f(-15,15,-15);
	glEnd();
	
	glPushMatrix();
	glPopMatrix();
    glutSwapBuffers();

}

void idle()
{
	if (!mouseDown)
	{
		xrot += 0.3f;
		yrot += 0.4f;
	}
	glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		mouseDown = true;
		xdiff = x - yrot;
		ydiff = -y + xrot;
	}
	else
	mouseDown = false;
}

void mouseMotion (int x, int y)
{
	if(mouseDown)
	{
		yrot = x - xdiff;
		xrot = y + ydiff;
		
		glutPostRedisplay();
	}
}

void keyboard(unsigned char key, int x, int y)
{
if (key=='5'){
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    tampil();
}

void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi = 1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}

