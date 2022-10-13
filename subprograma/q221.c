#include <stdio.h>

int reversoNum(int num){
	int unidade = num%10;
	int resto = num/10;
	int dezena = resto%10;
	int centena = resto/10;
	int reverso = (unidade*100)+(dezena*10)+(centena);
	return reverso;
}

void main(){
	int num;
	scanf("%d",&num);
	int reverso = reversoNum(num);
	printf("%d", reverso);
}
