#include <bits/stdc++.h> 
using namespace std;

int get_max(int i,int &max,vector<int>& arr, int n){
    if(i>n-1){
        return 0;
    }
    
    if(arr[i]>max){
        max=arr[i];
    }
    get_max(i+1,max,arr,n);
    return max;
}
int largestElement(vector<int> &arr, int n) {

    int max=0;
    return get_max(0,max,arr,n);
    
}

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter the elements of array: ";
    for(int i = 0 ; i < n ; ++ i ) {
        cin >> arr[i];
    }
    cout << largestElement(arr, n) << endl;
}
