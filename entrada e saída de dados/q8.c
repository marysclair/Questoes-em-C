#include <stdio.h>

void main(){
	//Escreva um programa que leia o valor de uma 
	//temperatura em Celsius e calcule o seu
	//valor correspondente em Fahrenheit e em Kelvin.
	float tc, tf, tk;
	printf("informe a temperatura em graus celsius: ");
	scanf("%f", &tc);
	tf = ((9*tc)/5) + 32;
	tk = tc + 273;
	printf("a temperatura em fahrenheit eh %1.f", tf);
	printf("\na temperatura em kelvin eh %1.f", tk);
	getch();
}
