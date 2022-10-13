#include <stdio.h>
#include <stdlib.h>

void main() {
	//Escreva um programa que leia o valor do lado de um quadrado
	// e calcule a sua área e o seu perímetro.
	float lado,area,perimetro;
	printf("informe o lado: ");
	scanf("%f",&lado);
	area=lado*lado;
	perimetro=lado+lado+lado+lado;
	printf("a area: %.1f",area);
	printf("\n o perimetro: %.1f",perimetro);
	getch();
}
