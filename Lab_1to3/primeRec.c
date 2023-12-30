#include<stdio.h>

void main(){
	int n;
	printf("Enter number 1 :");
	scanf("%d",&n);
	
	int ans = prime(n,2);
	if(ans==0){
		printf("not prime");
	}else{
		printf(" prime");
	}
}

int prime(int n,int i){
	if(i==n){
		return 1;
	}
	if(n%i==0){
		return 0;
	}
//	i++;
	return prime(n,++i);
}
