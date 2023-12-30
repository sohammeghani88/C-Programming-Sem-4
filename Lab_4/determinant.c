 #include<stdio.h>
 
 void main(){
 
 	int n1,n2;
 	
 	printf("Enter Number of rows");
 	scanf("%d",&n1);
 	printf("Enter Number of cols");
 	scanf("%d",&n2);
 	
 	int a[n1][n2];
 	int i ,j;
 	for(i=0;i<n1;i++){
 		for(j=0;j<n2;j++){
 			printf("Enter Element :");
 			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n1;i++){
 		for(j=0;j<n2;j++){
 			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

//00 01 02
//10 11 12
//20 21 22
int sum;
 	sum=(a[1][1]*a[2][2] - a[1][2]*a[2][1])*a[0][0] - (a[1][0]*a[2][2] - a[1][2]*a[2][0])*a[0][1] + (a[1][0]*a[2][1] - a[1][1]*a[2][0])*a[0][2];
 				
		printf("%d",sum);
		
 }
