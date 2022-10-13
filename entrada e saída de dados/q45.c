#include <stdio.h>

const float PR_KWH = 0.35;
const float ICMS = 0.17;
const int TAXA_ILUM = 15;

void main(){
	float vl1, vl2, vl_total;
	printf("informe dois valores em KWh: ");
	scanf("%f %f", &vl1, &vl2);
	vl_total = (vl1*PR_KWH)+(vl2*PR_KWH)+(ICMS*(vl1+vl2))+ TAXA_ILUM;
	printf("o valor total a ser pago: %.2f", vl_total);
}
