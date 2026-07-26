#include <stdio.h>

// Linear search algorithms
// time complexity O(n) worst case
// space complexity O(1) use one var
int linear_search(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1; // not found
}

int main() {
    int arr[] = {60, 1, 88, 10, 11, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 11;

    int result = linear_search(arr, size, target);

    if(result != -1)
        printf("Found at index %d\n", result);
    else
        printf("Not Found\n");

    return 0;
}
