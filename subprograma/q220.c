#include <stdio.h>
#include <math.h>

float calcularImc(float altura, float peso){
	float imc = peso/pow(altura,2);
	return imc;
}

void main(){
	float altura, peso;
	scanf("%f %f", &altura,&peso);
	float imc = calcularImc(altura, peso);
	printf("%.1f", imc);
}

