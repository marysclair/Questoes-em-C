#include <stdio.h>

float mediaParcial(float nota1, float nota2, float nota3){
	float media = (nota1+nota2+nota3)/3;
	return media;
}
float provaFinal(float nota1, float nota2, float nota3){
	float media = mediaParcial(nota1, nota2, nota3);
	float notaFinal = (25-(3*media))/2;
	return notaFinal;
}
void verificar(float nota1, float nota2, float nota3){
	float media = mediaParcial(nota1, nota2, nota3);
	if(media>=7){
		printf("aprovado!!!");
	}
	else if(media>=4){
		printf("prova final..\n");
		float notaFinal = provaFinal(nota1, nota2, nota3);
		printf("precisa tirar: %.1f", notaFinal);
	}else{
		printf("reprovado por media");
	}
}
void main(){
	float nota1, nota2, nota3;
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	verificar(nota1, nota2, nota3);
}
