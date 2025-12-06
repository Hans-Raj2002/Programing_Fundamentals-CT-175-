#include <stdio.h>
#include <string.h>

union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    union Data data;

    data.i = 65;  
    printf("After assigning int 65:\n");
    printf("int: %d\n", data.i);
    printf("float: %f\n", data.f);
    printf("char: %c\n\n", data.c);

    data.f = 3.14;
    printf("After assigning float 3.14:\n");
    printf("int: %d\n", data.i);
    printf("float: %f\n", data.f);
    printf("char: %c\n\n", data.c);

    data.c = 'A';
    printf("After assigning char 'A':\n");
    printf("int: %d\n", data.i);
    printf("float: %f\n", data.f);
    printf("char: %c\n", data.c);

    return 0;
}

