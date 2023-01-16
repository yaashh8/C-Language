#include<stdio.h>
#include<conio.h>

main()  {
	  int i=1,n;
	  clrscr();
	  printf("enter the value of n :");
	  scanf("%d",&n);
	  do {
		 printf("\n\n%d * %d : %d",i,n,i*n);
	       i++;
	  }while (i<=10);


	  getch();

}