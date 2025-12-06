#include<stdio.h>

int main()
{
	int eng,math,urdu,cs,tmarks;
printf("enter marks of english, math, urdu, computer");
scanf(" %d %d %d %d",&eng,&urdu,&math,&cs);
tmarks=eng+urdu+math+cs;
printf("total marks: %d",tmarks);

if(tmarks>=80)
{
	printf("Grade: A");
	
}
else if(tmarks>=50)
{
	printf("Grade: Pass");
	
}
else
{
	printf("You are Fail");
	
}
return 0;
}
