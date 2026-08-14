#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node {
    int data;
    Node *left;
    Node *right;
};

Node *create_node(int item) {
    Node *new_node = (Node *) malloc(sizeof(Node));
    if(new_node == NULL) {
        printf("Error! Could not create a new node\n");
        exit(1);
    }
    new_node->data = item;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

void add_left_child(Node *node, Node *child) {
    node->left = child;
}

void add_right_child(Node *node, Node *child) {
    node->right = child;
}

Node *create_tree() {
    Node *two = create_node(2); // root
    Node *seven = create_node(7);
    Node *nine = create_node(9);
    add_left_child(two, seven);
    add_right_child(two, nine);

    Node *one = create_node(1);
    Node *six = create_node(6);
    add_left_child(seven, one);
    add_right_child(seven, six);

    return two;
}

// pre order traversal: root, left, right
void pre_order_traversal(Node *node) {
    printf("%d ", node->data);
    
    // recurssion
    if(node->left != NULL) { // left a jotokkon null na hocce
        pre_order_traversal(node->left);
    }

    // recurssion
    if(node->right != NULL) { // right a jotokkon null na hocce
        pre_order_traversal(node->right);
    }
}

// post order traversal: left, right, root
void post_order_traversal(Node *node) {
    // input: tree, root
    // visit tree, root, left
    // visit tree, root, right
    // visit root 
    // lef teke root
    
    // recurssion
    if(node->left != NULL) { // left a jotokkon null na hocce
        post_order_traversal(node->left);
    }

    // recurssion
    if(node->right != NULL) { // right a jotokkon null na hocce
        post_order_traversal(node->right);
    }
    printf("%d ", node->data);
}


// in order traversal: left, right, root
void in_order_traversal(Node *node) {
    // input: tree, root
    // visit tree, root, left
    // visit root 
    // visit tree, root, right
    
    // recurssion
    if(node->left != NULL) { // left a jotokkon null na hocce
        in_order_traversal(node->left);
    }

    printf("%d ", node->data);

    // recurssion
    if(node->right != NULL) { // right a jotokkon null na hocce
        in_order_traversal(node->right);
    }
}

int main() {

    Node *root = create_tree();
    // printf("%d\n", root->data);

    pre_order_traversal(root);
    printf("\n");
    
    post_order_traversal(root);
    printf("\n");

    in_order_traversal(root);
    return 0;
}