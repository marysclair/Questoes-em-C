#include <stdio.h>

void pertence(float x, float y){
	float resul = 2*x + 1;
	if(resul==y){
		printf("pertence");
	}else{
		printf("nao pertence");
	}
}

void main(){
	float x, y;
	scanf("%f %f",&x,&y);
	petence(x,y);
}
