#include <stdio.h>

// for new element sort, old array must already sorted
// rules of thumb if less than 100 element and not reverse sorted then use insertion sort
void insertion_sort(int arr[], int size) {
    int i, j, item;
    
    for(i=1; i < size; i++) {
        item = arr[i]; // current value

        // akane item ar jonno ope space find korte hobay
        j = i - 1;
        while(j >= 0 && arr[j] > item) {
            // arr[j] ke tar porer gore (j+1) reke dei
            arr[j+1] = arr[j];
            j = j - 1;
        }

        // a[j+1] holo item ar jonno perfect space
        arr[j+1] = item;
    }
}

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Before: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    insertion_sort(arr, size);

    printf("\nSorted Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}