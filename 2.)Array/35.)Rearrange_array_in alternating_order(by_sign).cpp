/*Problem statement: Given an array of positive and negative numbers, arrange them in an alternate fashion such that every positive number is followed by negative and vice-versa maintaining the order of appearance.
Input: 9 4 -2 -1 5 0 -5 -3 2
Output: 9 -2 4 -1 5 -5 0 -3 2
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> rearrange(vector<int> &nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int pos=0,neg=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans[pos]=nums[i];
                pos+=2;
            }
            else{
                ans[neg]=nums[i];
                neg+=2;
            }
        }
        return ans;
}

int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) {
        cin>>nums[i];
    }
    vector<int> ans = rearrange(nums);
    for(int i=0;i<n;i++) {
        cout<<ans[i]<<" ";
    }
    return 0;
}