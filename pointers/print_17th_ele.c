#include<stdio.h>

int main()
{
unsigned char arr[20]={1,2,3,4,5,6,7,8,9,10,
			11,12,13,14,15,16,17,18,19,20};

int *ptr=arr;
char **ptr1=(char*)&ptr;

printf("17th element = %d\n",*(*ptr1+16));

//ptr=ptr+4;
printf("17th element = %d\n",(char)*(ptr+4));


char *ptr2=arr;

printf("17th element = %d\n",*(ptr2+16));

return 0;
}


/*
output:
17th element = 17
17th element = 17
17th element = 17
*/
