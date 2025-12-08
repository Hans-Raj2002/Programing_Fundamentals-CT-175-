#include<stdio.h>

int main()
{
int i,j,num;
for(i=0;i<=9;i++)
{
num=i;
for(j=0;j<=9;j++)
{
printf("%d ",num);
num++;
}
printf("\n");
}
	return 0;
}
