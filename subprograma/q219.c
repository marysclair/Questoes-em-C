#include <stdio.h>

float valorFinal(float valor){
	float valorFl = valor+10+(valor*0.1);
	return valorFl;
}
void main(){
	float valor;
	scanf("%f",&valor);
	float valorFl = valorFinal(valor);
	printf("%.2f", valorFl);
}
