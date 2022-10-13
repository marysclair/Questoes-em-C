#include <stdio.h>
#include <stdlib.h>
int TAM, col, colunas;
void zerarMatriz(int vet[TAM]){
	int i;
	for(i=0; i<TAM; i++){
		vet[i]=0;
	}
}
void inserirElementos(int vet[TAM], int elemento, int linhas){
	vet[linhas*col+colunas]=elemento;
}

void imprimirMatriz(int vet[TAM]){
	int i;
	for(i=0; i<TAM; i++){
		if(i%colunas==0){
			printf("\n");
		}
		printf(" %d ", vet[i]);
	}
}

int main(){
	int linhas, elemento;
	printf("informe quantas linhas e colunas da matriz ");
	scanf("%d %d", &linhas, &colunas);
	TAM = linhas*colunas;
	int vet[TAM];
	zerarMatriz(vet);
	imprimirMatriz(vet);
	int i, j;
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			col = j;
			printf("Matriz[%d][%d]", i, j);
			scanf("%d",&elemento);
			inserirElemento(vet,elemento,i);
		}
	}
	imprimirMatriz(vet);
}
