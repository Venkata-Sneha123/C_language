#include<stdio.h>

int main()
{
	int a;
	char *x;
	x = (char *) &a;
	a = 512;   // 00000000  00000000  00000010 00000000    int has total 4bytes = 32 bits.
		  //  4th byte  3rd byte  2nd byte  1st byte

	x[0] = 1;	// we are modify the 1st bit of the 1st byte. so 00000000 00000000 00000010 00000001 = 513
	x[1] = 2;	// we are modify the 1st bit of the 2nd byte. so, 00000000 00000000 00000010 00000001 = 513

	printf("x[0]=%p\n",&x[0]);
	printf("x[1]=%p\n",&x[1]);
	printf("x[2]=%p\n",&x[2]);
	printf("x[3]=%p\n",&x[3]);
	printf("%d\n",a);
	return 0;	
}


/*

output:
x[0]=0x7ffebe7d20fc
x[1]=0x7ffebe7d20fd
x[2]=0x7ffebe7d20fe
x[3]=0x7ffebe7d20ff
513

*/
