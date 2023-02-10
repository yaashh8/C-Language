#include<stdio.h>
#include<string.h>

main(){
	char a[20],b[20];
	int l;
	
	
	printf("enter last name  :");
	gets(a);
	
	strcpy(b,a);
	strrev(a);
	
	l = strcmp(a,b);
	
	if(l==0){
		printf("first name :");
		puts(b);
		printf("last name  :");
		puts(a);
		printf("it is palindrome.");
    }
    else{
    	printf("first name :");
		puts(b);
		printf("last name  :");
		puts(a);
		printf("it is not palindrome.");
	}
	
}
	
	
	
	
	
	
	
	

