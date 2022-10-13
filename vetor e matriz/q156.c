#include <stdio.h>

void main(){
	int vet[10];
	int i, n;
	for(i=0;i<10;i++){
		scanf("%d",&vet[i]);
	}
	scanf("%d",&n);
	for(i=0;i<10;i++){
		if(vet[i]>n){
			printf("%d", vet[i]);
		}
	}
}
