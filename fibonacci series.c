#include <stdio.h>

void main() {
    int prev, curr, next, i, n;
    scanf("%d", &n);
    prev = 0;
    curr = 1;
    i = 1;
    printf("%d, %d", prev, curr);
    while (i <= n - 2) {
        next = prev + curr;
        printf(", %d", next);  // Added comma for proper formatting
        prev = curr;
        curr = next;
        i = i + 1;  // Corrected increment statement
    }
}
