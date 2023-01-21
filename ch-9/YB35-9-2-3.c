#include<stdio.h>

main() {
	int r,c,rc;

	printf("enter no. of rows :");
	scanf("%d",&r);
	
	printf("enter no. of column :");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum=0;
	
	float avg;
	
	
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
	
	rc = r*c;
	avg = (float)sum/(float)rc;
	
	
	
	printf("the sum of array is : %d\n",sum);
	printf("average of this array is : %.2f",avg);
}
