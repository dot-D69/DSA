// There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

// Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

// ex:  Input: candies = [2,3,5,1,3], extraCandies = 3
//      Output: [true,true,true,false,true]

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