// The question says that if an element is present more than n/2 not equal to n/2 then that element is majority element (n being the size of the array)

//Brute force approach

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {
    int n = v.size();
    for(int i=0; i<n; i++) {
        int count = 0;
        for(int j=0; j<n; j++) {
            if(v[i] == v[j]) {
                count++;
            }
        }
        if(count > n/2) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 5, 5, 5, 5};
    cout<<majorityElement(v);
    return 0;
}

// Time complexity: O(n^2)
// Space complexity: O(1)

//Better approach   (Hashmap)

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {
    int n = v.size();
    map<int, int> m;
    for(int i=0; i<n; i++) {
        m[v[i]]++;
    }
    for(auto i: m) {
        if(i.second > n/2) {
            return i.first;
        }
    }
    return -1;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 5, 5, 5, 5};
    cout<<majorityElement(v);
    return 0;
}

// Time complexity: O(n)
// Space complexity: O(n)

