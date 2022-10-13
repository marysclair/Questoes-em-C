#include <stdio.h>

const float TAXA = 0.89;

void main(){
	float sal_bruto, sal_prev, sal_liq;
	printf("informe o valor do salario bruto: ");
	scanf("%f", &sal_bruto);
	sal_prev = (sal_bruto*TAXA);
	if(sal_bruto<=1903.98 && sal_bruto>0){
		sal_liq = sal_prev;
		printf("salario: %.2f", sal_liq);
	} else if(sal_bruto>=1903.99 && sal_bruto<=2826.65){
		sal_liq = sal_prev*0.925;
		printf("salario: %.2f", sal_liq);
	} else if(sal_bruto>=2826.66 && sal_bruto<=3751.05){
		sal_liq = sal_prev*0.85;
		printf("salario: %.2f", sal_liq);
	} else if(sal_bruto>=3751.06 && sal_bruto<=4664.68){
		sal_liq = sal_prev*0.775;
		printf("salario: %.2f", sal_liq);
	} else if(sal_bruto>=4669.69){
		sal_liq = sal_prev*0.725;
		printf("salario: %.2f", sal_liq);
	} else{
		printf("salario invalido");
	}
}
