#include <stdio.h>

void main(){
	//Escreva um programa que leia o termo inicial e a raz�o 
	//de uma progress�o aritm�tica e imprima os 5 primeiros 
	//termos desta progress�o.
	float termo_in, razao, p_a;
	printf("informe o valor do termo inicial: ");
	scanf("%f", &termo_in);
	printf("informe o valor da razao: ");
	scanf("%f", &razao);
	p_a = termo_in + razao;
	printf("%f  %f  %f  %f  %f", p_a, p_a+razao, p_a+(razap*3), p_a+(razap*4), p_a+(razap*5));
	getch();
}
