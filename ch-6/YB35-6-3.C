#include<stdio.h>
#include<conio.h>
main() {
	 int a,b,c;
	 clrscr();

	 printf("enter value of a :");
	 scanf("%d",&a);
	 printf("enter value of b :");
	 scanf("%d",&b);
	 printf("enter value of c :");
	 scanf("%d",&c);

	 if (a>b)  {
		    if (a>c) {
			      printf("a is big.");
		    }
		    else {
			      printf("c is big.");
		    }
	 }
	 else {
		   if (b>c) {
			      printf("b is big.");
		   }
		   else {
			      printf("c is big.");
		   }
	 }
	 getch();
}