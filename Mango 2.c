#include <stdio.h>

int main() {
    int rows, cols, tree;
    
    // Read input
    scanf("%d", &rows);
    scanf("%d", &cols);
    scanf("%d", &tree);

    // Determine if the tree is a mango tree
    if (tree <= cols ||  // First row
        tree % cols == 1 ||  // First column
        tree % cols == 0) {  // Last column
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
