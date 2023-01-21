#include<stdio.h>

main(){
	int n;
	printf("enter the numbers of elements : ");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++){
		printf("element no. %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("a[%d] : %d\n",i,a[i]);
	}
		
}
