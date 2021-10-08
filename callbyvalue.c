#include<stdio.h>
#include<conio.h>
int add(int, int)
int main()
{
   int a,b;
   printf("please enter the value to sum call by value");
   scanf("%d%d",&a,&b);
  int x= add(a,b);
   return 0;
}
int add(int x,int y)
{
    int sum;
    sum=x+y;
    printf("the value of sum is %d",sum);
}