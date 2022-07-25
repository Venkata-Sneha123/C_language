/*
#include <stdio.h>
#include <string.h>

void printArray(int arr[], int n)
{
for (int i=0; i<n; i++)
	printf("%d ", arr[i]);
}

int main()
{
	int n = 10;
	int arr[n];

	// Fill whole array with 100.
	memset(arr, 0, n*sizeof(arr[0]));
	printf("Array after memset()\n");
	printArray(arr, n);
	printf("\n");
	return 0;
}
*/

// memset - fill memory with a constant byte

#include <stdio.h>
#include <string.h>

int main()
{
	char str[50] = "Hello world";
	printf("Before memset(): %s\n", str);

	// Fill 4 characters starting from str[3] with '.'
	memset(str + 3, '.', 4*sizeof(char));

	printf("After memset(): %s\n", str);
	return 0;
}

