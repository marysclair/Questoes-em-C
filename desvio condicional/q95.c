#include <stdio.h>

void main(){
	float num1, num2, num3, num4, r;
	scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
	r = num2 - num1;
	if(r == (num3-num2) && r == (num4-num3)){
		printf("pa");
	}
	else if(num2/num1 == num3/num2 && num3/num2 == num4/num3){
		printf("pg");
	}
	else {
		printf("nenhum tipo");
	}
}
