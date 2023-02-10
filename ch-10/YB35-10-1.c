#include<stdio.h>

main(){
	char a;
	
	printf("enter character :");
	scanf("%c",&a);
	

	
	if(a>=65 && a<=90){
		
		a += 32;
	}
	
		
	
	
	printf("print : %c",a);
}
