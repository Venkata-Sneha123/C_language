#include<stdio.h>
#define extract_bits(n,no_bits,p) (((1 << no_bits) - 1) & (n >> (p-1)))
int main()
{
	int n,p,no_bits,r;
	printf("Enter a number: ");
	scanf("%x",&n);

	printf("Enter a position: ");
	scanf("%d",&p);

	printf("Enter number of bits to be displayed: ");
	scanf("%d",&no_bits);


	r=extract_bits(n,no_bits,p);
	printf("%d\n",r);

}


/*
output:
Enter a number: ab
Enter a position: 2
Enter number of bits to be displayed: 3
5

*/
