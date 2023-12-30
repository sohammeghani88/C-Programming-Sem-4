#include<stdio.h>

void main(){
	int deci;
	printf("Enter decimal number :");
	scanf("%d",&deci);
	
//	while(deci!=0){
//		if(deci%2==0){
//			printf("0");
//			deci = deci/2;
//		}else if(deci%2==1){
//			printf("1");
//			deci = deci/2;
//		}
//	}
	db(deci);
}

int db(int deci){
	if(deci==0){
		return 0;
	}
	if(deci%2==0){
		printf("0");
		deci = deci/2;
		return db(deci);
	}else if(deci%2==1){
		printf("1");
		deci = deci/2;
		return db(deci);
	}
}
