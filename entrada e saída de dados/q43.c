#include <stdio.h>
#include <math.h>
const int PERC = 100;

void main(){
	//Escreva um programa que leia o pre�o atual de uma a��o e o seu pre�o 
	//anterior e calcule a sua varia��o em termos percentuais. Por exemplo, 
	//se o pre�o atual for R$10,00 e o pre�o anterior era R$ 5,00 a varia��o
	// foi de 100%.
	
	float pr_atual, pr_ant, var;
	printf("informe o preco anterior: ");
	scanf("%f", &pr_ant);
	printf("informe o preco atual: ");
	scanf("%f", &pr_atual);
	var = (PERC*pr_atual)/pr_ant;
	var = abs(PERC-var);
	printf("a variacao foi de %.2f", var);
}
