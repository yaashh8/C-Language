#include<stdio.h>

void main(){

	int n;
	printf("enter value :");
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0;i<n;i++){
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("a[%d] : %d\n",i,a[i]);
	}
	
	int *p[n];
	
	for(i=0;i<n;i++){
		p[i] = &a[i];
	}
	
	for(i=0;i<n;i++){
		printf("element %d using pointer : %d\n",i+1,*p[i]);
	}
	
}


