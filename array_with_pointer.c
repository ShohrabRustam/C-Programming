    #include<stdio.h>
    int main()
    {
        int marks[n],i;
        int *ptr;
        ptr=marks;
        printf("enter the number of student to put their marks");
        for (i=0;i<5;i++)
        {
        printf("enter the marks of %dth student\n",i+1);
        scanf("%d",ptr);
        }
        for(i=0;i<n;i++)
        {
            prinf("the marks of %d student is %",i+i,marks[i]);
        }
    }