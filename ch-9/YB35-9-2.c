#include<stdio.h>

main(){
	
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	int a[n],i,len;
	for(i=0;i<n;i++){
		printf("value %d :",i+1);
		scanf("%d",&a[i]);
		len =  n;	
	}
	for(i=0;i<n;i++){
		printf("a[%d] : %d\n",i,a[i]);
	}printf("length : %d",len);
}
