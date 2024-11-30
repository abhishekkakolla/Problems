/*
Mistakes: for this problem only 1 recursive call per element is needed,
originally I did two (one for adding current element and one for adding next element),
but this was redundant as future recursive calls will be the next element
that's why there is a pop back to not include curr element (backtrack) and explore new solns

*/


#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        /*
        explore all solutions by including the next number or
        including the current number one more time

        if we overshoot the target, that tree solution is invalid, return
        if we equal the target, add to ans
        */
        vector<int> curr_ints;
        combinationSumRecurse(ans, nums, target, 0, curr_ints, 0);

        return ans;
    }

    void combinationSumRecurse(vector<vector<int>>& ans, vector<int>& nums, int target, int curr_index, vector<int> curr_ints, int curr_sum)
    {
        if (curr_sum > target) return; // overshot, this tree has no valid soln
        if (curr_sum == target) {
            ans.push_back(curr_ints); 
            return;
        }

        if (curr_index >= nums.size()) return;
        for (int i = curr_index; i < nums.size(); i++)
        {
            // include the current number one more time
            curr_ints.push_back(nums[i]); // include current number
            combinationSumRecurse(ans, nums, target, i, curr_ints, curr_sum + nums[i]);
            curr_ints.pop_back(); // backtrack - dont include the number but use the next
        }
        
    
    }
};
