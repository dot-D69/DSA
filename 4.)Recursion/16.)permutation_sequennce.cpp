//#leetcode 60

/*
// Brute Force
class Solution {
public:
    void help(int i, vector<string>& nums, vector<vector<string>>& result) {
        if (i >= nums.size()) {
            result.push_back(nums);
            return;
        }

        for (int ind = i; ind < nums.size(); ind++) {
            swap(nums[i], nums[ind]);
            help(i + 1, nums, result);
            swap(nums[i], nums[ind]);
        }
    }

    string getPermutation(int n, int k) {
        vector<string> nums;
        vector<vector<string>> result;
        for (char i = '1'; i <= '0' + n; i++) {    // the '0'+n converts any int n to string
            nums.push_back(string(1, i));        // string(1, i) creates a string with a length of 1 and initializes it with the character i.


        }
        help(0, nums, result);
        sort(result.begin(), result.end());

   
        string ans = ""; 
        for (int i = 0; i < result[k - 1].size(); i++) {
            ans += result[k - 1][i];
        }
        return ans;
    }
};

Time Complexity: O(n*n!)
Space Complexity: O(n*n!)
*/

// Optimized