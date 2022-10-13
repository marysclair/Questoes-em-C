#include <stdio.h>
#include <math.h>

void main(){
	//Escreva um programa que leia um valor em real, 
	//a cotação atual do dólar e calcule o
	//valor informado pelo usuário em dólares.
	float real,dolar, resul_dol;
	printf("informe o valor em real: ");
	scanf("%f", &real);
	printf("informe a cotacao do dolar: ");
	scanf("%f", &dolar);
	resul_dol = real*dolar;
	printf("o valor em dolares eh: %.1f", resul_dol);
	getch();
}
