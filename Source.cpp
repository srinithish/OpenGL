//#include <GL/gl.h>
//#include <GL/glu.h>
//#include <GL/glut.h>
//
//
//float i=0,j=0,k,l;
//void init(void)
//{
//glClearColor (0.0, 0.0, 0.0, 0.0);
//glShadeModel (GL_FLAT);
//}
//void mykeyboard(unsigned char key,int x, int y)
//	{
//	/*if (x==103)
//		{
//		i=i+20;
//		glutPostRedisplay();
//		}*/
//	
//	switch(key)
//		{
//		case 'r':
//	            i=i-20;
//			
//				glutPostRedisplay();
//				break;
//		case 't':
//			i=i+20;
//		
//			glutPostRedisplay();
//			break;
//		case 'f':
//			j=j+20;
//			glutPostRedisplay();
//			break;
//
//		default:
//			break;
//		}
//
//			
//
//
//	  
//
//		}
//	
//
//	
//
//void display(void)
//{
//glClear (GL_COLOR_BUFFER_BIT);
//glColor3f (1.0, 1.0, 1.0);
//glMatrixMode (GL_MODELVIEW);
//glLoadIdentity (); /* clear the matrix */
///* viewing transformation */
//
//gluLookAt (0.0, 0.0, 2, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
//
// /* modeling transformation */
//glRotatef(i,0,0,1);
//
//glRotatef(j,1,0,0);
//
//glutWireCube(1);
//
//glFlush ();
//}
//void reshape (int w, int h)
//{
//glViewport (0, 0, (GLsizei) w, (GLsizei) h);
//glMatrixMode (GL_PROJECTION);
//glLoadIdentity ();
//glFrustum (-1.0, 1.0, -1.0,1.0,0.5,100);
////glViewport ((GLsizei) w/2,0,(GLsizei) w/2,(GLsizei) h);
////glMatrixMode (GL_PROJECTION);
////glLoadIdentity ();
////glFrustum (-1.0, 1.0, -1.0,1.0,0.5,4);
//
//
//
//}
//int main(int argc, char** argv)
//{
//glutInit(&argc, argv);
//glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
//glutInitWindowSize (500, 500);
//glutInitWindowPosition (100, 100);
//glutCreateWindow (argv[0]);
//init ();
//
//glutReshapeFunc(reshape);
//glutDisplayFunc(display);
//glutKeyboardFunc(mykeyboard);
//
//glutMainLoop();
//return 0;
//
//}