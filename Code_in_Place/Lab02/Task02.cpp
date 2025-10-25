// WAP to check if the temperature is greater than 30, then print "Weather is Hot".
#include <stdio.h>

int main()
{
    int temp;

    // Take temperature input from user
    printf("Enter your city temperature: ");
    scanf("%d", &temp);

    // Check if temperature is greater than 30
    if (temp > 30)
    {
        printf("Weather is Hot");
    }
    else
    {
        printf("Weather is Normal");
    }

    return 0;
}
