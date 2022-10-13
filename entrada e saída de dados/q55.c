#include <stdio.h>

const int DIAS = 180;

void main(){
	int num_p, num_a;
	float vl_p, vl_a, vl_p_d, vl_a_d, total;
	printf("informe o numero de pedrereios, ajudantes e a diaria do pedreiro: ");
	scanf("%d %d %f", &num_p, &num_a, &vl_p);
	vl_a = vl_p/2;
	vl_p_d = num_p*vl_p;
	vl_a_d = num_a*vl_a;
	total = (vl_p_d*180)+(vl_a_d*180);
	printf("o total gasto com a mao de obra eh: %.2f", total);
	getch();
}
