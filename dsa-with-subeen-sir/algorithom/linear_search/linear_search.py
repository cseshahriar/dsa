# time complexity O(n) and space complexity o(1)
def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    
    return -1 # not found


numbers = [10, 25, 40, 15, 30]
target = 15
result = linear_search(numbers, target)

if result != -1:
    print(f"Found at index {result}")
else:
    print("Not Found")
