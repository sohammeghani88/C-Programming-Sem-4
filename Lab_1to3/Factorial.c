#include<stdio.h>
#include<time.h>
void main(){
	
	double cpu_time_used =0.0;
	clock_t start,end;
	
    int a;
    printf("Enter an Integer :");
    scanf("%d",&a);

    if(a==0 || a==1){
        printf("factorial is 1");
        return;
    }
    int fact=1,i;
    
    start=clock();
    for(i=1;i<=a;i++){
        fact=i*fact;
    }
    end=clock();
    cpu_time_used = (double)(end-start)/CLOCKS_PER_SEC;
    printf("factorial is %d\n",fact);
    printf("Time taken %lf\n",cpu_time_used);
    int ans;
    ans = factorial(a);
    printf("rec factorial is %d\n",ans);
}
int factorial(int n){
	if(n==0 || n==1){
		printf("factorial is 1");
        return n;
	}
	return n*factorial(n-1);
}
