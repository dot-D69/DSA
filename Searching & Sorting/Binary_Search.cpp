#include <iostream>
using namespace std;
int Binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[6] = {4, 6, 8, 18, 24, 36};
    int oarr[7] = {1, 5, 7, 9, 49, 77, 99};

    cout << "enter the Key to be searched" << endl;
    int key;
    cin >> key;

    int Index = Binarysearch(oarr, 7, key);
    cout << "The index of " << key << " is " << Index << endl;

    return 0;
}