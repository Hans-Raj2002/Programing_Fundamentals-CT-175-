#include<stdio.h>

int main()
{
int i,j,arr[4][4];
for(i=0;i<=3;i++)
{
for(j=0;j<=3;j++)
{
if(i==j)
{
arr[i][j]=1;
}
else
{
arr[i][j]=0;
}
}
}
for(i=0;i<=3;i++)
{
for(j=0;j<=3;j++)
{
printf("%d\t",arr[i][j]);
}
printf("\n");
}
	return 0;
}
