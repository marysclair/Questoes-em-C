#include <stdio.h>

float gastoCombustivel(float distancia, float preco){
	float gasto = (preco*distancia)/14;
	return gasto;
}

void main(){
	float distancia, preco, gasto;
	scanf("%f %f",&distancia,&preco);
	gasto=gastoCombustivel(distancia, preco);
	printf("%.2f", gasto);
}
