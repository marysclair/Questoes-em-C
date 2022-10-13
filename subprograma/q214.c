#include <stdio.h>

int pontuacaoTotal(int qCertas, int qErradas, int qBranco){
	int certas = qCertas*5;
	int erradas = qErradas*3;
	int total = certas-erradas;
	return total;
}

void main(){
	int qCertas, qErradas, qBranco, total;
	scanf("%d %d %d", &qCertas,&qErradas,&qBranco);
	total = pontuacaoTotal(qCertas,qErradas,qBranco);
	printf("%d", total);
}
