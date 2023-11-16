//Problem: To Find the number of the times the array has been rotated 
//  Input: nums = [4,5,6,7,0,1,2]
//  Output: 4
//
//  Input: nums = [11,12,15,18,2,5,6,8]
//  Output: 4

#include <bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &arr){
    int n = arr.size();
	int low=0,high=n-1,ans=INT_MAX;
    int index=-1;
	while(low<=high){
		int mid=(low+high)/2;
        
		if(arr[low]<=arr[mid]){
			if(arr[low]<ans){
                ans=arr[low];
                index=low;
            } 
            low=mid+1; 
		}
		else{  
			if(arr[mid]<ans){
                ans=arr[mid];
                index=mid;

            }
			high=mid-1;
		}
	}
	return index;
}


int main()
{
    vector<int> arr = {11,12,15,18,2,5,6,8};
    cout << findKRotation(arr);
    return 0;
}