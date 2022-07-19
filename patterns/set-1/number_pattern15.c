/*
15.
output:
a 
b a 
c b a 
d c b a 
e d c b a

*/

#include<stdio.h>
int main()
{
    int i,j,k,rows;
    printf("Enter number of rows:");
    scanf("%d",&rows);
    for(i=1;i<6;i++)
    {
	    k=i+97;
	    for(j=0;j<i;j++)
	    {
		    k=k-1;
		    printf("%c ",k);
	    }
	    printf("\n");
    }
    return 0;
}

