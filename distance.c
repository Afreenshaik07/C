#include<stdio.h>

void main()
{
    int distance;
    float meter, feet, inches, centimeter;

    printf("Enter the distance in kilometers: ");
    scanf("%d", &distance);

    meter = distance * 1000;
    centimeter = meter * 100;
    inches = centimeter / 2.54;
    feet = inches / 12;

    printf("Meters: %f\n", meter);
    printf("Centimeters: %f\n", centimeter);
    printf("Inches: %f\n", inches);
    printf("Feet: %f\n", feet);
}
