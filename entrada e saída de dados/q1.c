#include <stdio.h>
#include <stdlib.h>

void main() {
	//1. Escreva um programa que leia três
	// números inteiros e calcule a sua média aritmética.
	int num1, num2, num3;
	float media;
	printf("informe a nota 1: ");
	scanf("%d", &num1);
	printf("informe a nota 2: ");
	scanf("%d", &num2);
	printf("informe a nota 3: ");
	scanf("%d", &num3);
	media = (num1+num2+num3)/3;
	printf("a media eh: %.1f ",media);
	getch();
}
