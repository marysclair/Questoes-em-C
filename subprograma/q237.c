#include <stdio.h>
#include <math.h>

float calcularDelta(float a, float b, float c){
	float delta = pow(b,2)-4*a*b;
	return delta;
}
float raiz1(float a, float b, float c){
	float delta = calcularDelta(a,b,c);
	float x1 = (-b + sqrt(delta))/(2*a);
	return x1;
}
float raiz2(float a, float b, float c){
	float delta = calcularDelta(a,b,c);
	float x2 = (-b - sqrt(delta))/(2*a);
	return x2;
}
void verificar(float a, float b, float c){
	float delta = calcularDelta(a,b,c);
	if(delta>0){
		float x1 = raiz1(a,b,c);
		float x2 = raiz2(a,b,c);
		printf("Raiz 1: %.1f e Raiz 2: %.1f",x1,x2);
	}else if(delta==0){
		float x1 = raiz1(a,b,c);
	}else{
		printf("Nao existe raiz real");
	}
}

void main(){
	float a, b, c;
	scanf("%f %f %f", &a,&b,&c);
	verificar(a,b,c);
}
