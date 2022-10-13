#include <stdio.h>

float primeiraPrest(float valor){
	float primeira = valor*0.2;
	return primeira;
}

float prestacao(float valor){
	float primeira = primeiraPrest(valor);
	float total_prest = (primeira*1.07);
	float total = total_prest+primeira;
	int i;
	for(i=3; i<=5; i++){
		total_prest = total_prest*1.07;
		total += total_prest;
	}
	return total;
}

float juros(float valor){
	float total= prestacao(valor);
	float j = (total*100)/valor;
	return j-100;
}
