// we are given an array and we have to find the sum of all subarrays of size k;

#include <iostream>
using namespace std;

void calc(int arr[], int n, int k)
{

    for (int i = 0; i < n - k + 1; i++)
    {
        int sum = 0;
        for (int j = i; j < k + i; j++)
        {
            sum += arr[j];
        }
        cout << sum << " ";
    }
}

int main()
{
    int arr[] = {5, 2, 1, 4, 3, 9, 7, 6, 8};
    int n = sizeof(arr) / sizeof(int);
    int k = 3;
    calc(arr, n, k);
    return 0;
}