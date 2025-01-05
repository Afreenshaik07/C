#include <stdio.h>

void main() {
    int a, b;
    scanf("%d %d", &a, &b);  // Corrected the scanf function
    if (b > a) {
        a=b;
    }
    printf("%d",a);
}
