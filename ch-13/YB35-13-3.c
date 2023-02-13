#include<stdio.h>

struct employe {
	int id;
	char name[20];
	int age;
	char role[20];
	char city[20];
	int exp;
	char comNa[20];
};

void main() {
	int n,i;
	printf("enter no.:");
	scanf("%d",&n);
	
	struct employe s[n];
	
	for(i=0;i<n;i++){
		system("cls");
		printf("Student : %d/%d\n",i+1,n);
		
		printf("enter id\t :");
		scanf("%d",&s[i].id);
		printf("enter city \t:");
		scanf("%s",&s[i].city);
		printf("enter name\t :");
		scanf("%s",&s[i].name);
		printf("enter age\t :");
		scanf("%d",&s[i].age);
		printf("enter role \t:");
		scanf("%s",&s[i].role);
		printf("enter exp\t :");
		scanf("%d",&s[i].exp);
		printf("enter comNa\t :");
		scanf("%s",&s[i].comNa);
	}
	system("cls");
	printf("id\tname\tage\trole\tcity\texp\tcomNa\t\n");
	printf("======= ======= ======= ======= ======= ======= =======\n");
	
	for(i=0;i<n;i++){
		printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\n",s[i].id,s[i].name,s[i].age,s[i].role,s[i].city,s[i].exp,s[i].comNa);		
	}
	
		
}
