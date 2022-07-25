#include <stdio.h>
int main()
{
	int x=6,p=10;
	printf("%*d\n",x,p);

	int a = 10, b = 20;
   	printf("%*d\n", a, b);
    	printf("%*d\n", 4,b);
    	return 0;
}
/* 
output:
    10		// total width is 6, for 10 it takes 2 spaces, so remaing spaces are 6-2=4. so, 4 spaces are printing.
        20	// total 10 spaces, 20 occupy 2 spaces, so, 10-2=8, 8 spaces will be empty.
  20		// total 4 spaces, 20 occupy 2 spaces, so 4-2=2, 2 spaces will be empty.

*/



/* 
Explanation:
the first argument ta passed for *, that defines the total width of the output... in this case, 
width is passed as 6. so the length of the entire output will be 5. 
now to the number 10, two places are required (1 and 0, total 2). 
so remaining 5-2=3 empty string or '\0' or NULL character will be concatenated before the actual output

*/

