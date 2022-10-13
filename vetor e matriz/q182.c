#include <stdio.h>
const int TAM=5;
void main(){
	int mat[TAM][TAM];
	int i,j;
	int cont=0;
	int maior = mat[0][0];
	for(i=0;i<TAM;i++){
		for(j=0;j<5;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<TAM;i++){
		for(j=i;j<TAM;j++){
			if(i==j){
				if(mat[i][j]>maior){
					maior = mat[i][j];
				}
			}
		}
	}
	printf("%d",maior);
}
