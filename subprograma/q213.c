#include <stdio.h>

void percentual(int totalQuestoes, float qCertas){
	float percCertas = qCertas/totalQuestoes;
	float qErradas = (totalQuestoes-qCertas);
	float percErradas = qErradas/totalQuestoes;
	printf("Percentual certas: %d e Percentual erradas: %d", percCertas*100, percErradas*100);
}

void main(){
	int totalQuestoes;
	float qCertas;
	scanf("%d %f", &totalQuestoes,&qCertas);
	percentual(totalQuestoes,qCertas);
}
