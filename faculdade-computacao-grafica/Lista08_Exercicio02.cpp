/*#include <vector>
#include <glut.h>
#include <stdio.h>

using namespace std;

float DIM = 500;
float size = 10;

vector<int> px;
vector<int> py;

float R = 0.3;
float G = 0.2;
float B = 0.7;

void ExibePoligono()
{
	glColor3f(R, G, B);
	glBegin(GL_POLYGON);

	for (int i = 0; i < px.size(); i++){

		glVertex2d(px[i], py[i]);

	}

	glEnd();

}

void Display()
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	ExibePoligono();
	glFlush();

}



void teclado(unsigned char key, int x, int y)
{
	int n;
	int PX, PY;

	switch (key)  {

	case 'P':
	case 'p':

		px.clear();
		py.clear();

		printf("\nNumero de Vertices: ");
		scanf_s("%d", &n);

		for (int i = 0; i < n; i++){
			printf("\n\nx[%d] = ", i);
			scanf_s("%d", &PX);

			printf("\n\ny[%d] = ", i);
			scanf_s("%d", &PY);

			px.push_back(PX);
			py.push_back(PY);

		}

		break;

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

	case 'D':
	case 'd':

		px.clear();
		py.clear();

		break;

	}

	Display();
}

void mouse(int b, int state, int x, int y)
{
	float X, Y;

	switch (b) {

	case GLUT_RIGHT_BUTTON:

		if (state == GLUT_DOWN) {

			X = x / 25.0 - 10.0;
			Y = y / 25.0 - 10.0;

			px.push_back(X);
			py.push_back(-Y);

			Display();

		}

		break;
	}
}

void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(DIM, DIM);
	glutInitWindowPosition(500, 1);
	glutCreateWindow("POLYGON");
	glutKeyboardFunc(teclado);
	glutMouseFunc(mouse);
	gluOrtho2D(-size, size, -size, size);
	glutDisplayFunc(Display);
	glutMainLoop();

}*/