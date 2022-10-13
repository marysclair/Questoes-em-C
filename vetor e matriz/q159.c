#include <stdio.h>

void main(){
	int vet[10];
	int i, m, n, aux;
	for(i=0; i<10;i++){
		scanf("%d",&vet[i]);
	}
	for(i=0;i<10;i++){
		printf("%d ",vet[i]);
	}
	scanf("%d %d", &m,&n);
	aux = vet[m];
	vet[m] = vet[n];
	vet[n] = aux;
	for(i=0; i<10;i++){
		printf("%d ",vet[i]);
	}
}
