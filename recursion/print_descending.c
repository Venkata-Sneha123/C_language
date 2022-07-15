#include<stdio.h>

void print(int n) // loop based approach using "while loop"
{
	while(n>0)
	{
		printf("%d ",n);
		n--;
	}
	printf("\n");
}


void printr(int n) // recursive approach
{
	if(n==0)
		return;
	printf("%d ",n);
	printr(--n);
}

int main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);

printf("Descending order is:\n");
print(n);	// loop based approach
printf("\n");

printr(n);	// recursive approach
printf("\n");
return 0;
}
