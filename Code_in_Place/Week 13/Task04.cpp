#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i;
	int *arr;
	arr=(int*)malloc(n*sizeof(int));
	printf("enter number of elements: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		arr[i]=i*i;
		printf("%d, ",arr[i]);
		
	}
	free(arr);
	return 0;
	
}
