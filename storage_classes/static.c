#include <stdio.h>

int a = 10;
int sum(int num1, int num2)  // 5,3  6,9
{
    static int a = 0;	// a=0       a=8  (local static variable)
    printf("local static a=%p\n",&a);
    printf("a %d\n",a);	// a=0	     a=8
    return (a=num1+num2); // a=8,    a=15,
}

int main()
{
    printf("Global a=%p\n",&a);
    printf("a %d\n",a); // a = 10 (global variable)
    int a = 20;		// a=20   (local variable)
    printf("local a=%p\n",&a);
    printf("a %d\n",a); // a=20
    sum(5,3);		// we are not storing return value here.
    printf("a %d\n",a); //a=20 (local variable)
    sum(6,9);		// we are not storing return value here.
    printf("a %d\n",a); // a=20 (local variable)
}




/*
output:
Global a=0x558035f01010
a 10
local a=0x7ffde303fac4
a 20
local static a=0x558035f01018
a 0
a 20
local static a=0x558035f01018
a 8
a 20

*/
