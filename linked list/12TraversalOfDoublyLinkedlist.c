// Wap to forward and backward traverse and print data of a doubly linked list,

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};

// forward traversal of the linked list
void forwardTraversal(struct Node *ptr ){
    while (ptr != NULL){
        printf("Element = %d\n", ptr->data);
        ptr = ptr ->next;
    }   
}

// backward traversal of the linked list
void backwardTraversal(struct Node *ptr ){
    while (ptr != NULL){
        printf("Element = %d\n", ptr->data);
        ptr = ptr ->prev;
    }   
}

int main(int argc, char const *argv[]){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * forth;
    struct Node * fifth;

    // allocating memory for nodes in heap 
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    // 1st node
    head -> data = 7;
    head -> prev = NULL;
    head -> next = second;

    // 2nd node
    second -> data = 8;
    second ->prev = head;
    second -> next = third;

    // 3rd node
    third -> data = 11;
    third -> prev = second;
    third -> next = forth;

    // forth node
    forth -> data = 66;
    forth -> prev = third;
    forth -> next = fifth; 

    // fifth node
    fifth -> data = 91;
    fifth -> prev = forth;
    fifth -> next = NULL; 

    // calling forward traversal function and passing 1st node i.e, head
    printf("The linked list after forward traversal looks like : \n");
    forwardTraversal(head);

    // calling backward traversal function and passing last node i.e, forth
    printf("\nThe linked list after forward traversal looks like : \n");
    backwardTraversal(fifth);
    return 0;
}

/* ---------------output-----------------
The linked list after forward traversal looks like :
Element = 7
Element = 8
Element = 11
Element = 66
Element = 91

The linked list after forward traversal looks like :
Element = 91
Element = 66
Element = 11
Element = 8
Element = 7
*/