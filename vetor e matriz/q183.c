#include <stdio.h>
const int TAM=5;
void main(){
	int mat[TAM][TAM];
	int i,j;
	int soma=0;
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			if(i==n){
				soma+= mat[i][j];
			}
		}
	}
	printf("%d", soma);
}
