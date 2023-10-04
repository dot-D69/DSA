// To find the majority element in the array (https://github.com/dot-D69/DSA/blob/main/2.)Array/28.)Majority_element.cpp)
//The optimal solution is Moore's Voting Algorithm

// Moore's Voting Algorithm 
// The question says that if an element is present more than n/2 not equal to n/2 then that element is majority element (n being the size of the array)
// So the algorithm is:
// 1. Find the candidate for majority element
// 2. Check if the candidate is majority element
//  2.1 If yes, return the candidate
//  2.2 If no, return -1

// Explanation:
// 1. We will take two variables, one for storing the candidate and other for storing the count of the candidate
// 2. We will traverse the array and check if the current element is equal to the candidate
//  2.1 If yes, we will increment the count
//  2.2 If no, we will decrement the count
// 3. If the count becomes 0, we will update the candidate to the current element and set the count to 1
// 4. After traversing the array, we will check if the candidate is the majority element or not
//  4.1 If yes, we will return the candidate
//  4.2 If no, we will return -1

//Example:
// 1 2 3 4 5 5 5 5 5
//count =0;
//Candidate = 1, count = 1 (we take the first element as the candidate and set the count to 1 now if we again encounter 1, we will increment the count and if we encounter any other element, we will decrement the count and if the count becomes 0, we will update the candidate to the  current element )
//Candidate = 2, count = 0(we decremnt the count as 2 is not equal to 1 )
//Candidate = 2, count = 1 ( Now we will take candidate to be 2 and set the count to 1)
//Candidate = 3, count = 0 (we decremnt the count as 3 is not equal to 2 )
//Candidate = 3, count = 1 ( Now we will take candidate to be 3 and set the count to 1)
//Candidate = 4, count = 0 (we decremnt the count as 4 is not equal to 3 )
//Candidate = 4, count = 1 ( Now we will take candidate to be 4 and set the count to 1)
//Candidate = 5, count = 0 (we decremnt the count as 5 is not equal to 4 )
//Candidate = 5, count = 1 ( Now we will take candidate to be 5 and set the count to 1)
//Candidate = 5, count = 2 (we increment the count as 5 is equal to 5 )
//Candidate = 5, count = 3 (we increment the count as 5 is equal to 5 )
//Candidate = 5, count = 4 (we increment the count as 5 is equal to 5 )
//Candidate = 5, count = 5 (we increment the count as 5 is equal to 5 )

//Now to check if the candidate is the majority element or not, we will check if the count is greater than n/2 or not (n being the size of the array)
//Here, count = 5 and n = 9
//So, 5 > 9/2
//Therefore, 5 is the majority element


#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> arr) {
    int n = arr.size();
    int count = 0;
    int candidate = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }

    }
    return candidate;
}


int main(){
    vector<int> arr = {2,2,1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << ans << endl;
    
    return 0;
}








