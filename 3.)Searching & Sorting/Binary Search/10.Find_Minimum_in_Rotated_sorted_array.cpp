// Problem: To Find te minimum element in the rotated sorted array
//  Input: nums = [3,4,5,1,2]
//  Output: 1

#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &arr)
{
    int n = arr.size();
    int low = 0, high = n - 1, ans = INT_MAX;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        // If left half sorted
        if (arr[low] <= arr[mid])
        {
            ans = min(ans, arr[low]); // get the low from the sorted eft half
            low = mid + 1;            // Eliminate the rest of the lft half search space since we already have the minimum
        }
        else
        { // Right half is sorted
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {3, 4, 5, 1, 2};
    cout << findMin(arr);
    return 0;
}

// We have to find minimum so the first thing we need is to find the sorted half that is how all questions of Rotated Sorted Array works mostly
//  So first we find the the sorted half using the same old formla arr[low]<=arr[mid] for the left half
//  we dont need to write the same for right half cuase if the left half is not sorted then right half will definetly be
//  now when we have the sorted array we find the min of that part if the sorted array isleft then min = arr[low]
//  If the sorted array is right the min is arr[mid]
//  Whichever part we pick after getting the minimum we eliminate that search space i.e low=mid+1 or high=mid-1;
// Now keep doing the same steps until we have exhausted the array
