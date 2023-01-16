#include<stdio.h>
#include<conio.h>
main() {
	int mo,bill = 0;
	char ;
	clrscr();
	printf("enetr 1 for hollywood.\n");
	printf("enetr 2 for tollywood.\n");
	printf("enetr 3 for gullywood.\n");
	printf("enter your choice :");
	scanf("%d",&mo);
	clrscr();
	switch (mo) {
		  case 1 :
			  printf("you have selected hollywood.\n");
			  printf("enter 1 for avtar\n");
			  printf("emter 2 for avtar2\n");
			  printf("enter your choice :");
			  scanf("%d",&mo);
			  clrscr();
			  switch (mo) {
					case 1:
					       printf("your movie name is avtar.");
						  bill += 300;
					       break;
					case 2:
					       printf("your movie name is avtar2.");
						  bill += 350;
					       break;
			  }
			  break;
		  case 2 :
			  printf("you have selected tollywood.\n");
			  printf("enter 1 for KGF2\n");
			  printf("enter 2 for Pushpa\n");
			  printf("enter your choice :");
			  scanf("%d",&mo);
			  clrscr();
			  switch (mo) {
				       case 1:
					      printf("your movie name is KGF2");
					      bill += 210;
					      break;
				       case 2:
					      printf("your movie name is Pushpa.");
					      bill += 200;
					      break;
			  }
			  break;
		  case 3 :
			  printf("you have selected gullywood.\n");
			  printf("enter 1 for Nari Dose.\n");
			  printf("enter 2 for Passport.\n");
			  printf("enter your choice :");
			  scanf("%d",&mo);
			  clrscr();
			  switch (mo) {
				       case 1:
					      printf("your movie name is Nari Dose.");
					      bill += 180;
					      break;
				       case 2:
					      printf("your movie name is Passport.");
					      bill += 190;
					      break;
			  }
			  break;
		 default :
			  printf("enter number between 1 to 3.");

	}
	printf("Bill : %d\n",bill);
	printf("thank you !! \n visit again _/\\_.");
	printf("\n %c",3);
	printf("%c",3);
	printf("%c",3);
	getch();
}