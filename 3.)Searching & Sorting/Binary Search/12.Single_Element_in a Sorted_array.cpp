// Problem: You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.  Return the single element that appears only once.
//  Input: nums = [1,1,2,3,3,4,4,8,8]
//  Output: 2

//  Input: nums = [3,3,7,7,10,11,11]
//  Output: 10


#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& nums)
{
	int n = nums.size();
    if(n==1) return nums[0];
    if(nums[0]!=nums[1]) return nums[0];
    if(nums[n-1]!=nums[n-2]) return nums[n-1];

    int low=1,high=n-2;

    while(low<=high){
        int mid=(low+high)/2;

        if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]) return nums[mid];

        // Check if we are at left half which has 2 conditons 
        // (even,odd) if we are at ood indeex and the the element at the previous odd index is same then 
        // Or if we are at even index and the element at the next odd index is same  then we are at left half
        // If we are at left half it means the element is at right half so we elimeinate the lft half search space
        if((mid%2==1 && nums[mid-1]==nums[mid]) || (mid%2==0 && nums[mid]==nums[mid+1])){
            low=mid+1; //eliminateleft half
        }
        else{
            high=mid-1; // Eliminate right halft
        }
    }
    return -1;

}


int main()
{
    vector<int> arr = {1,1,2,3,3,4,4,8,8};
    cout << singleNonDuplicate(arr);
    return 0;
}
