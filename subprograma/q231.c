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
int menorNum(int num[TAM]){
	int menor = num[0];
	int i;
	for(i=1; i<TAM; i++){
		if(num[i]<menor){
			menor = num[i];
		}
	}
	return menor;
}
void main(){
	int num[TAM];
	int i;
	for(i=0; i<TAM; i++){
		scanf("%d",&num[i]);
	}
	float maior = maiorNum(num);
	float menor = menorNum(num);
}
