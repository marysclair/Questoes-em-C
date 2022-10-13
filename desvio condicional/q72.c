#include <stdio.h>

const float TAXA = 0.25;

void main(){
	float salario, valor;
	int mes, ano, resto;
	printf("informe o valor do salario e o valor que deve ser juntado: ");
	scanf("%f %f", &salario, &valor);
	mes = valor/(salario*TAXA);
	ano = mes/12;
	resto = mes%12;
	printf("%d anos %d mes", ano, resto);
}
