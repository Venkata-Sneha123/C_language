/*
28.
output:
0 
-1 2 
-3 4 -5 
6 -7 8 -9 
10 -11 12 -13 14 

*/

#include<stdio.h>

int main()
{
	int i,j,k=-1,rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			k=k+1;
			(k%2==0)?printf("%d ",k):printf("-%d ",k);
		}
		printf("\n");
	}
	return 0;
}

//----------------------- OR -------------------

/*

#include<stdio.h>

int main()
{
	int i,j,rows,a=0;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			(a%2==0)?printf("%d ",a):printf("-%d ",a);
			a++;
		}
		printf("\n");
	}
	return 0;
}

*/
