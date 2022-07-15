#include<stdio.h>


int sumofn(int n)  // loop based approach using "for loop"
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum =sum+i;
	}
	return sum;
}

// -------------------- OR ------------------------


/*
int sumofn(int n)  // // loop based approach using "while loop"	
{
	int sum=0;
	while(n>0)
	{
		sum =sum+n;
		n--;
	}
	return sum;
}
*/


int sumofnrs(int n) // Recursive function by using static variable
{
	static int sum;
	if(n==0)		// Termination condtion
		return sum;
	sum +=n;		// Actual implementation
	return sumofnrs(--n);	// Recursive call

}



int sumofnr(int n) // Recursive function without using static variable
{
	if(n==0)		// Termination condtion
		return 0;	
	return n+sumofnr(n-1);	// Actual implementation and Recursive call

}

int main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);

printf("sum of %d numbers = %d\n",n,sumofn(n)); // for loop based approach

printf("sum of %d numbers = %d\n",n,sumofnrs(n)); // recursive function with static variable

printf("sum of %d numbers = %d\n",n,sumofnr(n)); // recursive function without static variable
return 0;
}

