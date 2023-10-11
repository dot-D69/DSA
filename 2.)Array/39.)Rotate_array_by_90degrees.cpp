/*
Problem statement: Given a square matrix, turn it by 90 degrees in anti-clockwise direction without using any extra space.
Input: 1 2 3 4
       5 6 7 8
       9 10 11 12
       13 14 15 16
Output: 4 8 12 16
        3 7 11 15
        2 6 10 14
        1 5 9 13
*/

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    // Transpose the matrix (rows becomes columns, columns becomes rows)
    for (int i = 0; i < n - 1; i++)
    { //  it means form 0 to second last as (i<n is last) so i<n-1  is second last
        for (int j = i + 1; j < n; j++)
        { // it means we travese from i+1 to the last
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // now we have transposed now to get our answer we need to reverse every row so that it is acc to our answer
    for (int i = 0; i < n; i++)
    {
        // since each row is represened by matrix[i] so we will use that
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) // since we are taking a square matrix
        {
            cin >> matrix[i][j];
        }
    }
    rotate(matrix);
    cout << "The rotated matrix is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) // since we are taking a square matrix
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}