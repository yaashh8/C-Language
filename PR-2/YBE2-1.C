
#include<stdio.h>
#include<conio.h>
main() {
	char a;
	clrscr();
	printf("enter value of a :");
	scanf("%c",&a);
	if (a>='A' && a<='Z') {
			 printf("the variable is capital alphabet");
	}
	else if (a>='a' && a<='z') {
		       printf("the variable is small alphabet");
	}
	else if (a>='0' && a<='9') {
			 printf("the variable is a digit");
	}
	else {
	       printf("the variable is a special character");
	}
	getch();

}