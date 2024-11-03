/*
- used a priority queue to sort the elements
- iterated through pq by popping the least # and keeping a sum of consecutive numbers seen
- added these numbers to an array 
- returns the largest of this number (longest consecutive sum)

didn't use a hashmap woops; first attempt: O(nlogn)
*/

#include <queue>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        if (nums.size() == 0) return 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            pq.push(nums[i]);

        }
        int count = 0;
        int prev_elem = pq.top();
        int elem = -1;
        int index = 0;

        
        cout << pq.top() << endl;
        pq.pop();
        vector<int> longest_nums;
        while (index < nums.size() -1)
        {
            elem = pq.top();
            pq.pop();
            cout << elem << endl;
            
            if (elem == prev_elem+1)
            {
                count++;
            }
            else if (elem == prev_elem)
            {
                
            }
            else {
                cout << "count: " << count << endl;
                
                longest_nums.push_back(count);
                count = 0;
            }
            prev_elem = elem;
            index++;
            
        }
        longest_nums.push_back(count);
        
        // find longest consec chain of all possible
        int max = *std::max_element(longest_nums.begin(), longest_nums.end());
        // int max = 0;
        return max+1;



    }
};
