#include <stdio.h>

void main(){
	int num;
	printf("informe o numero: ");
	scanf("%d", &num);
	if(num>0){
		printf("o numero eh positivo");
	} 
	else if(num<0){
		printf("numero negativo");
	}
	else{
		printf("numero neutro");
	}
}
