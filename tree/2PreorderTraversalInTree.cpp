// Wap to represent pre order traversal in a tree using a linked list,

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

//preorder traversal (Root -> Left -> Right)
void preorder(struct Node* root){
	if(root!=NULL){
		printf(" %d ",root->data);
		preorder(root->left); // passing (root-> left) as parameter as it will access left child first
		preorder(root->right); // passing (root-> right) as parameter as it will access right child after the left child
	}
}

int main(int argc, char const *argv[]){
	
	// constructing the root node
	struct Node *p = createNode(4);
	struct Node *p1 = createNode(1);
	struct Node *p2 = createNode(6);
	struct Node *p3 = createNode(5);
	struct Node *p4 = createNode(2);
	
	// Finally the tree looks like this
	//        4
	//       / \
	//      1   6
	//     / \
	//    5   2
	// in preorder traversal expected output is (4 1 5 2 6)
	
	// linking the root node with left and right children
    p -> left = p1;
    p -> right = p2;
    p1 -> left = p3;
    p1 -> right = p4;
    
    printf("Tree is been created  \n");
    printf("Root(p) node has data = %d \n",p->data);
    printf("p1 node has data = %d \n",p1->data);
    printf("p2 node has data = %d \n",p2->data);
    printf("p3 node has data = %d \n",p3->data);
    printf("p4 node has data = %d \n\n",p4->data);
    
    printf("Here the preorder traversal begins \n");
    preorder(p);
    return 0;
}

/* ------------output-----------------------
Tree is been created
Root(p) node has data = 4
p1 node has data = 1
p2 node has data = 6
p3 node has data = 5
p4 node has data = 2

Here the preorder traversal begins
 4  1  5  2  6
 */
