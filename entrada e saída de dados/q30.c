#include <stdio.h>
#include <math.h>

void main(){
	//Escreva um programa que leia os valores das coordenadas X e Y e dois pontos
	//P e Q e determine a distância entre estes dois pontos. A distância entre 
	//dois pontos pode serdeterminada através da distância euclidiana.
	float xP, yP, xQ, yQ, dist,x, y;
	printf("informe o valor da coordenada x (p): ");
	scanf("%f", &xP);
	printf("informe o valor da coordenada y (p): ");
	scanf("%f", &yP);
	printf("informe o valor da coordenada x (q): ");
	scanf("%f", &xQ);
	printf("informe o valor da coordenada y (q): ");
	scanf("%f", &yQ);
	x = xP - xQ;
	y = yQ - yQ;
	dist = sqrt(pow(x, 2)+pow(y, 2));
	printf("a distancia do ponto P (%.0f, %.0f)e do ponto Q (%.0f, %.0f) eh: %.0f", xP, yP, xQ, yQ, dist);
	getch();
}
