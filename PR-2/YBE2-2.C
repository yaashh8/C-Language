#include<stdio.h>
#include<conio.h>
main() {
	int a;
	clrscr();
	printf("enter the value of a :");
	scanf("%d",&a);
	(a%2 == 0)
		  ? printf("it is even")
		  : printf("it is odd");


	getch();

}