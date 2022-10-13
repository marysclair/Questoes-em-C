#include <stdio.h>

void main(){
	//Escreva um programa que leia o peso e a altura dos atletas 
	//das quatro duplas que vão participar de um torneio de 
	//vôlei de praia e calcule o peso e a altura média de cada
	//dupla e o peso e a altura média de todos os jogadores do
	// torneio.
	float peso, altura, soma_peso=0, soma_altura=0, media_altura, media_peso;
	int i, pessoa=0;
	for(i=0; i<8; i+=1){
		printf("informe o peso: ");
		scanf("%f", &peso);
		printf("informe a altura: ");
		scanf("%f", &altura);
		soma_peso += peso;
		soma_altura += altura;
		pessoa++;
	}
	media_peso = soma_peso/pessoa;
	media_altura = soma_altura/pessoa;
	printf("a media de pesos eh: %.1f", media_peso);
	printf("\n");
	printf("a media de pesos eh: %.1f", media_altura);
}
