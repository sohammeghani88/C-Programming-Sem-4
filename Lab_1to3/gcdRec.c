#include<stdio.h>

void main(){
	int a,b;
	printf("Enter number 1 :");
	scanf("%d",&a);
	printf("Enter number 2 :");
	scanf("%d",&b);
	
//	if(a>b){
//		if(a%b==0){
//			printf("%d",b);
//		}else{
//			printf("1");
//		}
//	}else if(b>a){
//		if(b%a==0){
//			printf("%d",a);
//		}else{
//			printf("1");
//		}
//	}else if (a==0 && b==0){
//		printf("0");
//		return ;
//	}else {
//		printf("1");
//	}

int ans = gcd(a,b);
printf("%d",ans);

}

int gcd(int a,int b){
	if(a==0 || b==0){
		return 0;
	}
	else if(a==b){
		return a;
	}
	else if(a>b){
		return gcd(a-b,a);
	}
	else if(a<b){
		return gcd(a,b-a);
	}
}
