#include<stdio.h>
#include<string.h>
int string(char*);
 
void main() {
   char str[20];
   int length;
   
   printf("Enter any string :  ");
   gets(str);
   
   length = string(str);
   printf("The length of the given string is : %d", length);
   getch();
}
 
int string(char*p) 
{
   int length = 0;
   while (*p != '\0') {
      length++;
      p++;
   }
   return length;
}
