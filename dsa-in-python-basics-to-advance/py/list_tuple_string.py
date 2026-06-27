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


# Tuple: can't modify, ordered, immutable, allow duplicate
print("\ntuple")
my_tuple = ("hello", 123, 23,1,2,3)
print(my_tuple)
print(my_tuple[-1])
print(len(my_tuple))
print(my_tuple[0:2])
print(my_tuple.count(1))
print(my_tuple.index(1))
print(id(my_tuple))
my_tuple_lit = list(my_tuple)
print(my_tuple_lit)

# String
name = "Shahriar"
grade = "A"
company = " Shahriar Tech"
intro = """My name is Shahriar
I am a programmer"""

print(name)

# operations
# len
print(len(name))

# negative index
print(name[1])
print(name[-1])

# upper
print(name.upper())

# lower
print(name.lower())

# capitalize
print(name.capitalize())

# strip 
print(company)
print(company.strip())

# split
print(intro.split(" "))

# replace
print(company)
company.replace("Tech", "tech")
print(company)

# slicing
print(company[1:9])

# startswith
print(name.startswith('S'))
# endswith
print(name.endswith('r'))

# find
print(name.find('S'))

# index
print(name.index('S'))