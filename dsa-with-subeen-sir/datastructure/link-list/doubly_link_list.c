#include <stdio.h>
#include <stdlib.h>

/*
==================================================
Doubly Linked List

Each Node Contains:
1. Data
2. Pointer to Previous Node
3. Pointer to Next Node

Operations
----------
1. Create Node
2. Print Forward
3. Print Backward
4. Count
5. Search
6. Prepend
7. Append
8. Insert After Node
9. Insert At Position
10. Delete First
11. Delete Last
12. Delete By Value
13. Delete By Position
14. Reverse
15. Destroy

==================================================
*/

typedef struct node Node;

struct node {
    int data;
    Node *prev;
    Node *next;
};


//--------------------------------------------------
// Create Node
// Time : O(1)
// Space: O(1)
//--------------------------------------------------
Node *create_node(int item) {
    Node *new_node = (Node *) malloc(sizeof(Node));
    if(new_node == NULL) {
        printf("Memory Allocation Failed!\n");
        exit(1);
    }

    new_node->data = item;
    new_node->prev = NULL;
    new_node->next = NULL;
    return new_node;
}

//--------------------------------------------------
// Print Forward
// Time : O(n)
// Space: O(1)
//--------------------------------------------------
void print_forward(Node *head) {
    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}


//--------------------------------------------------
// Print Backward
// Time : O(n)
// Space: O(1)
//--------------------------------------------------
void print_backward(Node *head) {
    if(head == NULL) {
        printf("\n");
        return;
    }

    while(head->next != NULL)
        head = head->next;

    while(head != NULL) {
        printf("%d ", head->data);
        head = head->prev;
    }

    printf("\n");
}

//--------------------------------------------------
// Count Nodes
// Time : O(n)
// Space: O(1)
//--------------------------------------------------
int count(Node *head) {
    int cnt = 0;
    while(head != NULL) {
        cnt++;
        head = head->next;
    }
    return cnt;
}


//--------------------------------------------------
// Search
// Time : O(n)
// Space: O(1)
//--------------------------------------------------
Node *search(Node *head, int item) {
    while(head != NULL) {
        if(head->data == item) {
            return head;
        }
        head = head->next;
    }
    return NULL;
}


//--------------------------------------------------
// Prepend
// Time : O(1)
// Space: O(1)
//--------------------------------------------------
Node *prepend(Node *head, int item) {
    Node *new_node = create_node(item);
    new_node->next = head;
    if(head != NULL)
        head->prev = new_node;

    return new_node;
}


//--------------------------------------------------
// Append
// Time : O(n)
// Space: O(1)
//--------------------------------------------------
Node *append(Node *head, int item) {
    Node *new_node = create_node(item);

    if(head == NULL)
        return new_node;

    Node *current = head;
    
    while(current->next != NULL)
        current = current->next;

    current->next = new_node;
    new_node->prev = current;

    return head;
}

//--------------------------------------------------
// Insert After
// Time : O(1)
// Space: O(1)
//--------------------------------------------------
void insert_after(Node *node, int item) {
    if(node == NULL)
        return;

    Node *new_node = create_node(item);

    new_node->next = node->next;
    new_node->prev = node;

    if(node->next != NULL)
        node->next->prev = new_node;

    node->next = new_node;
}

//--------------------------------------------------
// Insert At Position
// Position starts from 0 (0-based indexing)
// Time : O(n)
// Space: O(1)
//--------------------------------------------------
Node *insert_at(Node *head, int position, int item)
{
    // If inserting at the beginning,
    // call prepend() because it already handles this case.
    if (position == 0)
        return prepend(head, item);

    // Start from the first node.
    Node *current = head;

    // Move to the node just before the insertion position.
    // Example:
    // Position = 2
    // List: 10 <-> 20 <-> 30
    // current will stop at node 20.
    for (int i = 0; current != NULL && i < position - 1; i++)
    {
        current = current->next;
    }

    // If position is outside the list,
    // do nothing and return the original head.
    if (current == NULL)
        return head;

    // Insert the new node after 'current'.
    // insert_after() updates all required pointers.
    insert_after(current, item);

    // Head does not change (unless position == 0,
    // which was already handled above).
    return head;
}

