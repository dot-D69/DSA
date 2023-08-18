/*Question link
https://www.codingninjas.com/studio/guided-paths/data-structures-algorithms/content/118820/offering/1381872?leftPanelTab=0
*/


#include <bits/stdc++.h> 
using namespace std;
int flipBits(int* arr, int n) {
    int max_zeroes=0;
    int max_ones=0;
    int max_sum=0;

    for(int i =0;i<n;i++){
        if(arr[i]==0){
            max_zeroes++;
        }
        else{
            max_ones++;
            max_zeroes--;
        }

        max_sum = max(max_zeroes,max_sum);

        if(max_zeroes<0){
            max_zeroes=0;
        }
    }
    return max_sum+max_ones;
}



/*
Explanation:

Initialize three variables: max_zeroes, max_ones, and max_sum to keep track of the maximum consecutive zeros, the maximum number of ones achieved, and the maximum total after flipping, respectively.

Loop through each element of the array:

If the current element is 0, increment the count of max_zeroes. This means you encountered another consecutive zero.
If the current element is 1, increment the count of max_ones (since it's a one) and decrement max_zeroes (since the sequence of zeros is broken).
Update max_sum with the larger of the current max_zeroes count and the previous value of max_sum. This keeps track of the longest sequence of consecutive zeros that can be flipped.

Check if max_zeroes has become negative. If yes, reset it to 0. This ensures that the count of consecutive zeros doesn't go below 0, as the count only matters for flipping, not for the final result.

After looping through all elements, return the sum of max_sum (representing the maximum number of consecutive zeros that can be flipped) and max_ones (the total number of ones in the array).
*/