#include <stdio.h>

void main(){
	int num;
	int vet[10];
	scanf("%d",&num);
	int i=0;
	int cont=0;
	while(num!=0){
		vet[i]=num%2;
		num=num/2;
		i++;
		cont++;
	}
	for(i=cont-1;i>=0;i--){
		printf("%d",vet[i]);
	}
}
