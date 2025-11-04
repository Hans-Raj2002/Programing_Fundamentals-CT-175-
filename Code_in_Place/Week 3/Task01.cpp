// WAP to convert temperature from Celsius into Fahrenheit.
#include <stdio.h>

int main()
{
    float c, f;

    // Take input in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    // Convert Celsius to Fahrenheit
    f = (c * 9 / 5) + 32;

    printf("%.2f°C = %.2f°F", c, f);

    return 0;
}
