#include <stdio.h>

void main()
{
    int c, d, t;
    printf("Enter two integers: ");
    scanf("%d %d", &c, &d);
    printf("\nBefore interchange:");
    printf("\nc value: %d", c);
    printf("\nd value: %d", d);
    t = c;
    c = d;
    d = t;
    printf("\nAfter interchange:");
    printf("\nc value: %d", c);
    printf("\nd value: %d", d);
}
