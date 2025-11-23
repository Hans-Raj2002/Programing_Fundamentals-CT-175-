#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n=10,i;
	int *arr;
	arr=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
		
	}
	free(arr);
	return 0;
	
}
