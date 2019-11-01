#include <vector>
#include <glut.h>
#include <stdio.h>

using namespace std;

float DIM = 501;

vector<int> px;
vector<int> py;


float R = 0.7;
float G = 0.5;
float B = 0.2;

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

	}

	Display();
}


void mouse(int b, int state, int x, int y)
{
	switch (b) {

	case GLUT_RIGHT_BUTTON:

		if (state == GLUT_UP){

			printf("\n\nx[%d] = %d ", x);
			printf("\n\ny[%d] = %d ", y);

			px.push_back(x);
			py.push_back(y);

		}

		break;

	case GLUT_LEFT_BUTTON:


		break;
	}

	Display();
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
	gluOrtho2D(0, 500, 500, 0);
	glutDisplayFunc(Display);
	glutMainLoop();
}