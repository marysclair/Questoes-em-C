#include <stdio.h>

void polindromo(int num){
	int parte1 = num/100;
	int resto = num%100;
	int parte2 = resto/10;
	int resto2 = resto%10;
	int reverso = (resto2*10) + parte2;
	if(parte1==reverso){
		printf("eh polindromo");
	}else{
		printf("nao eh polindromo");
	}
}

void main(){
	int num;
	scanf("%d",&num);
	polindromo(num);
}
