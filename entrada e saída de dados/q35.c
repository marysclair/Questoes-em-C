#include <stdio.h>

void main(){
	//Escreva um programa que leia o valor de uma dist�ncia em metros e 
	//calcule o seu valor correspondente em quil�metros, hect�metros, 
	//dec�metros, cent�metros,dec�metros e mil�metros.
	
	float m, km, hm, dm, cm, dcm, mm;
	printf("informe o valor em metros: ");
	scanf("%f", &m);
	km =  m*1000;
	hm = m*100;
	dm = m*10;
	cm = m/100;
	dcm = m/10;
	mm = m/1000;
	printf("%.2f km %.2f hm %.2f dm %.2f m %.2f dcm %.2f cm %.2f mm", km, hm, dm, m, dcm, cm, mm);
}
