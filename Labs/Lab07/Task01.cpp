#include<stdio.h>

int main()
{
    int sum=0;
    float average;
    int i;
    int marks[5];

    for(i=0;i<=4;i++)
    {
        printf("Enter student marks: "); 
        scanf("%d",&marks[i]);
    }

    for(i=0;i<=4;i++)
    {
        sum+=marks[i];
    }

    average=sum / 5.0;

    printf("Average marks: %f\n",average);
    printf("Total marks: %d\n",sum);

    return 0;
}

