// WAP to check the stack is full or not

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

int main(int argc, char const *argv[]){
    // *s means struct pointers so that we can directly point its elements
    struct stack *s = (struct stack *) malloc(sizeof(struct stack));
    // max no of nodes can be added is 80
    s -> size = 80;
    // initial value of top is -1 as it is empty
    s -> top = -1;
    // assigning memory in the heap section
    s->arr = (int *) malloc(s->size * sizeof(int));

    // Pushing first element manually
    s->arr[0] = 4;
    s->top++;
    // Pushing second element manually
    s->arr[0] = 7;
    s->top++;
    // Pushing third element manually
    s->arr[0] = 9;
    s->top++;

    // check if the stack is empty
    if (isEmpty(s)){
        printf("The stack is empty.\n");
    }
    else{
        printf("The stack is not empty.\n");
    } 
    return 0;
}

/*------------------output----------------
The stack is not empty.
*/