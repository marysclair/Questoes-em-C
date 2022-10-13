#include <stdio.h>

void main(){
	//Escreva um programa que leia o peso e a altura de uma pessoa e 
	//determine o seu índice de massa corporal.
	float peso, altura, imc;
	printf("informe o peso: ");
	scanf("%f", &peso);
	printf("informe a altura: ");
	scanf("%f", &altura);
	imc = peso/(altura*altura);
	printf("o seu imc eh: %.2f", imc);
}
