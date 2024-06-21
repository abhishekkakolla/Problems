#include <map>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>


using namespace std;


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int, int> hashmap;
        // count how many times each number appears
        for (int i = 0; i < nums.size(); i++)
        {
            hashmap[nums[i]]++;

        }

        
        // not the best way to sort a map by value but
        // sort the map by values (most frequent)
        // convert to vector of pairs
        vector<pair<int, int>> pairs;
        for (auto& i : hashmap)
        {
            pairs.push_back(i);
        }
        
        // flip values
        int temp;
        for (auto& i : pairs)
        {
            temp = i.first;
            i.first = i.second;
            i.second = temp;
        }

        // sort vector
        sort(pairs.begin(), pairs.end());
        

        

        // from the end, the most frequent numbers will be outputted
        int index = pairs.size() - 1;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(pairs[index].second);
            index--;
        }
        return ans;
    }
};
