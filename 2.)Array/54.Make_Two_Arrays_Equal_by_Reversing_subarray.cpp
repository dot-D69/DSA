#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> mp;
        for (int num : target) {
            mp[num]++; // Add the numbers to the map
        }

        for (int num : arr) {
            if (mp.find(num) == mp.end()) return false; // If the number is not present in arr, it won't be in the map; hence return false
            mp[num]--; // We get the number in the map and reduce its count
            if (mp[num] == 0) {
                mp.erase(num); // If there is any num whose freq is 0, then erase it from the map
            }
        }
        return mp.size() == 0;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in the arrays: ";
    cin >> n;

    vector<int> target(n), arr(n);
    cout << "Enter elements of the target array: ";
    for (int i = 0; i < n; ++i) {
        cin >> target[i];
    }

    cout << "Enter elements of the arr array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    Solution sol;
    if (sol.canBeEqual(target, arr)) {
        cout << "The arrays can be made equal by reversing subarrays." << endl;
    } else {
        cout << "The arrays cannot be made equal by reversing subarrays." << endl;
    }

    return 0;
}
