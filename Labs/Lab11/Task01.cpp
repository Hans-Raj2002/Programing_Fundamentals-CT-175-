#include<stdio.h>

int sum(int a, int b, int c);

int main()
{
	int a,b,c;
	sum(a,b,c);
	return 0;
	
}

int sum(int a, int b, int c)
{
	a=5,b=6;
	c=a+b;
	printf("%d + %d = %d",a,b,c);
	return c;
	
}
