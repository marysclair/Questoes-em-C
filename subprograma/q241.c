#include <stdio.h>
#include <math.h>
float calcularImc(float altura, float peso){
	float imc = peso/pow(altura,2);
	return imc;
}
float ganharKg(float altura,float peso){
	float kg = 18 - calcularImc(altura, peso);
	return kg;
}
float perderKg(float altura, float peso){
	float kg = calcularImc(altura, peso) - 25;
	return kg;
}
void verificarImc(float altura, float peso){
	float imc = calcularImc(altura, peso);
	if(imc>=18&&imc<=25){
		printf("peso ideal");
	}else if(imc<18){
		printf("abaixo do peso\n");
		float ganhar = ganharKg(altura, peso);
		printf("ganhar: %.0f", ganhar);
	}
	else{
		printf("acima do peso\n");
		float perder = perderKg(altura, peso);
		printf("perder: %.0f", perder);
	}
}
void main(){
	float altura, peso;
	scanf("%f %f", &altura, &peso);
	verificarImc(altura, peso);
}
