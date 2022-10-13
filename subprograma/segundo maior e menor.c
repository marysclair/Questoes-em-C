#include <stdio.h>
const int TAM = 6;
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

int segundoMaior(int num[TAM]){
	int segMaior = num[0];
	int maior = maiorNum(num);
	int i;
	for(i=1; i<TAM; i++){
		if(num[i]>segMaior && num[i]!=maior){
			segMaior = num[i];
		}
	}
	return segMaior;
}
int segundoMenor(int num[TAM]){
	int segMenor = num[0];
	int menor = menorNum(num);
	int i;
	for(i=1; i<TAM; i++){
		if(num[i]<segMenor && num[i]!=menor){
			segMenor = num[i];
		}
	}
	return segMenor;
}
void main(){
	int num[TAM];
	int i;
	for(i=0; i<TAM; i++){
		scanf("%d",&num[i]);
	}
	int segMaior = segundoMaior(num);
	int segMenor = segundoMenor(num);
	printf("%d %d", segMaior, segMenor);
}
