#include<stdio.h>
#include<conio.h>
main() {
	 int a,b,c,d;
	 clrscr();

	 printf("entr a : ");
	 scanf("%d",&a);
	 printf("entr b : ");
	 scanf("%d",&b);
	 printf("entr c : ");
	 scanf("%d",&c);
	 printf("entr d : ");
	 scanf("%d",&d);

	 (a>b)
	      ? (a>c)
		      ? (a>d)
			     ? printf("a is big.")
			     : printf("d is big.")
		      :  (c>d)
			      ? printf("c is big.")
			      : printf("d is big.")
	      : (b>c)
		     ? (b>d)
			    ? printf("b is big.")
			    : printf("d is big.")
		     :  (c>d)
			      ? printf("c is big.")
			      : printf("d is big.");
	 getch();

}