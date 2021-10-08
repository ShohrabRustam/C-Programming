#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{ 
    int a=0,b=1,c;
    int num;
    printf("Enter the number till want to print\n");
    scanf("%d",&num);
    printf("the fabnoic series is\n");
    while(c<=num)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
	return 0;
	
}
