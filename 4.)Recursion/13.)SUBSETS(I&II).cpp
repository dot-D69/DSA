// Subsets I
/*
Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> result;
    vector<int> vec;
    void generate_subset(int i,vector<int>& nums,vector<int>& vec){
        if(i>=nums.size()){
            result.push_back(vec);
            return;
        }

        vec.push_back(nums[i]);
        generate_subset(i+1,nums,vec);
        vec.pop_back();
        generate_subset(i+1,nums,vec);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        generate_subset(0,nums,vec);
        return result;
        
    }


int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    vector<vector<int>> result = subsets(nums);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



// Subsets II
/*
Given an integer array nums that may contain duplicates, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

Example 1:

Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
    
*/  

//Approach 1: Using erase and unique function

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> vec;
    
    void subset(int i, vector<int>& nums, vector<int>& vec) {
        if (i >= nums.size()) {
            result.push_back(vec);
            return;
        }
        vec.push_back(nums[i]);
        subset(i + 1, nums, vec);
        vec.pop_back();
        subset(i + 1, nums, vec);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        subset(0, nums, vec);
        
        sort(result.begin(), result.end());  
        
        
        result.erase(unique(result.begin(), result.end()), result.end());

        return result;
    }

private:
    vector<vector<int>> result;
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> subsets = solution.subsetsWithDup(nums);

    // Print the subsets
    for (const vector<int>& subset : subsets) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

//Approach 2: Using loop to skip duplicates

// Instead of using remove we could also use loop  to skip the same elements 
class Solution {
public:
    vector<int> vec;
    
    void subset(int i, vector<int>& nums, vector<int>& vec) {
        if (i >= nums.size()) {
            result.push_back(vec);
            return;
        }
        vec.push_back(nums[i]);
        subset(i + 1, nums, vec);
        vec.pop_back();
        while(i+1<nums.size()&&nums[i]==nums[i+1]) i++;
        subset(i + 1, nums, vec);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        subset(0, nums, vec);
        
        sort(result.begin(), result.end());  

        return result;
    }

private:
    vector<vector<int>> result;
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> subsets = solution.subsetsWithDup(nums);

    // Print the subsets
    for (const vector<int>& subset : subsets) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}


