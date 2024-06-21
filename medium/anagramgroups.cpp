#include <unordered_map>
#include <vector>
#include <iostream>
#include <string>


using namespace std;


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<int, vector<string>> hashmap;
        // (hash_code, vector of strings)
        for (int i = 0; i < strs.size(); i++)
        {
            hashmap[hashFunction(strs[i])].push_back(strs[i]);
            // pass in key as the hashFunction
            // pass in value as the word itself
            // anagrams will have the same hash code so will be chained 
        }
        
        cout << "iterating " << endl;
        for (auto i = hashmap.begin(); i != hashmap.end(); i++)
        {
            cout << i->first << endl;
            ans.push_back(i->second); // push the list of anagrams with same key
            
        }
        return ans;

    }


    int hashFunction(string str)
    {
        // anagrams will have same equal hash score, thus same key value
        int score = 1;
        for (int i = 0; i < str.length(); i++)
        {
            score *= str[i] % 26; // same letter of the alphabet?
        }
        return score;

    }
};
