#include <stdio.h>

void main(){
	int num1, num2, num3;
	printf("informe 3 numeros: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	if(num1>num2 && num1>num3){
		printf("%d eh o maior", num1);
		if(num2<num3){
			printf("\n%d eh o menor", num2);
		} else{
			printf("\n%d eh o menor", num3);
		}
	} else if(num2>num1 && num2>num3){
		printf("%d eh o maior", num2);
		if(num3<num1){
			printf("\n%d eh o menor",num3);
		} else{
			printf("\n%d eh o menor", num1);
		}
	} else{
		printf("%d eh o maior", num3);
		if(num2<num1){
			printf("\n%d eh o menor", num2);
		} else{
			printf("\n%d eh o menor", num1);
		}
	}
}
