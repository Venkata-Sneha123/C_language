#include<stdio.h>


extern int a;

void fun()
{
	a=5;
	printf("%d You are in fun function\n",a);
}
