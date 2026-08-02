#include <stdio.h>
#include <stdlib.h>

/*
Linked List: Linked List হলো একটি Linear Data Structure যেখানে element গুলো memory-তে continuous থাকে না, data, next।

Each node contains:
    1. Data
    2. Pointer to next node

কেন Linked List ব্যবহার করি?
    Array এর সমস্যা
    Size fixed
    Insert করতে Shift করতে হয়
    Delete করতে Shift করতে হয়

Linked List এর সুবিধা
    ✅ Dynamic Size
    ✅ সহজে Insert
    ✅ সহজে Delete
*/

typedef struct node Node;

struct node {
    int data;
    Node *next; // pointer/address/next node point
};

// create a node
Node *create_node(int item, Node *next) {
    Node *new_node = (Node *) malloc(sizeof(Node)); // dynamic memery allocation
    if(new_node == NULL) {
        printf("Error! Could not create a new node\n");
        exit(1);
    }
    new_node->data = item;
    new_node->next = next;
    return new_node;
}

int main() {
    Node *n;
    n = create_node(10, NULL);
    printf("data %d\n", n->data);
    return 0;

}