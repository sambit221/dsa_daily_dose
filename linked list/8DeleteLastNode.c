// Wap to delete the last node of a linked list,

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node * deleteLastNode(struct Node *head){
    // ptr and q both are iterator where q is 1 node ahead of ptr
    struct Node * ptr = head;
    struct Node * q;
    q = ptr ->next;
    while (q ->next !=NULL){
        ptr = ptr->next;
        q = q->next;        
    }
    ptr ->next=NULL;
    free(q);
    return head;     
}

// traverse the linked list
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

    // allocating memory for nodes in heap 
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));

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
    printf("The linked list looks like : \n");
    traversal(head);

    // deleting the last node
    head = deleteLastNode(head);

    // calling traversal function after deleting last element
    printf("After deleting the last element the linked list looks like : \n");
    traversal(head);
    
    // deleting the last node again
    head = deleteLastNode(head);

    // calling traversal function after deleting last element
    printf("After deleting the last node again in the linked list : \n");
    traversal(head);

    return 0;
}

/* ---------------output-----------------
The linked list looks like : 
Element = 7
Element = 8
Element = 11
Element = 66
After deleting the last element the linked list looks like : 
Element = 7
Element = 8
Element = 11
After deleting the last node again in the linked list :
Element = 7
Element = 8
*/