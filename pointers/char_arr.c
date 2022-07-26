#include<stdio.h>

int main()
{
	char arr[]={1,2,3,4};
        int *ptr; 
	ptr = arr;
	printf("address of ptr=%p\n",ptr);	
        ptr++;
	printf("address of ptr=%p\n",ptr);	
	printf("%d\n",*ptr);
	return 0;
}


/*
output:
warning: assignment from incompatible pointer type [-Wincompatible-pointer-types]
  ptr = arr;
      ^

./a.out 
address of ptr=0x7ffd7a04a5c4
address of ptr=0x7ffd7a04a5c8
1033129216


integer will take 4bytes. 0x7ffd7a04a5c8 if this address location is exists, then It will print garbage value.
If this address location is doen't exist, it will give segmentation fault.

*/


