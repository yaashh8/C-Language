#include<stdio.h>
#include<conio.h>

main() {
	int i=1,n,sum=0,fact=1;
	clrscr();
	printf("enter the value of n :");
	scanf("%d",&n);
	do {
	      printf("%d\t",i);
	      sum = sum + i;
	      fact=fact * i;
	      i++;


	}while (i<=n);
	printf("\n\nfact of %d values : %d",n,fact);

	getch();
}