#include<stdio.h>

void swap(int *a, int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
	
}

int main()
{
	int x=10,y=20;
	printf("x is %d\n",x);
	printf("y is %d\n",y);
	
	swap(&x, &y);
	printf("After swaping\n");
	printf("x is %d\n",x);
	printf("y is %d\n",y);
	
	return 0;
	
}
