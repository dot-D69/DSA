// The problem statement : Given two arrays of integers, concatenate them into one array.
/*Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n =nums.size();
        vector<int> ans(n*2);
        for(int i=0;i<nums.size();i++){
            ans[i]=nums[i];
            ans[i+n]=nums[i];
        }
        return ans;

    }
};

int main()
{
    Solution obj1;
    vector<int> nums = {1,2,1};
    vector<int> ans = obj1.getConcatenation(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}