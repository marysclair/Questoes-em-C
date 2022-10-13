#include <stdio.h>

float kmhParaMs(float tempo, float dist){
	float kmh = dist/tempo;
	float ms = kmh*3.6;
	return ms;
}

void main(){
	float tempo, distancia, ms;
	scanf("%f %f", &distancia, &tempo);
	ms = kmhParaMs(tempo, distancia);
	printf("%.2f", ms);
}
