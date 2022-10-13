#include <stdio.h>

void main(){
	float x, y, resul;
	printf("informe as coordenadas (x, y): ");
	scanf("%f %f", &x, &y);
	resul = 2*x + 1;
	if(resul==y){
		printf("as coordenadas pertencem a funcao ");
	} else{
		printf("as coordenadas nao pertencem a funcao");
	}
}
