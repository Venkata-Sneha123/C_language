/*
17.
output:
e 
d e 
c d e 
b c d e 
a b c d e 

*/

#include<stdio.h>
int main()
{
    int i,j,k,rows;
    printf("Enter number of rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
	    k=101-i;
	    for(int j=0;j<i;j++)
	    {
		    k=k+1;
		    printf("%c ",k);
	    }
	    printf("\n");
    }
    return 0;
}



