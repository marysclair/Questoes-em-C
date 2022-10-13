#include <stdio.h>

int posicaoMaiorNum(int vet[5]){
	int i, maior, posicao;
	maior = vet[0];
	for(i=1; i<5; i++){
		if(vet[i]>maior){
			maior = vet[i];
			posicao = i;
		}
	}
	return posicao;
}
int segundoMaior(int vet[5]){
	int i, posicao,maior, seg;
	posicao = posicaoMaiorNum(vet);
	vet[posicao] = 0;
	maior = vet[0];
	for(i=1; i<5; i++){
		if(vet[i]>maior){
			maior = vet[i];
		}
	}
	return maior;
}

void main(){
	int vet[5];
	int i;
	for(i=0; i<5; i++){
		scanf("%d", &vet[i]);
	}
	int segmaior = segundoMaior(vet);
	printf("%d", segmaior);
}
