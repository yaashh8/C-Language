#include<stdio.h>
#include<conio.h>
main()  {
	  int a;
	  clrscr();
	  printf("enter value of a :");
	  scanf("%d",&a);


	  if (a>0) {
		     printf("the number is positive.");
	  }
	  else if (a==0) {
			    printf("the given number is nutral.");
	  }
	  else {
		 printf("the number is negative.");
	  }
	  getch();

}