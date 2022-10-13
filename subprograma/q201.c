#include <stdio.h>
#include <math.h>

float calcularAreaQuadrado(float lado){
	float area = pow(lado, 2);
	return area;
}

float calcularPerimetroQuadrado(float lado){
	float perimetro = lado*4;
	return perimetro;
}
void main(){
	float lado, perimetro, area;
	scanf("%f", &lado);
	area = calcularAreaQuadrado(lado);
	perimetro = calcularPerimetroQuadrado(lado);
	printf("Area: %.1f e Perimetro: %.1f", area, perimetro);
}
