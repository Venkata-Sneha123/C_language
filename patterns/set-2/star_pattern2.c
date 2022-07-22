/*
output:
Enter number of rows:5
            * 
          * * 
        * * * 
      * * * * 
    * * * * * 


*/


#include <stdio.h>
int main()
{
int rows,i,j,space;
printf("Enter number of rows:");
scanf("%d",&rows);
for(i=0;i<rows;i++)
{
	for(space=0;space<=rows-i;space++)
        {
        	printf("  ");
       	}
       	for(j=0;j<=i;j++)
	{
		printf("* ");
	}
	printf("\n");
}
return 0;
}





/*
2.
output:
Enter number of rows:5
      *
     **
    ***
   ****
  *****

*/

/*
#include <stdio.h>
int main()
{
int rows,i,j,k;
printf("Enter number of rows:");
scanf("%d",&rows);
for(i=0;i<rows;i++)
{
	for(j=0;j<=rows-i;j++)
        {
        	printf(" ");
       	}
       	for(k=0;k<=i;k++)
	{
		printf("*");
	}
	printf("\n");
}
return 0;
}

*/
