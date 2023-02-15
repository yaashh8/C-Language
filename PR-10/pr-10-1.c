#include<stdio.h>

void main(){
	
	FILE *fp;
	
	fp= fopen ("C:\\Users\\R22\\Desktop\\hello.txt","w");
	
	if(fp!=NULL){
		fprintf(fp,"heloow word");
		fprintf(fp,"\nfile handling");
		fprintf(fp,"\nanjali");
		
		printf("file opening completed .");
	}else{
		printf("file opening is fild    !!");
	}
	
}
