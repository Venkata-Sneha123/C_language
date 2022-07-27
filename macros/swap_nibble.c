#include<stdio.h>
#define SWAP(n) ( (n & 0x0F)<<4 | (n & 0xF0)>>4 ) 

int main()
{
unsigned char ch;

printf("Enter a number: ");
scanf("%hhx",&ch);
printf("%x\n",SWAP(ch));
return 0;
}

/*
output:
Enter a number: 23
32

Enter a number: 54
45

Enter a number: 67
76

Enter a number: 5
50
*/
