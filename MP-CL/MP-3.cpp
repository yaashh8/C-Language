#include<stdio.h>
 
int main() {
   int i, j;
   int c = 1;
 
   for (i = 0; i <= 4; i++) {
      printf("\n");
      for (j = 0; j < i; j++) {
         printf("%d", c);
         c++;
      }
   }
   
}
