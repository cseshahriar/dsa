# Multi line comment
"""Python basics
concepts practice"""

# print
print("Hello World")

# Variables: Variable like a container that stoe data
# Naming convension:a-z,A-Z,0-9,_,number not first, start with char(a-z), case sensitive, readable, descriptive
monday = 87  # Attendance of Moday
tuesday = 64 # Attendence of Tuesday
avg = (monday + tuesday) / 2
print(avg)

# Single Line Comments: unexecutable statements

# i/o
name = input("Enter Name: ")
print(f"Name {name}")

age = int(input("Enget age: "))
print(f"Age {age}\n")

# Operators
# ================== Arithmetic Operators: Use to math calculations ================
# + (Addition)
# - (Subtraction)
# * (Multiplication)
# / (Division)
# // (Floor division)
# % (Modulo)
# ** (Exponentiation)

a = 15
b = 4

print(f"Addition: {a} + {b} = {a + b}")          # 19
print(f"Subtraction: {a} - {b} = {a - b}")       # 11
print(f"Multiplication: {a} * {b} = {a * b}")    # 60
print(f"Division: {a} / {b} = {a / b}")          # 3.75 (Returns a float)
print(f"Floor Division: {a} // {b} = {a // b}")  # 3 (Drops the decimal), int division
print(f"Modulo: {a} % {b} = {a % b}")            # 3 (Remainder of 15/4)
print(f"Exponentiation: {a} ** {b} = {a ** b}")  # 50625 (15 to the power of 4)

# ====== Logical Operators: Used to combine conditional statements ======
x = 5
print(x > 3 and x < 10)  # Output: True
print(x > 10 or x < 4)  # Output: False (neither is true)
y = True
print(not y)  # Output: False

# ====== Comparison Operators: Used to compare values ======
# == (Equal to)
# != (Not equal to)
# > (Greater than)
# < (Less than)
# >= (Greater than or equal to)
# <= (Less than or equal to)
x = 10
y = 20

# 1. Equal to (==)
print(f"Is {x} == {y}? {x == y}")  # False

# 2. Not equal to (!=)
print(f"Is {x} != {y}? {x != y}")  # True

# 3. Greater than (>)
print(f"Is {x} > {y}? {x > y}")    # False

# 4. Less than (<)
print(f"Is {x} < {y}? {x < y}")    # True

# 5. Greater than or equal to (>=)
print(f"Is {x} >= 10? {x >= 10}")  # True

# 6. Less than or equal to (<=)
print(f"Is {y} <= 20? {y <= 20}")  # True

# ====== Bitwise operators: Used to manipulate individual bits of data ======
# Defining our variables
a = 5  # Binary: 0000 0101
b = 3  # Binary: 0000 0011

# 1. Bitwise AND (&)
print(f"a & b  = {a & b}")  # Output: 1

# 2. Bitwise OR (|)
print(f"a | b  = {a | b}")  # Output: 7

# 3. Bitwise XOR (^)
print(f"a ^ b  = {a ^ b}")  # Output: 6

# 4. Bitwise NOT (~)
# Remember: ~x is equivalent to -(x + 1)
print(f"~a     = {~a}")  # Output: -6

# 5. Left Shift (<<)
# Shifts bits of 5 to the left by 2 positions (5 * 2^2)
print(f"a << 2 = {a << 2}")  # Output: 20

# 6. Right Shift (>>)
# Shifts bits of 5 to the right by 1 position (5 // 2^1)
print(f"a >> 1 = {a >> 1}")  # Output: 2

# ======== if-else statement: ===============
age = 18

if age >= 18:
    print("You are eligible to vote.")
else:
    print("You are not eligible to vote.")

# Control Statements (if-elif-else)
score = 85

if score >= 80:
    print("Grade: A")
elif score >= 60:
    print("Grade: B")
else:
    print("Grade: F")

# Loops (For & While)
print("Counting from 1 to 5:")
for i in range(1, 6):
    print(i)

# while loops
print("\nReverse While loops")
countdown = 5
while countdown > 0:
    print(countdown)
    countdown -= 1

print("\n While loops")
m = 1
while m <= 5:
    print(m)
    m += 1

# ====== Data Types: Used to classify and store different types of data values ======
# Python has the following data types built-in by default, in these categories:

# Text Type:	str
# Numeric Types:	int, float, complex
# Sequence Types:	list, tuple, range
# Mapping Type:	dict
# Set Types:	set, frozenset
# Boolean Type:	bool
# Binary Types:	bytes, bytearray, memoryview
# None Type:	NoneType

# Text Type
x_str = "Hello"

# Numeric Types
x_int = 10
x_float = 10.5 
x_complex = 2 + 3j

# Sequence Types
x_list = [1, 2]
x_tuple = (1, 2)
x_range = range(5)

# Mapping Type
x_dict = {"key": "value"}

# Set Types
x_set = {1, 2}
x_frozenset = frozenset([1, 2])

# Boolean Type
x_bool = True

# Binary Types
x_bytes = b"Hello"
x_bytearray = bytearray(5)
x_memview = memoryview(b"Hello")

# None Type
x_none = None

# =========== Functions ==============
# Defining a regular function
print("\n functions")
def calculate_area(width, height):
    return width * height

# Calling the function
room_area = calculate_area(12, 15)
print(f"The room area is: {room_area}")

# Defining a quick Lambda function (Anonymous function)
square = lambda x: x ** 2
print(f"Square of 5 is: {square(5)}")