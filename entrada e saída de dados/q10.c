#include <stdio.h>
#include <math.h>

void main(){
	//Escreva um programa que leia o valor dos dois 
	//catetos de um triângulo retângulo e
	//calcule o valor da hipotenusa.
	int cateto1, cateto2, soma_catetos;
	float hipotenusa;
	printf("informe o valor do cateto 1: ");
	scanf("%d", &cateto1);
	printf("informe o valor do cateto 2: ");
	scanf("%d", &cateto2);
	soma_catetos = pow(cateto1,2) + pow(cateto2,2);
	hipotenusa = sqrt(soma_catetos);
	printf("a hipotenusa do triangulo eh %.1f", hipotenusa);
	getch();
}
