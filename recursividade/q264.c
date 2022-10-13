#include <stdio.h>
menorDivisor(int num1, int num2, int num3){
	int num=1;
	do{
		num++;	
	}while(num1%num==0 || num2%num==0 || num3%num==0);
	return num;
}
void main(){
	int num1, num2, num3;
	scanf("%d %d %d",&num1,&num2,&num3);
	int md = menorDivisor(num1, num2, num3);
	printf("%d", md);
	
}
