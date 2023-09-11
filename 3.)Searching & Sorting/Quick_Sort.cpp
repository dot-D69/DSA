#include<iostream>
using namespace std;

int partition(int arr[], int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot&&i<=high-1){
            i++;
        }
        while(arr[j]>pivot&&j>=low+1){
            j--;
        }

        if(i<j){
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[low],arr[j]);
    return j;

}

void quicksort(int arr[],int low,int high){
    if(low<high) // it checks that the array has more than one element
    {
        int partition_index = partition(arr,low,high);
        quicksort(arr,low,partition_index-1);
        quicksort(arr,partition_index+1,high);
    }
}

int main(){
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}



/* Explanation: How quickSort works?
QuickSort is a Divide and Conquer algorithm.
1. First we need an pivot (we can take any element as pivot) in this case we have takend the first element as pivot.
2. Now since we have the Pivot we willplace it in its correct position in the array. that is all elements lesser than pivot will be at the left of the pivot and all elements greater than pivot will be at the right of the pivot.
3. To do this we need a partition function which will put all elements lesser than pivot to the left of the pivot and all elements greater than pivot to the right of the pivot. and return the index of the pivot.
==> Inside the Partition Function (arr,low,high);
4. We first make the first element as pivot.
5. We take two variables i and j. i will start from low and j will start from high.
6. Now we need that the i does not cross j. so we will run a while loop till i<j. because if it did not exist then i would cross j and the array elements would no tbe in right place wrt pivot.
7. Now we will run a while loop till arr[i]<pivot and i<=high-1. because if i>high then it will give segmentation fault as i runs out of the array bound . and if arr[i]>pivot then we will stop the loop. 
    7.1) This is to check that if an element greater than pivot is at the left of the pivot then we will stop the loop.
8. Now we will run a while loop till arr[j]>pivot and j>=low+1. because if j<low then it will give segmentation fault as j runs out of the array bound . and if arr[j]<pivot then we will stop the loop.
    8.1) This is to check that if an element lesser than pivot is at the right of the pivot then we will stop the loop.
9. Now we will check if i<j then we will swap the elements at i and j. because if i>j then we will not swap the elements as the elements are already in right place wrt pivot.
10. Now we will swap the pivot with the element at j. because we want the pivot to be at its correct position.
11. Now we will return the index of the pivot.

==> Inside the quickSort Function (arr,low,high);
12. We will check if low<high. because if low>=high then it means that the array has only one element and it is already sorted.
13. Now we will call the partition function and store the index of the pivot in a variable partition_index.
14. Now we will call the quickSort function for the left part of the array. that is from low to partition_index-1.
15. Now we will call the quickSort function for the right part of the array. that is from partition_index+1 to high.

==> Time Complexity:
1. Best Case: O(nlogn)
2. Average Case: O(nlogn)
3. Worst Case: O(n^2)

It is better than merge sort because it does not require extra space.

*/