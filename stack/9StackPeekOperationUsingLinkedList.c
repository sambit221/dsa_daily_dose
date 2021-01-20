// WAP to create a stack using a linked list and show elements using peek function

#include<stdio.h>
#include<stdlib.h>

// declaring it as a global variable
struct Node *top = NULL;

// linked list created
struct Node{
    int data;
    struct Node *next;
};

// LinkedList Traversal function
void linkedListTraversal(struct Node *ptr){
    while (ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }   
}

// isEmpty Function to check the stack is empty or not
int isEmpty(struct Node *top){
    if (top==NULL){
        return 1;
    }
    else{
        return 0;
    }    
};

// isFull Function to check the stack is full or not
int isFull(struct Node *top){
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p==NULL){
        return 1;
    }
    else{
        return 0;
    }   
};

// here actually we are creating a linked list node i.e, space to store a stack element
struct Node *push(struct Node *top, int x){
    if (isFull(top)){
        printf("Stack Overflow! We can't push %d into the stack\n", x);
    }
    else{
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
    }   
};

// here actually we are creating a linked list node i.e, space to store a stack element
// to avoid the conflict we have changed the local variable name and the changes needed in global variable... we have taken global variable their
int pop(struct Node *tp){
    if (isEmpty(tp)){
        printf("Stack underflow! We can't pop into the stack\n");
        return 0;
    }
    else{
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n = tp;
        top = (tp)->next;
        int x = n->data;
        return x;
    }   
};

int peek(int pos){
    struct Node* ptr =top;
    for (int i = 0; i < pos-1 && ptr!= NULL; i++){
        ptr= ptr->next;
    }
    if (ptr!=NULL){
        return ptr->data;
    }
    else{
        return -1;
    }   
}

int main(int argc, char const *argv[]){
    
    // pushing an element to the stack(created using linkedlist)
    top = push (top, 78);
    top = push (top, 8);
    top = push (top, 3);
    top = push (top, 45);
    top = push (top, 6);
    top = push (top, 657);
    top = push (top, 21);
    printf("Stack before pop operation:\n");
    linkedListTraversal(top);
    printf("==========================================\n");

    for (int i = 1; i < 8; i++){
        printf("Value at position %d is : %d\n",i, peek(i));
    }    
    return 0;
}

// we have added the element 21 at the end but during traversal it came first because stack follows the rule of last in first out

/*-----------output------------------
Stack before pop operation:
Element: 21
Element: 657
Element: 6
Element: 45
Element: 3
Element: 8
Element: 78
==========================================
Value at position 1 is : 21
Value at position 2 is : 657
Value at position 3 is : 6
Value at position 4 is : 45
Value at position 5 is : 3
Value at position 6 is : 8
Value at position 7 is : 78
*/