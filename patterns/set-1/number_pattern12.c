/*
12.
output:
 a
 b b
 c c c
 d d d d
 e e e e e

*/


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
	}
	ch++;
printf("\n");
}
return 0;
}



// ---------------- OR -------------


/*

#include<stdio.h>
int main()
{
int i,j,rows;
printf("Enter number of rows:");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
	for(j=1;j<=i;j++)
		printf("%c ",96+i);
	printf("\n");
}
return 0;
}

*/
 
