// Wap to insert a node at the end of the linked list,

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
    struct Node * p;

    // allocating memory for nodes in heap 
    // p finds the position where to be inserted (before insertion it is the previous node of the inserting node)
    // ptr is the node i.e, to be inserted
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));
    ptr = (struct Node *)malloc(sizeof(struct Node));
    // p = (struct Node *)malloc(sizeof(struct Node));

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

    // The node to be added
    ptr -> data = 5; 
    ptr -> next = NULL;

    p ->next = head;
    // inserting the node at the end
    while (p ->next != NULL){
        p = p -> next; 
    }
    p ->next = ptr;
    ptr -> next = NULL;
    
    printf("After inserting node ( with data element = 5) at the end of the linked list will be : \n");
    traversal(head);
    return 0;
}


/*-------------output--------------------
The Linked list before insertion :
Element = 7
Element = 8
Element = 11
Element = 66
After inserting node ( with data element = 5) at the end of the linked list will be :
Element = 7
Element = 8
Element = 11
Element = 66
Element = 5
*/