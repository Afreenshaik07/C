#include <stdio.h>

// Recursive function to find the sum of array elements
int sumArray(int arr[], int size) {
    // Base case: if size is 0, return 0 (no elements to sum)
    if (size == 0) {
        return 0;
    }
    
    // Recursive case: sum the current element with the sum of the rest of the array
    return arr[size - 1] + sumArray(arr, size - 1);
}

int main() {
    int n;

    // Input the size of the array
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the recursive function and print the sum
    printf("Sum of array elements: %d\n", sumArray(arr, n));

    return 0;
}