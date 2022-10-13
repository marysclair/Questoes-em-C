#include <stdio.h>

void main(){
	int num, dez, cen, uni, resto, inv;
	scanf("%d", &num);
	cen = num/100;
	resto = num%100;
	dez = resto/10;
	uni = resto%10;
	inv = (uni*100)+(dez*10)+(cen*1);
	printf("o inverso de %d eh %d", num, inv);
}
