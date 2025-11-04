//Find sum of diagonal elements in a square 2D array.
#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter the size of square matrix: ");
	scanf("%d",&n);
	int arr[n][n],i,j,sum=0;
	
	printf("Enter elements of matrix: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
			
		}
	printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		sum+=arr[i][i];
		
	}
	printf("The sum of diagonal elements: %d",sum);
	return 0;
	
}
