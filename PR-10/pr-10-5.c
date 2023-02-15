#include<stdio.h>

struct student {
	int id;
	char name[20];
	float per;
	
};
void main(){
	
	FILE *fp,*fp2;
	int n;
	
	printf("enter n : ");
	scanf("%d",&n);
	
	struct student s;
	
	fp=fopen("C:\\Users\\R22\\Desktop\\smile.txt","r");
	
	if(fp!=NULL){
		fscanf(fp,"%d%s%f",&s.id,&s.name,&s.per);
		printf("data from file \n\nid\t:%d\nname\t:%s\nper\t:%.2f\n",s.id,s.name,s.per);
		
		printf("file operation completed .");	
	}else{
		printf("\n file opening failed !!");
	}
	fp2=fopen("C:\\Users\\R22\\Desktop\\happy.txt","a");
	
	if(fp2!=NULL){
	
		fprintf(fp2,"data from file \n\nid\t:%d\nname\t:%s\nper\t:%.2f\n",s.id,s.name,s.per);
		
		printf("file operation completed .");	
	}else{
		printf("\n file opening failed !!");
	}
	fclose(fp);
	fclose(fp2);
}
