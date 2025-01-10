#include <stdio.h>

int main()
{
    int b = 5;
    while (b >= 1) {
        int a = 1;
        
        while (a <=b) {
            printf("%d", a);
            a = a + 1;
        }
        printf("\n");  // Print a new line after each inner loop completes
        b = b - 1;
    }
    return 0;  // Add the missing semicolon
}
