#include <stdio.h>

void verificar(float ang1, float ang2, float ang3){
	if(ang1==90 || ang2==90 || ang3==90){
		printf("Triangulo retangulo");
	}
	else{
		printf("Nao eh triangulo retangulo");
	}
}

void main(){
	float ang1, ang2, ang3;
	scanf("%f %f %f", &ang1, &ang2,&ang3);
	verificar(ang1,ang2,ang3);
}
