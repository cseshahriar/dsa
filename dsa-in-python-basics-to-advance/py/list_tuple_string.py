# List: ordered, mutable(changable)
names = ["Shahriar", "Shorna", "Ayesha"]  # dynamic array
print(type(names))
print(names)
print(names[0])

# update
names[0] = "Md. Shahriar Hosen"
print(names)

# operations
print(len(names))
# negative indexing
print(names[-1])
print(names)

# append
names.append("Abdullah")
names.append(3.33)
names.append([1,2,3,4])
print(names)

# extend
names.extend([3,4,5,6])
print(names)

# insert
names.insert(4, "Sifullah")
print(names)

# remove
print(names)
names.remove(3.33)
print(names)

# pop
names.pop()
print(names)

# clear
# names.clear()
# print(names)

# min
numbers = [1, 3, 4, 2, 6, 7]
numbeers2 = numbers # deep copy | refrence copy
print(min(numbers))

# max
print(max(numbers))

# slicing
print(names[0:2])

# count
print(names.count("Ayesha"))

# sort
print(numbers.sort()) # O(n log n)

# reverse
print(numbers.sort(reverse=True))
print(numbers.reverse())  # O(N)

# copy
names.extend(numbers.copy())  # values copy / shallow copy
print(names)

# index
print(numbers.index(1))


# Touple

# String
name = "Shahriar"