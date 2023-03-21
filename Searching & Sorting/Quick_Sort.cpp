#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
        {
            cnt++;
        }
    }

    // right posiiton of pivot
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quicksort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // For partition
    int p = partition(arr, s, e);

    // For sorting the left part
    quicksort(arr, p + 1, e);

    // For sorting the right part
    quicksort(arr, s, p - 1);
}

int main()
{
    int arr[7] = {31, 69, 82, 13, 99, 47, 54};

    /*
    69,31,82,13,99,47
    13,31,82,69,99,47,54
    13,31

    right part
    82,69,99,47,54   82 is pivot and cnt is 3
    47,69,99,82,54 i=47,j=54
    after i++ i = 99 and j=69 swap
    47,54,69,82,99

    left part
    13
    s=0,and e=p-1 that is e = 0 ;
    s>=e base case return
    13

    now the array is sorted
    13,31,47,54,69,82,99
    */

    int n = 7;

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}