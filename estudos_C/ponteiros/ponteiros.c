#include <stdio.h>
#include <stdlib.h>

void ponteiro_do_ponteiro();
void matriz_de_ponteiros();
void referencia_por_ponteiro();

int	main()
{
	referencia_por_ponteiro();
	//ponteiro_do_ponteiro();
	//matriz_de_ponteiros();
	return(0);
}

void ponteiro_do_ponteiro()
{
	
	int nbr = 42;

	int *ponteiro1 = &nbr;
	printf("-------------\n");
	printf("nbr &memoria: %p\n", ponteiro1);
	printf("-------------\n");

	int **ponteiro2 = &ponteiro1;
	printf("ponteiro1 &memoria: %p\n", ponteiro2); //endereco do ponteiro1
	printf("nbr &memoria: %p\n", *ponteiro2); //conteudo do ponteiro1
	printf("nbr value: %d\n", **ponteiro2); //valor guardado pelo ponteiro1
	printf("-------------\n");

	int ***ponteiro3 = &ponteiro2;
	printf("ponteiro2 &memoria: %p\n", ponteiro3);
	printf("ponteiro1 &memoria: %p\n", *ponteiro3);
	printf("nbr &memoria: %p\n", **ponteiro3);
	printf("nbr value: %d\n", ***ponteiro3);
	printf("-------------\n");

	printf("Desreferenciando o ponteiro: %d\n", *ponteiro1);
	printf("Imprimindo o ponteiro de novo: %p\n", &*ponteiro1);
	printf("-------------\n");

}

void matriz_de_ponteiros()
{

	#define TAMANHO 2

	int i;

	// Funcao maloc separa antecipadamente um espaco na memoria para armazenar um valor
	// (int **) forca o malloc a retornar um espaco para armazenar inteiros (casting)
	// sizeof(int *) * TAMANHO define o tamanho da matriz
	int **matriz = (int **) malloc(sizeof(int *) * TAMANHO);

	if (matriz == NULL) {
		printf("Erro ao alocar memória");
		free(matriz);
	}

	for (i = 0; i < TAMANHO; i++) {
		*(matriz+i) = (int *) malloc(TAMANHO * sizeof(int));
		if (*(matriz+i) == NULL) {
			printf("Erro ao alocar memória");
			free(matriz);
		}
	}
	*(*(matriz+0)+0) = 1;
	*(*(matriz+0)+1) = 2;
	*(*(matriz+1)+0) = 3;
	*(*(matriz+1)+1) = 4;

	printf("%d %d\n", matriz[0][0], matriz[0][1]);
	printf("%d %d\n", matriz[1][0], matriz[1][1]);

	free(matriz);
}

void calculaPi(float **pi) {
		printf("pi: %p\n", pi);
		printf("*pi: %p\n", *pi);
		*pi = (float *) malloc(sizeof(float));
		**pi = 3.1415;
		printf("-----------\n");
		printf("pi: %p\n", pi);
		printf("*pi: %p\n", *pi);
		printf("**pi: %.4f\n", **pi);
		printf("-----------\n");
	}

void referencia_por_ponteiro()
{
	float *pi2 = NULL;
	printf("pi2: %p\n", pi2);
	printf("-----------\n");
	calculaPi(&pi2);
	printf("pi2: %p\n", pi2);
	printf("*pi2: %.4f\n", *pi2);
	printf("-----------\n");
}
