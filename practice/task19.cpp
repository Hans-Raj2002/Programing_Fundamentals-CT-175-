#include<stdio.h>

int main()
{
int i=1,j=1;
while(i<=12)
{
	j=1;
while(j<=12)
{
printf("%d  ",i*j);
j++;
}
printf("\n");
i++;
}
	return 0;
}
