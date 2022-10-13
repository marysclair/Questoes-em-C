#include <stdio.h>

void verificarMultiplo(int m, int n){
	if(n%m==0){
		printf("multiplo");
	}else{
		printf("nao eh multiplo");
	}
}
void main(){
	int m, n;
	scanf("%d %d", &m, &n);
	verificarMultiplo(m,n);
}
