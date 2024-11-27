/*
Passed on first try wth
intuition: move pointer with the lower value (want to maximize area and keep larger value)
if they are tied i just moved the left pointer
*/


#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() -1;

        int lval;
        int rval;
        int area = -1;

        for (int i = 0; i < heights.size(); ++i)
        {
            lval = heights[l];
            rval = heights[r];
            if (min(lval, rval) * (r-l) > area) area = min(lval, rval) * (r-l);
            
            if (lval < rval)
            {
                l++;
            }
            else if (lval > rval)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        return area;
        
    }
};
