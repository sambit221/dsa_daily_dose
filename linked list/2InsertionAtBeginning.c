// Wap to insert a node at the beginning of a linked list,

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

// traverse the linked list and printing each data
void traversal(struct Node *ptr ){
    while (ptr != NULL){
        printf("Element = %d\n", ptr->data);
        ptr = ptr ->next;
    }   
}

int main(int argc, char const *argv[]){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * forth;
    struct Node * ptr;

    // allocating memory for nodes in heap 
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));
    ptr = (struct Node *)malloc(sizeof(struct Node));

    // link 1st and 2nd node
    head -> data = 7;
    head -> next = second;

    // link 2nd and 3rd node
    second -> data = 8;
    second -> next = third;

    // link 3rd and 4th node
    third -> data = 11;
    third -> next = forth;

    // Terminate the list at forth node
    forth -> data = 66;
    forth -> next = NULL; 

    // calling traversal function
    printf("The Linked list before insertion :\n");
    traversal(head);

    // inserting node at the beginning
    ptr -> data = 5;
    ptr -> next = head;

    printf("After inserting node (data element = 5) at the beginning the linked list willl be : \n");
    traversal(ptr);
    return 0;
}

/* ---------------output---------------------

The Linked list before insertion :
Element = 7
Element = 8
Element = 11
Element = 66
After inserting node (data element = 5) at the beginning the linked list willl be :
Element = 5
Element = 7
Element = 8
Element = 11
Element = 66
*/