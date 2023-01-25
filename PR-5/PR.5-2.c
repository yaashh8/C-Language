#include<stdio.h>

main(){
	int n;
	printf("enter n :");
	scanf("%d",&n);
	
	int a[n],i,max1,max2;
	
	for(i=0;i<n;i++){
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	
	for(i=0;i<n;i++){
		if(a[i]>max1){
			max2 = max1;
			max1 = a[i];
		}
		else if(a[i]>max2 && a[i]<max1){
			max2 = a[i];
		}
		else{
			printf("");
		}
	}
	printf("the first largest no. = %d\n",max1);
	printf("the second largest no. = %d",max2);
}