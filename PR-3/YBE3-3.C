#include<stdio.h>
#include<conio.h>

main()  {
	int n,c=0;
	clrscr();
	printf("enter the value of n :");
	scanf("%d",&n);
	while(n!=0){
			n=n/10;
			c++;
	}
	printf("no. of digit = %d",c);
	getch();

}
