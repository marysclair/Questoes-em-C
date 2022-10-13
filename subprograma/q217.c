#include <stdio.h>

int calcularUnidade(int num){
	int unidade = num%10;
	return unidade;
}

int calcularDezena(int num){
	int resto = num/10;
	int dezena = resto%10;
	return dezena;
}

int calcularCentena(int num){
	int resto = num/100;
	int centena = resto%10;
	return centena;
}

int calcularMilhar(int num){
	int milhar = num/1000;
	return milhar; 
}

void main(){
	
}
