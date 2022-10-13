#include <stdio.h>

void main(){
	int mes, ano, mes2, ano2, tmeses1, tmeses2, tmeses, ano3, mes3;
	printf("informe o mes e o ano atual: ");
	scanf("%d %d", &mes, &ano);
	printf("informe o tamanho da pena em meses e anos: ");
	scanf("%d %d", &mes2, &ano2);
	tmeses1 =  ((ano%10)*12)+mes;
	tmeses2 = ((ano2%10)*12)+mes2;
	tmeses = tmeses1 + tmeses2;
	ano3 = (tmeses/12)+2000;
	mes3 = tmeses%12;
	printf("comecou em %d %d e terminara em %d %d", mes, ano, mes3, ano3);
}
