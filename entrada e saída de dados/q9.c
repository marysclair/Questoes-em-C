#include <stdio.h>

void main(){
	//9. Escreva um programa que leia o valor de uma 
	//distância percorrida em km e o tempo
	//gasto em horas e calcule a velocidade média em m/s.
	float dist, tempo,vel_medkm, vel_medm;
	printf("informe a distancia percorrida em km ");
	scanf("%f", &dist);
	printf("informe o tempo gasto em horas ");
	scanf("%f", &tempo);
	vel_medkm = dist/tempo;
	vel_medm = vel_medkm/3.6;
	printf("a velocidade media eh %.1f km/h", vel_medm);
	getch();
}
