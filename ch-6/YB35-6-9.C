#include<stdio.h>
#include<conio.h>
main() {
	 char a;
	 clrscr();
	 printf("enter value of a:");
	 scanf("%c",&a);

	 if (a>='A' &&  a<='Z') {
		printf("%c is uppercase.",a);
	 }
	 else if (a>='a'&&  a<='z') {
		printf("%c is lowecase.",a);
	 }
	 else if (a>='0' && a<='9') {
		printf("%c is digit.",a);
	 }
	 else {
		printf("%c is special character.",a);
	 }

	 getch();
}