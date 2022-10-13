#include <stdio.h>

void verificar(float lado1, float lado2, float lado3){
	if(lado1==lado2&&lado2==lado3){
		printf("triangulo equilatero");
	}
	else if(lado1==lado2||lado2==lado3){
		printf("triangulo isoceles");
	}
	else{
		printf("triangulo escaleno");
	}
}

void main(){
	float lado1, lado2, lado3;
	scanf("%f %f %f", &lado1,&lado2,&lado3);
	verificar(lado1, lado2, lado3);
}
