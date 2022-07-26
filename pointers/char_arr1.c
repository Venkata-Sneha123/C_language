#include<stdio.h>

int main()
{
	char arr[]={1,2,3,4};
        char *ptr; 
	ptr = arr;
	printf("address of ptr=%p\n",ptr);	
        ptr++;
	printf("address of ptr=%p\n",ptr);	
	printf("%d\n",*ptr);
	return 0;
}


/*
output:
address of ptr=0x7ffe6b9c0e94
address of ptr=0x7ffe6b9c0e95   // char will take 1byte
2

*/


