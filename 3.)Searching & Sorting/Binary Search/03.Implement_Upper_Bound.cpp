// What is upper bound?
// The upper bound is the smallest index, ind, where arr[ind] > x. But if any such index is not found, the upper bound algorithm returns n i.e. size of the given array.

#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int x, int n)
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

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << upperBound(arr, x, n);
    return 0;
}
