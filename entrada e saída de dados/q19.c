#include <stdio.h>

const float SOMA_ANG = 180;

void main(){
	//Escreva um programa que leia os valores de dois 
	//ângulos internos de um triângulo e calcule o valor 
	//do terceiro ângulo.
	
	float ang1, ang2, ang3;
	printf("informe o valor do angulo 1: ");
	scanf("%f", &ang1);
	printf("informe o valor do angulo 2: ");
	scanf("%f", &ang2);
	ang3 = SOMA_ANG - (ang1+ang2);
	printf("o terceiro angulo eh: %.1f", ang3);
	getch();
}
