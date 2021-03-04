// WAP to append an element to the array

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

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

int main(){
	struct Array arr = {{2,3,4,5,6},10,5};
	Display(arr);
	Append(&arr,10);
	printf("\n\nAfter append the array looks alike");
	Display(arr);
	return 0;
}
/* -----------output-----------------
Elements are
 2  3  4  5  6

After append the array looks alike
Elements are
 2  3  4  5  6  10
*/