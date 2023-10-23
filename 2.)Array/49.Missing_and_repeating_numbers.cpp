/*Problem Statement: Find the repeating and the missing numbers in array of size N where elemeents are  in the range 1 to N
each  integer appears once except for'x' which appears twice and 'y' which is missing
*/

// Approach 1: Using Hashing
#include <bits/stdc++.h>
using namespace std;

// Hashing

vector<int> findMissingRepeatingNumbers(vector<int> a)
{
    int n = a.size();
    vector<int> res;
    int hash[n + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[a[i]]++;
    }

    int repeating = -1;
    int missing = -1;

    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 2)
        {
            repeating = i; // Element i is repeating
        }
        else if (hash[i] == 0)
        {
            missing = i; // Element I is missing
        }
    }

    if (repeating != -1 && missing != -1)
    {
        return {repeating, missing};
    }
}

int main()
{
    vector<int> a = {4, 3, 6, 2, 1, 1};
    vector<int> res = findMissingRepeatingNumbers(a);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}


// Approach 2: Using Basic maths
#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector < int > a) {
    long long n = a.size();
    //S-Sn
    long long SN=(n*(n+1))/2;
    long long S2N = (n*(n+1)* (2*n+1)) /6;
    long long s=0,s2=0;
    for(int i =0;i<n;i++){
        s+=a[i];
        s2+= (long long)a[i] * (long long)a[i];
    }
    // x is the repeating number and y is the missing number
    long long val1= s-SN; // x-y
    long long  val2 = s2-S2N; // x^2-y^2
    val2 = val2/val1; // x+y
    long long x = (val1 + val2)/2;
    long long y = x-val1;
    return{(int)x,(int)y};
}

int main() {
    vector < int > a = {4, 3, 6, 2, 1, 1};
    vector < int > res = findMissingRepeatingNumbers(a);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
}

