#include <stdio.h>

int main()
{
    int b = 1;
    while (b <= 5) {
        int a = b;
        while (a >=1) {
            printf("%d", a);
            a = a - 1;
        }
        printf("\n");  // Print a new line after each inner loop completes
        b = b + 1;
    }
    return 0;  // Add the missing semicolon
}
