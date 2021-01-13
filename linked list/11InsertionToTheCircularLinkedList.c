// Wap to insert a node to a circular linked list,

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void traversal(struct Node *head ){
    struct Node *ptr = head;
    // quite different from normal singly linked list operation as we give a kick start to it then go for the loop
    // other wise in 1st condition ptr =head and loop willnot be executed
    // so first we push it to 1 position then go for the loop
    do{
        printf("Element is = %d\n", ptr->data);
        ptr = ptr ->next;
    }while (ptr != head);  
}

struct Node* insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    // assigning data to the new node that is to be inserted
    ptr->data = data;

    struct Node * p = head ->next;
    while (p ->next != head){
        p = p->next;
    }
    // now p points last node of the linked list

    // connecting new node with first so that new node became the head node
    p ->next = ptr;
    ptr ->next = head;
    head = ptr;
    return head;   
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
    forth -> next = head; 

    // calling traversal function
    printf("The circular linked list before insertion looks like : \n");
    traversal(head);

    // 2 arguments to this function are head node and data element(number) to be inserted at first position
    // here inserting 80 as head element
    head = insertAtFirst(head, 80);
    printf("\nThe circular linked list after the insertion looks like : \n");
    traversal(head);

    // here inserting 80 as head element
    head = insertAtFirst(head, 56);
    printf("\nThe circular linked list after the 2nd insertion looks like : \n");
    traversal(head);

    return 0;
}

/* ---------------output-----------------
The circular linked list before insertion looks like : 
Element is = 7
Element is = 8
Element is = 11
Element is = 66

The circular linked list after the insertion looks like :
Element is = 80
Element is = 7
Element is = 8
Element is = 11
Element is = 66

The circular linked list after the 2nd insertion looks like :
Element is = 56
Element is = 80
Element is = 7
Element is = 8
Element is = 11
Element is = 66
*/