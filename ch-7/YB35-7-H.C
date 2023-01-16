#include<stdio.h>
#include<conio.h>

main() {
	int i=1,n,sum=0;
	clrscr();
	printf("enter the value of n :");
	scanf("%d",&n);
	do {
	      printf("%d\t",i);
	      sum = sum + i;
	      i++;


	}while (i<=n);
	printf("\n\nsum of %d values : %d",n,sum);

	getch();
}