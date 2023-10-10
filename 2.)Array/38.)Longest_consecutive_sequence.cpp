/*
Problem statement: Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1,2,3,4]. Therefore its length is 4.

*/

#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    int longest = 1;
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(nums[i]);
    }
    int x = 0;
    int cnt = 0;
    for (auto each : s)
    {
        if (s.find(each - 1) == s.end())
        {
            x = each;
            cnt = 1;
        }
        while (s.find(x + 1) != s.end())
        {
            x = x + 1;
            cnt++;
        }
        longest = max(longest, cnt);
    }
    return longest;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << longestConsecutive(nums);
    return 0;
}

/*
what we are doing is after storing the elements in the set
we just check like [102,4,100,1,101,3,2,1,1]
so we check for the first point like if the set starts form 102 then
we check if there is 101 if there is then we check if there is 100 there ,then we check if there is 99 there is not so our starting point becomes 100 then from there we count if 101 is present then next if 102 is present then next 103 is not present so our cnt becomes 3

similarliy we can find the max length of subsequence
*/
