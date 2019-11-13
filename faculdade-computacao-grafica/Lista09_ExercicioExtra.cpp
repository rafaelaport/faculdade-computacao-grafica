#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Obj1[5][3];
float Obj2[5][3];
float M[3][3] = { { 1, 0, 0 }, { 0, 1, 0 }, { 0, 0, 1 } };
int N;

void ExibeObjeto(int N){

	printf("\nObjeto Final\n\n");

	for (int i = 0; i<N; i++){

		for (int j = 0; j<3; j++){

			printf(" %.2f ", Obj1[i][j]);

			if (j == 2)
				printf("\n");
		}
	}

	printf("\n\n");
	system("pause");
}

void Produto(int N, float Op[3][3]){

	for (int m = 0; m < N; m++){

		for (int p = 0; p < 3; p++){

			Obj1[m][p] = 0;

			for (int n = 0; n < 3; n++){

				Obj1[m][p] = Obj1[m][p] + Obj2[m][n] * Op[n][p];
			}
		}
	}

	ExibeObjeto(N);
}

void Translado(){

	printf("\ndx = ");
	scanf_s("%f", &M[2][0]);

	printf("dy = ");
	scanf_s("%f", &M[2][1]);

	Produto(N, M);
}

void Escala(){
	 
	printf("\nex = ");
	scanf_s("%f", &M[0][0]);

	printf("\ey = ");
	scanf_s("%f", &M[1][1]);

	Produto(N, M);
}

void Rotacao(){
	
	int sentidoRotacao;
	float anguloRotacao = 0;


	printf("\nEscolha o sentido de rotacao do objeto");
	printf("\nDigite:");
	printf("\n1 - Sentido horario");
	printf("\n2 - Sentido anti-horario\n");
	scanf_s("%d", &sentidoRotacao);

	switch (sentidoRotacao){
	case 1:

		printf("\nInforme o angulo de rotacao desejado: ");
		scanf_s("%f", &anguloRotacao);

		anguloRotacao = anguloRotacao * 0.017453;

		M[0][0] = cos(anguloRotacao);
		M[0][1] = -sin(anguloRotacao);
		M[1][0] = sin(anguloRotacao);
		M[1][1] = cos(anguloRotacao);

		Produto(N, M);
		
		break;

	case 2:

		printf("\nInforme o angulo de rotacao desejado: ");
		scanf_s("%f", &anguloRotacao);

		anguloRotacao = anguloRotacao * 0.017453;

		M[0][0] = cos(anguloRotacao);
		M[0][1] = sin(anguloRotacao);
		M[1][0] = -sin(anguloRotacao);
		M[1][1] = cos(anguloRotacao);

		Produto(N, M);

		break;

	default:

		printf("\n-------------------------\n");
		printf("\nSENTIDO INEXISTENTE\n");
		printf("\n-------------------------\n");
		printf("\n\n");

		system("pause");

		break;
	}
}

void Funcionalidade(){

	char funcionalidade;

	printf("\nQual a funcionalidade que voce deseja realizar?");
	printf("\nDigite: ");
	printf("\nT - Translado");
	printf("\nS - Escala");
	printf("\nR - Rotacao\n");
	scanf_s(" %c", &funcionalidade);

	switch (funcionalidade){

	case 'T':
	case 't':
		Translado();
		break;

	case 'S':
	case's':
		Escala();
		break; 
		
	case 'R': 
	case 'r':
		Rotacao();
		break;

	default:

		printf("\n-------------------------\n");
		printf("\nOPERACAO INEXISTENTE\n");
		printf("\n-------------------------\n");
		printf("\n\n");

		system("pause");
		break;
	}
}

void IniciaObjeto(int N){
	printf("\nInsira as corrdenadas x e y do objeto");

	for (int i = 0; i<N; i++){

		printf("\nx[%d] = ", i);
		scanf_s("%f", &Obj1[i][0]);

		printf("y[%d] = ", i);
		scanf_s("%f", &Obj1[i][1]);

		Obj1[i][2] = 1;

		Obj2[i][0] = Obj1[i][0];
		Obj2[i][1] = Obj1[i][1];
		Obj2[i][2] = 1;
	}

	Funcionalidade();
}

void main(){

	printf("\n-------------------------\n");
	printf("Bem-vindo ao calculador de Translado, Reflexao e Rotacao de objetos");
	printf("\n-------------------------\n");

	do
	{
		printf("\nQuantos lados ha no seu objeto?\n(3, 4 ou 5)\n L = ");
		scanf_s("%d", &N);

	} while (N > 5 || N < 3);

	IniciaObjeto(N);
	
}