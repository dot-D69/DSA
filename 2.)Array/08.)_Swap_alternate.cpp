// Swap alternate elements

#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap_alternate(int arr[], int size)
{
    for (int i = 0; i < size; i +=2)
    {
        if (i + 1 < size)
        {
        // int temp = arr[i];
        // arr[i]=arr[i+1];
        // arr[i+1]=temp;
        swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    swap_alternate(arr, 7);
    printarray(arr, 7);
    return 0;
}



// Swap boundary element

#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap_boundary(int arr[], int size)
{
        int j = size-1;
        int i =0;
        while(i<j){
            swap(arr[i++],arr[j--]);
            }
    
}


int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    swap_boundary(arr, 7);
    printarray(arr, 7);

    return 0;
}




