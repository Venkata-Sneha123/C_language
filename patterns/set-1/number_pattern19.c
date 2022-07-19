/*
19.
output:
1
0 1 
0 1 0 
1 0 1 0 
1 0 1 0 1 

*/

#include<stdio.h>
int main()
{
    int i,j,rows,n=0;
    printf("Enter number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
	    for(j=1;j<=i;j++)
	    {
		    n++;
		    printf("%d ",n%2);
	    }
	    printf("\n");
    }
    return 0;
}

