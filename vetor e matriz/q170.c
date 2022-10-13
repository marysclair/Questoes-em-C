#include <stdio.h>

void main(){
	int n, i, k;
	int div=0, aberta=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		div=0;
		for(k=2;k<=i;k++){
			if(i%k==0){
				div++;
			}
		}
		if(i==1){
			aberta++;
		}
		
		else if(div%2==0&&i!=2){
			aberta++;
		}
	}
	printf("%d",aberta);
}
