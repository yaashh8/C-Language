#include<stdio.h>
#include<conio.h>

main() {
	int n,rev=0,rem;
	clrscr();
	printf("enter the value of n:");
	scanf("%d",&n);

	while(n!=0){
			rem=n%10;
			rev=rev*10+rem;
			n=n/10;
	}
	if(rev==n){
			printf("\nit is a palindrome.");
	}
	else{
			printf("\nit is not a panlindrome.");
	}
	getch();

}