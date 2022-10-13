#include <stdio.h>

void main(){
	int gol1, gol2;
	printf("informe o valor de gols casa e visitante: ");
	scanf("%d %d", &gol1, &gol2);
	if(gol1>gol2){
		printf("jogo vencido pelo time de casa");
	}
	else if(gol1<gol2){
		printf("jogo vencido pelo time visitante");
	}
	else{
		printf("jogo empatado");
	}
}
