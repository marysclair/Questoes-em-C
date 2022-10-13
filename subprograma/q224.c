#include <stdio.h>
int valorAbsoluto(int num){
	if(num<0){
		return num*(-1);
	}
	return num;
}
void main(){
	int num;
	scanf("%d",&num);
	int valorAb = valorAbsoluto(num);
	printf("%d", valorAb);
}
