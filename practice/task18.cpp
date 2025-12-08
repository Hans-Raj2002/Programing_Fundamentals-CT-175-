#include<stdio.h>

int main()
{
int i,num;
while(1)
{
printf("enter number: ");
scanf("%d",&num);
if(num==0)
{
break;
}
if(num<0)
{
printf("factorial of negative is not possible");
continue;
}
int fact=1;
for(i=1;i<=num;i++)
{
fact*=i;
}
printf("factorial of %d is: %d\n",num,fact);
}
	return 0;
}
