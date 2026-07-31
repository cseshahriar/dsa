#include <stdio.h>

#define MAX 5

/*
Stack হলো একটি Linear Data Structure যেখানে
LIFO (Last In, First Out) নিয়ম অনুসরণ করা হয়।

LIFO = যে element সবার শেষে ঢুকবে,
সেটাই সবার আগে বের হবে।

Operations:
1. Push    -> নতুন element যোগ করা
2. Pop     -> উপরের element বের করা
3. Peek    -> উপরের element দেখা
4. Display -> সব element দেখানো
*/

typedef struct
{
    int data[MAX];
    int top;
} Stack;

// Initialize Stack
void init(Stack *s)
{
    s->top = -1;
}

// Check if stack is empty
int isEmpty(Stack *s)
{
    return s->top == -1;
}

// Check if stack is full
int isFull(Stack *s)
{
    return s->top == MAX - 1;
}

// Push operation
void push(Stack *s, int value)
{
    if (isFull(s))
    {
        printf("Stack Overflow!\n");
        return;
    }

    s->top++;
    s->data[s->top] = value;

    printf("%d pushed into stack.\n", value);
}

// Pop operation
int pop(Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack Underflow!\n");
        return -1;
    }

    int value = s->data[s->top];
    s->top--;

    return value;
}

// Peek operation
int peek(Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is Empty!\n");
        return -1;
    }

    return s->data[s->top];
}

// Display stack
void display(Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is Empty!\n");
        return;
    }

    printf("Stack (Top -> Bottom): ");

    for (int i = s->top; i >= 0; i--)
    {
        printf("%d ", s->data[i]);
    }

    printf("\n");
}

int main()
{
    Stack s;

    init(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    push(&s, 50);

    display(&s);

    printf("Top Element = %d\n", peek(&s));

    printf("Popped = %d\n", pop(&s));
    printf("Popped = %d\n", pop(&s));

    display(&s);

    printf("Top Element = %d\n", peek(&s));

    return 0;
}