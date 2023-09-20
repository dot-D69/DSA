// This Questions has 2 Solutions.

// Brute Force Approach
// We use set Data Structure to store the elements of both the arrays as set contains only unique elements.
// Then we simply print the elements of the set.

// Time Complexity: O(nlogn)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    set<int> s;

    for (int i = 0; i < a.size(); i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < b.size(); i++)
    {
        s.insert(b[i]);
    }

    vector<int> unique;
    for (auto x : s)
    {
        unique.push_back(x);
    }

    return unique;
};

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {2, 3, 4, 5, 6};
    vector<int> unique = sortedArray(a, b);
    for (int i = 0; i < unique.size(); i++)
    {
        cout << unique[i] << " ";
    }
    return 0;
}

// Optimal Approach
// Two pointer appraoch
// We use two pointers i and j to iterate over the two arrays. and a vector to store the unique elements.
// If the element at index i of array a is less than the element at index j of array b, then we push the element at index i of array a into the vector and increment i by 1.
// If the element at index i of array a is greater than the element at index j of array b, then we push the element at index j of array b into the vector and increment j by 1.
// If the element at index i of array a is equal to the element at index j of array b, then we push the element at index i of array a into the vector and increment i and j by 1.
// After we have finished processing all the elements of both the arrays, There still might be some elements left in any of the arrays. So, we simply push the remaining elements into the vector.

// Time Complexity: O(n+m) n and m are the sizes of the two arrays.
// Space Complexity: O(n+m)

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    int i = 0;
    int j = 0;
    vector<int> unique;

    while (i < a.size() && j < b.size())
    {
        if (a[i] <= b[j])
        {
            if (unique.size() == 0 || unique.back() != a[i])
            {
                unique.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (unique.size() == 0 || unique.back() != b[j])
            {
                unique.push_back(b[j]);
            }
            j++;
        }
    }

    // Append any remaining elements from both vectors (if any).
    while (i < a.size())
    {
        if (unique.back() != a[i])
        {
            unique.push_back(a[i]);
        }
        i++;
    }

    while (j < b.size())
    {
        if (unique.back() != b[j])
        {
            unique.push_back(b[j]);
        }
        j++;
    }

    return unique;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {2, 3, 4, 5, 6};
    vector<int> unique = sortedArray(a, b);
    for (int i = 0; i < unique.size(); i++)
    {
        cout << unique[i] << " ";
    }
    return 0;
}

// Time complexity = O(n1+n2)  as we are iterating both the arrays a and b
//  Space Complexity thaat we are using to return the answer is O(n1+n2)
