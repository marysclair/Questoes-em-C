#include <stdio.h>

void lerVetor(int vet[10]){
	int i;
	for(i=0;i<10;i++){
		printf("informe o vetor: ");
		scanf("%d",&vet[i]);
	}
}

void main(){
	int i,j;
	int aparece;
	int vet1[10];
	int vet2[10];
	letVetor(vet1);
	lerVetor(vet2);
	for(i=0;i<10;i++){
		aparece=0;
		for(j=0;j<10;j++){
			if(vet1[i]==vet2[j]){
				aparece++;
			}
		}
		if(aparece==0){
			printf("%d ",vet1[i]);
		}
	}
}
