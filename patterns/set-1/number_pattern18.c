/*
18.
output:
a
b c 
d e f 
g h i j 
k l m n o 

*/

#include<stdio.h>
int main()
{
	int i,j,k=96,rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			k=k+1;
			printf("%c ",k);
		}
		printf("\n");
	}
	return 0;
}

//---------------------- OR --------------

/*

#include<stdio.h>
int main()
{
	int i,j,rows;
	char ch='a';
	printf("Enter number of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
	return 0;
}

*/

