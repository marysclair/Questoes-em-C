#include <stdio.h>
#include <math.h>

float hipotenusa(float c1, float c2){
	float hipo = pow(c1,2) + pow(c2,2);
	return sqrt(hipo);
}

void main(){
	float c1, c2, hipo;
	scanf("%f %f", &c1, &c2);
	hipo = hipotenusa(c1, c2);
	printf("%.1f",hipo);
}
