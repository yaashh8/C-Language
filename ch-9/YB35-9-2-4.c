#include<stdio.h>

main() {
	int r,c;
	printf("enter no. of rows :");
	scanf("%d",&r);
	
	printf("enter no. of column :");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],i,j,sum=0,sum2=0,C;
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",a[i][j]);
			sum = sum + a[i][j];
		}printf("\n");
	}
	printf("sum of 1st array : %d",sum);
	printf("\n");
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("b[%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",b[i][j]);
			sum2 = sum2 + b[i][j];
		}printf("\n");
	}
	printf("sum of 2nd array : %d\n",sum2);
	
	C = sum + sum2;
	printf("sum of both array C : %d",C);
	
}
