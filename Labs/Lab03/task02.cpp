#include<stdio.h>

int main()
{
    int hours;
    float d1,d2,d3,d4,d5,totalDistance,averageSpeed;

    printf("Enter the number of hours car travelled: ");
    scanf("%d",&hours);


if (hours==1)
{
    printf("Enter distance in  hour 1: ");
    scanf("%f",&d1);


    totalDistance=d1;
    averageSpeed=totalDistance/hours;

    printf("\nTotal Distance=%f\n",totalDistance);
    printf("\nAverage Speed=%f\n",averageSpeed);
}
else if(hours==2)
{
    printf("Enter distance in  hour 1: ");
    scanf("%f",&d1);

    printf("Enter distance in  hour 2: ");
    scanf("%f",&d2);

    totalDistance=d1+d2;
    averageSpeed=totalDistance/hours;

    printf("\nTotal Distance=%f\n",totalDistance);
    printf("\nAverage Speed=%f\n",averageSpeed);
}
else if(hours==3)
{
    printf("Enter distance in  hour 1: ");
    scanf("%f",&d1);

    printf("Enter distance in  hour 2: ");
    scanf("%f",&d2);

    printf("Enter distance in  hour 3: ");
    scanf("%f",&d3);

    totalDistance=d1+d2+d3;
    averageSpeed=totalDistance/hours;

    printf("\nTotal Distance=%f\n",totalDistance);
    printf("\nAverage Speed=%f\n",averageSpeed);
}
else if(hours==4)
{
    printf("Enter distance in  hour 1: ");
    scanf("%f",&d1);

    printf("Enter distance in  hour 2: ");
    scanf("%f",&d2);

    printf("Enter distance in  hour 3: ");
    scanf("%f",&d3);

    printf("Enter distance in  hour 4: ");
    scanf("%f",&d4);

    totalDistance=d1+d2+d3+d4;
    averageSpeed=totalDistance/hours;

    printf("\nTotal Distance=%f\n",totalDistance);
    printf("\nAverage Speed=%f\n",averageSpeed);
}
else
{
    printf("Enter distance in  hour 1: ");
    scanf("%f",&d1);

    printf("Enter distance in  hour 2: ");
    scanf("%f",&d2);

    printf("Enter distance in  hour 3: ");
    scanf("%f",&d3);

    printf("Enter distance in  hour 4: ");
    scanf("%f",&d4);

    printf("Enter distance in  hour 5: ");
    scanf("%f",&d5);

    totalDistance=d1+d2+d3+d4+d5;
    averageSpeed=totalDistance/hours;

    printf("\nTotal Distance=%f\n",totalDistance);
    printf("\nAverage Speed=%f\n",averageSpeed);
}

    return 0;
}

