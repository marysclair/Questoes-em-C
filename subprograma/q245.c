#include <stdio.h>

void trimestre(int num){
	if(num==1 || num==2 || num==3){
		printf("primeiro trimestre");
	}
	else if(num==4 || num==5 || num==6){
		printf("segundo trimestre");
	}
	else if(num==7 || num==8 || num==9){
		printf("terceiro trimestre");
	}
	else if(num==10 || num==11 || num==12){
		printf("quarto trimestre");
	}
	else{
		printf("valor invalido");
	}
}

void main(){
	int num;
	scanf("%d", &num);
	trimestre(num);
}
