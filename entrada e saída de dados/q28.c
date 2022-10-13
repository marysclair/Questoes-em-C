#include <stdio.h>

const float TAXA_DES = 0.9;
const float TAXA_JUROS = 1.2;

void main(){
	float valor, avista, cartao_3par, cartao_10par;
	printf("informe o valor da compra: ");
	scanf("%f", &valor);
	avista = valor*TAXA_DES;
	cartao_3par = valor/3;
	cartao_10par = (valor/10)*TAXA_JUROS;
	printf("o valor a se pagar avista: %.2f", avista);
	printf("\n");
	printf("o valor das parcelas no cartao em 3 sao: %.2f", cartao_3par);
	printf("\n");
	printf("o valor das parcelas no cartao em 10 sao: %.2f", cartao_10par);
	getch();
}
