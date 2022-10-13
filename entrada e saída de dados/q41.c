#include <stdio.h>
const float TAXA = 1.50;
const int CARGA = 160;
void main(){
	int horas, vl_hora;
	float pagamento;
	printf("informe a quantidade de horas trabalhadas: ");
	scanf("%d", &horas);
	printf("informe o valor de cada hora trabalhada: ");
	scanf("%d", &vl_hora);
	pagamento = (CARGA*vl_hora)+((horas-CARGA)*(vl_hora*TAXA));
	printf("o pagamento eh: %.2f", pagamento);
	getch();
	
}
