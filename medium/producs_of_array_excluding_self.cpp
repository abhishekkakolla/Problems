#include <map>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>


using namespace std;



class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        vector<int> prefix;
        vector<int> postfix(nums.size());


        // prefix
        int product = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            product *= nums[i];
            prefix.push_back(product);
        }


        // postfix
        product = 1;
        int index = nums.size()-1;
        for (int i = nums.size()-1; i >= 0; i--)
        {
            product *= nums[i];
            postfix[index] = product;
            index--;

        }

        // multiply prefix * postfix
        int result = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            result *= (i-1 >= 0) ? prefix[i-1] : 1;
            result *= (i+1 < nums.size()) ? postfix[i+1] : 1;
            ans.push_back(result);
            result = 1;
        }

        return ans;
    }
};
