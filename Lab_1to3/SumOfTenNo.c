#include<stdio.h>
void main(){
	int n;
	printf("Enter An Integer :");
	scanf("%d",&n);
	
	int i,sum=0;
	for(i=1;i<=n;i++){
		sum +=i;
	}
	printf("sum is : %d ",sum);
	printf("Recursion\n");
	int ans;
	ans=p3(n);
	printf("rec sum is : %d ",ans);
}
int p3(int a){
	if(a==1){
		return 1;
	}
		return a+p3(a-1);
}
