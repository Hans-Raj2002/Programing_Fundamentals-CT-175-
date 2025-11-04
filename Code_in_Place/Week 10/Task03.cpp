//Concatenate your first name and last name using strcat.
#include<stdio.h>
#include<string.h>

int main()
{
	char firstname[]="Hans",lastname[]="Raj";
	
	printf("First Name: %s\n",firstname[]);
	printf("Last Name: %s\n",lastname[]);
	strcat(firstname,lastname);
	printf("Full Name: %s",firstname);
	
	return 0;
	
}
