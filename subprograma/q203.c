#include <stdio.h>

float calcularAreaTriangulo(float base, float altura){
	float area = (base*altura)/2;
	return area;
}

void main(){
	float base, altura, area;
	scanf("%f %f", &altura, &base);
	area = calcularAreaTriangulo(base, altura);
	printf("Area: %.2f", area);
}
