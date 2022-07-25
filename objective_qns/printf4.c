#include <stdio.h>

int main()
{
    int a=1;
    printf("%d\n",a);
    a++;
    printf("%*d \r",2,a);
    a++;
    printf("%d\n",a);
    a++;
    printf("%*d\r",3,a);
    a++;
    printf("%*d\r",2,a);
    a++;
    printf("%d\n",a);
    return 0;
}
