#include <stdio.h>

void tipoProgressao(float num1, float num2, float num3, float num4){
	if(num2-num1 == num3-num2 && num4-num3 == num3-num2){
		printf("Progressao aritmetica");
	}
	else if(num2/num1 == num3/num2 && num4/num3 == num3/num2){
		printf("Progressao geometrica");
	}
	else{
		printf("Nenhum");
	}
}

void main(){
	float n1, n2, n3, n4;
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	tipoProgressao(n1, n2, n3, n4);
}
