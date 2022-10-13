#include <stdio.h>

void main(){
	int i, k;
	int n, cont=1;
	int t;
	int vet[10];
	i=0;
	scanf("%d",&n);
	for(i=0;i<10;i++){
		scanf("%d",&vet[i]);
	}
	for(k=0; k<=10-n; k++){
		i=k;
		cont=1;
		while(vet[i+1]-vet[i]==vet[i+2]-vet[i+1]&&cont!=n-1){
			cont++;
			i++;
		}
		if(cont==n-1){
			for(t=k; t<=k+cont;t++){
				printf("%d ", vet[t]);
			}
			printf("\n");
		}
	}
}
