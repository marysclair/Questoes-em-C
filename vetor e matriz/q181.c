#include <stdio.h>
const int TAM=3;
void main(){
	int mat[TAM][TAM];
	int i, j, n;
	int cont=0;
	printf("matriz: ");
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	printf("informe um numero: ");
	scanf("%d",&n);
	for(i=0; i<TAM; i++){
		for(j=i; j<TAM; j++){
				if(i==j&&cont!=n){
					printf("%d\n",mat[i][j]);
					cont++;
				}
		}
	}
}
