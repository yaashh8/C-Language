#include<stdio.h>
#include<conio.h>
main()  {
	  int a,b,c;
	  clrscr();
	  printf("enter value of a,b,c");
	  scanf("%d%d",&a,&b);
	  c = a ;
	  a = b ;
	  b = a ;
	  printf("a : %d,b :%d",a,b);
	  getch();

}