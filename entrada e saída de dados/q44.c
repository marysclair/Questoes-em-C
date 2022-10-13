#include <stdio.h>

void main(){
	int dg1b, dg2b, dg3b, dg4b, decimal;
	scanf("%d %d %d %d", &dg1b, &dg2b, &dg3b, &dg4b);
	decimal = (dg1b * pow(2, 0)) + (dg2b * pow(2, 1)) + (dg3b * pow(2, 2)) + (dg4b * pow(2, 3));
	printf("o numero em decimal eh: %d", decimal);
}
