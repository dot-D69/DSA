//Find the unique number in the array where all the numbers are present twice except one number.
//Time Complexity: O(n)

#include <iostream>
using namespace std;

int FindUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int array[] = {3, 1, 4, 1, 3};
    int s = sizeof(array) / sizeof(array[0]);
    cout << FindUnique(array, 5) << " ";
    return 0;
}
