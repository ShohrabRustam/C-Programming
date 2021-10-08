#include <stdio.h>
int main() { 
    char ch;
    printf("enter the value to find the char lower or not \n");
    scanf("%c",&ch);
    if(ch>=90 && ch<123)
    printf("Char %c is lower case",ch);
   else
   {
         printf("Char %c is not lower case",ch);
   }
   

   return 0;
}