#include<stdio.h>

int main()
{
int n;
n=printf("%d\n",printf("\\hello World"));
printf("\n%d\n",n);

n=sizeof(printf("%d",printf("\\Hello World")));
printf("\n%d\n",n);
return 0;
}
