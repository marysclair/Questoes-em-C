#include <stdio.h>
const float POL = 2.54;
float polParaCm(float p){
	float cm = p*POL;
	return cm;
}
void main(){
	float cm, polegadas;
	scanf("%f", &polegadas);
	cm = polParaCm(polegadas);
	printf("%.2f",cm);
}
