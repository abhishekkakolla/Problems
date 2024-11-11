#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        return searchRecursive(nums, 0, nums.size()-1, target);
    }

    int searchRecursive(vector<int>& nums, int start, int end, int target)
    {
        if (nums.size() == 1 && nums[start] == target) return start; // base case
        if (start > end) return -1; // base case

        int mid = (start + end) / 2;
        if (target > nums[mid])
        {
            
            return searchRecursive(nums, mid+1, end, target);
        }
        else if (target < nums[mid])
        {
            return searchRecursive(nums, start, mid-1, target);
        }
        else if (target == nums[mid])
        {
            return mid;
        }

    }
};
