#include<stdio.h>

main(){
	char a;
	
	printf("enter character :");
	scanf("%c",&a);
	

	
	if(a>=97 && a<=122){
		
		a -= 32;
	}
	
		
	
	
	printf("print : %c",a);
}
