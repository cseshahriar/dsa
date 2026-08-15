#include <stdio.h>  // Include standard input/output library for printf function

void merge(int arr[], int left, int mid, int right) {  // Function to merge two sorted subarrays arr[left..mid] and arr[mid+1..right]
    int i, j, k;  // Declare loop counters: i for left array, j for right array, k for main array
    int size_left, size_right;  // Declare variables to store sizes of left and right subarrays

    size_left = mid - left + 1;  // Calculate number of elements in left subarray
    size_right = right - mid;  // Calculate number of elements in right subarray

    int left_arr[size_left], right_arr[size_right];  // Create temporary arrays to hold left and right subarrays
    
    for(i = 0; i < size_left; i++) {  // Loop through left subarray
        left_arr[i] = arr[left + i];  // Copy each element from original array to left temporary array
    }
    for(j = 0; j < size_right; j++) {  // Loop through right subarray
        right_arr[j] = arr[mid + 1 + j];  // Copy each element from original array to right temporary array
    }

    i = 0;  // Reset index for left subarray to start from beginning
    j = 0;  // Reset index for right subarray to start from beginning
    k = left;  // Set index for main array to start from left position

    while(i < size_left && j < size_right) {  // Loop until we reach end of either subarray
        if(left_arr[i] <= right_arr[j]) {  // Compare current elements of left and right subarrays
            arr[k] = left_arr[i];  // If left element is smaller, copy it to main array
            i++;  // Move to next element in left subarray
        } else {  // If right element is smaller
            arr[k] = right_arr[j];  // Copy right element to main array
            j++;  // Move to next element in right subarray
        }
        k++;  // Move to next position in main array
    }

    while(i < size_left) {  // If there are remaining elements in left subarray
        arr[k] = left_arr[i];  // Copy remaining left elements to main array
        i++;  // Move to next element in left subarray
        k++;  // Move to next position in main array
    }

    while(j < size_right) {  // If there are remaining elements in right subarray
        arr[k] = right_arr[j];  // Copy remaining right elements to main array
        j++;  // Move to next element in right subarray
        k++;  // Move to next position in main array
    }
}

void merge_sort(int arr[], int left, int right) {  // Recursive function to sort array arr[left..right]
    if(left >= right) {  // Base case: if array has 1 or 0 elements
        return;  // Array is already sorted, so return
    }

    int mid = left + (right - left) / 2;  // Calculate middle index to divide array into two halves
    
    merge_sort(arr, left, mid);  // Recursively sort the left half (arr[left..mid])
    merge_sort(arr, mid + 1, right);  // Recursively sort the right half (arr[mid+1..right])
    
    merge(arr, left, mid, right);  // Merge the two sorted halves back together
}

int main() {  // Main function - program entry point
    int i, n = 8;  // Declare loop counter i and set n to 8 (but array has 9 elements)
    int arr[] = {1, 5, 6, 3, 5, 8, 7, 2, 9};  // Initialize unsorted array with 9 elements
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate actual array size (9 elements)
    
    merge_sort(arr, 0, size - 1);  // Call merge_sort on entire array (indices 0 to 8)
    
    for(i = 0; i < size; i++) {  // Loop through all elements in sorted array
        printf("%d ", arr[i]);  // Print each element followed by a space
    }
    printf("\n");  // Print newline after all elements are printed
    return 0;  // Return 0 to indicate successful program execution
}