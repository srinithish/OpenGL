#include <iostream>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>


using namespace std;


float year=0,day=0;
void init(void)
{
glClearColor (0.0, 0.0, 0.0, 0.0);
glShadeModel (GL_FLAT);
}
void animate()
	{
	year=year+(360/365);
	cin.get();
	
	glutPostRedisplay();
	}
void display()
	{
	glClear (GL_COLOR_BUFFER_BIT);
	glColor3f (1.0, 1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt (0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	glutWireSphere(1.0, 20, 16); /* draw sun */
	year=year+(360/365);
	cin.get();
	glRotatef (year, 0.0, 1.0, 0.0);
	glTranslatef (2.0, 0.0, 0.0);
	glRotatef ((GLfloat) day, 0.0, 1.0, 0.0);
	glutWireSphere(0.2, 10, 8); /* draw smaller planet */
	
	glutSwapBuffers();
	}
void reshape (int w, int h)
{
glViewport (0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode (GL_PROJECTION);
glLoadIdentity ();
gluPerspective(60.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
//glMatrixMode(GL_MODELVIEW);
//glLoadIdentity();
//gluLookAt (0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow (argv[0]);
init ();
glutDisplayFunc(display);

animate();
glutReshapeFunc(reshape);

glutMainLoop();
return 0;
}