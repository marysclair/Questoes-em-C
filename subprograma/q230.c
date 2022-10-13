#include <stdio.h>
const int TAM=3;
int maiorNum(int num[TAM]){
	int maior = num[0];
	int i;
	for(i=1; i<TAM; i++){
		if(num[i]>maior){
			maior = num[i];
		}
	}
	return maior;
}

void main(){
	int num[TAM];
	int i;
	for(i=0; i<TAM; i++){
		scanf("%d", &num[i]);
	}
	int maior = maiorNum(num);
	printf("%d", maior);
}
