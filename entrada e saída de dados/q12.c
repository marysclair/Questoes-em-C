#include <stdio.h>
const float POL = 2.54;
void main(){
	//Escreva um programa que leia um valor em polegadas 
	//e o converta para centímetros,considerando que uma
	//polegada equivale a 2.54 cm.
	float s_pol, cm;
	printf("informe o valor em polegadas: ");
	scanf("%f", &s_pol);
	cm = POL * s_pol;
	printf("o valor em cm eh: %.2f", cm);
	getch();
}
