#include<stdio.h>
#include<conio.h>

main() {

	int i=1,n;
	clrscr();
	printf("enter the value of n :");
	scanf("%d",&n);

	while(i<=10){
			printf("%d * %d = %d\n",n,i,i*n);
			i++;
	}
	getch();

}