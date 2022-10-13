#include <stdio.h>

void parOuImpar(int num){
	if(num%2==0){
		printf("par");
	}
	else{
		printf("impar");
	}
}

void main(){
	int num;
	scanf("%d",&num);
	parOuImpar(num);
}
