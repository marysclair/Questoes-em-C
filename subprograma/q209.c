#include <stdio.h>

float angulo3(float ang1, float ang2){
	float ang3 = 180-(ang1+ang2);
	return ang3;
}

void main(){
	float ang1, ang2, ang3;
	scanf("%f %f", &ang1, &ang2);
	ang3 = angulo3(ang1, ang2);
	printf("%.2f", ang3);
}
