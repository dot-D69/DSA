//Problem statement: To count the number of subarrays with given Xor value.
/*
Input: arr[] = {4, 2, 2, 6, 4}, k = 6
Output: 4
The subarrays having XOR of their elements as 6 are {4, 2}, {4, 2, 2, 6, 4}, 
{2, 2, 6}, and {6}
*/

#include<bits/stdc++.h>
using namespace std;

int subarraysWithSumK(vector < int > a, int b) {
    unordered_map<int,int> store;
    int cnt=0;
    int xr=0;
    store[xr]++;   //(0,1)
    for(int i=0;i<a.size();i++){
        xr=xr^a[i];
        int x = xr^b;
        if(store.find(x)!=store.end()){
            cnt+=store[x];
        }
        store[xr]++;
    }
    return cnt;
    
}

int main(){
    int n;
    cin>>n;
    vector < int > a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b;
    cin>>b;
    cout<<subarraysWithSumK(a,b);
    return 0;
}