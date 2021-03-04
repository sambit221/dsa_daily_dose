// WAP to append an element to the array

#include<stdio.h>
#include<stdlib.h>

struct Array{
	int A[20];
	int size; // max size of array
	int length; // length of array
};
// To display elements
void Display(struct Array arr){
	int i=0;
	printf("\nElements are\n");
	for(i=0;i<arr.length;i++)
		printf(" %d ",arr.A[i]);
}


// Here we will insert the new elements at the end of the array
void Append(struct Array *arr, int x){
	if(arr->length < arr->size) // first check there is a free sapce or not
		arr->A[arr->length++]=x; // storing at index length..... then incrementing length
}

// Here we will insert the new elements at the end of the array
void Insert(struct Array *arr, int index, int x){
	int i =0;
	if(index>=0 && index<=arr->length){
		// Shifting rest elements to make a space to insert new element
		for(i=arr->length; i>index; i--){ // length is the last element
			arr->A[i] = arr->A[i-1];
			
			arr->length++;
		}
		arr->A[index]=x;
	}
}

int main(){
	struct Array arr = {{2,3,4,5,6},10,5};
	Display(arr);
	Append(&arr,41);
	printf("\n\nAfter append the array will be: ");
	Display(arr);
	printf("\n\nAfter Insert the array will be: ");
	Insert(&arr,2,30);
	Display(arr);
	return 0;
}
/*-------------output------------
Elements are
 2  3  4  5  6 

After append the array will be:
Elements are
 2  3  4  5  6  41

After Insert the array will be:
Elements are
 2  3  30  4  5  6  41  0  0  0
*/