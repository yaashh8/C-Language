#include<stdio.h>

main() {
	int r,c;
	printf("enter no. of rows :");
	scanf("%d",&r);
	
	printf("enter no. of column :");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum=0;
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",a[i][j]);
		}printf("\n");
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i+j==r-1){
				printf("%d",a[i][j]);
			}
		else{
			printf("0");
		}	
		sum += sum + a[i][j];
		}printf("\n");
	}
	printf("sum of diagonal is %d",sum);
	
	
}