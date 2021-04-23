/*
Problem: For each kid check if there is a way to distribute extraCandies among
the kids such that he or she can have the greatest number of candies among them.
Notice that multiple kids can have the greatest number of candies.
Problem Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
Difficulty: Easy
Author name: UG-SEP
Author Profile Link: https://github.com/UG-SEP
 */
#include<stdbool.h>
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
int max=candies[0],i;
    *returnSize=candiesSize;
    bool *b;
    b=malloc(sizeof(bool)*candiesSize);
    // first finding the max value
    for(i=1;i<candiesSize;i++)
    {
        if(max<candies[i])
            max=candies[i];
    }
    // now checking whether candies[i] th + extracandies>= max if yes b[i] th true else false
    for(i=0;i<candiesSize;i++)
    {
        if(candies[i]+extraCandies>=max)
            b[i]=true;
        else
            b[i]=false;
    }
    return b;
}
/*
Example:
Input: candies = [2,3,5,1,3], extraCandies = 3
Output: [true,true,true,false,true]
Time complexity: O(2N) where n is the size of candies
*/
