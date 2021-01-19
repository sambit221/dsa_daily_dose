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
// we are using doublr * because each time we are dereferencung it and using it
int pop(struct Node **top){
    if (isEmpty(*top)){
        printf("Stack underflow! We can't pop into the stack\n");
        return 0;
    }
    else{
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n = *top;
        *top = (*top)->next;
        int x = n->data;
        return x;
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
    printf("Stack before pop operation:\n");
    linkedListTraversal(top);
    printf("==========================================\n");

    // here we are passing the address of top pointer because the changes we are making in the pop function is not exexuting on thp top present in the main function 
    // so we are passing &top to the pop function

    /* 1. either we can do it by passing &top and using double * at the pop function or
    2. We can declare top as a global variable so that the changes made in any function top will be saved
    this 2nd method is our next program
    */
   // it is the 1st type so we have passed &top, and used dereferecing operator(**) in the pop function for eachtime we used top pointer
    printf("Using pop operation over the top element : %d\n",pop(&top));
    printf("Stack after pop operation:\n");
    linkedListTraversal(top);

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
Using pop operation over the top element : 21
Stack after pop operation:
Element: 657
Element: 6
Element: 45
Element: 3
Element: 8
Element: 78
*/