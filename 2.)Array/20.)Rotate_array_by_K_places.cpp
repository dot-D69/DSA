// This problem has 3 solutions.

// The first two solution are basically the same but the difference is how the question is asking and accessing the index of the array.

// Input
/*
'arr '= [1,2,3,4,5]
'k' = 1 rotated
array = [2,3,4,5,1]
'k' = 2 rotated
array = [3,4,5,1,2]
'k' = 3 rotated
array = [4,5,1,2,3]*/

// In this case, you are rotating the array to the left by moving the first k elements to the end.


// Solution 1:

// Brute force

#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> arr, int k)
{
    int n = arr.size();
    if (k == n)
    {
        reverse(arr.begin(), arr.end());
    }

    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[i - (n - k)];
    }

    return arr;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the number of rotations: ";
    cin >> k;
    vector<int> res = rotateArray(arr, k);
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}


// 2nd Solution:

/*
Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/

// In this case, you are rotating the array to the right by moving the last k elements  to the front.

// Solution 2:

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == 0 || k == n) {
            return; // No need to rotate if k is 0 or equal to the array size
        }
        k=k%n;

        vector<int> temp(k);

        // Copy the last k elements into the temp array
        for (int i = 0; i < k; i++) {
            temp[i] = nums[n - k + i];
        }

        // Shift the remaining elements to the right
        for (int i = n - 1; i >= k; i--) {
            nums[i] = nums[i - k];
        }

        // Copy the elements from temp back to the beginning of the array
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the number of rotations: ";
    cin >> k;
    Solution s;
    s.rotate(arr, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}


// Solution 3:



#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
int n = nums.size();
        k = k % n; // Ensure k is within the range [0, n)

        if (k > 0) {
            reverse(nums.begin(), nums.end()); // Reverse the entire array
            reverse(nums.begin(), nums.begin() + k); // Reverse the first k elements
            reverse(nums.begin() + k, nums.end()); // Reverse the remaining elements
        }
    }
};

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the number of rotations: ";
    cin >> k;
    Solution s;
    s.rotate(arr, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}




