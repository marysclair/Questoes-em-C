#include <stdio.h>

const float IPI = 0.20;
const float ICMS = 0.17;
const float LUCRO = 1.20;

void main(){
	float pr_atual, pr_prom, pr_comp;
	printf("informe o preco de compra do veiculo: ");
	scanf("%f", &pr_comp);
	pr_atual = pr_comp + (IPI*pr_comp)+(ICMS*pr_comp)+(LUCRO*pr_comp);
	pr_prom = pr_comp +(ICMS*pr_comp)+(LUCRO*pr_comp);
	printf("o valor atual eh %.2f e %.2f", pr_atual, pr_prom);
}
