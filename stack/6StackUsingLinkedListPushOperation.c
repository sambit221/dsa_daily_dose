// WAP to create a stack using a linked list and push elements into it

#include<stdio.h>
#include<stdlib.h>

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
        printf("Stack Overflow\n");
    }
    else{
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
    }   
};

int main(int argc, char const *argv[]){
    // top is a pointer node which points the first element of the stack
    struct Node *top = NULL;
    // pushing an element to the stack(created using linkedlist)
    top = push (top, 78);
    top = push (top, 8);
    top = push (top, 3);
    top = push (top, 45);
    top = push (top, 6);
    top = push (top, 657);
    top = push (top, 21);
    printf("Stack is created:\n");
    linkedListTraversal(top);
    return 0;
}

// we have added the element 21 at the end but during traversal it came first because stack follows the rule of last in first out

/*-----------output------------------
Stack is created:
Element: 21
Element: 657
Element: 6
Element: 45
Element: 3
Element: 8
Element: 78
*/