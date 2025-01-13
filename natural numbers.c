#include <stdio.h>

// Recursive function to find the sum of first n natural numbers
int sum(int n) {
    if (n == 0)
        return 0;  // Base case
    else
        return n + sum(n - 1);  // Recursive case
}

int main() {
    int n;

    // Input the value of n
    scanf("%d", &n);

    // Output the result
    printf("%d\n", sum(n));

    return 0;
}