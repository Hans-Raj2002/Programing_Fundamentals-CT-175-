#include<stdio.h>

void charprint(char *p)
{
	printf("the character by pointer: %c",*p);
	
}
int main()
{
	char ch;
	printf("enter a character: ");
	scanf("%c",&ch);
	char *pch=&ch;
	charprint(pch);
	return 0;
	
}
