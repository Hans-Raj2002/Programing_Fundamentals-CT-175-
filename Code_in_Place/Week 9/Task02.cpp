//Write a C Program to count even numbers in a one-dimensional array.
#include<stdio.h>

int main()
{
	int i,n,arr[100],count=0;
	
	printf("enter number of elements: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d ",&arr[i]);
		
		if(arr[i]%2==0)
		{
			count++;
			
		}
		
	}
	printf("the number of even numbers are: %d",count);
	return 0;
	
	
}
