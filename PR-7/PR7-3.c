#include<stdio.h>

void main(){
	
	char str[20];
	
	printf("enter the string :");
	scanf("%[^\n]",&str);
	
	int i,l;
	printf("string : %s",str);
	for(i=0;i<20;i++){
	
		l++;
	}
	
	printf("length of string : %d",l);

}
