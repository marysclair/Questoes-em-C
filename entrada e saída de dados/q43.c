#include <stdio.h>
#include <math.h>
const int PERC = 100;

void main(){
	//Escreva um programa que leia o preço atual de uma ação e o seu preço 
	//anterior e calcule a sua variação em termos percentuais. Por exemplo, 
	//se o preço atual for R$10,00 e o preço anterior era R$ 5,00 a variação
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
