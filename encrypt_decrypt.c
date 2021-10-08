#include<stdio.h>
#include<conio.h>
#include<string.h>
void encrypt(char *str)
{
    char *ptr=str;
    while(*ptr!='\0')
    
    {
        *ptr+=1;
        *ptr++;
    }
    
}
void dencrypt(char *str)
{
    char *ptr=str;
    while(*ptr!='\0')
    
    {
        *ptr-=1;
        *ptr++;
    }
    
}
int main()
{
char str[]="hello how are you!";
 encrypt(str);
 printf("the encrypted string is %s\n",str);
 dencrypt(str);
 printf("the decrypted stringn is %s\n",str);
	return 0;
	
}
