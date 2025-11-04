#include<stdio.h>

int main()
{
	int y=5;
	int z=6;
	int const *yptr=&y;
	printf("%p\n",yptr);
	*yptr=&z;
	printf("%p\n",yptr);
}
