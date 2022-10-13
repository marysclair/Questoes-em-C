#include <stdio.h>

void main(){
	//Escreva um programa que leia o preço de produção de um 
	//determinado produto e a margem de lucro desejada pelo 
	//fabricante e calcule qual deve ser o seu preço de venda.
	
	float preco_prod, margem_luc, preco_vend;
	printf("informe o preco da producao: ");
	scanf("%f", &preco_prod);
	printf("informe a margem de lucro: ");
	scanf("%f", &margem_luc);
	preco_vend = margem_luc + preco_prod;
	printf("preco da venda eh: %.2f", preco_vend);
	getch();
}
