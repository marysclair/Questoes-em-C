#include <stdio.h>

void main(){
	float gasol, alcool, preco;
	printf("informe o preco da gasolina e do alcool: ");
	scanf("%f %f", &gasol, &alcool);
	preco = gasol*0.7;
	if(preco<=alcool){
		printf("abasteca com gasolina");
	} else {
		printf("abasteca com alcool");
	}
}
