#include <stdio.h>

const int KM = 14;

void main(){
	//O carro de João consegue percorrer em média 14 km consumindo 1 litro 
	//de combustível. Escreva um programa que leia o valor da distância que
	//João vai percorrer durante uma viagem e o preço atual de um litro de 
	//combustível e calcule quanto ele deverá gastar com combustível durante
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
	
