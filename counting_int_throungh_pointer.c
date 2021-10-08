#include<stdio.h>
void counting(int *arr,int n)
{
    int i,pos=0;
    for (i=0;i<n/2;i++)
    {
        if(arr[i]>=0)
        pos+=pos++;
        printf("the positive int is %d \n",pos);
    }
}


    int main()
    {
        int arr[50];
        int m,j;
        printf("enter the size of array\n");
        scanf("%d",&m);
        printf("enter the value into the array\n");
        for (j=0;j<m;j++)
        {
            scanf("%d",&arr[j]);
        }
        counting(arr,m);
          return 0;
    }