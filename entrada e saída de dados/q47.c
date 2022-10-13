#include <stdio.h>
const float JUROS = 1.13;
void main(){
	float vl_financ, parcela1, parcela2, parcela3, parcela4, parcela5, vl_pago, dif_vlpago_vlfinanc;
	printf("informe o valor que vai ser financiado ao cliente: ");
	scanf("%f", &vl_financ);
	parcela1 = vl_financ*0.2;
	parcela2 = parcela1*JUROS;
	parcela3 = parcela2*JUROS;
	parcela4 = parcela3*JUROS;
	parcela5 = parcela4*JUROS;
	vl_pago = parcela1 + parcela2 + parcela3 + parcela4 + parcela5;
	dif_vlpago_vlfinanc = vl_pago - vl_financ;
	printf("parcela 1: %.2f parcela 2: %.2f parcela 3: %.2f parcela 4: %.2f parcela 5: %.2f", parcela1, parcela2, parcela3, parcela4, parcela5);
	printf("\n");
	printf("valor do emprestimo: %.2f", vl_pago);
	printf("\n");
	printf("diferenca entre o valor financiado e o valor pago pelo emprestimo: %.2f", dif_vlpago_vlfinanc);
	getch();
}
