// we are given an arr of size n and a integer x we have to return the count of x in the arr
// Seems likes an easy can be done by many methods like linear search , hashing, most of the approaches are of O(n) time complexity
// But we are supposed to it in O(logn) time complexity (that is the constraint)
//Now when we here logn complexity we should think of binary search as it is the only algo that has logn complexity
// So we will do binary search and find the first and last occurence of the element and then return the difference of the two
// To find the first and last we will use STL lower_bound and upper_bound

#include <bits/stdc++.h>
using namespace std;

int count(vector<int>& arr, int n, int x) {

	int first =  lower_bound(arr.begin(),arr.end(),x)-arr.begin();
	int last = upper_bound(arr.begin(),arr.end(),x)-arr.begin();

	int count = last-first;
	return count;
}

int main() {
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<count(arr,n,x);
    return 0;
}

// Now to explain Lower_bound and upper_bound
/*
1.) std::lower_bound(arr.begin(), arr.end(), x) is a C++ Standard Library function called lower_bound. 
It's used for binary search on a sorted range (in this case, an array).

2.) arr.begin() and arr.end() specify the range over which the binary search is performed, which is the entire array arr.

3.) x is the value we're searching for.

4.) std::lower_bound returns an iterator pointing to the first element that is not less than x 
(i.e., it returns an iterator to the first occurrence of x or the position where x should be inserted to maintain the sorted order).

Finally, by subtracting arr.begin() from the iterator returned by std::lower_bound, you get the index of the first occurrence of x in the array. 
This index is assigned to the variable first.

Similarly, std::upper_bound 

1.) std::upper_bound(arr.begin(), arr.end(), x) is a C++ Standard Library function called upper_bound.
It's used for binary search on a sorted range (in this case, an array).

2.) arr.begin() and arr.end() specify the range over which the binary search is performed, which is the entire array arr.

3.) x is the value we're searching for.

4.) std::upper_bound returns an iterator pointing to the first element that is greater than x
(i.e., it returns an iterator to the position where x should be inserted to maintain the sorted order after the last occurrence of x).

5.) Finally, by subtracting arr.begin() from the iterator returned by std::upper_bound, you get the index of the last occurrence of x in the array.
This index is assigned to the variable last.


On subtracting the two we get the count of the number of occurences of x in the array

*/