 #include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{   
    int num,i,r,cube,digit_cube_sum=0;
    printf("enter the number to find the number is armstrom or not \n");
    scanf("%d",&num);
    for(i=num;i>0;i=i/10) 
    {
        r=i%10;
        cube=r*r*r;
        digit_cube_sum+=cube;
    }
    if(num==digit_cube_sum)
    printf("the given number %d is armstrom",num);
    else
    {
        printf("the given number %d is not armstrom",num);
    }
    return 0;
	}
