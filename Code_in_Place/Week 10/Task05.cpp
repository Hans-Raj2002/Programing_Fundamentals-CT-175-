//Use strncpy to copy only the first 4 letters of "Programming" into a second character array, and print it safely (make sure it ends with \0).
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[]="Programing";
	char str2[20];
	
	printf("%s\n",str1);
	strncpy(str2,str1,4);
	printf("%s",str2);
	return 0;
	
}
