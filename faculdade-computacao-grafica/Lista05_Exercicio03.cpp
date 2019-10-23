/*#include <glut.h>

void desenhaCasa()
{
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//casa
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.31);
	glVertex2f(200, 350);
	glVertex2f(50, 250);
	glVertex2f(50, 50);
	glVertex2f(350, 50);
	glVertex2f(350, 250);
	glEnd();
	glFlush();

	//porta
	glBegin(GL_POLYGON);
	glColor3f(0.55, 0.35, 0.17);
	glVertex2f(175, 175);
	glVertex2f(175, 50);
	glVertex2f(225, 50);
	glVertex2f(225, 175);
	glEnd();
	glFlush();

	//janela 1
	glBegin(GL_POLYGON);
	glColor3f(0.55, 0.35, 0.17);
	glVertex2f(80, 250);
	glVertex2f(80, 180);
	glVertex2f(145, 180);
	glVertex2f(145, 250);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.96, 0.56);
	glVertex2f(85, 245);
	glVertex2f(85, 185);
	glVertex2f(140, 185);
	glVertex2f(140, 245);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glColor3f(0.55, 0.35, 0.17);
	glVertex2f(80, 215);
	glVertex2f(145, 215);
	glVertex2f(112.5, 180);
	glVertex2f(112.5, 250);
	glEnd();
	glFlush();

	//janela 2
	glBegin(GL_POLYGON);
	glColor3f(0.55, 0.35, 0.17);
	glVertex2f(255, 250);
	glVertex2f(255, 180);
	glVertex2f(320, 180);
	glVertex2f(320, 250);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.96, 0.56);
	glVertex2f(260, 245);
	glVertex2f(260, 185);
	glVertex2f(315, 185);
	glVertex2f(315, 245);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glColor3f(0.55, 0.35, 0.17);
	glVertex2f(255, 215);
	glVertex2f(320, 215);
	glVertex2f(287.5, 180);
	glVertex2f(287.5, 250);
	glEnd();
	glFlush();
	
}

void main(int argc, char **argv)
{
	glutInit(&argc, argv);

	//GLUT_DEPTH não é necessário para agora
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(900, 500);
	glutInitWindowPosition(250, 150);
	glutCreateWindow("Casa");
	gluOrtho2D(0, 400, 0, 400);
	glutDisplayFunc(desenhaCasa);
	glutMainLoop();
}*/

