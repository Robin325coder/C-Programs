//insertion in a binary tree by level order using doubly linked list queue
/*
in this program, unused memory has not been freed when queue is being dequeued.
it may lead to dangling pointer problem and memory leaks.
*/
#include <stdio.h>
#include <stdlib.h>

// a node in a tree
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// queue structure for address of nodes in a tree
struct Queue {
    struct Node *node;
    struct Queue *next;
    struct Queue *prev;
};
struct Queue *front = NULL;
struct Queue *rear = NULL;

struct Node* createNewNode(int); // create new node
int isQueueEmpty(); // check if queue is empty or not
void enqueue(struct Node*); // enter node in queue
struct Node* dequeue(); // remove node from queue
void inorderTraversal(struct Node*); // inorder traversal of tree

int main()
{
    int a[] = {1,2,3,4,5,6};
    int length = sizeof(a)/sizeof(a[0]);
    int iter = 0;
    
    struct Node *root, *parent;
    root = createNewNode(a[iter++]);
    parent = root;
    enqueue(parent);
    --length;
    
    while(isQueueEmpty() != -1 && length > 0) {
        struct Node *temp = NULL;
        parent = dequeue();
        
        while(length > 0 && (parent->left == NULL || parent->right == NULL)) {
            if(parent->left == NULL) {
                temp = createNewNode(a[iter++]);
                parent -> left = temp;
            }
            else {
                temp = createNewNode(a[iter++]);
                parent -> right = temp;
            }
            enqueue(temp);
            temp = NULL;
            length--;
        }
    }

    inorderTraversal(root);
    
    return 0;
}

struct Node* createNewNode(int value) {
    struct Node *temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> data = value;
    temp -> left = NULL;
    temp -> right = NULL;
    return temp;
}

int isQueueEmpty() {
    if(front == NULL && rear == NULL) {
        return -1;
    }
    return 0;
}

void enqueue(struct Node *val) {
    struct Queue *temp = NULL;
    if(isQueueEmpty() == -1) {
        temp = (struct Queue*)malloc(sizeof(struct Queue));
        temp -> node = val;
        temp -> next = NULL;
        temp -> prev = NULL;
        front = temp;
        rear = front;
        temp = NULL;
    }
    else {
        temp = (struct Queue*)malloc(sizeof(struct Queue));
        temp -> node = val;
        temp -> next = NULL;
        rear -> next = temp;
        temp -> prev = rear;
        rear = temp;
        temp = NULL;
    }
    
    // Current Queue Traversal
    // struct Queue *elem;
    // elem = front;
    // while(elem != NULL) {
    //     printf("%d, ", elem -> node -> data);
    //     elem = elem -> next;
    // }
    // printf("\n");
}

struct Node* dequeue() {
    if(isQueueEmpty() == -1) {
        return NULL;
    }
    else {
        struct Node *temp = NULL;
        temp = front -> node;
        
        if(front -> next == NULL) {
            front = front -> next;
            rear = front;
        }
        else {
            front = front -> next;
            front -> prev = NULL;
        }
        return temp;
    }
}

void inorderTraversal(struct Node *node) {
    if(node == NULL)
        return;

    inorderTraversal(node -> left);
    printf("%d ", node -> data);
    inorderTraversal(node -> right);
}