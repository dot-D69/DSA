// Merge-Sort = Divide and Conquer + Recursion

//

#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int> &arr, int low, int mid, int high);
void mergesort(vector<int> &arr, int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int mid = (low + high) / 2;

    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    Merge(arr, low, mid, high);
}

void Merge(vector<int> &arr, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;

    vector<int> temp;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        // cout<<temp[i]<<" ";
        arr[i] = temp[i - low];
    }
}

int main()
{
    vector<int> arr = {3,2,1,4,3};
    int n = arr.size();

    mergesort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}