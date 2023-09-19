//Brute Force
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        int k = 0;
        for(int i=0;i<nums.size();i++){
            if(!s.count(nums[i])){
                s.insert(nums[i]);
                nums[k]=nums[i];
                k++;
            } 
        }
        return k;
    }
};

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter the elements of array: ";
    for(int i = 0 ; i < n ; ++ i ) {
        cin >> arr[i];
    }
    Solution s;
    cout<<s.removeDuplicates(arr)<<endl;
    return 0;
}

/*
    1.Suppose we have the input vector nums = [1, 1, 2].

    2.Initially, nums = [1, 1, 2], s = {}, and k = 0.

    Loop starts:

    3.i = 0, nums[0] = 1, s does not contain 1, so we insert 1 into s, update nums[0] = 1, and increment k to 1.
    Now, nums = [1, 1, 2], s = {1}, and k = 1.
    Continuing the loop:

    i = 1, nums[1] = 1, s already contains 1, so we skip this iteration.
    i = 2, nums[2] = 2, s does not contain 2, so we insert 2 into s, update nums[1] = 2, and increment k to 2.
    Now, nums = [1, 1, 2], s = {1, 2}, and k = 2  and the updated array is [1,2].
    Loop ends.

    At this point, the nums array contains the unique elements in the first k positions, and k represents the length of the modified array with duplicates removed. In this example, the modified array is [1, 2], and k is 2, which is the correct output.

    The value of k is not returning the entire array. Instead, it's indicating the index up to which the modified array contains unique elements. The length of the modified array can be determined by the value of k, and the modified array itself is represented by the first k elements of the nums array.
*/

/*
    Time Complexity: O(n)
    Space Complexity: O(n)
*/


//optimized

// Optimal
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        
        if (n <= 1) {
            return n;
        }
        
        int left = 0;
        for (int right = 1; right < n; right++) {
            if (nums[right] != nums[left]) {
                left++;
                nums[left] = nums[right];
            }
        }
        
        return left + 1;
    }
};

int main (){
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter the elements of array: ";
    for(int i = 0 ; i < n ; ++ i ) {
        cin >> arr[i];
    }
    Solution s;
    cout<<s.removeDuplicates(arr)<<endl;
    return 0;
}

/*

Check the size of the nums array, denoted as n:

If n is less than or equal to 1, return n immediately because there are no duplicates to remove, and the array is already non-decreasing.
Initialize two pointers, left and right, both initially pointing to the first element of the array (left = 0, right = 1).

Start a loop that iterates through the array from the second element (right = 1) to the end of the array (right < n).

Inside the loop:

Check if nums[right] is not equal to nums[left], indicating that a new unique element is encountered.
If they are not equal:
Increment the left pointer by 1 to move to the next position in the array.
Update nums[left] with the value of nums[right]. This effectively removes duplicates by overwriting them with the new unique element.
Continue this process until the right pointer reaches the end of the array.

Return left + 1 as the size of the modified array. The left pointer now points to the last unique element, and adding 1 gives you the count of unique elements.

*/