// WAP to push elements into the stack and check stack overflow condition

#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};
// function to check stack is empty or not
int isEmpty( struct stack *ptr){
    if (ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

// function to check stack is full or not
int isFull( struct stack *ptr){
    if (ptr->top == ptr->size-1){
        return 1;
        }
    else{
        return 0;
    }
}

// function to push an element into stack
int pop( struct stack *ptr){
    if (isEmpty(ptr)){
        printf("Stack underflow! Can't pop from the stack.\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];  
        ptr->top--; 
        return val;    
    } 
}

int main(int argc, char const *argv[]){
    // *s means struct pointers so that we can directly point its elements
    struct stack *sp;
    sp -> size = 10;
    sp -> top = -1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully.\n\n");
    printf("Before pushing (empty stack) : %d\n",isFull(sp));

    // adding element 1 manually to the stack
    sp ->arr[0] = 12;
    sp ->top++;
    // adding element 2 manually to the stack
    sp ->arr[1] = 28;
    sp ->top++;
    // adding element 3 manually to the stack
    sp ->arr[2] = 31;
    sp ->top++;

    // popping
    printf("Before popping the value of top in the stack is %d\n",sp->top);
    printf("After popping the element %d\n",pop(sp));
    printf("After popping the value of top in the stack is %d\n",sp->top);
    // hence the top element is popped
    
    return 0;
}