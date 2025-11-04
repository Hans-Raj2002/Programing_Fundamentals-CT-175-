#include<stdio.h>

int main()
{
    int denominator=4;
    float sum=1;

    while(denominator<=400)
    {
        sum+=1.0 / denominator;
        denominator+=4;
    }

    printf("The sum of series is: %f",sum);
    return 0;
}

