/*
23.
output:
0 
2 4 
6 8 10 
12 14 16 18 
20 22 24 26 28

*/

#include<stdio.h>
int main()
{
	int i,j,k=-2,rows;
        printf("Enter number of rows:");
	scanf("%d",&rows);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			k=k+2;
			printf("%d ",k);
		}
		printf("\n");
	}
	return 0;
}

//------------------------ OR -----------------

/*

#include<stdio.h>
int main()
{
	int i,j,rows,n=0;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",n);
			n=n+2;
		}
		printf("\n");
	}
	return 0;
}

*/
