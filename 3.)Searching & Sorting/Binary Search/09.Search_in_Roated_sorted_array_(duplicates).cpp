// Problem Statement: Tp Find if the element is present in the rotated sorted array or not
// Input: nums = [2,5,6,0,0,1,2], target = 0
// Output: true

// Input: nums = [2,5,6,0,0,1,2], target = 3
// Output: false

#include <bits/stdc++.h>
using namespace std;

bool searchInARotatedSortedArrayII(vector<int> &A, int key)
{
    int n = A.size();
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (A[mid] == key)
            return true;

        // If the elements are equal in the low mid and high then we can not find the dorted Aay corrctly so
        if (A[low] == A[mid] && A[mid] == A[high])
        {
            // since we already checked key with mid if it is not equal to mid thenn it is also not equal to low and hig as all are same
            // So we move high andlow in order to trim our search space make it easy to find the sorted Aay
            low = low + 1;
            high = high - 1;
            continue;
        }

        // Check if left half is sorted
        if (A[low] <= A[mid])
        { // means it is sorted
            // Then we check if the key is present in the left half
            if (A[low] <= key && key <= A[mid])
            {
                high = mid - 1; // since the key is present we eleiminate the right half
            }
            else
            {                  // If the key is not present in the left half
                low = mid + 1; // we eleiminate the left half
            }
        }
        // if the left half is not sorted then definetly the right half is sorteed
        else
        {
            if (A[mid] <= key && key <= A[high])
            {                  // check if the key is present in the right half
                low = mid + 1; // since the key is present we eleiminate the left half
            }
            else
            {                   // If the key is not present in the right half
                high = mid - 1; // we eleiminate the right half
            }
        }
    }
    return false;
}

int main()
{
    int n, target;
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    target = 0;
    n = arr.size();
    cout << searchInARotatedSortedArrayII(arr, target);
    return 0;
}