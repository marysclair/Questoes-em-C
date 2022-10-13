#include <stdio.h>
#include <string.h>

void main(){
	char nome[20];
	int tam, i, k;
	int cont=0;
	gets(nome);
	tam = strlen(nome);
	k = tam-1;
	for(i=0; i<tam/2; i++){
		if(nome[i]==nome[k]){
			cont++;
		}
		k--;
	}
	if(cont==tam/2){
		printf("Eh palindromo");
	}else{
		printf("Nao eh palindromo");
	}
}
