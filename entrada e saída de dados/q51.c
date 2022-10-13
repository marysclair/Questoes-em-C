#include <stdio.h>

void main(){
	int posicao, r,r2, tempo,hor, min, resto, seg;
	scanf("%d", &posicao);
	r=((posicao-1)%5)+1;
	r2 = ((posicao-1)/5)+1;
	printf("%d %d", r, r2);
	tempo = r2*15;
	hor = tempo/60;
	min = (tempo%60);
	resto = (tempo%60);
	seg = resto/60;
	printf(" %d hora(s) %d minuto(s) %d segundo(s)", hor, min, seg);
}
