#include<stdio.h>

int main()
{
	int a=5;
	float b=5.5;
	char c='c';
	int *pa=&a;
	float *pb=&b;
	char *pc=&c;
	printf("value of int is: %d\n",*pa);
	printf("value of float is: %f\n",*pb);
	printf("value of char is: %c\n",*pc);
	return 0;
	
}
