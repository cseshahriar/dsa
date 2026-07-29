#include <stdio.h>
/*
Stack হলো একটি Linear Data Structure যেখানে Last In First Out (LIFO) নিয়ম অনুসরণ করা হয়।
LIFO = Last In, First Out
যে element সবার শেষে ঢুকবে, সেটাই সবার আগে বের হবে।

Stack Operations
Operation | Description                    
--------- | ---------------------
Push      | নতুন element যোগ করা           
Pop       | Top element remove করা         
Peek/Top  | Top element দেখা              
isEmpty   | Stack খালি কিনা                
isFull    | Stack পূর্ণ কিনা (Array Stack) 
*/

#define STACK_MAX 100
int stack[STACK_MAX]; // Stack Array
int top = -1; // Top initially points to no element

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == STACK_MAX - 1;
}

// push
void push(int value) {
    if(isFull()) { // stack full?
        printf("Stack Overflow!\n");
        return;   // অথবা অন্য কোনো error value
    }

    // Move top to next position
    top++;  // Move top to next position
    
    stack[top] = value; // Insert value ar top
    printf("%d pushed into stack.\n", value);
}

// Pop Implementation
int pop() {
    // check stack underflow
    if(isEmpty()) {
        printf("Stack is Empty!\n");
        return -1;
    }

    // Store top value
    int value = stack[top];

    // Move top down
    top--;
    
    return value;
}

// Peek operation
int peek() { // int never empty return
    // check stack underflow
    if(isEmpty()) {
        printf("Stack is Empty!\n");
        return -1;
    }
    return stack[top];
}

void display() {
    if(isEmpty()) {
        printf("Stack is Empty!\n");
        return;
    }

    printf("\nStack Elements (Top to Bottom):\n");
    
    for(int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {

    push(10);
    push(20);
    push(30);
    display();

    printf("\nTop Element : %d\n", peek());
    printf("Popped Element : %d\n", pop());
    display();

    if (isEmpty())
        printf("\nStack is Empty\n");
    else
        printf("\nStack is Not Empty\n");

    return 0;
}