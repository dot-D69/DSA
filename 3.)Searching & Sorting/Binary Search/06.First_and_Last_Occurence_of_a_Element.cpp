// Problem: To find the first and last occurence of a target element in a sorted array.
// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]

#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int upperBound(vector<int> &arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    int lb = lowerBound(arr, n, k);
    if (lb == n || arr[lb] != k)
        return {-1, -1};
    int ub = upperBound(arr, n, k);
    return {lb, ub - 1};
}

int main()
{
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    int n = arr.size();
    int k = 8;
    pair<int, int> p = firstAndLastPosition(arr, n, k);
    cout << p.first << " " << p.second << endl;
    return 0;
}