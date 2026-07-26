def binary_search(arr, target):
    # Start searching from the first index
    left = 0

    # End searching at the last index
    right = len(arr) - 1

    # Continue searching while the search space exists
    while left <= right:
        # Find the middle index
        # is integer division (returns whole number)
        mid = (left + right) // 2

        if arr[mid] == target:  # If middle element is the target, return position
            return mid

        # যদি মাঝের element (arr[mid]) target-এর থেকে ছোট হয়,
        # তাহলে target শুধুমাত্র ডান পাশেই থাকতে পারে (কারণ array sorted)।
        # তাই বাম পাশের সব element (mid সহ) বাদ দিয়ে,
        # left-কে mid-এর পরের index (mid + 1) থেকে শুরু করি।
        if arr[mid] < target:
            left = mid + 1

        # অন্যথায় arr[mid] অবশ্যই target-এর থেকে বড়।
        # তাই target শুধুমাত্র বাম পাশেই থাকতে পারে।
        # ডান পাশের সব element (mid সহ) বাদ দিয়ে,
        # right-কে mid-এর আগের index (mid - 1) এ নিয়ে আসি।
        else:
            right = mid - 1

    # If loop finishes, target doesn't exist
    return -1


# Sorted array (Required)
numbers = [5, 10, 15, 20, 25, 30, 35]

target = 25  
# target = 5

result = binary_search(numbers, target)

if result != -1:
    print("Element found at index:", result)
else:
    print("Element not found")
