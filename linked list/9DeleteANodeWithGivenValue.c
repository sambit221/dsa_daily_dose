// Wap to delete a node with a given value in a linked list,

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
struct Node* deleteNode(struct Node *head, int temp){  
    // ptr is the ahead iterator of q 
    struct Node * q = head;
    struct Node * ptr =q ->next;

    // traversing along the linked list and finding the location of the value
    while(ptr ->data != temp){
        q = q->next;
        ptr = ptr ->next;
    }
    // deleting the node by bypassing the link
    q->next = ptr->next;
    free(ptr);
    return head;  
}

int main(int argc, char const *argv[]){
    int value;
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

    // Taking previous node information
    printf("You want to dlt node having data element =  \n");
    scanf("%d",&value);

    // deleting the node
    deleteNode(head, value);

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
You want to dlt node having data element =
11

After deletion of a node the linked list looks like :
Element = 7
Element = 8
Element = 66
*/