#include <stdio.h>
#include <ctype.h>
void main(){
	//Escreva um programa que leia uma letra min�scula 
	//e imprima a sua letra mai�scula correspondente.
	char letra, letrA;
	printf("informe uma letra minuscula: ");
	scanf("%c", &letra);
	letrA = toupper(letra);
	printf("%c",letrA);
	getch();
}
