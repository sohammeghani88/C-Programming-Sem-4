#include<stdio.h>

void main(){
	int n,i;
	printf("Enter number of Elemnet :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++){
		printf("Enter Element :");
		scanf("%d",&a[i]);
	}
	 i=0;
	printArray(n,a,i);
	
}

int printArray(int n,int a[],int i){
	if(i==n){
		return 0;
	}
	printf("%d  ",a[i++]);
	return printArray(n,a,i);
}
