#include <stdio.h>
int div(int x, int y){
	if(x<y){
		return x;
	}
	if(x-y<y){
		return x-y;
	}
	else if(x==y){
		return 0;
	}	
	else{
		return div(x-y,y);
	}
}
void main(){
	int x, y;
	scanf("%d %d",&x,&y);
	int divisao = div(x,y);
	printf("%d", divisao);
}
