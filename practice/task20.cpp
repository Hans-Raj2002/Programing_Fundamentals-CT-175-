#include<stdio.h>

int main()
{
int i,j;
for(i=13;i>=1;i--)
{
if(i%2!=0)
{
for(j=1;j<=i;j++)
{
printf("*");
}
}
printf("\n");
}
	return 0;
}
