#include<stdio.h>

//declaration
int inftyclac(int ,int);


void main(){
	//calling
	int a,b;
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	
	inftyclac(a,b);
	
	printf("Thanks for using UDF !!");
	
}

//defination
int inftyclac(a,b){
	
	int choice;
	
	do{
		float d;
		printf("enter 1 for additon\n");
		printf("enter 2 for subtraction\n");
		printf("enter 3 for multiplication\n");
		printf("enter 4 for divition\n");
		printf("enter 5 for exit\n");
		printf("enter your choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1 :
				printf("sum : %d",a+b);
				break;
				
			case 2 :
				printf("sub : %d",a-b);
				break;
				
			case 3 :
				printf("mul : %d",a*b);
				break;
				
			case 4 :
				d = (float)a/(float)b;
				printf("div : %.10f",d);
				break;
				
			case 5 :
				break;
				
			default :
				printf("please enter apropriate valu \n or \n choice the correct value between 1 to 5.");					
				break;
		}
		printf("\n");
		
	}while(choice!=5);
	
	
}





