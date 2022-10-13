#include <stdio.h>

void verificarNumero(int num){
	if(num>0){
		printf("Positivo");
	}else if(num<0){
		printf("Negativo");
	}
	else{
		printf("Neutro");
	}
}
void main(){
	int num;
	scanf("%d", &num);
	verificarNumero(num);
}
