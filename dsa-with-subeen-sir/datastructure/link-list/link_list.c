#include <stdio.h>
#include <stdlib.h>

/*
Singly Linked List

Operations:
1. Create Node
2. Print
3. Prepend
4. Append
5. Insert After Node
6. Insert At Position
7. Search
8. Count
9. Delete First
10. Delete Last
11. Delete By Value
12. Delete By Position
13. Reverse
14. Destroy
*/

typedef struct node Node;

struct node
{
    int data;
    Node *next;
};

// Create Node time O(1), space O(1)
Node *create_node(int item, Node *next)
{
    Node *new_node = (Node *)malloc(sizeof(Node));

    if (new_node == NULL)
    {
        printf("Memory Allocation Failed!\n");
        exit(1);
    }

    new_node->data = item;
    new_node->next = next;

    return new_node;
}

// Print Linked List O(n), O(1)
void print_list(Node *head)
{
    Node *current = head;

    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\n");
}

// Count Nodes O(n), O(1)
int count(Node *head)
{
    int cnt = 0;

    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }

    return cnt;
}

// Search O(n), O(1)
Node *search(Node *head, int item)
{
    while (head != NULL)
    {
        if (head->data == item)
            return head;

        head = head->next;
    }

    return NULL;
}

// Insert Beginning O(1), O(1)
Node *prepend(Node *head, int item)
{
    return create_node(item, head);
}

// Insert End O(n), O(1)
Node *append(Node *head, int item)
{
    Node *new_node = create_node(item, NULL);

    if (head == NULL)
        return new_node;

    Node *current = head;

    while (current->next != NULL)
        current = current->next;

    current->next = new_node;

    return head;
}

// Insert After Specific Node O(1), O(1)
void insert_after(Node *node, int item)
{
    if (node == NULL)
        return;

    Node *new_node = create_node(item, node->next);

    node->next = new_node;
}

// Insert At Position (0-based) O(n), O(1)
Node *insert_at(Node *head, int position, int item)
{
    if (position == 0)
        return prepend(head, item);

    Node *current = head;

    for (int i = 0; current != NULL && i < position - 1; i++)
        current = current->next;

    if (current == NULL)
        return head;

    insert_after(current, item);

    return head;
}

// Remove Node by Address O(n), O(1)
Node *remove_node(Node *head, Node *node)
{
    if (head == NULL || node == NULL)
        return head;

    if (head == node)
    {
        head = head->next;
        free(node);
        return head;
    }

    Node *current = head;

    while (current->next != NULL && current->next != node)
        current = current->next;

    if (current->next == node)
    {
        current->next = node->next;
        free(node);
    }

    return head;
}

// Delete First O(1), O(1)
Node *delete_first(Node *head)
{
    if (head == NULL)
        return NULL;

    Node *temp = head;

    head = head->next;

    free(temp);

    return head;
}

// Delete Last O(n), O(1)
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

    while (current->next->next != NULL)
        current = current->next;

    free(current->next);

    current->next = NULL;

    return head;
}

// Delete By Value O(n), O(1)
Node *delete_by_value(Node *head, int item)
{
    Node *node = search(head, item);

    if (node == NULL)
        return head;

    return remove_node(head, node);
}

// Delete By Position O(n), O(1)
Node *delete_at(Node *head, int position)
{
    if (head == NULL)
        return NULL;

    if (position == 0)
        return delete_first(head);

    Node *current = head;

    for (int i = 0; current != NULL && i < position - 1; i++)
        current = current->next;

    if (current == NULL || current->next == NULL)
        return head;

    Node *temp = current->next;

    current->next = temp->next;

    free(temp);

    return head;
}

// Reverse Linked List O(n), O(1)
Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;

    while (current != NULL)
    {
        next = current->next;

        current->next = prev;

        prev = current;

        current = next;
    }

    return prev;
}

// Destroy Linked List O(n), O(1)
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

int main()
{
    Node *head = NULL;

    // Append
    head = append(head, 10);
    head = append(head, 20);
    head = append(head, 30);

    printf("Initial List: ");
    print_list(head);

    // Prepend
    head = prepend(head, 5);

    printf("After Prepend: ");
    print_list(head);

    // Insert After 20
    Node *node = search(head, 20);

    if (node != NULL)
        insert_after(node, 25);

    printf("After Insert After 20: ");
    print_list(head);

    // Insert At Position
    head = insert_at(head, 2, 15);

    printf("After Insert At Position 2: ");
    print_list(head);

    // Count
    printf("Count = %d\n", count(head));

    // Search
    node = search(head, 30);

    if (node)
        printf("Found: %d\n", node->data);
    else
        printf("Not Found\n");

    // Delete First
    head = delete_first(head);

    printf("After Delete First: ");
    print_list(head);

    // Delete Last
    head = delete_last(head);

    printf("After Delete Last: ");
    print_list(head);

    // Delete By Value
    head = delete_by_value(head, 20);

    printf("After Delete Value 20: ");
    print_list(head);

    // Delete By Position
    head = delete_at(head, 1);

    printf("After Delete Position 1: ");
    print_list(head);

    // Reverse
    head = reverse(head);

    printf("After Reverse: ");
    print_list(head);

    // Free Memory
    destroy(head);
    head = NULL;

    return 0;
}