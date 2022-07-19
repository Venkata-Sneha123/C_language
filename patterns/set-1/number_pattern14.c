/*
   14. 
output:
a
a b
a b c
a b c d
a b c d e

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
			printf("%c ",96+j);
		printf("\n");
	}
	return 0;
}

//-------------- OR ------------------

/*

#include<stdio.h>
int main()
{
    int i,j,rows;
    char ch;
    printf("Enter number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        ch='a';
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
