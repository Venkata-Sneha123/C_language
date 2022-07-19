/*
22.
output:
1 
3 5 
7 9 11 
13 15 17 19 
21 23 25 27 29

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
			k=k+2;
			printf("%d ",k);
		}
		printf("\n");
	}
	return 0;
}

//---------------- OR -------------------

/*

#include<stdio.h>
int main()
{
	int i,j,rows,n=1;
	printf("Enter number of rows:");
        scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",n);
			n=n+2;
		}
		printf("\n");
	}
	return 0;
}

*/
