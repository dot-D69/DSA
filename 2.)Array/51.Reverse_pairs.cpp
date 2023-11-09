// Problem Statement: The problem is to count the number of reverse pairs in the given array.
// If (i,j) is a reverse pair if and only if a[i]>2*a[j] and i<j.


#include <bits/stdc++.h>
using namespace std;

int count(vector<int> &arr, int low, int mid, int high)
{
    int right = mid + 1;
    int cnt = 0;
    for (int i = low; i <= mid; i++)
    {
        while (right <= high && static_cast<long long>(arr[i]) > 2 * static_cast<long long>(arr[right]))
        {
            right++;
        }
        cnt += (right - (mid + 1));
    }
    return cnt;
}

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;    // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1; // starting index of right half of arr

    // storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

int mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return 0;
    int COUNT = 0;
    int mid = (low + high) / 2;
    COUNT += mergeSort(arr, low, mid);      // left half
    COUNT += mergeSort(arr, mid + 1, high); // right half
    COUNT += count(arr, low, mid, high);
    merge(arr, low, mid, high); // merging sorted halves
    return COUNT;
}

int reversePairs(vector<int> &nums)
{
    int n = nums.size();
    return mergeSort(nums, 0, n - 1);
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &i : nums)
        cin >> i;
    cout << reversePairs(nums) << endl;
    return 0;
}

/*
Sample Input:
5 
1 3 2 3 1

Sample Output:
2

Explanation:
There are two pairs indexed at (1,4) and (3, 4) that are reverse pairs.
(3,1) as 3 >2*1

Time Complexity: O(nlogn)
Space Complexity: O(n)
*/
