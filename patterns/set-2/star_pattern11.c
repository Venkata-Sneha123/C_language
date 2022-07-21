/*
Enter the number of rows: 5
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
*/

#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	    for(k=0;k<i;k++)
	    {
		    printf(" ");
	    }
	    for(j=0;j<n-i;j++)
	    {
		    printf("*");
	    }
	    for(l=0;l<n-i-1;l++)
	    {
		    printf("*");
	    }
	    printf("\n");
    }
    return 0;
}
