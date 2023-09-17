/*
Given two integers n and k, return all possible combinations of k numbers chosen from the range [1, n].

You may return the answer in any order.

 

Example 1:

Input: n = 4, k = 2
Output: [[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]]
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void find_comb(int i,int n,int k,vector<int> &store,vector<vector<int>> &result){
        //base conditons
        if(k==0){
            result.push_back(store);
            return;
        }
        if(k>n-i+1) return;  // checks if the remaining elements(n-i+1) are greater than 4 else it won't  go to call that recursion
        if(i>n) return;


        store.push_back(i);
        find_comb(i+1,n,k-1,store,result);
        store.pop_back();
        find_comb(i+1,n,k,store,result);
    }
    vector<vector<int>> combine(int n, int k) 
    {
        vector<vector<int>> result;
        vector<int> store;
        find_comb(1,n,k,store,result);
        return result;
    
    }
};

int main(){
    int n,k;
    cin>>n>>k;
    Solution obj;
    vector<vector<int>> result = obj.combine(n,k);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
