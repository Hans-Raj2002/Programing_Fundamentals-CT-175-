#include<stdio.h>

int sumnatural(int n)
{
	if(n==1)
	{
		return 1;
		
	}
	else
	{
		return n+sumnatural(n-1);
		
	}
}
int main()
{
	int n=5;
	int result=sumnatural(n);
	printf("Sum of first %d natural numbers is: %d",n,result);
	return 0;
	
}
