#include <stdio.h>

void verificarIdade(int idade){
	if(idade>=0 && idade<=12){
		printf("Crianca");
	}else if(idade>=13 && idade<=17){
		printf("Adolescente");
	}else if(idade>=18&&idade<=59){
		printf("Adulto");
	}else{
		printf("Idoso");
	}
}
void main(){
	int idade;
	scanf("%d",&idade);
	verificarIdade(idade);
}
