#include<stdio.h>

int userinput(int a)
{
	printf("enter number: ");
	scanf("%d",&a);
	return a;
	
}

int sum(int result)
{
	int a,b;
	result=userinput(a) + userinput(b);
	printf("the sum of two numbers is: %d",result);
	return result;
	
}
int main()
{
	int result;
	sum(result);
	return 0;
	
}
