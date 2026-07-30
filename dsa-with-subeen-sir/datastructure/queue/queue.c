#include <stdio.h>

#define MAX 5     // Maximum queue size

/*
A Queue is a Linear Data Structure that follows the FIFO (First In, First Out) principle.
FIFO = First In, First Out
The element inserted first is removed first.

Real-life examples:
People standing in a line.
Printer queue.

Head/Front and Tail/Rear
Enqueue, Dequeue
*/

// Queue structure
typedef struct{
    int items[MAX];  // Array to store queue elements
    int front;      // Index of first element
    int rear;      // Index of last element
} Queue;

// Initialize queue
void initQueue(Queue *q) {
    q->front = -1;  // -1 means queue is empty
    q->rear = -1;   // -1 means no last element
}

// Check queue is empty
int isEmpty(Queue *q) {
    return q->front == -1;  // True if front is -1
}

// Check queue is full
int isFull(Queue *q) {
    return q->rear == MAX - 1;   // True if rear reaches last index
}

// Insert element
void enqueue(Queue *q, int value) {
    // Cannot insert if queue is full
    if(isFull(q)) {
        printf("Queue Overflow\n");
        return;  // Exit function
    }

    // Firt Element
    if(q->front == -1) 
        q->front = 0;  // Front now points to first element

    q->rear++;  // Move rear one step right
    q->items[q->rear] = value; // Store value at rear
    printf("%d inserted\n", value);
}

// Remove first element
void dequeue(Queue *q) {
    // Cannot remove from empty queue
    if(isEmpty(q)) {
        printf("Queue Underflow\n");
        return;
    }
    printf("%d removed\n", q->items[q->front]);

    // Only one element was present
    if(q->front == q->rear) {
        q->front = -1; // Reset queue
        q->rear = -1;
    } else {
        q->front++;   // Move front to next element
    }
}

// Show first element
void peek(Queue *q) {
    // Queue has not element
    if(isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Front = %d\n", q->items[q->front]);
}

// Display all elements
void display(Queue *q) {
    // Queue empty
    if(isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");

      // Print from front to rear
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}

int main() {
    Queue q;                 // Create queue object

    initQueue(&q);           // Initialize queue
    enqueue(&q, 10);         // Insert 10
    enqueue(&q, 20);         // Insert 20
    enqueue(&q, 30);         // Insert 30

    display(&q);             // Show queue

    peek(&q);                // Show front element

    dequeue(&q);             // Remove first element
    display(&q);             // Show queue again

    enqueue(&q, 40);         // Insert 40
    enqueue(&q, 50);         // Insert 50
    display(&q);             // Final queue

    return 0;                // Program ends successfully
}