    #include<stdio.h>
     int main()
    {
        int i,j;
        int n;
        int m;
        printf("enter the number of row and columnn\n ");
        scanf("%d%d",&n,&m);
        int array[n][m];
        printf("please enter the element into tha array");
        for(i=0;i<n;i++)
        {
            for (j=0;j<m;j++)
            {
                scanf("%d",&array[i][j]);
            }
        }
          for(i=0;i<n;i++)
        {
            for (j=0;j<m;j++)
            {
                printf("%d\t",array[i][j]);
            }
            printf("\n");
        }
       return 0;
    }   
    
    