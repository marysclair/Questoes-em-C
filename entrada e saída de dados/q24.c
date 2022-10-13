#include <stdio.h>

void main(){
	//Escreva um programa que leia o termo inicial e a razão 
	//de uma progressão aritmética e imprima os 5 primeiros 
	//termos desta progressão.
	int termo_i, razao, p_a, termo_2, termo_3, termo_4, termo_5;
	printf("informe o termo inicial: ");
	scanf("%d", &termo_i);
	printf("informe a razao: ");
	scanf("%d", &razao);
	termo_2 = termo_i + razao;
	termo_3 = termo_2 + razao;
	termo_4 = termo_3 + razao;
	termo_5 = termo_4 + razao;
	printf("%d %d %d %d %d", termo_i, termo_2, termo_3, termo_4, termo_5);
}
