#include<stdio.h>
#include<conio.h>
int sum(int a, int b);
int main()
{
    int a,b;
    int c;
    printf("enter the two number to find the sum through function");
    scanf("%d%d",&a,&b);
    c= sum(a,b);
    printf("the sum of the number is %d",c);
    return 0;
}
int sum(int a, int b)
{
    int add;
    add=a+b;
}
