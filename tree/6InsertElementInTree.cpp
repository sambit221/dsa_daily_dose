// Wap to insert an element in a binary search tree.

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
		printf(" %d ",root->data); // printing data of the root node at the beginning in the preorder traversal 
		preorder(root->left); // passing (root-> left) as parameter as it will access left child first
		preorder(root->right); // passing (root-> right) as parameter as it will access right child after the left child
	}
}

//inorder traversal (Left -> Root -> Right)
void inorder(struct Node* root){
	if(root!=NULL){
		preorder(root->left); // passing (root-> left) as parameter as it will access left child first
		printf(" %d ",root->data); // printing data of the root node at the end in the postorder traversal
		preorder(root->right); // passing (root-> right) as parameter as it will access right child after the left child 
	}
}

//function to insert a node in tree
struct Node *insert(struct Node *root, int data){
	if(root==NULL){ // empty tree condition
		root = createNode(data);
		return root;
	}
	
	// if tree is not empty (data to be inserted at left subtree)
	// data is to be inserted and root->data is value of the root node to be compared with passed data
	else if(data <= root->data){
		root->left = insert(root->left,data);
	}
	
	// if tree is not empty (data to be inserted at right subtree)
	else if(data > root->data){
		root->right = insert(root->right,data);
	}
	return root;
}

int main(int argc, char const *argv[]){
	
	// constructing the root node
	struct Node *p = createNode(5);
	struct Node *p1 = createNode(3);
	struct Node *p2 = createNode(6);
	struct Node *p3 = createNode(1);
	struct Node *p4 = createNode(4);
	
	// Finally the tree looks like this
	//        5
	//       / \
	//      3   6
	//     / \
	//    1   4
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
    
    
    printf("\nInserting few elements(11,14,23,0,-4,-8,9)  \n");
    insert(p,11);
    insert(p,14);
    insert(p,23);
    insert(p,0);
    insert(p,-4);
    insert(p,-8);
    insert(p,9);
    printf("\nAfter inserting the elements the tree with the inorder traversal\n");
    inorder(p);
    return 0;
}

/* ------------output-----------------------
Tree is been created
Root(p) node has data = 5
p1 node has data = 3
p2 node has data = 6
p3 node has data = 1
p4 node has data = 4


Inserting few elements(11,14,23,0,-4,-8,9)

After inserting the elements the tree with the inorder traversal
 3  1  0  -4  -8  4  5  6  11  9  14  23
 */
