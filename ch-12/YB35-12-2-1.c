#include<stdio.h>
#include<string.h>

void myapp();
void arrayop(int[],int*);
void arrayinput(int[],int);
int insert(int[],int**);
int update(int[],int);
int delet(int[],int**);
void display(int[],int);

void stringop(char[],int);
void strtoggle(char[]);
void strtital(char[]);
void strupper(char[]);
void strlower(char[]);

void main(){
	int app;
	
	do{
		printf("Enter 1 for arrayoperation.");
		printf("Enter 2 for stringoperation.");
		printf("Enter 3 for exit.");
		printf("Enter your choice : ");
		scanf("%d",&app);
		
		switch(app) {
			case 1 :
				arrayop(a,&n);
				break;
			case 2 :
				stringop(str);
				break;
			case 3 :
				break;
			default :
				printf("enter vailiad no. from 1 to 3..");		
		}
	}while(app!=3);
	
}

void myapp(){
	
}

void arrayop(int a[],int n*){
	
}

void arrayinput(int a[],int n){
	
}

int insert(int a[],int n**){
	
	
}

int update(int a[],int n){
	
}

int delet(int a[],int n**){
	
}

void display(int a[],int n){
	
}


