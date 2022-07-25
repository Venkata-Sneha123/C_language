int x=10;

#define s <stdio.h>
#define s

enum e
{
	a=-10,b,c
};

const struct st
{
	int y;
}sm={20};

int main()
{
	printf("%d\n",x);
	return 0;
}


/*
output:
warning: "s" redefined
 #define s
 
find_error.c:3:0: note: this is the location of the previous definition
 #define s <stdio.h>
 
find_error.c: In function ‘main’:
find_error.c:18:2: warning: implicit declaration of function ‘printf’ [-Wimplicit-function-declaration]
  printf("%d\n",x);
  ^~~~~~
find_error.c:18:2: warning: incompatible implicit declaration of built-in function ‘printf’
find_error.c:18:2: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’

*/
