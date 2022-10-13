#include <stdio.h>

void main(){
	int num1, num2, num3;
	printf("informe 3 numeros: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	if(num1>num2 && num1>num3){
		if(num2<num3){
			printf("%d nao eh nenhum dos dois", num3);
		} else{
			printf("%d nao eh nenhum dos dois", num2);
		}
	} else if(num2>num1 && num2>num3){
		if(num3<num1){
			printf("%d nao eh nenhum dos dois",num1);
		} else{
			printf("%d nao eh nenhum dos dois", num3);
		}
	} else{
		if(num2<num1){
			printf("%d nao eh nenhum dos dois", num1);
		} else{
			printf("%d nao eh nenhum dos dois", num2);
		}
	}
}
