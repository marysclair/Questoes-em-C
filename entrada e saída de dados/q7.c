#include <stdio.h>

void main(){
	//Escreva um programa que leia o valor da base e da altura
	//de um triângulo e calcule a sua área.
	float base, altura, area;
	printf("informe o valor da base: ");
	scanf("%f", &base);
	printf("informe o valor da altura: ");
	scanf("%f", &altura);
	area = (base*altura)/2;
	printf("a area do triangulo eh %.1f",area);
	getch();
}
