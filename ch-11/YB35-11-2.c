#include<stdio.h>

//decleration
void divi();

void main(){
	//calling
	divi();
}

//defination
void divi(){
	int a;
	
	printf("enter a :");
	scanf("%d",&a);
	
	if(a%3==0 && a%5==0){
		printf("it is divisible by 3 and 5.");
	}
	else{
		printf("it is not divisible by 3 and 5.");
	}
}
