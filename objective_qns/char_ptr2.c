#include<stdio.h>

int main()
{
char *c = "hello";
	char cr[] = "hello";
	
	c = "world";	// it will work
	cr = "world"; // it will give compilation error

return 0;
}
