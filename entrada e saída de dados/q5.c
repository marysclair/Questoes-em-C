#include <stdio.h>

const float PI= 3.14;

void main(){
//Escreva um programa que leia o valor
//do raio de uma circunferência e calcule a sua
//área e o seu comprimento.
	float raio, area, comp;
	printf("informe o raio da circunferencia: ");
	scanf("%f",&raio);	
	area = PI*(raio*raio);
	comp = 2 * PI * raio;
	printf("a area eh: %.1f", area);
	printf("\no comprimento eh: %.1f", comp);
	getch();

}
