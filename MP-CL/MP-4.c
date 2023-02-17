#include<stdio.h>

void crud();

void main(){
	
	void crud();
	
}


void crud(){
	
	int n;
    
	printf("enter size of array : ");
	scanf("%d",&n);
	
	int a[n],i,pos,val,choice;
	
	for(i=0;i<=n;i++){
		printf("enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	do{
		printf("enter 1 for insert\n");
		printf("enter 2 for update\n");
		printf("enter 3 for delete\n");
		printf("enter 4 for display\n");
		printf("enter 5 for exit\n");
		printf("enter your choice : ");
		scanf("%d",&choice);
		
		switch(choice) {
			
			case 1 : 
				printf("enter position : ");
				scanf("%d",&pos);
				printf("enter value to insert : ");
				scanf("%d",&val);
				
				for(i=n-1;i>=pos;i--){
					a[i+1]=a[i];
				}
				a[pos]=val;
				n++;
				break;
				
			case 2:
	
					printf("enter position : ");
				scanf("%d",&pos);
				printf("enter value to insert : ");
				scanf("%d",&val);
				
				a[pos]=val;
				
				break;
				
			case 3:
				
				printf("enter position : ");
				scanf("%d",&pos);
				
				for(i=pos;i<n;i++){
					a[i]=a[i+1];
					
				}
				n--;
				
				break;
				
			case 4:
			
				for(i=0;i<n;i++){
					printf("a[%d]: %d\n",i,a[i]);
					
				}	
				break;
				
			case 5:
				break;
				default:
					printf("invalid choice\n");
					
	}
				
				
	
	}while(choice!=5);
	printf("\n thank for using our system !!");
}
