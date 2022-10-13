#include <stdio.h>

void main(){
	int vet[10];
	int i;
	int soma=0;
	float media;
	for(i=0;i<10;i++){
		scanf("%d",&vet[i]);
		soma += vet[i];
	}
	media = (float)soma/10;
	for(i=0;i<10;i++){
		if(vet[i]>media){
			printf("%d",vet[i]);
		}
	}
}
