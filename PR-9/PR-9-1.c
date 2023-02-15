#include<stdio.h>

struct IF{
	int inch,inch1;
	float feet;
};

void main(){
	
	struct IF a;
	
	printf("enter value :");
	scanf("%d",&a.inch);
	printf("enter value :");
	scanf("%d",&a.inch1);
	
	int sum=0;
	sum = a.inch + a.inch1;
	printf("sum of inches : %d\n",sum);
	
	a.feet = (float)sum/12;
	
	printf("Value of feet : %.2f",a.feet);
	
}
