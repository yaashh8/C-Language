#include<stdio.h>

//decleration
void cube();

void main(){
	//calling
	cube();
}

//defination
void cube(){
	
	int a;
    printf("enter a :");
	scanf("%d",&a);
		
	printf("cube of a : %d",a*a*a);
}
