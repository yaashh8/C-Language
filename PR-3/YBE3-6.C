#include<stdio.h>
#include<conio.h>
main() {
	int i=1,n,fact=1;
	clrscr();
	printf("enter the value of n :");
	scanf("%d",&n);
	while(i<=n){
			printf("%d\t",i);
			fact=fact*i;
			i++;
	}
	printf("\nthe fact of %d values : %d",n,fact);
	getch();


}