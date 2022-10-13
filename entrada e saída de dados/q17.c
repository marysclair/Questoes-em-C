//Escreva um programa que leia a área de uma casa e o valor 
//cobrado por um arquiteto por cada metro quadrado de um 
//projeto arquitetônico e calcule o custo final do projeto.

#include <stdio.h>

void main(){
	float area, valor_cobrado, custo_f;
	printf("informe a area em m2: ");
	scanf("%f", &area);
	printf("informe o valor cobrado por m2: ");
	scanf("%f", &valor_cobrado);
	custo_f = area*valor_cobrado;
	printf("o custo final eh: %.2f", custo_f);
	getch();
}
