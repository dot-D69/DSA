// Two pointer approach

#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int left,int right){
    if(left>=right){
        return;
    }
    swap(arr[left],arr[right]);
    reverse(arr,left+1,right-1);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// single pointer approach
// The basic approach is we will be swappiing the first and last element so ther formula for that is n-i-1 i.e if the first element is at i=0 then we will swap it with the element at n-i-1 i.e n-0-1=n-1 which is the last element
// we will stop when i>=n/2 because we will be swapping the first and last element so if we go beyond n/2 then we will be swapping the same elements again and again

#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int i,int n){
    if(i>=n/2){
        return;
    }

    swap(arr[i],arr[n-i-1]);
    reverse(arr,i+1,n);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}