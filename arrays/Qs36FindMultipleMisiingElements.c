// Wap to find multiple missing elements in a sorted array

#include<stdio.h>
int main(int argc, char const *argv[]){
    int arr[]={6,7,8,9,10,12,13,14,16,17,18,19,21,22,23};
    int l=arr[0],h=14;
    int diff = l;
    for (int i = 0; i < h; i++){
        if (arr[i]-i != diff){
           printf("Missing element is %d\n",i+diff); 
           diff = arr[i]-i; 
           continue;
        }   
    }   
    return 0;
}
/* ---------output-----------
Missing element is 11
Missing element is 15
Missing element is 20
*/