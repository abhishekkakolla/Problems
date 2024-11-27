/*
backtracking: consider cases where you do include and don't include the next element
which gets you all possible combinations
since we're only moving forward, duplicates won't be considered

*/

#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        if (!nums.size()) return vector<vector<int>>(); 
        vector<vector<int>> ans;
        ans.push_back({});
        // for (int i = 0; i < nums.size(); ++i)
        // { // no need for for loop here
        vector<int> curr_subset;
        int i = 0;
        subset_recurse(nums, ans, curr_subset, i);
        
        return ans;
    }

    void subset_recurse(vector<int>& nums, vector<vector<int>>& ans, vector<int>& curr_subset, int index)
    {
        if (index >= nums.size()) return;
        curr_subset.push_back(nums[index]); // case: include this element in subset
        ans.push_back(curr_subset);
        subset_recurse(nums, ans, curr_subset, index+1); // continue


        curr_subset.pop_back(); // back track: not including the element
        subset_recurse(nums, ans, curr_subset, index+1); // continue

    }


};
