// Wap to represent a tree using a linked list,

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

// creating a Node
struct Node * createNode(int data){
	struct Node *n;
    n = (struct Node *)malloc(sizeof(struct Node)); // allocating the memory in the heap
    n -> data = data; // setting the data
    n -> left = NULL; // setting left node to be NULL
    n -> right = NULL; // setting right node to be NULL
    return n; // returning the created node
}

int main(int argc, char const *argv[]){
	/* 
	// constructing the root node
    struct Node * p;
    p = (struct Node *)malloc(sizeof(struct Node));
    p -> data = 2;
    p -> left = NULL;
    p -> right = NULL;
    
    // constructing the second node
    struct Node * p1;
    p1 = (struct Node *)malloc(sizeof(struct Node));
    p1 -> data = 1;
    p1 -> left = NULL;
    p1 -> right = NULL; 
    
    // constructing the third node
    struct Node * p2;
    p2 = (struct Node *)malloc(sizeof(struct Node));
    p2 -> data = 4;
    p2 -> left = NULL;
    p2 -> right = NULL;
    
    */
	// constructing the root node
	struct Node *p = createNode(2);
	struct Node *p1 = createNode(1);
	struct Node *p2 = createNode(4);
	
	// linking the root node with left and right children
    p -> left = p1;
    p -> right = p2;
    
    printf("Tree is been created  \n");
    printf("Root node has data = %d \n",p->data);
    printf("Left child node has data = %d \n",p1->data);
    printf("Right child node has data = %d \n\n",p2->data);
    if(p->left == p1)
    	printf("Root node connected to Left child node.\n");
    if(p->right == p2)
    	printf("Root node connected to Right child node. \n");
    return 0;
}

/* ------------output-----------------------
Tree is been created
Root node has data = 2
Left child node has data = 1
Right child node has data = 4

Root node connected to Left child node.
Root node connected to Right child node.
*/
