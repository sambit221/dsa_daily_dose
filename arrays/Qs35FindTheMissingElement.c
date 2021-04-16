// Wap to find the missing element in a sorted array

#include<stdio.h>
int main(int argc, char const *argv[]){
    int arr[]={6,7,8,9,10,11,12,14,15,16,17};
    int l=arr[0],n=11, h=n-1;
    int diff = l;
    for (int i = 0; i < h; i++){
        if (arr[i]-i != diff){
           printf("Missing element is %d",i+diff); 
           break;
        }   
    }  
    return 0;
}
/* ---------output-----------
Missing element is 13
*/