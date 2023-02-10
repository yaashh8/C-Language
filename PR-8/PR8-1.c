#include<stdio.h>

void swap(int*,int*);
void input(int*);

void main(){
	int a,b;
	
	input(&a);
	input(&b);
	
	swap(&a,&b);
	
	printf("a : %d\n",a);
	printf("b : %d",b);
	
}

void input(int *p){
	printf("enter no. :");
	scanf("%d",p);
}


void swap(int *m,int *n){
	*m = *m + *n;
	*n = *m - *n;
	*m = *m - *n;
}




