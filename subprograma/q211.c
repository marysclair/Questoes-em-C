#include <stdio.h>
const float PI = 3.14;
float volumeEsfera(float raio){
	float volume = (4*PI*pow(raio,3))/3;
	return volume;
}
void main(){
	float raio, volume;
	scanf("%f", &raio);
	volume = volumeEsfera(raio);
	printf("%.2f", volume);
}
