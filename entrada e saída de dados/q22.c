#include <stdio.h>
#include <math.h>
const float PI = 3.14;

void main(){
	//Escreva um programa que leia o valor do raio de uma 
	//esfera e determine o seu volume.
	float raio, volume;
	printf("informe o valor do raio: ");
	scanf("%f", &raio);
	volume = (4*PI*(pow(raio, 3)))/3;
	printf("volume da esfera: %.1f", volume);
	getch();
}
