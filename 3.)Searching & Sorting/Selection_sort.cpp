// Selection sort
// Time Complexity: O(n^2)
// Auxiliary Space: O(1)


#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
    for (int i = 0; i <n-2 ; i++)
    {
        int min_index=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min_index]){
                min_index=j; 
            }
        swap(arr[i],arr[min_index]);
        }
    }
    cout<<"Sorted array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int n;
    cout<<"Enter the length of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    return 0;
}


// Working of Selection Sort:

// 1. Find the minimum element in the array and swap it with the element in the 1st position.

// 9 46 24 52 20 13

// 2. Now find the minimum element in the remaining array and swap it with the element in the 2nd position.

// 9 13 24 52 20 46

// 3. Again find the minimum element in the remaining array and swap it with the element in the 3rd position.

// 9 13 20 52 24 46

// 4. Continue this process until the entire array is sorted in ascending order.

// Selection sort is used when:
// 1. Memory Writes are costly.
// 2. Swapping is costly.
// 3. To reduce the number of memory writes.
// 4. To reduce the number of swaps.
