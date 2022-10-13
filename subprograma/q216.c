#include <stdio.h>

float calcularKm(float metros){
	float km = metros/1000;
	return km;
}

float calcularHm(float metros){
	float hm = metros/100;
	return hm;
}

float calcularDm(float metros){
	float dm = metros/10;
	return dm;
}

float calcularCm(float metros){
	float cm = metros*100;
	return cm;
}

float calcularDmm(float metros){
	float dmm = metros*10;
	return dmm;
}

float calcularMm(float metros){
	float mm = metros*1000;
	return mm;
}
