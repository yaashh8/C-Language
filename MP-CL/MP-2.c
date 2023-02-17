#include<stdio.h>
#include<string.h>

 
int pali(char *);

int main()
{
 
    char s[20];  
   
    printf("Enter  the name: ");
    gets(s);
    
 
    if(pali(s))
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
 
     
     
}

int pali(char *s){
    int i,c=0,n;
    n=strlen(s);
	for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;
 
 	}
 	if(c==i)
        return 1;
    else
        return 0;
}
