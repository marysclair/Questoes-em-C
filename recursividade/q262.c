#include <stdio.h>
int div(int x, int y){
	if(x<y){
		return x;
	}
	if(x==y || x-y<y){
		return 1;
	}
	else{
		return 1 + div(x-y,y);
	}
}
void main(){
	int x, y;
	scanf("%d %d",&x,&y);
	int divisao = div(x,y);
	printf("%d", divisao);
}
