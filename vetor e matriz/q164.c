#include <stdio.h>

void main(){
	int vet1[5], vet2[5];
	int i, k;
	int igual=0;
	printf("vetor 1: ");
	for(i=0; i<5; i++){
		scanf("%d",&vet1[i]);
	}
	printf("vetor 2: ");
	for(i=0; i<5; i++){
		scanf("%d",&vet2[i]);
	}
	for(k=0; k<5; k++){
		for(i=0; i<5; i++){
			if(vet1[k]==vet2[i]){
				igual++;
			}
		}
	}
	printf("\n%d\n",igual);
	int vet3[(5)+(5-igual)];
	for(i=0; i<5; i++){
		vet3[i] = vet1[i];
	}
	int j=5;
	for(k=0; k<5; k++){
		for(i=0; i<5; i++){
			if(vet2[k]!=vet1[i]){
				vet3[j] = vet2[i];
				printf("%d ", vet3[j]);
				j++;
			}
		}
	}
	printf("\n");
	for(i=0; i<5+igual; i++){
		printf("%d ", vet3[i]);
	}
}
