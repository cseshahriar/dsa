#include <stdio.h>

// Function to perform Binary Search
int binary_search(int arr[], int size, int target) {
    int left, right, mid;
    left = 0;   // First index of the array
    right = size - 1;  // Last index of the array

    while(left <= right) { // Continue while search space exists
        // Calculate middle index
        // Safer than (left + right) / 2 for large values
        mid = left + (right - left) / 2;

        if(arr[mid] == target) {  // If target is found
            return mid;
        } else if(target < arr[mid]) { //  Target is smaller than middle element so Search only in the left half
            right = mid - 1;  // right decrease
        } else { // Target is greater than middle element so  Search only in the right half
            left = mid + 1; // left increase
        }
    }

    return -1;   // Target not found
}

int main() {
    // Sorted array (Required)
    int arr[] = {5, 10, 15, 20, 25, 30, 35};

    // Calculate total number of elements
    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 25;
    
    // Call Binary Search function
    int result = binary_search(arr, size, target);

    // Print result
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}