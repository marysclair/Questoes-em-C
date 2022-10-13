#include <stdio.h>

void main(){
	//Escreva um programa que leia um valor em KB e 
	//calcule o seu valor correspondente
	//em bits, bytes, MB e GB.
	float kb, bits, bytes, mb, gb;
	printf("informe o valor em kb: ");
	scanf("%f", &kb);
	bits = kb/8000;
	bytes = kb*8;
	mb = kb*1000;
	gb = mb*1000;
	printf("bits: %.f", bits);
	printf("\nbytes: %.f", bytes);
	printf("\nmb: %.f", mb);
	printf("\ngb: %.f", gb);
	getch();
}
