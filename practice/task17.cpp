#include<stdio.h>

int main()
{
int i=1,num,largest=0,sum=0;
while(i<=5)
{
printf("enter number: ");
scanf("%d",&num);
sum+=num;
if(num>largest)
{
largest=num;
}
i++;
}
printf("largest number: %d\n",largest);
printf("sum: %d\n",sum);
printf("average: %f",(float)sum/5);
	return 0;
}
