#include<stdio.h>

void input(int*);
void squ(int*);

void main(){
	int a;
	
	input(&a);
	
	squ(&a);	
}

void input(int *p) {
	printf("Enter the no. :");
	scanf("%d",p);
}

void squ(int *a){
	
	printf("square of a :%d ",*a * *a);
	
}
