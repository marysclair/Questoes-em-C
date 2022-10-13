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

int meioNum(int num[TAM]){
	int maior = maiorNum(num);
	int menor = menorNum(num);
	int i, meio;
	for(i=1; i<TAM; i++){
		if(num[i]!=maior && num[i]!=menor){
			meio = num[i];
		}
	}
	return meio;
}
void main(){
	int num[TAM];
	int i;
	for(i=0; i<TAM; i++){
		scanf("%d",&num[i]);
	}
	int meio = meioNum(num);
	printf("%d", meio);
}

