/*
16.
output:
e 
e d 
e d c 
e d c b 
e d c b a 

*/

#include<stdio.h>
int main()
{
  int i,j,k,rows;
  printf("Enter number of rows:");
  scanf("%d",&rows);
  for(i=1;i<=rows;i++)
  {
	  k=102;
	  for(j=1;j<=i;j++)
	  {
		  k=k-1;
		  printf("%c ",k);
	  }
	  printf("\n");
  }
  return 0;
}

//----------------- OR ----------------

/*

#include<stdio.h>
int main()
{
	int i,j,k,rows;
	char ch;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		ch='e';
		for(j=1;j<=i;j++)
		{
			printf("%c ",ch);
			ch--;
		}

		printf("\n");
	}
	return 0;
}


*/
