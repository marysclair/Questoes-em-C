#include <stdio.h>

void main(){
	/*Escreva um programa que leia a idade de uma pessoa e verifique se ela
	 é criança (0-12 anos), adolescente (13-17 anos), adulta (18-59) ou 
	 idosa (acima de 60 anos).
	*/
	int idade;
	printf("informe a idade: ");
	scanf("%d", &idade);
	if(idade>=0 && idade<=12){
		printf("crianca");
	}
	else if(idade>=13 && idade<=17){
		printf("adolescente");
	}
	else if(idade>=18 && idade<=59){
		printf("adulta");
	}
	else if(idade>=10){
		printf("idosa");
	}
	else{
		printf("valor invalido");
	}
}
