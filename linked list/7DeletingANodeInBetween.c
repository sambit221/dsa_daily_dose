// Wap to delete a node in between a linked list,

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

// traverse the linked list
void traversal(struct Node *ptr ){
    while (ptr != NULL){
        printf("Element = %d\n", ptr->data);
        ptr = ptr ->next;
    }   
}

int main(int argc, char const *argv[]){
    int temp;
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * forth;
    // ptr is the iterator
    struct Node * ptr;
    struct Node * q;

    // allocating memory for nodes in heap 
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));
    ptr = (struct Node *)malloc(sizeof(struct Node));
    q = (struct Node *)malloc(sizeof(struct Node));

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

    // Taking previous node information
    printf("You want to dlt node after the element : \n");
    scanf("%d",&temp);

    // assigning the iterator with head node
    ptr = head;
    // here ptr will stay at before the deleting node 
    while (ptr ->data != temp){
        ptr = ptr->next;
    }
    
    // q will store the data of the node to be deleted (because we need the info. from its next pointer)
    q = ptr->next;
    ptr ->next =q->next ;

    // relesing its memory
    free (q); 

    printf("\nAfter deletion of a node the linked list looks like : \n");
    traversal(head);
    return 0;
}


/* ---------------output-----------------
The linked list looks like : 
Element = 7
Element = 8
Element = 11
Element = 66
You want to dlt node after the element :
8

After deletion of a node the linked list looks like :
Element = 7
Element = 8
Element = 66
*/