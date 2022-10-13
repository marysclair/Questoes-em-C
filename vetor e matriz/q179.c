#include <stdio.h>

void main(){
	int mat[5][5];
	int i,j, n;
	int cont=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	scanf("%d",&n);
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(mat[i][j]==n){
				cont++;
			}
		}
	}
	printf("%d", cont);
}
