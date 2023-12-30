#include<stdio.h>
#include<time.h>
void main(){
	double cpu_time_used =0.0;
	clock_t start,end;
	
	int x,y;
	printf("Enter x :");
	scanf("%d",&x);
	printf("Enter y :");
	scanf("%d",&y);
	
//	int i=y;
//	int ans=x;
//	
//	start=clock();
//	while(i>1){
//		ans=ans*x;
//		i--;
//	}
//	end=clock();
//    cpu_time_used = (double)(end-start)/CLOCKS_PER_SEC;
//	printf("ANSWER Is :%d\n",ans);
//	printf("Time taken %lf\n",cpu_time_used);
	int ans2;
	ans2 = pow(x,y);
	printf(" rec ANSWER Is :%d\n",ans2);
}
int pow(int x,int y){
	if(y==0){
		return 1;
	}
	return x*pow(x,y-1);
}

