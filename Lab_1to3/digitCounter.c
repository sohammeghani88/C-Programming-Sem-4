#include<stdio.h>

void main(){
	int n;
	printf("Enter a number :");
	scanf("%d",&n);
	
	int ans = countDigit(n,0);
	printf("%d",ans);
}

int countDigit(int n,int count){
	if(n<=0){
		return count;
	}
	n=n/10;
	count++;
	return countDigit(n,count);
}
