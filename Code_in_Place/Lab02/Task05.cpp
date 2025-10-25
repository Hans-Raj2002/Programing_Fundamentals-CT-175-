// WAP to convert temperature from Celsius into Fahrenheit and print message according to the weather.
#include <stdio.h>

int main()
{
    float c, f;

    // Take input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    // Formula to convert Celsius to Fahrenheit
    f = (c * 9 / 5) + 32;

    // Display converted temperature
    printf("%.2f°C = %.2f°F", c, f);

    // Display message according to temperature range
    if (c >= 30)
    {
        printf("\nIt's Hot! Stay hydrated and wear light clothes.");
    }
    else if (c >= 20)
    {
        printf("\nNice weather! Perfect for outdoor activities.");
    }
    else if (c >= 10)
    {
        printf("\nCool weather. Wear a light jacket.");
    }
    else if (c >= 0)
    {
        printf("\nCold! Wear warm clothes.");
    }
    else
    {
        printf("\nFreezing! Stay indoors and bundle up.");
    }

    return 0;
}
