#include<stdio.h>

main(){
	int i,j,s;
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d",j);
	    }printf("\n");
		for(s=1;s<=5-i;s++){
			printf(" ");
		}
		for(s=1;s<=5-i;s++){
			printf(" ");
		}
		for(j=i;j>=1;j--){
			printf("%d",j);
		}printf("\n");
	}
}
