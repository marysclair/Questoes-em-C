#include <stdio.h>

void letras(char letra){
	if(letra>=97&&letra<=122){
		printf("letra minuscula");
	} else if(letra>=65&&letra<=90){
		printf("letra maiuscula");
	} else if(letra>=48&&letra<=57){
		printf("numeral");
	}else{
		printf("nenhum dos dois");
	}
}

void main(){
	char letra;
	scanf("%c", &letra);
	letras(letra);
}
