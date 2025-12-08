#include<stdio.h>
#include<conio.h>

int main()
{
char ch;
int alpha=0,vowel=0,consonant=0,digit=0,space=0,chars=0;
while(1)
{
ch=getch();
if(ch=='\r')
{
break;
}
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
{
alpha++;
switch(ch)
{
case 'a':
case 'e':
case 'i':
case'o':
case 'u':
vowel++;
break;
default:
consonant++;
break;
}
}
else if(ch>='0'&&ch<='9')
{
digit++;
}
else if(ch==' ')
{
space++;
}
else
{
chars++;
}
}
printf("alphabets:%d\nvowels: %d\nconsonant: %d\ndigits: %d\nspaces: %d\nspecial characters: %d\ntotal characters: %d",alpha,vowel,consonant,digit,space,chars,alpha+digit+space+chars);

	return 0;
}
