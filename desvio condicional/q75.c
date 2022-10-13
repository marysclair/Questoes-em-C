#include <stdio.h>

void main(){
	int ang1, ang2, ang3;
	printf("informe os valores dos angulos internos: ");
	scanf("%d %d %d", &ang1, &ang2, &ang3);
	if(ang1==90 || ang2==90 || ang3==90){
		printf("triangulo retangulo");
	}
	else{
		printf("nao eh triangulo retangulo");
	}
}
