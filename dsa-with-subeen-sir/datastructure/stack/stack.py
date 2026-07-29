"""
Stack হলো একটি Linear Data Structure যেখানে
LIFO (Last In First Out) নিয়ম অনুসরণ করা হয়।

LIFO = Last In, First Out

যে element সবার শেষে ঢুকবে (Push),
সেটাই সবার আগে বের হবে (Pop)।
"""

class Stack:
    def __init__(self):
        # create an empty stack
        self.stack = []

    # check stack is empty
    def is_empty(self):
        return len(self.stack) == 0

    def empty(self):
        if self.is_empty():
            print("Stack Underflow!")
            return None

    # Push operation
    def push(self, value):
        # add element at the top (end of list)
        self.stack.append(value)
        print(f"{value} pushed into stack.")

    # Pop operations
    def pop(self):
        # check stack underflow
        self.empty()

        # Remove and return the top element
        return self.stack.pop()

    # Peek Operation
    def peek(self):
        # Check stack is empty
        self.empty()

        # Return top element without removing it
        return self.stack[-1]  # return last element

    def display(self):
        # Check stack is empty
        self.empty()

        print("\nStack Elements (Top to Bottom):")
        for item in reversed(self.stack):
            print(item)

# Driver Code
s = Stack()

s.push(10)
s.push(20)
s.push(30)

s.display()

print("\nTop Element :", s.peek())
print("Popped Element :", s.pop())

s.display()

if s.is_empty():
    print("\nStack is Empty")
else:
    print("\nStack is Not Empty")
