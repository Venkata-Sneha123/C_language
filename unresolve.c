/*
Undefined 
As the name suggests, a symbol you declared was not defined by you

These specific errors occur at the last stage of Compilation, 
The stage is also called linking stage. 
As the name suggest all the code(implementation files) has been converted into object file or libraries. 
Now compiler wants to link them all together.

*/


#include<stdio.h>

extern int fun();

int main()
{
	fun();
        return 0;
}

/*
output:

unresolve.c:(.text+0xa): undefined reference to `fun'
collect2: error: ld returned 1 exit status
*/


#if 0
#include<stdio.h>


int main()
{
int r=add(2,3);
printf("%d\n",r);
return 0;
}


/*
output:

warning: implicit declaration of function ‘add’ 
 int r=add(2,3);
       ^~~
unresolved.c:(.text+0x18): undefined reference to `add'
collect2: error: ld returned 1 exit status
*/
#endif




