#include<stdio.h>

int main()
{
   int a,b;
   int max;

   printf("Enter two numbers: ");
   scanf("%d %d",&a,&b);

   max=(a>b)?a:b;
   printf("Maximum is %d\n",max);
    return 0;
}

