//WAP to show tail recursion 

#include <stdio.h>

// Head Recursion
int fun1(int a){
    if(a>0){
    	fun1(a-1);
        printf(" %d ",a);
    }
    return 0;
}

// using loop
int fun2(int a){
	int i =1;
    while(i<=a){
        printf(" %d ",i);
        i++;
    }
    return 0;
}

int main(){
    printf("Head Recursion.\n");
    fun1(5);
    
    printf("\nUsing loop.\n");
    fun2(5);
    return 0;
}

/* ---------------output------------------
Head Recursion.
 1  2  3  4  5
Using loop.
 1  2  3  4  5
 
*/
