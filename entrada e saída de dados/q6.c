#include <stdio.h>

void main(){
	//Escreva um programa que leia um número inteiro 
	//e informe o seu antecessor e o seu sucessor.
	int num, ant, suc;
	printf("informe um numero: ");
	scanf("%d",&num);
	ant = num-1;
	suc = num+1;
	printf("o antecessor de %d eh %d", num, ant);
	printf("\no sucessor de %d eh %d", num, suc);
	getch();
}
