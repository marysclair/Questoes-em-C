#include <stdio.h>

void main(){
	int num;
	printf("informe um numero: ");
	scanf("%d", &num);
	if(num%2==0){
		printf("o numero eh par");
	}
	else{
		printf("o numero eh impar");
	}
}
