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
	
		printf("\n");
		
	for(i=0;i<n1;i++){
 		for(j=0;j<n2;j++){
 			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
 	
 }
