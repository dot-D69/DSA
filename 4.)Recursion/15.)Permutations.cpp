/*
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void Permutation(int index,vector<int>& nums, vector<vector<int>>& result){
        if(index==nums.size()){
            result.push_back(nums);
        }

        for(int i = index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            Permutation(index+1,nums,result);
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        Permutation(0,nums,result);
        return result;
        
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    Solution obj;
    vector<vector<int>> result = obj.permute(nums);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}