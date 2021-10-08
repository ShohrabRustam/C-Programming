#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    float avg=0;
    int a[n];
   printf("enter the suject to enter the marks\n");
   scanf("%d",&n);
   printf("please enter the %d subject marks \n",n);
   for(i=0;i>n;i++)
   {
   scanf("%d"a[i]);
   if (a[i]>100)
   printf("invalid marks!");
   avg+=a[i];
    }
   printf("the average of the marks is %f",avg/n); 