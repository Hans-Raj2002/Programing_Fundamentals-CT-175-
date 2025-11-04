//Write a program that copies "Hello" into a new string using strcpy and prints it.
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[]="Hello";
	char str2[25];
	strcpy(str2,str1);
	
	printf("copied string is: %s",str2);
	return 0;
	
}
