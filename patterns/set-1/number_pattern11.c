/*
11.
output:
0 
1 -1 
2 -2 2 
3 -3 3 -3 
4 -4 4 -4 4 

*/

#include<stdio.h>
int main()
{
  int i,j,rows;
  printf("Enter numbe rof rows: ");
  scanf("%d",&rows);
  for(i=0;i<rows;i++)
   {
     for(j=0;j<=i;j++)
	{
	    (j%2!=0)?printf("-%d ",i):printf("%d ",i);
	}
    printf("\n");
   }
return 0;
}

