#include <stdio.h>

int main()
{
int a,converted = 0;
printf("Enter a number: ");
scanf("%x",&a);
printf("number Before Converting = 0x%x\n", a);
converted |= ((0x000000ff & a) << 24);
converted |= ((0x0000ff00 & a) << 8);
converted |= ((0x00ff0000 & a) >> 8);
converted |= ((0xff000000 & a) >> 24);
printf("Value After Converting = 0x%x\n", converted);
return 0;
}

/*

#include <stdio.h>
#define convert(value) ((0x000000ff & value) << 24) | ((0x0000ff00 & value) << 8) | \
                       ((0x00ff0000 & value) >> 8) | ((0xff000000 & value) >> 24)
int main(void)
{
int a = 0x98765432;
int converted = 0;
printf("Value Before Converting = 0x%x\n", a);
converted = convert(a);
printf("Value After Converting = 0x%x\n", converted);
return 0;
}
*/


/*

#include <stdio.h>

int convert(int num)
{
    int result;
    result= ((0x000000ff & num) << 24) | ((0x0000ff00 & num) << 8) | 
            ((0x00ff0000 & num) >> 8) | ((0xff000000 & num) >> 24);
    return result;        
}


int main()
{
int a,converted;
printf("Enter a number: ");
scanf("%x",&a);

printf("number Before Converting = 0x%x\n", a);

int (*fp)(int)=convert;
converted=fp(a);
printf("Value After Converting = 0x%x\n", converted);
return 0;
}


*/
