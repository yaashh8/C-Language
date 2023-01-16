#include<stdio.h>
#include<conio.h>

main()  {
	 int n,i=1,c=0;
	 clrscr();
	 printf("enter number :");
	 scanf("%d",&n);
	 while(i<=n){
	       if(n%i==0){
		      c++;
	       }
	       i++;
	 }
	 if(c==2){
		printf("\nit is a prime number.");
	 }
	 else {
		printf("\nit is not a prime number.");

	 }

	 getch();


}