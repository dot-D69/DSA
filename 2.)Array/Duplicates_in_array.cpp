
/*For example:
Consider ARR - [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.*/

// Question link
/*https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void findDuplicate(vector<int> &arr)
{

    unordered_set<int> s;
    for (int i = 0; i < arr.size(); i++)
    {
        if (s.count(arr[i]))
        {
            cout << arr[i]<<" ";
        }
        s.insert(arr[i]);
    }
}

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int e;
    vector<int> arr(n);
    cout << "Enter the elements to be inserted" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        arr[i] = e;
    }
    cout << "The array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

    cout << "The duplicate in the array is: ";
    findDuplicate(arr);
    cout<< " ";
    return 0;
}

