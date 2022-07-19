/*
26.
output:
a 
2 2 
c c c 
4 4 4 4 
e e e e e

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
			(i%2!=0)?printf("%c ",i+96):printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}



