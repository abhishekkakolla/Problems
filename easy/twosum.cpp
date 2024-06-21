// using hashmap
#include <unordered_map>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;
        vector<int> ans;
        
        for (int i = 0; i < nums.size(); i++)
        {
            int lookfor = target - nums[i];  
            unordered_map<int, int>::const_iterator value; // where we will store index if we find it in hashmap
            value = hashmap.find(lookfor);
            if (value == hashmap.end())
            {
                // if not found, add to hashmap
                cout << "reached the end" << endl;
                hashmap[nums[i]] = i; 
            }
            else
            {
                cout << i << " " << value->second << endl;
                ans.push_back(value->second);
                ans.push_back(i);
            }
        }
        return ans;
    }   
};
