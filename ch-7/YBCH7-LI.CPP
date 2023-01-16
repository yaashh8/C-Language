#include<stdio.h>
#include<conio.h>

main() {
	int n,c=0;
	clrscr();
	printf("enter the number :");
	scanf("%d",&n);
	while(n!=0){
	   n=n/10;
	   c++;
	}
	printf("%d",c);
	getch();
}