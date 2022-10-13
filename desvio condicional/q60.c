#include <stdio.h>
const int gramas=250;
void main(){
	int pessoas, kilos, resto;
	printf("informe a quantidade de pessoas: ");
	scanf("%d", &pessoas);
	kilos = (pessoas*250)/1000;
	resto = (pessoas*250)%1000;
	printf ("o total de kilos eh %d kg e %d g", kilos, resto);
}
