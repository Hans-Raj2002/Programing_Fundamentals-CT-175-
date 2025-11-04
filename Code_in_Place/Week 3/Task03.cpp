// WAP to check whether a number is even or odd.
#include <stdio.h>

int main()
{
    int num;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check condition for even or odd
    if (num % 2 == 0)
    {
        printf("The number is Even");
    }
    else
    {
        printf("The number is Odd");
    }

    return 0;
}
