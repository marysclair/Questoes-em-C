#include <stdio.h>
#include <string.h>

void radical(char nome[50], char rad[50]){
	int tam = strlen(nome);
	int i;
	for(i=0; i<tam-2; i++){
		rad[i]= nome[i];
	}
}
void vogalTematica(char nome[50], char *vogal){
	int tam = strlen(nome);
	int i;
	*vogal = nome[tam-2];	
}
void presente(char nome[50], char rad[50], char vogal){
	radical(nome, rad);
	vogalTematica(nome, &vogal);
	printf("---------PRESENTE----------\n");
	printf("Eu: %so\n", rad);
	printf("Voce/tu: %s%cs\n", rad,vogal);
	printf("Ele/ela/elu: %s%c\n", rad,vogal);
	printf("Nos: %s%cmos\n", rad,vogal);
	printf("Vos: %s%cis\n", rad,vogal);
	printf("Eles/elas/elus: %s%cm\n", rad,vogal);
}
void preterito(char nome[50], char rad[50], char vogal){
	radical(nome, rad);
	vogalTematica(nome, &vogal);
		printf("---------PRETERITO----------\n");
		if(vogal=='a'){
			printf("Eu: %sei\n", rad);
		}
		else{
			printf("Eu: %si\n", rad);
		}
		printf("Voce/tu: %s%cste\n", rad,vogal);
		if(vogal=='a'){
			printf("Ele/ela/elu: %sou\n", rad);
		}
		else{
			printf("Ele/ela/elu: %s%cu\n", rad,vogal);
		}
		printf("Nos: %s%cmos\n", rad,vogal);
		printf("Vos: %s%cstes\n", rad,vogal);
		printf("Eles/elas/elus: %s%cram\n", rad,vogal);
	
}
void futuro(char nome[50], char rad[50], char vogal){
	radical(nome, rad);
	vogalTematica(nome, &vogal);
	printf("---------FUTURO----------\n");
	printf("Eu: %s%crei\n", rad,vogal);
	printf("Voce/tu: %s%cras\n", rad,vogal);
	printf("Ele/ela/elu: %s%cra\n", rad,vogal);
	printf("Nos: %s%cremos\n", rad,vogal);
	printf("Vos: %s%creis\n", rad,vogal);
	printf("Eles/elas/elus: %s%crao\n", rad,vogal);
}
void main(){
	char nome[50];
	char rad[50];
	char vogal;
	gets(nome);
	presente(nome, rad, vogal);
	printf("\n");
	preterito(nome,rad,vogal);
	printf("\n");
	futuro(nome, rad, vogal);
}
