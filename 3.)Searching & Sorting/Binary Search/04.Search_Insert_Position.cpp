// Problem Statement: to find the index of the target element in the array if it is present, else return the index where it would be placed if it were inserted in order.
// Input: nums = [1,3,5,6], target = 5
// Output: 2
// Input: nums = [1,3,5,6], target = 2
// Output: 1

#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &arr, int m)
{
    auto ans = lower_bound(arr.begin(), arr.end(), m);
    return distance(arr.begin(), ans);
}

int main()
{
    vector<int> arr = {1, 3, 5, 6};
    int m = 5;
    cout << searchInsert(arr, m);
    return 0;
}

//Explanation:
// lower_bound() returns an iterator pointing to the first element in the range [first, last) that is not less than (i.e. greater or equal to) value, or last if no such element is found.
// distance() returns the distance between two iterators.


// Solution: (Binary Search)
// Time Complexity: O(logn)