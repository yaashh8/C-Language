#include<stdio.h>
#include<conio.h>
main() {
	 int a,b,c,d,e;
	 clrscr();

	 printf("enter value of a :");
	 scanf("%d",&a);
	 printf("enter value of b :");
	 scanf("%d",&b);
	 printf("enter value of c :");
	 scanf("%d",&c);
	 printf("enter value of d :");
	 scanf("%d",&d);
	 printf("enter value of e :");
	 scanf("%d",&e);
	 if (a>b) {
		   if (a>c) {
			     if (a>d) {
				       if (a>e) {
						  printf("a is big.");
				       }
				       else {
						  printf("e is big.");
				       }
			     }
			     else {
				       if (d>e) {
						  printf("d is big.");
				       }
				       else {
						  printf("e is big");
				       }
			     }
		   }
		   else {
			  if (c>d) {
				     if (c>e) {
						printf("c is big.");
				     }
				     else {
						printf("e is big.");
				     }
			  }
			  else {
				     if (d>e) {
						  printf("d is big.");
				       }
				       else {
						  printf("e is big");
				       }

			  }
		   }
	 }
	 else {
	       if (b>c) {
			 if (b>d) {
				   if (b>e) {
					      printf("b is big.");
				   }
				   else {
					      printf("e is big.");
				   }
			 }
			 else {
				 if (d>e) {
						  printf("d is big.");
				       }
				       else {
						  printf("e is big");
				       }
			 }
	       }
	       else {
		     if (c>d) {
				     if (c>e) {
						printf("c is big.");
				     }
				     else {
						printf("e is big.");
				     }
			 }
		    }
	   }



	 getch();

}
