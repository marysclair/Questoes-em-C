#include <stdio.h>

const int ENT = 20;

void main(){
	int hora,min, total, szh, pth, cgh, jph, h, h1, m1, m, tm, h2, m2, h3, m3;
	printf("informe as horas e os minutos de saida: ");
	scanf("%d %d", &hora, &min);
	tm = (min + 50);
	h = tm/60;
	m = tm%60;
	szh = hora+h;
	tm = 120+20+m;
	h1 = tm/60;
	m1 = tm%60;
	pth = szh+h1;
	tm = 150+20+m1;
	h2 = tm/60;
	m2 = tm%60;
	cgh = pth + h2;
	tm = 120+20+m2;
	h3 = tm/60;
	m3 = tm%60;
	jph = cgh + h3;
	printf("cajazeiras->souza: %d:%d", szh, m);
	printf("\nsouza->patos: %d:%d", pth, m1);
	printf("\npatos->campina grande: %d:%d", cgh, m2);
	printf("\ncampina grande->joao pessoa: %d:%d", jph, m3);
	getch();
}
