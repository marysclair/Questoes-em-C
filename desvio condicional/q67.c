#include <stdio.h>

void main(){
	int ano;
	printf("informe um ano: ");
	scanf("%d", &ano);
	if((ano%400==0) || ((ano%4==0) && (ano%100!=0))){
		printf("ano bissexto");
	}
	else{
		printf("ano nao eh bissexto");
	}
}
