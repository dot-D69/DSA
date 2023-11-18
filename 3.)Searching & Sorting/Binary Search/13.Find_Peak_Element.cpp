// What is Peak Element?
// An array element is peak if it is NOT smaller than its neighbors. For corner elements, we need to consider only one neighbor.
// For example, for input array {5, 10, 20, 15}, 20 is the only peak element.
// For input array {10, 20, 15, 2, 23, 90, 67}, there are two peak elements: 20 and 90.

// Note that we need to return any one peak element.

// Following corner cases give better idea about the problem.

// 1) If input array is sorted in strictly increasing order, the last element is always a peak element.
// For example, 50 is peak element in {10, 20, 30, 40, 50}.
// 2) If input array is sorted in strictly decreasing order, the first element is always a peak element.
// 100 is the peak element in {100, 80, 60, 50, 20}.

#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &nums)
{

    int n = nums.size(); // Size of numsay.
    // Edge cases:
    if (n == 1)
        return 0;
    if (nums[0] > nums[1])
        return 0;
    if (nums[n - 1] > nums[n - 2])
        return n - 1;

    int low = 1, high = n - 2;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        // If nums[mid] is the peak:
        if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
            return mid;

        // If we are in the left, that is if the previous element is less than mid element so we know peak is in the right half so we eliminate the left search space
        if (nums[mid] > nums[mid - 1])
            low = mid + 1;

        // If we are in the right,
        else
            high = mid - 1;
    }
    // Dummy return statement
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 1};
    cout << findPeakElement(arr);
    return 0;
}