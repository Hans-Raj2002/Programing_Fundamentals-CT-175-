// WAP to check if the denominator is zero before performing division.
#include <stdio.h>

int main()
{
    float a, b;

    // Take numerator and denominator as input
    printf("Enter numerator: ");
    scanf("%f", &a);
    printf("Enter denominator: ");
    scanf("%f", &b);

    // Check for division by zero
    if (b == 0)
    {
        printf("Invalid input! Denominator cannot be zero.");
    }
    else
    {
        printf("Result is: %.2f", a / b);
    }

    return 0;
}
