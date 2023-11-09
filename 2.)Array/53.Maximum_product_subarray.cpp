/*
Problem statement: Given an array of integers, find the maximum product subarray.

Example 1:

Input: nums = [2,3,-2,4]
Output: 6

Explanation: [2,3] has the largest product 6.

*/

#include <bits/stdc++.h>
using namespace std;

int subarrayWithMaxProduct(vector<int> &arr)
{
    int n = arr.size();
    int prefix = 1;
    int suffix = 1;
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (prefix == 0)
            prefix = 1;
        if (suffix == 0)
            suffix = 1;

        prefix = prefix * arr[i];
        suffix = suffix * arr[n - i - 1];
        maxi = max(maxi, max(prefix, suffix));
    }

    return maxi;
}

int main()
{
    vector<int> arr = {2, 3, -2, 4};
    cout << subarrayWithMaxProduct(arr) << endl;
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)

// Explanation:
//  2 3 -2 4
//  prefix=2 6 -12 -48
//  suffix=4 -8 -6 -2
//  maxi=2 6 6 6
//  return 6
