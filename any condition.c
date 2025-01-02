#include <stdio.h>
#include <stdlib.h>  // Include the stdlib.h header for abs function

void main() {
    int a, b;
    scanf("%d %d", &a, &b);  // Corrected the scanf function
    printf("%d", (a + b + abs(a - b)) / 2);  // Corrected the parentheses
}
