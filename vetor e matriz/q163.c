#include <stdio.h>
#include <string.h>
void main(){
	int acertos=0;
	int i;
	float perc_acertos;
	char respostas[11];
	char nome[10];
	char resultado[10];
	char gabarito[11];
	printf("Informe o gabarito: ");
	fflush(stdin);
	for(i=0; i<10; i++){
		scanf("%c",&gabarito[i]);
	}
	do{
		printf("Informe um nome: ");
		fflush(stdin);
		gets(nome);
		printf("%s",nome);
		strcpy(nome,nome);
		if(strcmp(resultado,"fim")!=0){
			fflush(stdin);
			printf("Informe as respostas: ");
			for(i=0; i<10; i++){
				scanf("%c",&respostas[i]);
			}
			for(i=0; i<10; i++){
				if(gabarito[i]==respostas[i]){
					acertos++;
				}
			}
			printf("%s\n", gabarito);
			printf("%s\n", respostas);
			printf("%d\n", acertos);
			perc_acertos = (float)acertos/10;
			printf("%s: %.1f\n",nome, perc_acertos*100);
			acertos = 0;
		}else{
			printf("acabou");
		}
	}while(strcmp(nome,"fim")!=0);
}
