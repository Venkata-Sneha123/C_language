#include <stdio.h>
int main()
{
    int x = 1, y = 2;
    printf("%d\n",x,y); // warning: too many arguments for format 
    printf("%d\n", y, x); // warning: too many arguments for format 
    return 0;
} 

/*
output:
1
2
*/
