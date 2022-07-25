
// ----------------------------- 1. define ----------------------

#include<stdio.h>

#define a printf("Hello World\n")

int main()
{
	if(a)
	{
		;
	}
	return 0;
}

// --------------------- OR -------------------------

/*
#include<stdio.h>
#define S "Hello World\n"

int main()
{
	printf(S);
	return 0;
}
*/




// ------------------------------- 2. goto ----------------------------
/*
#include <stdio.h>
int main()
{
	int i=1;
	if(i<=1)
		goto msg;
	msg:
		printf("Hello world\n");
  	
}

*/


// --------------------------------- 3. if -----------------------------------
/*
#include<stdio.h>

int main()
{
	if(printf("Hello World"))
	{
	}
	printf("\n");
return 0;
}

*/

// ---------------------------------------- 4. while ---------------------------
/*
#include<stdio.h>
int main()
{
	while(!printf("Hello World\n"))
	{;}
	
	return 0;
}
*/





// ----------------------------------- 5. switch --------------------------
/*
#include<stdio.h>
int main()
{
	switch(printf("Hello World\n"))
	{
	}
	
	return 0;
}
*/




/*
#include<stdio.h>
#define S "Hello World\n"

int main()
{
	printf(S);
	return 0;
}

*/




/*
#include<stdio.h>

int main()
{
	int i=1;
	while(i<=1)
	{
		printf("Hello World");
		i++;
	}
		printf("\n");
		return 0;
}
*/



/*
#include<stdio.h>
#define S ;

int main()
{
	printf("Hello world\n")S
	return 0;
}
*/



/*
#include<stdio.h>

int main()
{
int i=1;
switch(i)
{
	case 1:
		printf("Hello World\n");
		break;
	default:
		break;
}
return 0;
}
*/




/*
#include<unistd.h>
#include<string.h>
int main()
{
	write(1,"Hello World\n",strlen("Hello World\n"));
}
*/



/*
#include<stdlib.h>

int main()
{
	system("echo Hello world\n");
}
*/


/*
#include<stdio.h>
int main()
{
    puts("Hello World");
    return 0;
}
*/



/*
#include <stdio.h>
int main()
{
  	char *s="hello world\n";
  	while (*s) 
	{
		putchar(*s++);
		//printf("%c",*s);
	s	//s++;
	}
}
*/


/*
#include <stdio.h>
int main()
{
  	char *s="hello world\n";
	fprintf(stdout,"%s",s);
}
*/



/*
#include <stdio.h>
#define msg "Hello world\n"
int main()
{
  	fputs(msg,stdout);
}
*/







