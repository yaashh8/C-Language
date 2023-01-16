#include<stdio.h>
#include<conio.h>

main()  {
	int n,rev=0,rem;
	clrscr();
	printf("enter the number :");
	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==n){
			printf("\nthe number is palindrome.");
		}
	else {
			printf("\nthe number is not palindrome.");
	}

	getch();

}