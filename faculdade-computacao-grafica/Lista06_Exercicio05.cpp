#include <glut.h>
void desenha()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glLineWidth(5);

	glBegin(GL_LINE_STRIP);
	glVertex2f(0, 0);
	glVertex2f(0, 8);
	glVertex2f(8, 8);
	glVertex2f(8, 0);
	glVertex2f(0, 0);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glVertex2f(0, 0);
	glVertex2f(1, 3);
	glVertex2f(0, 0);
	glVertex2f(2, 2);
	glVertex2f(0, 0);
	glVertex2f(3, 1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(0, 8);
	glVertex2f(1, 5);
	glVertex2f(0, 8);
	glVertex2f(2, 6);
	glVertex2f(0, 8);
	glVertex2f(3, 7);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(8, 8);
	glVertex2f(5, 7);
	glVertex2f(8, 8);
	glVertex2f(6, 6);
	glVertex2f(8, 8);
	glVertex2f(7, 5);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(8, 0);
	glVertex2f(5, 1);
	glVertex2f(8, 0);
	glVertex2f(6, 2);
	glVertex2f(8, 0);
	glVertex2f(7, 3);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(4, 0);
	glVertex2f(0, 4);
	glVertex2f(4, 0);
	glVertex2f(1, 4);
	glVertex2f(4, 0);
	glVertex2f(2, 4);
	glVertex2f(4, 0);
	glVertex2f(3, 4);
	glVertex2f(4, 0);
	glVertex2f(4, 4);
	glVertex2f(4, 0);
	glVertex2f(5, 4);
	glVertex2f(4, 0);
	glVertex2f(6, 4);
	glVertex2f(4, 0);
	glVertex2f(7, 4);
	glVertex2f(4, 0);
	glVertex2f(8, 4);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(4, 8);
	glVertex2f(0, 4);
	glVertex2f(4, 8);
	glVertex2f(1, 4);
	glVertex2f(4, 8);
	glVertex2f(2, 4);
	glVertex2f(4, 8);
	glVertex2f(3, 4);
	glVertex2f(4, 8);
	glVertex2f(4, 4);
	glVertex2f(4, 8);
	glVertex2f(5, 4);
	glVertex2f(4, 8);
	glVertex2f(6, 4);
	glVertex2f(4, 8);
	glVertex2f(7, 4);
	glVertex2f(4, 8);
	glVertex2f(8, 4);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(0, 4);
	glVertex2f(8, 4);
	glEnd();

	glFlush();
}

void teclado(unsigned char key, int x, int y)
{
	switch (key) {
	case '1':
		glColor3f(1, 1, 1);
		glClearColor(0, 0, 0, 0);
		break;
	case '2':
		glColor3f(0, 0, 0);
		glClearColor(1, 1, 1, 1);
		break;
	}

	glutPostRedisplay();
}

void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(250, 150);
	glutCreateWindow("Lista06_Exercicio05");
	gluOrtho2D(-1, 9, -1, 9);
	glutKeyboardFunc(teclado);
	glutDisplayFunc(desenha);
	glutMainLoop();
}