//Josué Hass Pereira

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 5
#define COL 5

//Função geradora das entradas da matriz
void gera_valores(int x[LIN][COL]){
	int i, j;
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			x[i][j] = rand() % 10 + 1;
		}
	}
}

//Funcao para printar a matriz
void mostra_matriz(int x[LIN][COL], char id){
	int i, j;
	printf("Dados da matriz %c:\n");
	for(i = 0; i< LIN; i++){
		for(j = 0; j < COL; j++){
			printf("%3d", x[i][j]);
		}
		printf("\n");
	}
	printf("------------------------------\n");
}

int main(){
	srand(time(0));
	int a[LIN][COL], b[LIN][COL];
	gera_valores(a);
	gera_valores(b);
	mostra_matriz(a, 'A');
	mostra_matriz(b, 'B');
	int c[LIN][COL], i, j;
	for (i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	mostra_matriz(c, 'C');
	
	return 0;
}