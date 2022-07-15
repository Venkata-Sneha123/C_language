#include<stdio.h>

int main()
{
	int i = 300;
	float a = -200;
	char c = 300; //overflow in implicit constant conversion due to char takes 0-256 
	char *p = "hello";
	char arr[] = "world";

	printf("%ld %ld  %ld %ld",sizeof(p),sizeof(*p),sizeof(arr),sizeof(arr[0])); // *p means it points to first character, char takes 1byte. 
						  //arr size is 6 along with null chararcter
}
