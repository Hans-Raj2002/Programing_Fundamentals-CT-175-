#include<stdio.h>

int main()
{
    int i,j=10,k=1;
    for(i=1;i<=10;i++)
{
        printf("10 x %d = %d\t",j,10*j);
        printf("9 x %d = %d\n",k,9*k);
        j--;
        k++;
    }
    return 0;
}

