/*
21.
output:
1 
0 0 
1 1 1 
0 0 0 0 
1 1 1 1 1 

*/

#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i%2);
        }
        printf("\n");
    }
    return 0;
}


//--------------- OR ----------------

/*

#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter number of rows:");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",!(i%2));
        }
        printf("\n");
    }
    return 0;
}

*/
