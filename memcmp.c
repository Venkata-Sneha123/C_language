#include <stdio.h>
#include <string.h>


// memcmp - compare memory areas
// int memcmp(const void *s1, const void *s2, size_t n);

int main ()
{
char str1[] = "Held";
char str2[] = "Hello";

int r;
printf("str1=%s\nstr2=%s\n",str1,str2);
r=memcmp(str1,str2,3);
if(r>0)
	printf("str1>str2\n");
else if(r<0)
	printf("str1<str2\n");
else
	printf("str1=str2\n");
return 0;
}

