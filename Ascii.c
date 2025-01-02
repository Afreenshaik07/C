#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Upper\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lower\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Number\n");
    } else {
        printf("Symbol\n");
    }

    return 0;
}