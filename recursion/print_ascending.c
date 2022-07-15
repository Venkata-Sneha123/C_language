#include<stdio.h>

void print(int n) // loop based approach using "for loop"
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
}


void printr(int n) // recursive approach
{
	if(n==0)
		return;
	printr(n-1);
	printf("%d ",n);
}

int main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);

printf("Ascending order is:\n");
print(n);	// loop based approach
printf("\n");

printr(n);	// recursive approach
printf("\n");
return 0;
}
