#include <stdio.h>

void main(){
	//Escreva um programa que leia uma palavra e 
	//um número inteiro k e identifique a k-
	//ésima letra da palavra informada pelo usuário.
	char string[30];
	int k;
	printf("informe um nome: ");
	scanf("%s", string);
	printf("informe um valor: ");
	scanf("%d", &k);
	printf("%s",string[k]);
	getch();
}
