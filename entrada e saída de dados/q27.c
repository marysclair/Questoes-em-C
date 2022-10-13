#include <stdio.h>

void main(){
	//Escreva um programa que leia o comprimento e a largura de uma cisterna e a
	//quantidade de litros que o usuário deseja armazenar na mesma e determine 
	//quantos metros ele deve encher a cisterna para obter a quantidade de litros
	// desejada.
	
	float comp, larg, alt, litros, metros;
	printf("informe o valor do comprimento: ");
	scanf("%f", &comp);
	printf("informe o valor da largura: ");
	scanf("%f", &larg);
	printf("informe o valor de litros: ");
	scanf("%f", &litros);
	metros = litros/1000;
	alt = metros/(larg*comp);
	printf("a quantidade de metros que falta encher eh: %.1f", alt);
}
