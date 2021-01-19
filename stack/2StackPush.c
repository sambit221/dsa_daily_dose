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

int main(int argc, char const *argv[]){
    // *s means struct pointers so that we can directly point its elements
    struct stack *sp;
    sp -> size = 10;
    sp -> top = -1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully.\n\n");
    printf("Before pushing : %d\n",isFull(sp));
    printf("Before pushing value of top : %d\n",sp->top);

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
    
    // Pushing eighth element 
    push(sp, 80);
    // Pushing 9th element 
    push(sp, 23);
    // Pushing 10th element 
    push(sp, 43);    // here the stack became full
    // Pushing 11th element 
    push(sp, 543);    // here the stack became overflow

    printf("After pushing : %d\n",isFull(sp));
    printf("After pushing value of top : %d\n",sp->top);
    // where top=9 is the maximum
    
    return 0;
}