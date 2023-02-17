#include<stdio.h>
struct student{
	int id;
	char name[20];
	float per;
};

void main(){
	FILE *fp,*fp2;
	
	struct student s;
	
	fp = fopen("C:\\Users\\R11\\Desktop\\IPF.txt","r");
	
	if(fp!=NULL){
		fscanf(fp,"%d%s%f",&s.id,&s.name,&s.per);
		printf("data of student\nID\t:%d\nNAME\t:%s\nPER\t:%.2f\n",s.id,s.name,s.per);
	} else{
		printf("file opending failed !!");
	}
	
	fp2 = fopen("C:\\Users\\R11\\Desktop\\NF.txt","a");
	
	if(fp2!=NULL){
		fprintf(fp2,"data of student\nID\t:%d\nNAME\t:%s\nPER\t:%.2f\n",s.id,s.name,s.per);
	} else{
		printf("file opending failed !!");
	}
	
	fclose(fp);
	fclose(fp2);
	
}

