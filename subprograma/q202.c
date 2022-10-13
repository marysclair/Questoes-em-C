#include <stdio.h>

const float PI = 3.14;

float calcularAreaCirculo(float raio){
	float area = PI*(raio*raio);
	return area;
}

float calcularPerimetroCirculo(float raio){
	float perimetro = 2*PI*raio;
	return perimetro;
}
void main(){
	float raio, area, perimetro;
	scanf("%f", &raio);
	area = calcularAreaCirculo(raio);
	perimetro = calcularPerimetroCirculo(raio);
	printf("Area: %.2f e Perimetro: %.2f", area, perimetro);
}
