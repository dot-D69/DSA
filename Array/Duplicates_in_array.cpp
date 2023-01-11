/*You are given an array 'ARR' of size 'N' containing each number between 1 and 'N'-1 at least once. There is a single integer value that is
present in the array twice. Your task is to find the duplicate integer value present in the array.

For example:
Consider ARR - [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.*/



// Question link
/*https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1*/


#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>&arr){
    int ans=0;

    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }

    for(int  i=0;i<arr.size();i++){
        ans^=i;
    }
    return ans;
}



int main(){
    int n;
    cout<<"Entert the size of array"<<endl;
    cin>>n;
    int e;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the elements to be inserted"<<endl;
        cin>>e;
        arr[i]=e;
    }
    cout<<"The array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"The duplicate in the array is "<<findDuplicate(arr)<<endl;
    return 0;
}