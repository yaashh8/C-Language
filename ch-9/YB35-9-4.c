#include<stdio.h>

main(){
		int a[3] = {2,4,6};
		int b[3] = {1,3,5};
		int c[3];
		int i;
		
		for(i=0;i<3;i++){
			printf("a[%d] = %d\n",i,a[i]);
		}
		for(i=0;i<3;i++){
				printf("b[%d] = %d\n",i,b[i]);
		}
		
		for(i=0;i<3;i++){
				printf("c[%d] = %d + %d : %d\n",i,a[i],b[i],a[i]+b[i]);
		}
		
	
}
