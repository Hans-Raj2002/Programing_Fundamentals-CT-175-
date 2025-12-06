#include<stdio.h>

int main()
{
char a;
printf("enter alphabet: ");
scanf("%c",&a);
if((a>='A' && a<='Z') || (a>='a' && a<='z'))
{
if(a>='a' && a<='z')
{
printf("%c is lower case",a);
}
else
{
printf("%c is upper case",a);
}
}
else
{
printf("%c is not alphabet",a);
}
return 0;
}
