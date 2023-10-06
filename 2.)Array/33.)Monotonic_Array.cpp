/*
Problem Statement: Write a function that takes in an array of integers and returns a boolean representing whether the array is monotonic.
An array is said to be monotonic if its elements, from left to right, are entirely non-increasing or entirely non-decreasing.
non-incresing means that the elements are in decreasing order but not strictly decreasing order
strictly decreasing order means that the elements are in decreasing order and also the elements are not equal to each other
non-decreasing means that the elements are in increasing order but not strictly increasing order
strictly increasing order means that the elements are in increasing order and also the elements are not equal to each other
Input: 1 2 2 3
Output: true
*/

#include <bits/stdc++.h>
using namespace std;

bool isMonotonic(vector<int> &nums)
{
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < nums.size(); ++i)
    {
        if (nums[i] > nums[i - 1])
        {
            decreasing = false;
        }
        else if (nums[i] < nums[i - 1])
        {
            increasing = false;
        }

        // If neither increasing nor decreasing, the array is not monotonic
        if (!increasing && !decreasing)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << isMonotonic(nums);
    return 0;
}

// basically it checks at a time if the current element is greater than the last element if it is we update the decreasing variable to false (if the it is false then the array is not monotonic decresing)

// Else we check if the current element is less than the previous element then we update the increasing bool to false(if it is fale then it means that the array is not monotonic increasing)

// Then we check for the both if both are false we return false else we return true
