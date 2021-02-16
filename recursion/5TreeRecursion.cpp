//WAP to show tree recursion 


// In Tree Recursion the function calls itself for multiple times 
#include <stdio.h>

// Tree Recursion
int fun1(int a){
    if(a>0){
    	printf(" %d ",a);
    	fun1(a-1); // call-1
    	fun1(a-1); // call-2     
    }
    return 0;
}

int main(){
    printf("Tree Recursion.\n");
    fun1(3);
    return 0;
}

/* ---------------output------------------
Tree Recursion.
 3  2  1  1  2  1  1
 
*/
