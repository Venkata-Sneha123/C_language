#include <stdio.h>

int main()
{
   char *p = "hello";
   p[1]=1; // it will give runtime error
   //   p="h1llo"; // it will work
   printf("%s\n",p);

   return 0;
}

