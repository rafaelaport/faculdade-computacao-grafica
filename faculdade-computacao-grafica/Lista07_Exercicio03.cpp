#include <glut.h>
#include <stdio.h>

float R = 0, G = 0, B = 0;
int aux = 1;

void Objeto01(){
	glColor3f(R, G, B);
	glBegin(GL_TRIANGLES);
	glVertex2f(2, 2);
	glVertex2f(5, 5);
	glVertex2f(8, 2);
	glEnd();
}

void Objeto02(){
	glColor3f(R, G, B);
	glBegin(GL_QUADS);
	glVertex2f(1, 6);
	glVertex2f(4, 6);
	glVertex2f(5, 7);
	glVertex2f(2, 7);
	glEnd();

}

void redesenha(){
	glClearColor(1, 1, 1, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	if (aux == 1) Objeto01();
	if (aux == 2) Objeto02();

	glFlush();
}
void teclado(unsigned char key, int x, int y){
	switch (key) {

	case 'R':
	case 'r':
		R = 1; G = 0; B = 0;
		break;

	case 'G':
	case 'g':
		R = 0; G = 1; B = 0;
		break;

	case 'B':
	case 'b':
		R = 0; G = 0; B = 1;
		break;
	case 'C':
	case 'c':
		printf("Cor: RGB");
		printf("\nR: ");
		scanf_s("%f", &R);

		printf("G: ");
		scanf_s("%f", &G);

		printf("B: ");
		scanf_s("%f", &B);
		printf("\n");
		break;
	}
	redesenha();
}

void le_mouse(int button, int state, int x, int y)
{
	switch (button) {
	case GLUT_LEFT_BUTTON:
		aux = 1;
		break;
	case GLUT_RIGHT_BUTTON:
		aux = 2;
		break;
	}
	redesenha();
}

void main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("TRIANGULO X QUADRILATERO => RGB");
	gluOrtho2D(0, 10, 0, 10);
	glutDisplayFunc(redesenha);
	glutKeyboardFunc(teclado);
	glutMouseFunc(le_mouse);
	glutMainLoop();
}