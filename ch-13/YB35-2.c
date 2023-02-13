#include<stdio.h>

struct student {
	int id;
	char name[20];
	int age;
	char course[20];
	char city[20];
	int std;
	char school[20];
};

void main() {
	int n,i;
	printf("enter no.:");
	scanf("%d",&n);
	
	struct student s[n];
	
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
		printf("enter course \t:");
		scanf("%s",&s[i].course);
		printf("enter std\t :");
		scanf("%d",&s[i].std);
		printf("enter school\t :");
		scanf("%s",&s[i].school);
	}
	system("cls");
	printf("id\tname\tage\tcourse\tcity\tstd\tschool\t\n");
	printf("======= ======= ======= ======= ======= ======= =======\n");
	
	for(i=0;i<n;i++){
		printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\n",s[i].id,s[i].name,s[i].age,s[i].course,s[i].city,s[i].std,s[i].school);		
	}
	
		
}
