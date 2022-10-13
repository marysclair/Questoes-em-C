#include <stdio.h>
const int TAM=5;
void main(){
	int mat[TAM][TAM];
	int i, j;
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			scanf("%d",&mat[i][j]);
		}
	}
	int maior = mat[0][0];
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			if(i==n){
				if(mat[i][j]>maior){
					maior = mat[i][j];
				}
			}
		}
	}
	printf("%d", maior);
}
