def insertion_sort(arr):
    size = len(arr)

    # প্রথম element আগেই sorted ধরে নেওয়া হয়
    # তাই index 1 থেকে শুরু
    for i in range(1, size):

        item = arr[i]      # Insert করতে হবে এমন element
        j = i - 1          # Sorted অংশের শেষ index

        # যতক্ষণ আগের element বড় হবে
        # ততক্ষণ এক ঘর ডানে right shift করো
        while j >= 0 and arr[j] > item:
            arr[j + 1] = arr[j] # value 1 position right move
            j -= 1

        # খালি হওয়া position-এ item বসাও
        arr[j + 1] = item


arr = [5, 3, 8, 4, 2]

print("Before:", arr)

insertion_sort(arr)

print("After :", arr)