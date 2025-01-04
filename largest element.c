#include <stdio.h>

// Recursive function to find the largest element in an array
int findLargest(int arr[], int size) {
    // Base case: when there's only one element, return it
    if (size == 1) {
        return arr[0];
    }

    // Find the largest in the rest of the array
    int largest = findLargest(arr, size - 1);

    // Compare the last element with the largest of the rest
    if (arr[size - 1] > largest) {
        return arr[size - 1];
    }
    return largest;
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

    // Call the recursive function and print the largest element
    printf("Largest element: %d\n", findLargest(arr, n));

    return 0;
}