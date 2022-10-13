#include <stdio.h>

const int TAXA = 5;
const int MENS = 80;
const int GB = 100;

void main(){
	int qtd, total;
	printf("informe a quantidade de dados usados (GB): ");
	scanf("%d", &qtd);
	total = ((qtd-GB)*TAXA) + 80;
	printf("o valor pago no total eh: %d", total);
}
