#include <stdio.h>

void main(){
	int num, parte1, parte2, resto1, resto2, rev;
	printf("informe um numero entre [1000,9999]: ");
	scanf("%d", &num);
	parte1 = num/100;
	parte2 = num%100;
	resto1 = parte2/10;
	resto2 = parte2%10;
	rev = ((resto2*10) + resto1);
	if(parte1 == rev){
		printf("numero eh um polindromo");
	} 
	else {
		printf("numero nao eh um polindromo");
	}
}
