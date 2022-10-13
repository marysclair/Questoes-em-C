#include <stdio.h>
const int TAM=10;
void main(){
	int vet[TAM];
	int i, aux;
	for(i=0;i<TAM;i++){
		scanf("%d",&vet[i]);
	}
	int k=TAM-1;
	for(i=0;i<TAM/2;i++){
		aux = vet[i];
		vet[i]=vet[k];
		vet[k]=aux;
		k--;
	}
	for(i=0; i<TAM; i++){
		printf("%d ",vet[i]);
	}
}
