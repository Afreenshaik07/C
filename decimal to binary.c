#include <stdio.h>

// Recursive function to convert decimal to binary
void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2);  // Recursively divide the number by 2
    }
    printf("%d", n % 2);  // Print the remainder (binary digit)
}

int main() {
    int n;

    // Input the decimal number
    scanf("%d", &n);

    // Call the recursive function to print binary representation
    decimalToBinary(n);

    printf("\n");

    return 0;
}