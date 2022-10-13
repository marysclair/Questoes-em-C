#include <stdio.h>

void saque(int dinheiro){
	int ced10=0, ced20=0, ced50=0, ced100=0;
	if(dinheiro%10!=0 || dinheiro>1000){
		printf("Saque nao pode ser realizado");
	}
	else{
		ced100 = dinheiro/100;
		int resto = dinheiro%100;
		ced50 = resto/50;
		ced20 = (resto%50)/20;
		int resto2 = ((resto%50)%20);
		ced10 = resto2/10;
		if(ced100!=0){
			printf("%d cedulas 100\n", ced100);
		}
		if(ced50!=0){
			printf("%d cedulas 50\n", ced50);
		}
		if(ced20!=0){
			printf("%d cedulas 20\n", ced20);
		}
		if(ced10!=0){
			printf("%d cedulas 10", ced10);
		}
	}
}

void main(){
	int dinheiro;
	scanf("%d", &dinheiro);
	saque(dinheiro);
}
