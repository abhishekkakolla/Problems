// Using hash function to decode and encode strings

#include <map>
#include <vector>
#include <functional>
#include <vector>
#include <iostream>
#include <string>


using namespace std;

#include <map>
#include <vector>
// #include <functional>
#include <ctype.h>


class Solution {
public:
    

    string encode(vector<string>& strs) {
        string ans = "";
        string word;
        for (int i =0; i < strs.size(); i++)
        {
            word = strs[i];
            ans += to_string(word.length()) + "#" + word;


        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        cout << s << endl;

        string word;

        int i = 0;
        int len = 0;
        while (i < s.size())
        {
            // start of string
            int j = i;
            cout << "s[i]: " << s[i] << endl;
            while (s[j] != '#')
            {
                // get the length
                j++;
            }
            len = stoi(s.substr(i, j-i));
            cout << "len: " << len << endl;
            word = s.substr(j+1, len);
            // depending on how long the length is, skip the {len}# then word
            ans.push_back(word);
            cout << "word: " << word << endl;

            
            i = j+len+1;
        }


        return ans;
    }
};
