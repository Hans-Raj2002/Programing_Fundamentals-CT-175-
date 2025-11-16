#include<stdio.h>

int main()
{
	int i,arr[5]={1,2,3,4,5};
	int *p=arr;
	for(i=0;i<5;i++)
	{
		printf("%d\n",*p);
		*p++;
		
	}
	return 0;
	
}
