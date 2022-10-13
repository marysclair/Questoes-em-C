#include <stdio.h>
#include <math.h>
void main(){
	//Escreva um programa que leia o valor do seno de 
	//um ângulo e calcule o valor do seu cosseno.
	float seno, cosseno;
	printf("informe o valor do seno: ");
	scanf("%f", &seno);
	cosseno = cos(seno);
	printf("o valor do cosseno eh: %.2f", cosseno);
	getch();
}
