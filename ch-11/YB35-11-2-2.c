#include<stdio.h>
#include<string.h>

//declaration
int stroperations(int ,int);
int strtoogle(int ,int);
int strtitle(int ,int);

void main(){
	//calling
	char str[20];
	
	printf("enter name :");
	gets(str);
	
	stroperations(str,20);

}

//defination
int stroperations(int str,int n){
		
	do{
		int choice;
		
		printf("Enter...");
		printf("1 for Toogle\n");
		printf("2 for Title\n");
		printf("3 for Length\n");
		printf("4 for Revers\n");
		printf("5 for Exit\n");
		printf("enter your choice :");
		scanf("%d",&choice);
		int l,r;
		switch{
			case 1 :
				strtoogle(&str,n);
				break;
			case 2 :
				strtitle(&str,n);
				break;
			case 3 :
				l = strlen();
				printf("length : %s",l);
				break;
			case 4 :
				r = strrev();
				printf("revers : %s",r);
				break;
			case 5 :
				break;
			default :
				printf("take proper no. from 1 to 5");
		}
	}while(choice!=5)
}

int strtoogle(str,n){
	int i;
	
	for(i=0;i<=20;i++){
		if(str[i]>=65 && str[i]<=90){
			str[i] += 32;
		}
		else if(str[i]>=97 && str[i]<=122){
			str[i] -= 32;
		}
	}
	printf("string : %s",str[i]);
}

int strtitle(int str ,int n){
	int i;
	
	if(str[0]>=97 && str[0]<=122){
		str[0] -= 32;
	}
	
	for(i=1;i<20;i++){
		if(str[i]>=65 && str[i]<=90){
			str[i] += 32;
		}
	}
	
	printf("string : %s",str[i]);
}



