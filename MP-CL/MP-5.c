

#include<stdio.h>

struct E{
	
	int id;
	char name[20];
	int wage;
	char address[20];
	char role[20];
	char email[20];
	
	
};

void main(){
	int n,i;
	
	printf("enter number of employee : ");
	scanf("%d",&n);
	struct E e[n];
	for(i=0;i<n;i++){
		printf("\nemployee : %d/%d\n\n",i+1,n);
		
		
		
		printf("enter name\t:");
		scanf("%s",&e[i].name);
		
		printf("enter address\t:");
		scanf("%s",&e[i].address);
		
		printf("enter role\t:");
		scanf("%s",&e[i].role);
		
		printf("enter email\t:");
		scanf("%s",&e[i].email);
		
		printf("enter id\t:");
		scanf("%d",&e[i].id);
		
		printf("enter salary\t:");
		scanf("%d",&e[i].wage);
		
	
		
		printf("\n");
		
	
	}
	
	for(i=0;i<n;i++){
	
	printf("\nname\t\t:%s\naddress\t\t:%s\nrole\t\t:%s\nemail\t:%s\nid\t\t:%d\nwage\t\t:%d\n",e[i].name,e[i].address,e[i].role,e[i].email,e[i].id,e[i].wage);
	
	

}
}

