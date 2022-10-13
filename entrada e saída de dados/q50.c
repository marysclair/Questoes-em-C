#include <stdio.h>

const int CONS = 25;

void main(){
	int hora_ch, hora_f, soma, soma2, hora, min, min_f, senha, total;
	scanf("%d", &hora_ch);
	scanf("%d", &min);
	scanf("%d", &senha);
	total = (senha-1)*CONS;
	hora = hora_ch*60;
	soma = hora+min;
	soma2 = soma+total;
	hora_f = soma2/60;
	min_f = soma2%60;
	printf("paciente chegou as %d:%d e sera atendido as %d:%d", hora_ch, min, hora_f, min_f);
}
