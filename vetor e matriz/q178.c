#include <stdio.h>

void main(){
	int mat[5][5];
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<5;i++){
		for(j=i; j<5; j++){
			if(i==j){
				printf("%d",mat[i][j]);
			}
		}
	}
}
