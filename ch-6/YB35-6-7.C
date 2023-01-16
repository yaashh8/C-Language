#include<stdio.h>
#include<conio.h>
main() {
	 int a,b,c;
	 clrscr();

	 printf("entr a : ");
	 scanf("%d",&a);
	 printf("entr b : ");
	 scanf("%d",&b);
	 printf("entr c : ");
	 scanf("%d",&c);

	 (a<b)
	      ? (a<c)
		      ? printf("a is small.")
		      : printf("c is small.")
	      : (b<c)
		      ? printf("b is small.")
		      : printf("c is small.");

	 getch();
       }