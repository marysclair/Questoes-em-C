#include <stdio.h>

float terreno(float comp, float larg){
	float total = comp*larg;
	return total*50;
}

void main(){
	float comp, larg, total;
	scanf("%f %f", &comp, &larg);
	total = terreno(comp, larg);
	printf("%.2f", total);
}
