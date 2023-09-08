// This is continuation of 08.) Subsequence_with_sum_K.cpp
// In this we only print any one subsequence whose sum is equal to k doesn't matter which one.
//But if the current subsequence is equal to the sum then we don't need to check further for an other subsequence.

#include<bits/stdc++.h>
using namespace std;
vector<int> arr;

bool Generate_Subsequence(int i,vector<int>&nums,int sum,vector<int>&arr,vector<vector<int>>& result){
    int s=0;
    if(i>=nums.size()){
        for(auto x: arr){
            s+=x;
        }
        if(s==sum){
            result.push_back(arr);
            return true;
        }
        return false;
    }

    arr.push_back(nums[i]);
    if(Generate_Subsequence(i+1,nums,sum,arr,result)){
        return true;
    }
    arr.pop_back();
    if(Generate_Subsequence(i+1,nums,sum,arr,result)){
        return true;
    }

    return false;
}

vector<vector<int>> subsequnce(vector<int>&num){
    vector<vector<int>> result;
    Generate_Subsequence(0,num,3,arr,result);
    return result;
}

int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> result = subsequnce(nums);
    subsequnce(nums);

    // Printing the subsequences
    for (const vector<int>& subseq : result) {
        for (int num : subseq) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}