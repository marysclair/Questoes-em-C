//Escreva um programa que leia um número inteiro N e imprima 
//dos 10 primeiros elementos da sua tabuada. A saída do 
//programa deve seguir o formato abaixo, que mostra os 5 
//primeiros elementos da tabuada do 2.

#include <stdio.h>

void main(){
	int N;
	printf("informe um numero inteiro: ");
	scanf("%d", &N);
	printf("1 x %d", N*1);
	printf("\n2 x %d", N*2);
	printf("\n3 x %d", N*3);
	printf("\n4 x %d", N*4);
	printf("\n5 x %d", N*5);
	printf("\n6 x %d", N*6);
	printf("\n7 x %d", N*7);
	printf("\n8 x %d", N*8);
	printf("\n9 x %d", N*9);
	printf("\n10 x %d", N*10);
}
