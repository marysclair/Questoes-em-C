#include <stdio.h>
const float TAXA_SER = 0.10;
const int TAXA_ART = 10;
void main(){
	//Escreva um programa que leia o valor total que um cliente consumiu em
	//um restaurante e determine o valor final da sua conta, considerando que
	//o restaurante obra uma taxa de serviço de 10 % e uma taxa de couvert
	//artístico de R$ 10,00.
	float vl_total, vl_final;
	printf("informe o valor total consumido: ");
	scanf("%f", &vl_total);
	vl_final = (vl_total*TAXA_SER)+ vl_total + TAXA_ART;
	printf("o valor final da conta eh: %.2f", vl_final);
	getch();
}
