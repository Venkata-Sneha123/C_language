/*
The pattern is:
    *
   **
  ***
 ****
*****
****
***
**
*
*/

#include<stdio.h>
int main()
{
int i,j,k,n;
printf("Enter the number of rows: ");
scanf("%d",&n);
printf("The pattern is:\n");
for(i=1;i<=n;i++)
{
    for(j=i;j<=n;j++)
    {
        printf(" ");
    }
    for(k=1;k<=i;k++)
    {
	printf("*");
    }
    printf("\n");
}

for(i=0;i<=n+1;i++)
{
    for(j=n;j>=i;j--)
    {
        printf("*");
    }
    printf("\n");
}
return 0;
}
