/*
#include<stdio.h>

int main()
{
	int a=3;
	a%2==0?printf("%d is even number\n",a):printf("%d is odd number\n",a);
	return 0;
}
*/


#include<stdio.h>
#define N 20
int main()
{
	int arr[N],n,i;
	printf("Enter size of array: ");
	scanf("%d",&n);
	
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
//		arr[i]%2==0?printf("%d is even number\n",arr[i]):printf("%d is odd number\n",arr[i]);
	}
	
	printf("The array elements are:\n");
	for(i=0;i<n;i++)
	{	
		printf("%d ",arr[i]);
		arr[i]%2==0?printf("  even number\n"):printf("  odd number\n");
	}
	printf("\n");
	return 0;
}

