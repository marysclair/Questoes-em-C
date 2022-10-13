#include <stdio.h>
void estrelas(int n){
	if(n==1){
		printf("*");
	}
	else{
		int i;
		for(i=1; i<=n; i++){
			printf("* ");
		}
		printf("\n");
		estrelas(n-1);
	}
}
void main(){
	int n;
	scanf("%d",&n);
	estrelas(n);
}
