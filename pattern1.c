#include<stdio.h>
int main()
{
    int i,r,c;
    printf("the pattern is given below as square\n");
    printf("how much row and column you want to put here");
    scanf("%d%d",&r,&c);
    for(int i=0;i<=r-1;i++)
    {
    for(int j=0;j<=c-1;j++)
         {
             printf("*");
         }
         printf("\n");
    }
}