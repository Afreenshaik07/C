#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Sum of a + b: %d\n", a + b);
    printf("Subtraction of a - b: %d\n", a - b);
    printf("Multiplication of a * b: %d\n", a * b);
    if (b != 0)
    {
        printf("Division of a / b: %d\n", a / b);
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }
}
