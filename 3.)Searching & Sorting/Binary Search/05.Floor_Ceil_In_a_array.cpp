// Floor : Greatest element smaller than or equal to key element  (x <= key)
// Ceil : Smallest element greater than or equal to key element  (x >= key)

#include <bits/stdc++.h>
using namespace std;

int floor(vector<int> &a, int n, int x)
{
    int ans = -1;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] <= x)
        {
            ans = a[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int ceil(vector<int> &a, int n, int x)
{
    int ans = -1;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] >= x)
        {
            ans = a[mid];
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x)
{
    int i = floor(a, n, x);
    int j = ceil(a, n, x);

    return {i, j};
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 8, 10, 10, 12, 19};
    int n = a.size();
    int x = 5;
    pair<int, int> p = getFloorAndCeil(a, n, x);
    cout << p.first << " " << p.second << endl;

    return 0;
}