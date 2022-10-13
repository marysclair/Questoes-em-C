#include <stdio.h>

void main(){
	float pas1, pas2, milhas1, milhas2;
	printf("informe o valor das passagens e da milha: ");
	scanf("%f %f %f", &pas1, &pas2, &milhas1);
	milhas2 = (milhas1*pas2)/pas1;
	printf("o valor das milhas necessarias eh: %.2f", milhas2);
	getch();
}
