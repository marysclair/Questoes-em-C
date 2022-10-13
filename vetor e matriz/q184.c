#include <stdio.h>
const int TAM=5;
void main(){
	int mat[TAM][TAM];
	int i, j, n;
	int soma=0;
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			scanf("%d",&mat[i][j]);
		}
	}
	scanf("%d",&n);
	for(j=0; j<TAM; j++){
		for(i=0; i<TAM; i++){
			if(i==n){
				soma+= mat[i][j];
			}
		}
	}
	float media =  (float)soma/TAM;
	printf("%.2f",media);
}
