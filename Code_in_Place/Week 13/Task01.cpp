#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i;
	float *arr;
	arr=(float*)malloc(n*sizeof(float));
	
	printf("enter number of elements:\n");
	scanf("%d",&n);
	
	printf("enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&arr[i]);
		
	}
	for(i=0;i<n;i++)
	{
		printf("%.2f\t",arr[i]);
		
	}
	free(arr);
	return 0;
	
}
