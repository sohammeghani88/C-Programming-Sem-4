#include<stdio.h>
void main(){
	int n=1;
	int i;
	for(i=1;i<=50;i++){
		printf("%d ",i);
	}
	printf("\n");
		printf("recursion\n");
	natural(n);
}
int natural(int n){
	printf("%d ",n);
		if(n==50){
			return 0;
		}
		
		return natural(n+1);
	}
