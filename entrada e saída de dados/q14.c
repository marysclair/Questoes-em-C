#include <stdio.h>
#include <string.h>
#include <conio.h>

void main(){
	//Escreva um programa que leia uma 
	//palavra e calcule o seu comprimento.
	char string[30];
	int comp;
	printf("informe um nome: ");
	scanf("%s", string);
	comp = strlen(string);
	printf("o comprimento eh: %d", comp);
	getch();
}
