#include<stdio.h>

struct student{
	int id;
	char name[20];
	float per;
};


void main(){
	
	FILE *fp;
	struct student s;
	
	
	fp = fopen("C:\\Users\\R11\\Desktop\\IPF.txt","r");
	if(fp!= NULL){
		fscanf(fp,"%d%s%f",&s.id,&s.name,&s.per);
		printf("ID\t:%d\nName\t:%s\nPer\t:%.2f\n",s.id,s.name,s.per);
	} else {
		printf("not done !!");
	}
	fclose(fp);
}
	
	

