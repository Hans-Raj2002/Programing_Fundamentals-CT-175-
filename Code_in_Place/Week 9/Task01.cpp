//Write a C Program to reverse an array in place in a one-dimensional array.
#include<stdio.h>

int main()
{
	int i,n,arr[20];
	
	printf("enter the number of elements: ");
	scanf("%d",&n);
	
	for(i=0;i<=(n-1);i++)
	{
		printf(" ");
		scanf("%d",&arr[i]);
		
	}
	for(i=(n-1);i>=0;i--)
	{
		printf("%d ",arr[i]);
		
	}
	return 0;
	
}
