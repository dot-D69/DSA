#include<iostream>
using namespace std;

int main(){
    int arr[] ={2,3,5,1,3};
    int n = sizeof(arr)/sizeof(int);
    int ex=3;
    int ans[n];

    int max = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
// find the ans
    for(int i =0;i<n;i++){
        if(arr[i]+ex>=max)
            ans[i]=true;
        else{
            ans[i]=false;
        }
        }
// print the array
    for(int i =0;i<n;i++)
    cout<<ans[i];
    return 0;
}