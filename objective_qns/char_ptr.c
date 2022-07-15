#include<stdio.h>


int main()
{
	char *c = "hello";
	char cr[] = "hello";

	c = "world";	// it will work
	cr = "world"; // it will give compilation error, due to we can't change the array base address
		      // assignment to expression with array type
	printf("%s\n",c);
	printf("%s\n",cr);
}

