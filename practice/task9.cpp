#include<stdio.h>

int main()
{
	char ch;
	printf("enter an alphabet: ");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	{
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
		{
			printf("vowel");
			
		}
		else
		{
			printf("consonant");
			
		}
	}
	else
	{
		printf("please enter an alphabet");
		
	}
	return 0;
}
