#include <stdio.h>

void main(){
	//Escreva um programa que leia o nome e a quantidade de votos recebidos
	//por cada um dos três candidatos a prefeito de uma cidade e calcule o
	//percentual de votos recebidos por cada candidato. Para resolver este 
	//programa, considere que não houve votos brancos e nem nulos.
	char cand1[30], cand2[30], cand3[30];
	float voto_c1, voto_c2, voto_c3, total, perc_c1, perc_c2, perc_c3;
	printf("informe o nome do candidato 1: ");
	scanf("%s", cand1);
	printf("informe o nome do candidato 2: ");
	scanf("%s", cand2);
	printf("informe o nome do candidato 3: ");
	scanf("%s", cand3);
	printf("informe a quantidade de votos de %s: ", cand1);
	scanf("%f", &voto_c1);
	printf("informe a quantidade de votos de %s: ", cand2);
	scanf("%f", &voto_c2);
	printf("informe a quantidade de votos de %s: ", cand3);
	scanf("%f", &voto_c3);
	total = voto_c1 + voto_c2 + voto_c3;
	perc_c1 = (voto_c1/total)*100;
	perc_c2 = (voto_c2/total)*100;
	perc_c3 = (voto_c3/total)*100;
	printf("o percentual de votos do candidato %s eh %.3f", cand1, perc_c1);
	printf("\n");
	printf("o percentual de votos do candidato %s eh %.3f", cand2, perc_c2);
	printf("\n");
	printf("o percentual de votos do candidato %s eh %.3f", cand3, perc_c3);
	getch();
}
