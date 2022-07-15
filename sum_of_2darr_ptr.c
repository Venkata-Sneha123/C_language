/ Find sum of 2-D array elements using pointers and use double pointer in function.

#include<stdio.h>
#include<stdlib.h>
#define ROW 2
#define COL 3

int sum_2d(int **ptr)
{
	int i,j,sum=0;
	for(i=0;i<ROW*COL;i++)
	{
		sum += *(*ptr+i);
	}
	return sum;
}

int main()
{

	int i,j,result;
	int a[ROW][COL]={{10,20,30},{40,50,60}};

	int *p=NULL;
	p=&a[0][0];// not giving any warning
//	p=&a;// warning: assignment from incompatible pointer type, output is coming
//	p=a;//warning: assignment from incompatible pointer type, output is coming
	printf("The 2-d array is:\n");

	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
			printf("%d ",*(p + i * COL + j));
		printf("\n");
	}

	result=sum_2d(&p);
	printf("The sum of given 2-d array is: %d\n",result);
	return 0;
}

/*
output:
The 2-d array is:
10 20 30 
40 50 60 
The sum of given 2-d array is: 210
*/
