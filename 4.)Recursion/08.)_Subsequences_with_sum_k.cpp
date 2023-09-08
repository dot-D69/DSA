//Printing subsequences whose sum is equal to k
#include<bits/stdc++.h>
using namespace std;
vector<int> arr;

void subsequence(vector<int>&nums, int i,vector<int>&arr,vector<vector<int>>&result,int sum){
    int s=0;
    if(i>=nums.size()){
        for(auto x: arr){
            s+=x;
        }
        if(s==sum)
        result.push_back(arr);
        return;
    }

    arr.push_back(nums[i]);
    subsequence(nums,i+1,arr,result,sum);
    arr.pop_back();
    subsequence(nums,i+1,arr,result,sum);
}

vector<vector<int>> subset(vector<int>&nums){
    vector<vector<int>> result;
    subsequence(nums,0,arr,result,3);
    return result;
}

int main(){
    vector<int> nums = {1,2,3};
        vector<vector<int>> result = subset(nums);

    // Printing the subsequences
    for (const vector<int>& subseq : result) {
        for (int num : subseq) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}


