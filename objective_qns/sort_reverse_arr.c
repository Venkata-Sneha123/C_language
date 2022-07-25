#include <stdio.h>
#define N 20
  


void reverse_arr(int *a,int n)
{
int i,j=n-1,x;
for(i=0;i<n/2;i++)
{
	x=*(a+i);
	*(a+i)=*(a+j);
	*(a+j)=x;
	j=j-1;
}

}


void bubble_sort(int a[],int n)
{
	int i,j,flag,temp;
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;	
			}
		}
		if(flag==0)
			break;
	}
}

int main()
{
	int arr[N],n,i;
	printf("Enter size of an array: ");
	scanf("%d",&n);

	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	bubble_sort(arr,n);
	printf("After sorting, the array is:\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");

	int *p=arr;
	reverse_arr(p,n);
	printf("After reversing, the array is:\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	
	printf("The 3rd largest element is %d\n",arr[2]);
	return 0;
} 
