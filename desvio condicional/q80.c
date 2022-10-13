#include <stdio.h>
#include <math.h>

void main(){
	float a, b, c, delta, x1, x2;
	printf("informe os valores dos coeficientes a, b e c: ");
	scanf("%f %f %f", &a, &b, &c);
	delta = (b*b) -4 *(a*c);
	if(delta>0){
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		printf("as raizes sao x1= %f e x2= %f", x1, x2);
	} 
	else if(delta==0){
		x1 = -b/(2*a);
		x2 = x1;
		printf("a raiz eh x1= %f", x1);
	}
	else{
		printf("valor da raiz nao existe nos numeros reais");
	}
}
