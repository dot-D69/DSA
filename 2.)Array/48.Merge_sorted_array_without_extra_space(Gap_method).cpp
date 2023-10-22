#include <bits/stdc++.h>
using namespace std;

void SwapGreater(vector<int> &nums1, vector<int> &nums2, int i, int j)
{
    if (nums1[i] > nums2[j])
    {
        swap(nums1[i], nums2[j]);
    }
}

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int len = n + m;
    int gap = (len / 2) + (len % 2);
    while (gap > 0)
    {
        int left = 0;
        int right = left + gap;
        while (right < len)
        {
            // nums1 and nums2
            if (left < m && right >= m)
            {
                SwapGreater(nums1, nums2, left, right - n);
            }
            // nums2 both
            else if (left >= m)
            {
                SwapGreater(nums1, nums2, left - n, right - n);
            }
            // nums1 both
            else
            {
                SwapGreater(nums1, nums2, left, right);
            }
            left++, right++;
        }
        if (gap == 1)
            break;
        gap = (gap / 2) + (gap % 2);
    }
}


int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;
    merge(nums1, m, nums2, n);
    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }
    return 0;
}
