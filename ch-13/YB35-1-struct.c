#include<stdio.h>
#include<string.h>

struct stud{
	int id;
	char name[20];
	float per;
};

void studprintf(struct stud);


void main(){
	struct stud s;
	
	printf("enter name :");
	scanf("%[^\n]",&s.name);
	printf("enter id :");
	scanf("%d",&s.id);
	printf("enter per :");
	scanf("%f",&s.per);
	printf("\n");
	
	studprintf(s);
	
}

void studprintf(struct stud s){
	
	printf("id \t: %d\n",s.id);
	printf("name \t: %s\n",s.name);
	printf("per\t : %.2f",s.per);
	
}
