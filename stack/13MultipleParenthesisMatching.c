// WAP to check the stack is full or not

#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    char *arr;
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
void push( struct stack *ptr, char val){
    if (isFull(ptr)){
        printf("Stack overflow! Can't push %d into the stack.\n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;       
    }
}

// function to pop an element into stack
char pop( struct stack *ptr){
    if (isEmpty(ptr)){
        printf("Stack underflow! Can't pop from the stack.\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];  
        ptr->top--; 
        return val;    
    } 
}

int match(char a, char b){
    if (a=='{'&& b=='}'){
        return 1;
    }
    if (a=='('&& b==')'){
        return 1;
    }
    if (a=='['&& b==']'){
        return 1;
    }
}

int parenthesisMatch( char *exp){
    char popped_ch;
    // create and initialise stack to store parenthesis in the stack
    struct stack *sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *) malloc(sp->size * sizeof(char));
    
    for (int i = 0; exp[i] !='\0'; i++){
        if (exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            push(sp, exp[i]);
        }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
            if (isEmpty(sp)){
                return 0;
            }
            popped_ch = pop(sp);
            if (!match (popped_ch, exp[i])){
                return 0;
            }            
        }
    }
    if (isEmpty(sp)){
        return 1;
    }
    else{
        return 0;
    }      
}

int main(int argc, char const *argv[]){
    char *exp = "[4-6]((8){(9-8)}))";

    // check if the stack is empty
    if (parenthesisMatch(exp)){
        printf("The parenthesis is balanced\n");
    }
    else{
        printf("The parenthesis is not balanced\n");
    } 
    return 0;
}

/*------------------output----------------
The parenthesis is balanced

or 

The parenthesis is not matching
*/