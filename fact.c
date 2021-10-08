#include<stdio.h>
#include<conio.h>
int main()
{
int i,fact=1,n;
printf("enter the number to find the factorial");
scanf("%d",&n);
for(i=n;i>=1;i--)
	{
        fact*=i;
    }
printf("the given number %d fact is %d ",n,fact);
return 0;
}