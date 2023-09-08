//returning the count of subsequences whose sum is equal to k
#include<bits/stdc++.h>
using namespace std;
vector<int> arr;

int subsequence(vector<int>&nums, int i,vector<int>&arr,vector<vector<int>>&result,int sum){
    int s=0;
    if(i>=nums.size()){
        for(auto x: arr){
            s+=x;
        }
        if(s==sum){
            result.push_back(arr);
            return 1;
        }
        return 0;
    }

    arr.push_back(nums[i]);
    int l = subsequence(nums,i+1,arr,result,sum);
    arr.pop_back();
    int r = subsequence(nums,i+1,arr,result,sum);

    return l+r;

}

vector<vector<int>> subset(vector<int>&nums){
    vector<vector<int>> result;
    subsequence(nums,0,arr,result,3);
    return result;
}

int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> result = subset(nums);

    //print the count of subsequence
    int count = subsequence(nums,0,arr,result,3);
    cout<<"The no. of Subsequennces: "<<count<<endl;


    // Printing the subsequences
    cout<<"The subsequences are: "<<endl;
    for (const vector<int>& subseq : result) {
        for (int num : subseq) {
            cout << num << " ";
        }
        cout << endl;
    }
}


