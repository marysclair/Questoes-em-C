#include <stdio.h>
const float TAXA = 0.04;
void main(){
	int par;
	float vl_finan, vl_par, vl_emp;
	scanf("%d", &par);
	scanf("%f", &vl_finan);
	vl_par = (vl_finan/par) + (TAXA*vl_finan);
	vl_emp = vl_par*par;
	printf ("o valor do emprestimo eh: %.2f", vl_emp);
}
