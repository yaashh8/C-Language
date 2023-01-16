#include<stdio.h>
#include<conio.h>

main()  {
	 int n;
	 clrscr();

	 printf("enter value of n :");
	 scanf("%d",&n);
	 do {
	     printf("%d\t",n);
	     n--;
	 }while (n>=1);
	 getch();


}