#include  <bits/stdc++.h>
using namespace std;

vector<int> kadane(int arr[], int n)
{
    int max_so_far = INT_MIN;
    int sum = 0;
    int ans_start = -1, ans_end = -1, start = 0;

    for (int i = 0; i < n; i++)
    {
        if(sum==0) 
        {
            start = i;
        }
        sum = sum + arr[i];

        max_so_far = max(max_so_far, sum);
        ans_start = start;
        ans_end = i;


        if (sum < 0)
        {
            sum = 0;
        }
    }
    
    vector<int> ans;
    for (int i = ans_start; i <= ans_end; i++)
    {
        ans.push_back(arr[i]);
    }

    return ans;
}


// Driver Code

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans = kadane(arr, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}


// Time Complexity: O(n)
// Space Complexity: O(1)