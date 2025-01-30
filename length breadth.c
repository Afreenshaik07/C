#include <stdio.h>

void main()
{
    float l, b, r, area_R, peri_R, area_C, circ;
    printf("\nEnter the length and breadth of the rectangle: ");
    scanf("%f %f", &l, &b);
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    area_R = l * b;
    peri_R = 2 * (l + b);
    area_C = 3.14 * r * r;
    circ = 2 * 3.14 * r;
    printf("\nArea of rectangle: %f", area_R);
    printf("\nPerimeter of rectangle: %f", peri_R);
    printf("\nArea of circle: %f", area_C);
    printf("\nCircumference of circle: %f\n", circ);
}
