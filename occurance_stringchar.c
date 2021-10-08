#include<stdio.h>
#include<conio.h>
#include<string.h>
void occurance(char *str,char a)
{
    int count =0;
    char *ptr=str;
    while(*ptr!='\0')
    
    {
        if (*ptr==a)
        {
            count++;
        }
        *ptr++;
    }
    return count;
    
}
int main()
{
    char ch;
char str[]="hello how are you!";
printf("enter the char to find the occurance\n");
scanf("%c",&ch);	
int count = occurance(str,ch);

    printf("the occurance of char %c is %s\n",ch,count);
}
