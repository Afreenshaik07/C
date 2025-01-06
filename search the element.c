#include <stdio.h>

// Recursive function for binary search
int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1;  // Base case: element not found
    }
    
    int mid = (left + right) / 2;
    
    if (arr[mid] == target) {
        return mid;  // Target found
    }
    if (arr[mid] > target) {
        return binarySearch(arr, left, mid - 1, target);  // Search in the left half
    }
    return binarySearch(arr, mid + 1, right, target);  // Search in the right half
}

int main() {
    int n, target;

    // Input size and array elements
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target element to search
    scanf("%d", &target);

    // Perform binary search and output the result
    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1) {
        printf("%d\n", arr[result]);  // Print the found element
    } else {
        printf("Element not found\n");
    }

    return 0;
}