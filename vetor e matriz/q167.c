#include <stdio.h>

void main(){
	int vet[10];
	int i,k;
	printf("informe o vetor: ");
	for(i=0;i<10;i++){
		scanf("%d",&vet[i]);
	}
	int menor, posicao;
	int vet2[10];
	menor = vet[0];
	for(k=0; k<10; k++){	
		for(i=0;i<10;i++){
			if(vet[i]<menor&&vet[i]!=0){
				vet2[k]= vet[i];
				posicao = i;
			}
		}
		vet[posicao] = 0;
		printf("posicao:%d",posicao);
		menor = vet[0];
	}
	for(i=0;i<10;i++){
		printf("%d ",vet2[i]);
	}
}
