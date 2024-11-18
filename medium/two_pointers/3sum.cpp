/*
Got the right algorithmic thinking correct, just missed one trick
Approach: Two sum approach for each item in the list (sorted ofc)
which gets O(n * n). Trick is that left pointer can start at the current pointer+1
since valid triplets would've been detected beforehand (so no dupes there).
When a triplet is found, advance l and r pointers until no dupe is there,

*/


#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // sort array
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        int sum = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            // skip dupes 
            if (i > 0 && nums[i] == nums[i-1]) continue;

            int l = i + 1; // starting here since previous triplets would've been already found
            int r = nums.size() - 1;
            sum = nums[i] * (-1); // target sum is opposite (sum to 0)
            while (l < r)
            {
                // advance cuz already accounted for
                int twosum = nums[l] + nums[r];
                if (twosum == sum)
                {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    // advance if there are dupes
                    int left = nums[l];
                    int right = nums[r];
                    // both may be dupes, check if they are, and advance
                    while ((l < r) && (nums[l] == left)) l++;
                    while ((l < r) && (nums[r] == right)) r--;


                }
                else if (twosum < sum)
                {
                    l++;
                }
                else if (twosum > sum)
                {
                    r--;
                }
            }
        }
        return ans;
        
    }
};
