#include <stdio.h>

void main(){
	int i, j;
	int contj, conti;
	int nula=0;
	int mat[5][5];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<5;i++){
		contj=0;
		conti=0;
		for(j=0;j<5;j++){
			if(mat[i][j]==0){
				contj++;
			}
			if(mat[j][i]==0){
				conti++;
			}
		}
		if(contj==5){
			nula++;
		}
		if(conti==5){
			nula++;
		}
	}
	
	printf("%d",nula);
}
