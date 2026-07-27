# Selection Sort
# Time Complexity: O(n^2)
# Space Complexity: O(1)

def selection_sort(arr):
    size = len(arr)

    for i in range(size - 1):
        index_min = i

        # find minimum value of current iterations
        for j in range(i + 1, size):
            if arr[j] < arr[index_min]:
                index_min = j

        if index_min != i:   # swap if needed
            # arr[i], arr[index_min] = arr[index_min], arr[i] 
            temp = arr[i]  # save current element
            arr[i] = arr[index_min]  # move minimum here
            arr[index_min] = temp  # move saved element there


arr = [10, 5, 2, 8, 7]

print("Before sorting:")
print(arr)

selection_sort(arr)

print("After sorting:")
print(arr)