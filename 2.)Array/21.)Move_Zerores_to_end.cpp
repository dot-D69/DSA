// The brute force solution will be 
//We use an extra array in which we store all the non-zero elements in their relative order.
// After we have finished processing all the non-zero elements, we simply overwrite the  original array with the modified array.
// Then we make the remaining elements as 0
// The time complexity of this solution is O(n) but it requires O(n) space 

//Brute  force
#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        for(int i =0;i<n;i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }
        }
        int zeroes= temp.size();
        for(int i =0;i<zeroes;i++){
            nums[i]=temp[i];
        }

        for(int i = zeroes;i<n;i++){
            nums[i]=0;
        }
        
};

int main(){
    vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}

//Optimal Solution
// Two pointer approach
// The idea is to keep two pointers i and j.
// The pointer i which helps in iterating over the array and another pointer j which points to the index of last encountered non-zero element.
// So, whenever we encounter a non-zero element, we swap elements at i and j, then we increment the pointer j by 1 and i by 1.

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j =0;
        for(int i =0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
};

int main(){
    vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}

