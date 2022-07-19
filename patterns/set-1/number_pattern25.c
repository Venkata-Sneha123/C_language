/*
25.
output:
1 
b b 
3 3 3 
d d d d 
5 5 5 5 5 

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
		    (i%2==0)?printf("%c ",i+96):printf("%d ",i);
	    }
	    printf("\n");
    }
    return 0;
}

//-------------------- OR -------------------

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
		(i%2==0)?printf("%c ",ch):printf("%d ",i);
	}
	ch++;
	printf("\n");
}
return 0;
}


*/
