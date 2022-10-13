#include <stdio.h>

void main(){
	int num1, num2;
	printf("informe dois numeros: ");
	scanf("%d %d", &num1, &num2);
	if(num1>num2){
		printf("%d eh maior que %d", num1, num2);
	} 
	else if(num1<num2){
		printf("%d eh menor que %d", num1, num2);
	}
	else {
		printf("%d eh igual a %d", num1, num2);
	}
}
