/*
Binary search is only applicable in a sorted search space. The sorted search space does not necessarily have to be a sorted array. It can be anything but the search space must be sorted.

In binary search, we generally divide the search space into two equal halves and then try to locate which half contains the target. According to that, we shrink the search space size.
*/

#include <bits/stdc++.h>
using namespace std;

int Binarysearch(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int target = 5;

    cout << Binarysearch(nums, target) << endl;

    return 0;
}
