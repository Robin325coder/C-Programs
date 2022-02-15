    struct Node {
        int data;
        struct Node* next;
    };
    
    struct Node* head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    head -> data = 5;
    head -> next = NULL;
    
    int numOfNodes = 5;
    int arr[] = {7, 2, 9, -2, 16};

    //last = points to the last added node in linked list
    //temp = points to the newly created node
    struct Node* last = head;
    struct Node* temp = NULL;
    
    int i = 0;
    while(numOfNodes) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp -> data = arr[i++];
        temp -> next = NULL;
        last -> next = temp;

        /*temp's value is assigned to "*last" so that temp can be freed
          to point to a newly created node and "*last" will now point to
          last added node in linked list
        */  
        last = temp;
        temp = NULL;
        numOfNodes--;
    }
    
    last = head;
    while(last != NULL) {
        printf("%d, ", last -> data);
        last = last -> next;
    }