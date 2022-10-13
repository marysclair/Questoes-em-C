#include <stdio.h>

int calcularMedia(int n1, int n2, int n3){
	int media = (n1+n2+n3)/3;
	return media;
}




void main(){
	int num1, num2, num3, media;
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	media = calcularMedia(num1, num2, num3);
	printf("media: %d", media);
	
}
