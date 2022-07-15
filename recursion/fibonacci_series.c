#include<stdio.h>


void fib(int i)
{
	int a=1,b=1,c;
	printf("%d %d ",a,b);
	i=i-2;
	while(i)
        {
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
        	i=i-1;
        }

}



int fibr(int n) // Recursive approach
{
	if(n==0 || n==1)	// Termination condition
		return 1;

	return fibr(n-1)+fibr(n-2);  // Recursive call
}


int main()
{
int i,n;
printf("Enter a number: ");
scanf("%d",&n);

printf("The fibonacci series is : \n");
fib(n); 	// loop based approach
printf("\n\n");
for(i=0;i<n;i++)
{
	printf("%d ",fibr(i)); // Recursive approach
}
printf("\n");

return 0;
}






