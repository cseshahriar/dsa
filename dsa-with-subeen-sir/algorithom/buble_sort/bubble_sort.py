
# (n-1) + (n-2) + (n-3) + ... + 2 + 1
# n(n-1) / 2

# i, j, temp একই ৩টি Variable
# Time = O(n²)

# Space = O(1)
def bubble_sort(arr):
    size = len(arr)
    for i in range(size - 1):
        for j in range(size - i - 1):
            if arr[j] > arr[j+1]:
                # Swap শুরু
                temp = arr[j]; # বড় value temp-এ রাখলাম
                arr[j] = arr[j+1]; # ছোট value বামে আনলাম
                arr[j+1] = temp;  # বড় value ডানে পাঠালাম
            

    return arr


numbers = [5, 3, 8, 4, 2]
print(f"Before Bubble sort {numbers} \n")
sorted_result = bubble_sort(numbers)
print(f"After Bubble sort {sorted_result} \n")