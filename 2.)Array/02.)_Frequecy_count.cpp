// To Count the frequency of elements in array
// time complexity - O(n)
// Space complexity - O(m)  where m is the max element

#include <iostream>
using namespace std;


    int main()
    {
        int arr[] = {2, 5, 6, 5, 1, 2, 3, 2, 5, 6, 2};
        int n = sizeof(arr) / sizeof(int);
        int m = 0;
        int min = 0;
        // Find the max element
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > m)
            {
                m = arr[i];
            }
        }
        // creat an array of size max element+1
        int freq[m + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++; // increment he freq array index as it iterates through all the elements of the original array
        }

        // print the freq array
        for (int i = 0; i < m + 1; i++)
        {
            cout << freq[i] << " ";
        }

        return 0;
    }

    // If there are negative elements present in the array so we will fidn both max and min elements
    // and then increase all the elemnets of array by abs(min) so

    // 2---> 5, 5--->8, 6--->9, -1--->2 , -3--->0

#include <iostream>
    using namespace std;

    int main()
    {
        int arr[] = {2, 5, 6, 5, -1, 2, -3, 2, 5, 6, 2};
        int n = sizeof(arr) / sizeof(int);
        int m = 0;
        int min = 0;

        // Find the min element
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }

        // Add the min element to all elembnts of the array
        int mn = abs(min);

        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] + mn;
            cout << arr[i] << " ";
        }

        // Find the max element
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > m)
            {
                m = arr[i];
            }
        }

        int freq[m + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }

        for (int i = 0; i < m + 1; i++)
        {
            cout << freq[i] << " ";
        }
        cout << endl;

        cout << "original integers are" << endl;
        cout << "2---> 5, 5--->8, 6--->9, -1--->2 , -3--->0" << endl;

        return 0;
    }




// // Another way is to use maps to find frequency

// #include <iostream>
// #include <map>
//     using namespace std;

//     int main()
//     {
//         int arr[] = {2, 5, 6, 5, -1, 2, -3, 2, 5, 6, 2};
//         int n = sizeof(arr) / sizeof(int);

//     // Declare a map of <int,int> type one will store the elements and the other  will store freq correspondig to the element
//         map<int,int>freq;
//         for (int i = 0; i < n; i++)
//         {
//             freq[arr[i]]++;
//         }

//         for(auto x: freq){
//             cout<<x.first<<":"<< x.second << endl;
//         }
//         cout << endl;


//         return 0;
//     }
