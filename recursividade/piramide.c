#include <stdio.h>
void estrelas(int n){
	if(n==1){
		printf("*");
		printf("\n");
	}
	else{
		estrelas(n-1);
		int i;
		for(i=1; i<=n; i++){
			printf("* ");
		}
		printf("\n");
		
	}
}
void main(){
	int n;
	scanf("%d",&n);
	estrelas(n);
}
