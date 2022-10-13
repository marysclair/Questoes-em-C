#include <stdio.h>
int quantAlg(int num){
	if(num<10){
		return 1;
	}
	else{
		return 1 + quantAlg(num%10);
	}
}
void main(){
	int num, quant;
	scanf("%d",&num);
	quant = quantAlg(num);
	printf("%d", quant);
}
