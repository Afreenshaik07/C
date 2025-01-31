#include <stdio.h>

void main()
{
    float f, c;
    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &f);
    c = (f - 32) * 5.0 / 9.0;
    printf("Celsius temperature: %f\n", c);
}
