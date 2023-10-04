// The problem is to find the maximum sum of a contiguous subarray within an array of numbers which has the largest sum.
// Example: [-2, 1, -3, 4, -1, 2, 1, -5, 4] -> 6

//What is Kadane's Algorithm?
// It is a Dynamic Programming Algorithm which is used to find the maximum sum of a contiguous subarray within an array of numbers which has the largest sum.

// Explanation:
// 1. Initialize:
//     max_so_far = INT_MIN
//     sum = 0
// 2. Loop for each element of the array
//     a) sum = sum + a[i]
//     b) if(sum > max_so_far)
//         max_so_far = sum
//     c) if(sum < 0)
//         sum = 0
// 3. return max_so_far

// what we are doing here is that we are adding the elements of the array one by one and if the sum is greater than the max_so_far then we are updating the max_so_far with the sum.
// if the sum is less than 0 then we are making the sum = 0 because we want the sum to be positive.(adding a negative number to the sum will only decrease the sum and we wont get the maximum sum)

// Time Complexity: O(n)
// Space Complexity: O(1)

#include  <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n)
{
    int max_so_far = INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];

        max_so_far = max(max_so_far, sum);

        if (sum < 0)
        {
            sum = 0;
        }
    }

    return max_so_far;
}

// Driver Code

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << kadane(arr, n);
    return 0;
}

