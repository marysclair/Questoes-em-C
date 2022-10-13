#include <stdio.h>

void operacao(int num1, int num2, char op){
	if(op=='+'){
		printf("%d", num1+num2);
	}else if(op=='-'){
		printf("%d", num1-num2);
	}else if(op=='/'){
		printf("%d", num1/num2);
	}else if(op=='*'){
		printf("%d", num1*num2);
	}
}

void main(){
	int num1, num2;
	char op;
	scanf("%c", &op);
	scanf("%d %d", &num1, &num2);
	operacao(num1, num2, op);
}
