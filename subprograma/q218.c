#include <stdio.h>

int calcularHoras(int valor){
	int horas = valor/3600;
	return horas;
}
int calcularMinutos(int valor){
	int resto = valor%3600;
	int minutos = resto/60;
	return minutos;
}

int calcularSegundos(int valor){
	int resto = valor%3600;
	int segundos = resto%60;
	return segundos;
}

void tempoTotal(int valor){
	int x = calcularHoras(valor);
	int y = calcularMinutos(valor);
	int z = calcularSegundos(valor);
	printf("%d horas %d minutos %d segundos", x, y, z);
}

void main(){
	int tempo;
	scanf("%d",&tempo);
	tempoTotal(tempo);
}
