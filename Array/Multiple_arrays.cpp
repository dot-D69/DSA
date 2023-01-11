/*
How to make 'n' number of arrays of 'n' size 'n' being user input
*/





#include<iostream>
#include<vector>
using namespace std;


int main() {
    int n;
    cout << "Enter the number of arrays: ";
    cin >> n;
    vector<int> arr[n];
    for (int i = 0; i < n; i++) {
        int m;
        cout << "Enter the number of elements for array " << i << ": ";
        cin >> m;
        for (int j = 0; j < m; j++) {
            int x;
            cout << "Enter element " << j << " for array " << i << ": ";
            cin >> x;
            arr[i].push_back(x);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "Elements of array " << i << ": ";
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
