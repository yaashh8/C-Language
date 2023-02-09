#include<stdio.h>

int fact(int);

void main(){
	int n,res;
	
	printf("enter the value of n :");
	scanf("%d",&n);
	
	res = fact(n);
	
	printf("factorial of %d : %d",n,res);
}

int fact(int n){
	if(n<=1){
		return 1;	
	}
	else{
		return n*fact(n-1);
	}
}
