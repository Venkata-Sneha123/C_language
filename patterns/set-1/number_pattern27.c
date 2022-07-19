/*
27.
output:
1
2 3
5 8 13
21 34 55 89
144 233 377 610 987

*/

int fib(int );

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
		printf("%d ",fib(n++));
	    }
	    printf("\n");
    }
    return 0;
}

int fib(int n)
{ 
	if(n == 0 || n == 1) 
		return 1; 

	else 
		return (fib(n-1)+fib(n-2));
} 

