#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void fun();

int main()
{

#if 0
int *p;
printf("%d\n",*p); // Segmentation fault (core dumped)


int *p1=NULL;
printf("%d\n",*p1); // Segmentation fault (core dumped)

#endif

#if 0
char *str="hello";
*str='E'; // str[1]='E';
printf("%s\n",str); // Segmentation fault (core dumped)
#endif

#if 0
int arr[5];
int i;
for(i=0;i<7;i++) // *** stack smashing detected ***: <unknown> terminated    Aborted (core dumped)
	arr[i]=i;
#endif

#if 0
char *str="a";
*str="b"; // warning: assignment makes integer from pointer without a cast [-Wint-conversion]
	  // Segmentation fault (core dumped)
#endif


#if 0
int a=0;
scanf("%d",a); // segmentation fault
#endif


#if 0
char s[3];
strcpy(s,"hello"); // *** stack smashing detected ***: <unknown> terminated    Aborted (core dumped)
		   // warning: ‘__builtin_memcpy’ writing 6 bytes into a region of size 3 overflows the destination

#endif


#if 0
int *ptr=malloc(10*sizeof(int));
free(ptr);
*ptr=1;
printf("%d\n",*ptr); // 1
#endif

fun(); // Segmentation fault (core dumped)

return 0;
}


void fun()
{
	fun();
}
