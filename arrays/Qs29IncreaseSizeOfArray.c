// WAP to increase the size of dynamic array(array using pointers)

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
    int *p, *q,i,j,k,l;
    p=(int *)malloc(5*sizeof(int));
    q=(int *)malloc(10*sizeof(int));
    
    // assigning values to p
    for (i = 0; i < 5; i++)
        p[i]=i+5;
    // printing values of p
    printf("Array elements in p are \n");
    for (j = 0; j < 5; j++)
        printf(" %d ",p[j]);
    printf("\n");
    // assigning values to q
    for ( k = 0; k < 5; k++)
        q[k]=p[k];
    q[5]=12;
    q[6]=13;
    q[7]=14;
    q[8]=15;
    q[9]=16;
    // printing values of q
    printf("Array elements in q are \n");
    for ( l = 0; l < 10; l++)
        printf(" %d ",q[l]);
    return 0;
}
/* ------------output-------------------
Array elements in p are
 5  6  7  8  9
Array elements in q are
 5  6  7  8  9  12  13  14  15  16
*/
