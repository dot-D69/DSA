/*
Problem statement: Given an array of positive integers. Your task is to find the leaders in the array.
Note: An element of the array is leader if it is greater than or equal to all the elements to its right side.
Input: 16 17 4 3 5 2
Output: 17 5 2
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> Leaders(vector<int>&arr) {
    int n = arr.size();
    vector<int> result;
    int maxi=INT_MIN;

    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            result.push_back(arr[i]);
            maxi=arr[i];
        }
    }

    sort(result.begin(),result.end());
    return result;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    vector<int> ans = Leaders(arr);
    for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
    }
    return 0;
}
