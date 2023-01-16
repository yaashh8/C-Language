#include<stdio.h>
#include<conio.h>

main()  {
	int i=0,n;
	clrscr();
	printf("enter the number :");
	scanf("%d",&n);
	while(i<n){
		if(i*i==n){
			printf("squar of %d = %d",n,i);
		}
		i++;
	}


	getch();

}