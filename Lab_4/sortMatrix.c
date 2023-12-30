 #include<stdio.h>
 
 void main(){
 

 	int a[9];
 	int i ,j;
 	for(i=0;i<9;i++){
 		printf("Enter Element :");
 		scanf("%d",&a[i]);
	}
	printf("Before Sorting");
	for(i=0;i<9;i++){
		if(i%3==0){
			printf("\n");
		}
 		printf("%d ",a[i]);
	}
	int temp;
	for(i=0;i<9;i++){
		for(j=0;j<9-i;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}	
	}
	printf("\n");
	printf("After Sorting");
	for(i=0;i<9;i++){
		if(i%3==0){
			printf("\n");
		}
 		printf("%d ",a[i]);
	}
	
 }
