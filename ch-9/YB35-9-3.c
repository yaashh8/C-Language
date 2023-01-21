#include<stdio.h>

main()  {
	
	int n;
	printf("enter the value :");
	scanf("%d",&n);
	
	int i,a[n],sum=0;
	float avg;
	for(i=0;i<n;i++){
		printf("value %d :",i+1);
		scanf("%d",&a[i]);
		sum = sum + a[i];
	}
	avg = (float)sum/(float)n;
	for(i=0;i<n;i++){
		printf("a[%d] : %d\n",i+1,a[i]); 
	}
	printf("sum of all values : %d\n",sum);
	printf("average : %.2f",avg);
	
}
