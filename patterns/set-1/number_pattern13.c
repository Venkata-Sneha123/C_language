/*
   13.
output:
e 
d d 
c c c 
b b b b 
a a a a a 

 */


#include<stdio.h>
int main()
{
	int i,j,rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	for(i=rows;i>=1;i--)
	{
		for(j=rows;j>=i;j--)
			printf("%c ",96+i);
		printf("\n");
	}
}


//------------------- OR -----------------

/*

#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter number of rows:");
    scanf("%d",&rows);
    char ch='e';
    for(i=rows;i>=1;i--)
    {
        for(j=rows;j>=i;j--)
            printf("%c ",ch);
        ch--;    
        printf("\n");
    }
}

*/
