// pass the array elements to another function and manipulate it using pointer

#include<stdio.h>
void Double(int* a, int size){
    printf("Array elements in the Double function \n");
    for (int i = 0; i < size; i++){
        a[i]=2*a[i];
        printf("arr[%d] = %d\n",i,a[i]);
    }
}
int main(int argc, char const *argv[]){
    int size, arr[5]={1,2,3,4,5};
    size=sizeof(arr)/sizeof(0);
    Double(arr, size);
    printf("Array elements in the main function \n");
    for (int i = 0; i < 5; i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    return 0;
}