#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n;
    printf("enter the number to find odd or even");
    scanf("%d",&n);
    if(n%2==0)
    printf("the enter number is even");
    if(n%2!=0)
    printf("the given number is odd");
    return 0;
}