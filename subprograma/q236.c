#include <stdio.h>
#include <math.h>

float calcularDelta(float a, float b, float c){
	float delta = pow(b,2)-4*a*b;
	return delta;
}
void verificar(float a, float b, float c){
	float delta = calcularDelta(a,b,c);
	if(delta>0){
		printf("Duas raizes diferentes");
	}else if(delta==0){
		printf("Duas raizes iguais");
	}else{
		printf("Nao existe raiz real");
	}
}


void main(){
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	verificar(a,b,c);
}
