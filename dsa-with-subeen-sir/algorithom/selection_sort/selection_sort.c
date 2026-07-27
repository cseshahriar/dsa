#include <stdio.h>

// Selection Sort
// Time Complexity: O(n^2)
// Space Complexity: O(1)

int selection_sort(int arr[], int n) {
    int i, j, index_min, temp;

    for(i=0; i < n - 1; i++) {
        index_min = i; // current index

        // find minimum value
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[index_min]) { // j choto hoy i teke, then shift j in current index
                index_min = j; 
            }
        }

        if(index_min != i) { // swap
            temp = arr[i];
            arr[i] = arr[index_min];
            arr[index_min] = temp;
        }
    }
}

int main() {
    int arr[] = {10, 5, 2, 8, 7};
    // Calculate total number of elements
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting:\n");

    for(int i=0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    selection_sort(arr, size);
       printf("\nAfter sorting:\n");
    
    for(int i=0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}