//--------------------------------------------------
// Delete First
// Time : O(1)
// Space: O(1)
//--------------------------------------------------
Node *delete_first(Node *head)
{
    if (head == NULL)
        return NULL;

    Node *temp = head;

    head = head->next;

    if (head != NULL)
        head->prev = NULL;

    free(temp);

    return head;
}

//--------------------------------------------------
// Delete Last
// Time : O(n)
// Space: O(1)
//--------------------------------------------------
Node *delete_last(Node *head)
{
    if (head == NULL)
        return NULL;

    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }

    Node *current = head;

    while (current->next != NULL)
        current = current->next;

    current->prev->next = NULL;

    free(current);

    return head;
}

//--------------------------------------------------
// Delete By Value
// Time : O(n)
// Space: O(1)
//--------------------------------------------------
Node *delete_by_value(Node *head, int item)
{
    Node *node = search(head, item);

    if (node == NULL)
        return head;

    if (node == head)
        return delete_first(head);

    if (node->next != NULL)
        node->next->prev = node->prev;

    if (node->prev != NULL)
        node->prev->next = node->next;

    free(node);

    return head;
}


//--------------------------------------------------
// Delete By Position
// Time : O(n)
// Space: O(1)
//--------------------------------------------------
Node *delete_at(Node *head, int position)
{
    if (head == NULL)
        return NULL;

    if (position == 0)
        return delete_first(head);

    Node *current = head;

    for (int i = 0; current != NULL && i < position; i++)
        current = current->next;

    if (current == NULL)
        return head;

    if (current->next != NULL)
        current->next->prev = current->prev;

    if (current->prev != NULL)
        current->prev->next = current->next;

    free(current);

    return head;
}


//--------------------------------------------------
// Reverse
// Time : O(n)
// Space: O(1)
//--------------------------------------------------
Node *reverse(Node *head)
{
    Node *current = head;
    Node *temp = NULL;

    while (current != NULL)
    {
        temp = current->prev;

        current->prev = current->next;
        current->next = temp;

        current = current->prev;
    }

    if (temp != NULL)
        head = temp->prev;

    return head;
}

//--------------------------------------------------
// Destroy
// Time : O(n)
// Space: O(1)
//--------------------------------------------------
void destroy(Node *head)
{
    Node *temp;

    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}


//--------------------------------------------------
// Main
//--------------------------------------------------
int main()
{
    Node *head = NULL;

    // Append
    head = append(head, 10);
    head = append(head, 20);
    head = append(head, 30);

    printf("Initial List (Forward): ");
    print_forward(head);

    printf("Initial List (Backward): ");
    print_backward(head);

    // Prepend
    head = prepend(head, 5);

    printf("\nAfter Prepend:\n");
    print_forward(head);

    // Insert After
    Node *node = search(head, 20);

    if (node != NULL)
        insert_after(node, 25);

    printf("\nAfter Insert After 20:\n");
    print_forward(head);

    // Insert At Position
    head = insert_at(head, 2, 15);

    printf("\nAfter Insert At Position 2:\n");
    print_forward(head);

    printf("\nCount = %d\n", count(head));

    // Search
    node = search(head, 30);

    if (node)
        printf("Found: %d\n", node->data);
    else
        printf("Not Found\n");

    // Delete First
    head = delete_first(head);

    printf("\nAfter Delete First:\n");
    print_forward(head);

    // Delete Last
    head = delete_last(head);

    printf("\nAfter Delete Last:\n");
    print_forward(head);

    // Delete By Value
    head = delete_by_value(head, 20);

    printf("\nAfter Delete Value 20:\n");
    print_forward(head);

    // Delete By Position
    head = delete_at(head, 1);

    printf("\nAfter Delete Position 1:\n");
    print_forward(head);

    // Reverse
    head = reverse(head);

    printf("\nAfter Reverse (Forward):\n");
    print_forward(head);

    printf("After Reverse (Backward):\n");
    print_backward(head);

    // Destroy
    destroy(head);
    head = NULL;

    return 0;
}