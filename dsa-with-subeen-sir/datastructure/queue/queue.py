"""
Queue (FIFO - First In First Out)

enqueue()  -> Insert at rear
dequeue()  -> Remove from front
peek()     -> Show front element
"""

class Queue:

    # Constructor
    def __init__(self):
        self.items = []          # Dynamic list

    # Check queue is empty
    def is_empty(self):
        return len(self.items) == 0

    # Insert element
    def enqueue(self, value):

        self.items.append(value)     # Insert at rear

        print(f"{value} inserted")

    # Remove first element
    def dequeue(self):

        if self.is_empty():
            print("Queue Underflow")
            return

        value = self.items.pop(0)    # Remove first element

        print(f"{value} removed")

    # Show first element
    def peek(self):

        if self.is_empty():
            print("Queue is empty")
            return

        print("Front =", self.items[0])

    # Display queue
    def display(self):

        if self.is_empty():
            print("Queue is empty")
            return

        print("Queue:", self.items)


# Main

q = Queue()

q.enqueue(10)
q.enqueue(20)
q.enqueue(30)

q.display()

q.peek()

q.dequeue()

q.display()

q.enqueue(40)
q.enqueue(50)

q.display()