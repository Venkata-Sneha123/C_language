#include<stdio.h>

int fact(int n) // loop based approach using "for loop"
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}

int factorial(int n) // Recursion approach 
{
	if(n==0)		// Termination condition
		return 1;
	else
		return (n*factorial(n-1)); 	// recursive call
}

int main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);

printf("Factorial of %d = %d\n",n,fact(n)); // for loop based approach

printf("Factorial of %d = %d\n",n,factorial(n)); // recursive function approach

return 0;
}

