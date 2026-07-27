#include <stdio.h>

// Bubble Sort Function
void bubble_sort(int arr[], int n) {
    int i, j, temp;  // i = outer loop, j = inner loop, temp = দুটি সংখ্যা swap করার জন্য temporary variable
    
    // Outer loop
    // মোট n বার পর্যন্ত pass চালানো হবে
    // প্রতিটি pass শেষে সবচেয়ে বড় element শেষের দিকে চলে যায়
    for(i=0; i < n; i++) {
        // Inner loop
        // পাশের দুইটি element compare করবে
        // n - i - 1 কারণ শেষের i টি element ইতোমধ্যে sorted
        for(j=0; j < n - i - 1; j++) {
            // যদি বাম পাশের element ডান পাশের element থেকে বড় হয়
            if(arr[j] > arr[j+1]) {
                // Swap শুরু
                temp = arr[j];      // বড় value temp-এ রাখলাম
                arr[j] = arr[j+1]; // ছোট value বামে আনলাম
                arr[j+1] = temp;  // বড় value ডানে পাঠালাম
            }
        }
    }
}


int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Before: \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    bubble_sort(arr, size);

    printf("\nSorted Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}