#include <stdio.h>

void main(){
	int m, n;
	printf("informe dois numeros: ");
	scanf("%d %d", &m, &n);
	if(n%m==0){
		printf("%d eh multiplo de %d", n, m);
	}
	else{
		printf("eles nao sao multiplos");
	}
}
