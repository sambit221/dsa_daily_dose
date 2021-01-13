// Wap to traverse, assign data and print data of a circular linked list,

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
/* -----------method 1----------------------
// traverse the linked list
// quite different from normal singly linked list operation as we give a kick start to it then go for the loop
// other wise in 1st condition ptr =head and loop willnot be executed
// so first we push it to 1 position then go for the loop
void traversal(struct Node *head ){
    struct Node *ptr;
    printf("Element is = %d\n", ptr->data);
    ptr = ptr ->next;
    while (ptr != NULL){
        printf("Element is = %d\n", ptr->data);
        ptr = ptr ->next;
    }   
}
*/

// -----------method 2----------------------
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
    printf("The circular linked list looks like : \n");
    traversal(head);

    return 0;
}

/* ---------------output-----------------
The circular linked list looks like : 
Element is = 7
Element is = 8
Element is = 11
Element is = 66
*/