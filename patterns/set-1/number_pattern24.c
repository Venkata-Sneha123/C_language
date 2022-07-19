/*
24.
output:
a 
A A 
a a a 
A A A A 
a a a a a 

*/

#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter number of rows:");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
	    for(j=0;j<=i;j++)
	    {
		    (i%2==0)?printf("a "):printf("A ");
	    }
	    printf("\n");
    }
    return 0;
}


//------------------- OR ----------------------

/*

#include<stdio.h>
int main()
{
int i,j,rows=5;
for(i=1;i<=rows;i++)
{
for(j=1;j<=i;j++)
{
(i%2==0)?printf("A "):printf("a ");
}
printf("\n");
}
return 0;
}

*/
