//Optimal
#include <bits/stdc++.h> 
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
    int temp = arr[0];
    for(int i =1;i<=n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;

    return arr;
}

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> res = rotateArray(arr,n);
    for(int i =0;i<n;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(n)+O(1)
*/
