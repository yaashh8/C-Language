#include<stdio.h>

main(){
	char str[20];
	
	printf("enter name :");
	scanf("%[^\n]",&str);
	
	int i;
	
	for(i=0;i<20;i++){
		if(str[i]>=65 && str[i]<=90){
			str[i] += 32;
		}
	}
	
	printf("Printf : %s",str);
}

