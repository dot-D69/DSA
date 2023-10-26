/*
Problem Statement: There is an integer array ‘A'of size ‘N'.

Number of inversions in an array can be defined as the number of pairs of ‘i'. ‘j' such
that ‘i' < ‘j' and ‘AU]' > ‘A[fl'.

You must return the number of inversions in the array.

Input : A = [5,3, 2, 1,4]
Output : 7
Explanation : The 7 inversions are (5,3), (5,2), (5,1), (5,4), (3,2), (3,1),(2,1).

*/

#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //Modification 1: cnt variable to count the pairs:
    int cnt = 0;

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1); //Modification 2
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return cnt; // Modification 3
}

int mergeSort(vector<int> &arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return cnt;
    int mid = (low + high) / 2 ;
    cnt += mergeSort(arr, low, mid);  // left half
    cnt += mergeSort(arr, mid + 1, high); // right half
    cnt += merge(arr, low, mid, high);  // merging sorted halves
    return cnt;
}

int numberOfInversions(vector<int>&a, int n) {
    return mergeSort(a,0,n-1);
}

int main() {
    vector<int> a = {5, 3, 2, 1, 4};
    int n = a.size();
    cout << numberOfInversions(a, n);
    return 0;
}

// Time Complexity: O(nlogn)
// Space Complexity: O(n)

//Explanation:
/*
The idea is similar to merge sort, we divide the array into two halves and count the inversions in the left half and right half and then count the inversions while merging the two halves.

The inversions in the left and right halves are also calculated using the same method, i.e., recursively calling the function to count the inversions.

The only difference is in the merging part. While merging, we need to count the inversions too. The inversions will be equal to the number of elements remaining in the left half (i.e., mid – i + 1) when we are merging because the array is sorted. So, if arr[i] > arr[j], then there are mid – i + 1 inversions. We also need to store the elements in sorted order while merging the two halves.

*/

/*

Dry Run: [5, 3, 2, 1, 4] also show the count

[5, 3, 2] [1, 4]
[5, 3] [2] [1] [4]
[5] [3] [2] [1] [4]

[5] [3] [2] [1] [4]
[3, 5] [1, 2, 4]
[1, 2, 3, 4, 5]

[1, 2, 3, 4, 5]
[1, 2, 3, 4, 5]
[1, 2, 3, 4, 5]


so total inversion = 7


*/