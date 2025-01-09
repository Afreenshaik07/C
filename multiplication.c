/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Corrected the scanf function to use & for the variable
    
    int i = 1;  // Corrected the initialization of i
    while (i <= n) {
        printf("%d\n", 5 + i * i);  // Added newline character for better output formatting
        i = i + 1;  // Corrected the increment statement
    }

    return 0;
}
