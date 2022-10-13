#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimirMatriz(int mat[10][10]){
	int i, j;
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}

void preencherMatriz(int mat[10][10]){
	int i, j;
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			mat[i][j]=0;
		}
	}
}
void main(){
	srand(time(NULL));
	int k, col, lin, coluna, linha;
	int pontos=0;
	int mat[10][10];
	int resposta;
	do{
		printf("\n");
		preencherMatriz(mat);
		for(k=0; k<20; k++){
			col = rand()%9;
			lin = rand()%9;
			mat[lin][col]=1;
		}
		printf("--------NOVA PARTIDA--------\n");
		for(k=0; k<20; k++){
			printf("Linha//Coluna: ");
			scanf("%d %d",&linha,&coluna);
			if(mat[linha][coluna]==1){
				pontos++;
			}
		}
		printf("\n");
		imprimirMatriz(mat);
		printf("\n");
		printf("TOTAL DE PONTOS: %d\n", pontos);
		printf("Deseja continuar? [1/0] ");
		scanf("%d",&resposta);
	}while(resposta!=0);
}
