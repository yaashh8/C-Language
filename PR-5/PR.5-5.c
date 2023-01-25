#include<stdio.h>

main(){
	int n;
	printf("enter n :");
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0;i<n;i++){
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	printf("\n");
	for(i=n;i>=0;i--){
		printf("%d\n",a[i]);
	}
}