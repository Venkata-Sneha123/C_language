#include<stdio.h>
#define my_sizeof(type) (char *)(&type+1)-(char*)(&type)
int main()
{
    char ch;
    short int sh;
    int i;
    float f;
    long int li;
	double d;
	long double ld;
	
	printf("char = %ld\n", my_sizeof(ch));
	printf("short int = %ld\n", my_sizeof(sh));
	printf("int = %ld\n", my_sizeof(i));
	printf("float = %ld\n", my_sizeof(f));
	printf("long int = %ld\n", my_sizeof(li));
	printf("double = %ld\n", my_sizeof(d));
	printf("long double = %ld\n", my_sizeof(ld));
	return 0;
}

/* output:
char = 1
short int = 2
int = 4
float = 4
lonng int = 8
double = 8
long double = 16
*/
