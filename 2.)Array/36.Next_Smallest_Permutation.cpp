/*Problem Statement: Given an array of integers, find the next smallest permutation of the given array in lexicographic order. If the given array is the smallest possible permutation, then return the input array itself.
Input: 1 2 3
Output: 1 3 2
*/

#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int n = nums.size();
    int index = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            index = i;
            break;
        }
    }
    // Edge case that is when the given permutation is the last so the index would remain -1 and hence to get the next permutation we just have to reverse
    if (index == -1)
    {
        reverse(nums.begin(), nums.end());
    }
    else
    {
        for (int i = n - 1; i >= index; i--)
        {
            if (nums[i] > nums[index])
            {
                swap(nums[i], nums[index]);
                break;
            }
        }

        reverse(nums.begin() + index + 1, nums.end());
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    nextPermutation(nums);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}