#include <stdio.h>

const int KM = 14;

void main(){
	//O carro de Jo�o consegue percorrer em m�dia 14 km consumindo 1 litro 
	//de combust�vel. Escreva um programa que leia o valor da dist�ncia que
	//Jo�o vai percorrer durante uma viagem e o pre�o atual de um litro de 
	//combust�vel e calcule quanto ele dever� gastar com combust�vel durante
	// a viagem.
	float dist, preco, litros, comb_total;
	printf("informe a distancia que sera percorrida: ");
	scanf("%f", &dist);
	printf("informe o preco de um litro de combustivel: ");
	scanf("%f", &preco);
	litros = dist/KM;
	comb_total = preco*litros; 
	printf("o valor pago pelo combustivel total eh: %.1f", comb_total);
	
}
	
