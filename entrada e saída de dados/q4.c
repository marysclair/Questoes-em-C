#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
	//Escreva um programa que leia o número inteiro positivo  
	//e calcule o seu dobro, o seu triplo, o seu quadrado, 
	//o seu cubo e a sua raiz quadrada.
	
	int num, dobro, triplo, quadrado, cubo;
	float raiz;	
	printf("informe um numero positivo: ");
	scanf("%d",&num);
	dobro= num*2;
	triplo= num*3;
	quadrado= num*num;
	cubo= num*num*num;
	raiz= sqrt(num);
	printf("2 x  %d = %d",num,dobro);
	printf("\n3 x  %d = %d",num,triplo);
	printf("\n%d ao quadrado = %d",num,quadrado);
	printf("\n%d ao cubo = %d",num,cubo);
	printf("\n%d raiz quadrada = %.0f",num,raiz);
	getch();
}
