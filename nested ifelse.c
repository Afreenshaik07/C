#include <stdio.h>
#include <stdlib.h>  // Include the stdlib.h header for abs function

void main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);  // Corrected the scanf function to read three integers
    if (a > b) {
        if (a > c) {
            printf("%d", a);
        } else {
            printf("%d", c);  // Added else condition for a > b but c > a
        }
    } else {
        if (b > c) {
            printf("%d", b);
        } else {
            printf("%d", c);
        }
    }
}

