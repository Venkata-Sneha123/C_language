// Convert decimal to binary



#include <stdio.h>
#define dec_binary(n) int a[32]; \
int i=0,j;                       \
while (n > 0)                    \
{                            	 \
		a[i] = n % 2;    \
		n = n / 2;       \
		i++;             \
}                            	 \
for (j = i - 1; j >= 0; j--) 	 \
	printf("%d", a[j]);     


int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
    	dec_binary(num);
	printf("\n");
	return 0;
}



/*

#include <stdio.h>

int dec_binary(int n)
{
    for (int i = 7; i >= 0; i--) // if i=31, then the loop runs 32 times
    {
        int k = n >> i; // right shift
        if (k & 1) // helps us know the state of first bit
            printf("1");
        else 
            printf("0");
    }
}


int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	dec_binary(num);
	printf("\n");
	return 0;
}

*/

/*

#include <stdio.h>

int dec_binary(int n)
{
    for (int i = 31; i >= 0; i--) // if int has 4bytes = 32 bits.
    {
        int k = n >> i; // right shift
        if (k & 1) // helps us know the state of first bit
            printf("1");
        else 
            printf("0");
    }
}


int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	int (*fp)(int)=dec_binary;
	fp(num);
	printf("\n");
	return 0;
}

*/
