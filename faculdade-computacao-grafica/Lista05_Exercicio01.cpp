#include <glut.h>

void desenha()
{
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(200, 350);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(50, 50);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(350, 50);
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
	glutCreateWindow("Triângulo");
	gluOrtho2D(0, 400, 0, 400);
	glutDisplayFunc(desenha);
	glutMainLoop();
}

