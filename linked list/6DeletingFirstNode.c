// Wap to delete first node of alinked list

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next; 
};
// This function will print all the data elements of the linked list
void traversal(struct node *ptr){
    while (ptr!= NULL){
        printf("Element = %d \n", ptr ->data);
        ptr = ptr ->next;
    }    
}
int main(int argc, char const *argv[]){
    // declaring nodes of the linked list
    // p struct pointer will iterate
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *p;

    // initialising nodes (allocating memory to the nodes)
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    p = (struct node *)malloc(sizeof(struct node));

    // link 1st and 2nd node
    head -> data = 7;
    head -> next = second;

    // link 2nd and 3rd node
    second -> data = 8;
    second -> next = third;

    // link 3rd and 4th node
    third -> data = 11;
    third -> next = fourth;

    // Terminate the list at forth node
    fourth -> data = 66;
    fourth -> next = NULL;

    printf("Before deletion the list is : \n");
    traversal(head);

    // deleting first node
    // transfering data into p node (now p is the head node and head is the second node)
    p = head;
    head = head -> next;

    // releasing the memory of p struct pointer
    free(p);

    printf("\nAfter deleting 1st node from the list is : \n");
    traversal(head);
    return 0;
}

/*-------------output---------------
Before deletion the list is : 
Element = 7 
Element = 8
Element = 11
Element = 66

After deleting 1st node from the list is :
Element = 8
Element = 11
Element = 66
*/