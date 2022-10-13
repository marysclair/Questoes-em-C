#include <stdio.h>
#include <stdlib.h>

void main() {
	//Escreva um programa que leia três números e seus respec
	//tivos pesos e calcule a sua média ponderada.
	float nota1,nota2,nota3,media;
	int peso1,peso2,peso3;
	printf("informe a nota 1: ");
	scanf("%f", &nota1);
	printf("informe a nota 2: ");
	scanf("%f", &nota2);
	printf("informe a nota 3: ");
	scanf("%f", &nota3);
	printf("informe o peso 1: ");
	scanf("%d", &peso1);
	printf("informe o peso 2: ");
	scanf("%d", &peso2);
	printf("informe o peso 3: ");
	scanf("%d", &peso3);
	media=((nota1*peso1)+(nota2*peso2)+(nota3*peso3))/(peso1+peso2+peso3);
	printf("a media ponderada eh : %.1f ",media);
	getch();
}
