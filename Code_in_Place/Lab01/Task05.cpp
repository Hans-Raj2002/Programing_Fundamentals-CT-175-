// WAP to convert electric power from watts to kilowatts.
#include <stdio.h>

int main()
{
    float watts, kilowatts;

    // Take input in watts from the user
    printf("Enter power in watts: ");
    scanf("%f", &watts);

    // Convert watts to kilowatts
    kilowatts = watts / 1000;

    printf("Power in kilowatts = %.3f", kilowatts);

    return 0;
}
