#include<stdio.h>

int main()
{
int n,pos=5;
printf("Enter a number:\n");
scanf("%d",&n);

printf("After setting the 5th bit = %d\n",(n|(0x01<<pos)));


return 0;
}
