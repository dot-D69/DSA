#include <bits/stdc++.h>
using namespace std;

int count(vector<int> &arr, int n, int x)
{

    int first = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
    int last = upper_bound(arr.begin(), arr.end(), x) - arr.begin();

    int count = last - first;
    return count;
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
    cout << count(arr, n, x);
    return 0;
}