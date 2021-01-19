// WAP to peek all the elements of the stack and print it

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
    if (ptr->top == (ptr->size-1)){
        return 1;
    }
    else{
        return 0;
    }
}

// function to push an element into stack
int push( struct stack *ptr, int val){
    if (isFull(ptr)){
        printf("Stack overflow! Can't push %d into the stack.\n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;       
    }
    return 0; 
}

// function to pop an element into stack
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

// function first checks stack is full or not then goes for the peek operation
int peek( struct stack *ptr, int i){
    int index = ptr->top-i+1;
    if (index <0){
        printf("Not a valid position for the stack\n");
        return 1;
    }
    else{
        return ptr->arr[index];
    }
}

int main(int argc, char const *argv[]){
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp -> size = 10;
    sp -> top = -1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully.\n\n");
    printf("Before pushing : %d\n",isFull(sp));
    printf("Before pushing value of top : %d\n",sp->top);

    push(sp, 1);
    push(sp, 23);
    push(sp, 99);
    push(sp, 75);
    push(sp, 3);
    push(sp, 64);
    push(sp, 57);

    printf("After pushing : %d\n",isFull(sp));
    printf("After pushing value of top : %d\n",sp->top);
    // where top=9 is the maximum

    printf("============================================\n");

    // reading all elements of the stack using peek function(it will basically tell the value of the element at a particular position)
    for (int j = 1; j <= sp->top + 1; j++){
        printf("The value at position %d is %d\n", j, peek(sp, j));
    }
    return 0;
}
/*----------output-------------
Stack has been created successfully.

Before pushing : 0
Before pushing value of top : -1
After pushing : 0
After pushing value of top : 6
============================================
The value at position 1 is 57
The value at position 2 is 64
The value at position 3 is 3
The value at position 4 is 75
The value at position 5 is 99
The value at position 6 is 23
The value at position 7 is 1
*/