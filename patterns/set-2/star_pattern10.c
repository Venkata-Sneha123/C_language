/*
      *
     ***
    *****
   *******
  *********
 ***********
 */
#include <stdio.h>

int main()
{
    int i,j,l,k,n;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("*");
        }
        for(l=0;l<i;l++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
