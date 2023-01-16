#include<stdio.h>
#include<conio.h>

main()  {
	 int i=1,n;
	 clrscr();

	 printf("enter value of n :");
	 scanf("%d",&n);
	 do {
	     if (i%2==0){
	     printf("%d\t",i);}
	     i++;
	 }while (i<=n);
	 getch();


}