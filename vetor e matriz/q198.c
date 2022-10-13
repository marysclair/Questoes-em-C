#include <stdio.h>

void lerMatriz(int mat[3][3]){
	int i,j;
	printf("matriz: ");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d",&mat[i][j]);
		}
	}
}
int repete(int mat1[3][3], int num, int i, int j){
	int achei=0;
	int u, h;
	for(u=i+1; u<3; u++){
		for(h=j+1; h<3; h++){
				if(num==mat1[u][h]&&achei!=1){
						achei++;
				}	
		}
	}
	return achei;
	
}
void main(){
	int cont;
	int aux;
	int mat1[3][3];
	int mat2[3][3];
	lerMatriz(mat1);
	lerMatriz(mat2);
	int i, j, k, t;
	int achei=0;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cont=0;
			achei=0;
			for(k=0; k<3; k++){
				for(t=0; t<3; t++){
					if(mat1[i][j]==mat2[k][t]){
						cont++;	
					}
				}
			}
			achei = repete(mat1,mat1[i][j], i, j);
				if(cont>0&&achei<=1){
					printf("%d ", mat1[i][j]);
				}	
		}
		printf("\n");
	}
}
