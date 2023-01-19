#include<stdio.h>
#include<conio.h>
main()  {
	 int BS = 200,HRA,DA,TA,GS;
	 clrscr();
	 HRA = BS*10/100;
	 DA = BS*5/100;
	 TA = BS*15/100;
	 GS = BS+HRA+DA+TA;
	 printf("GS : %d",GS);
	 getch();
}