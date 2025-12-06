#include<stdio.h>

int main()
{
	int a=5,b=6;
	printf("bitwise and: %d",a&b);
	printf("bitwise or: %d",a|b);
	printf("bitwise xor: %d",a^b);
	printf("bitwwise not: %d\t%d",~a,~b);
	printf("left shift: %d\t%d",a<<1,b<<2);
	printf("right shift: %d\t%d",a>>1,b>>2);
	return 0;
	
}
