#include<stdio.h>
#define TOGGLE_BIT(n,p) (n^0x01<<p)

int main()
{
int n,p;
printf("Enter a number: ");
scanf("%d",&n);
printf("Enter a position: ");
scanf("%d",&p);

printf("Toggle of %d at %d = %d\n",n,p,TOGGLE_BIT(n,p));

return 0;
}

