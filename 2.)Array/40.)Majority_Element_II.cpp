//Problem Link: https://leetcode.com/problems/majority-element-ii/
//Problem Statement: Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

// Brute Force
#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    vector<int> res;
    int n = nums.size();
    map<int, int> hash;
    int cnt = (int)(n / 3) + 1;

    for (int i = 0; i < n; i++)
    {
        hash[nums[i]]++;
        if (hash[nums[i]] == cnt)
        {
            res.push_back(nums[i]);
        }
    }
    return res;
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

    vector<int> res = majorityElement(nums);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}



//#########################################################3//


// Optimal Solution
#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    int n = nums.size();
    vector<int> res;
    int mini = (int)(n / 3) + 1;

    int cnt1 = 0, cnt2 = 0;
    int ele1 = INT_MIN, ele2 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (cnt1 == 0 && ele2 != nums[i])
        {
            cnt1 = 1;
            ele1 = nums[i];
        }
        else if (cnt2 == 0 && ele1 != nums[i])
        {
            cnt2 = 1;
            ele2 = nums[i];
        }
        else if (ele1 == nums[i])
            cnt1++;
        else if (ele2 == nums[i])
            cnt2++;

        else
        {
            cnt1--;
            cnt2--;
        }
    }

    // Manual check
    cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (ele1 == nums[i])
            cnt1++;
        if (ele2 == nums[i])
            cnt2++;
    }

    if (cnt1 >= mini)
    {
        res.push_back(ele1);
    }
    if (cnt2 >= mini)
    {
        res.push_back(ele2);
    }

    return res;
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

    vector<int> res = majorityElement(nums);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}


/*
GitHub Copilot: Sure, here's an explanation of the code:

1. The code defines a function `majorityElement` that takes a reference to a vector of integers as input and returns a vector of integers.

2. The function first calculates the minimum count of elements required to be considered as a majority element. This is done by dividing the size of the input vector by 3 and adding 1 to it.

3. The function then initializes two counters `cnt1` and `cnt2` to 0 and two variables `ele1` and `ele2` to `INT_MIN`.

4. The function then iterates through the input vector and checks if `cnt1` is 0 and `ele2` is not equal to the current element. If this condition is true, it sets `cnt1` to 1 and `ele1` to the current element.

5. If the above condition is not true, the function checks if `cnt2` is 0 and `ele1` is not equal to the current element. If this condition is true, it sets `cnt2` to 1 and `ele2` to the current element.

6. If neither of the above conditions is true, the function checks if `ele1` is equal to the current element. If this condition is true, it increments `cnt1`. If `ele2` is equal to the current element, it increments `cnt2`.

7. If none of the above conditions is true, it decrements both `cnt1` and `cnt2`.

8. After iterating through the input vector, the function manually checks the counts of `ele1` and `ele2` in the input vector.

9. If the count of `ele1` is greater than or equal to the minimum count required to be considered as a majority element, it adds `ele1` to the result vector.

10. If the count of `ele2` is greater than or equal to the minimum count required to be considered as a majority element, it adds `ele2` to the result vector.

11. The function then returns the result vector.

12. The code also includes a `main` function that takes input from the user, calls the `majorityElement` function, and prints the result vector.
*/