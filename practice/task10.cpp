#include<stdio.h>

int main()
{
	int num1, num2;
	char ch;
	printf("enter first number: ");
	scanf("%d",&num1);
	
	printf("enter second number: ");
	scanf("%d",&num2);
	printf("enter operator +,-,*,/,%: ");
	scanf(" %c",&ch);
	if(ch=='+')
	{
		printf("addition is: %d",num1+num2);
		
	}
	else if(ch=='-')
	{
		printf("substraction is: %d",num1-num2);
		
	}
	else if(ch=='*')
	{
		printf("multiplication is: %d",num1*num2);
		
	}
	else if(ch=='/')
	{
printf("division is: %d",num1/num2);

	}
	else if(ch=='%')
	{
		printf("reminder of division is: %d",num1%num2);
		
	}
	else
	{
		printf("invalid operator");
		
	}
	return 0;
}
