#include<stdio.h>
#include<conio.h>
main()  {
	 int a;
	 clrscr();
	 printf("enter 1 for sunday\n");
	 printf("enter 2 for monday\n");
	 printf("enter 3 for tuesday\n");
	 printf("enter 4 for wednesday\n");
	 printf("enter 5 for thursday\n");
	 printf("enter 6 for friday\n");
	 printf("enter 7 for saturday\n");
	 printf("enter your choice : ");
	 scanf("%d",&a);
	 switch (a) {
		     case 1:
			     printf("sunday");
			     break;
		     case 2:
			     printf("monday");
			     break;
		     case 3:
			     printf("tuesday");
			     break;
		     case 4:
			     printf("wednesday");
			     break;
		     case 5:
			     printf("thursday");
			     break;
		     case 6:
			     printf("friday");
			     break;
		     case 7:
			     printf("saturday");
			     break;

		     default :
			      printf("enter between 1 to 7");




	 }
	getch();
}