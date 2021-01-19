// WAP to check the usage of stackTop, stackBottom function

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


// It returns the top most value of the stack
int stackTop( struct stack *ptr){
    return ptr ->arr[ptr->top];
}
// It returns the bottom most value of the stack
int stackBottom( struct stack *ptr){
    return ptr ->arr[0];
}

int main(int argc, char const *argv[]){
    // *s means struct pointers so that we can directly point its elements
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp -> size = 10;
    sp -> top = -1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully.\n\n");
    printf("Before pushing output of isFull function is: %d\n",isFull(sp));
    printf("Before pushing, the value of top is : %d\n",sp->top);

    // Pushing first element 
    push(sp, 10);
    // Pushing second element 
    push(sp, 20);
    // Pushing third element 
    push(sp, 30);
    // Pushing fourth element 
    push(sp, 20);
    // Pushing fifth element 
    push(sp, 40);
    // Pushing sixth element 
    push(sp, 50);
    // Pushing seventh element 
    push(sp, 60);

    printf("After pushing, the value of top is : %d\n",sp->top);
    printf("\nThe Topmost element of the stack is: %d \n", stackTop(sp));
    printf("The bottom most element of the stack is: %d \n", stackBottom(sp));
}

/*------------------output----------------
Stack has been created successfully.

Before pushing output of isFull function is: 0
Before pushing, the value of top is : -1
After pushing, the value of top is : 6

The Topmost element of the stack is: 60
The bottom most element of the stack is: 10
*/